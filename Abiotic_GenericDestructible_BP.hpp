#ifndef UE4SS_SDK_Abiotic_GenericDestructible_BP_HPP
#define UE4SS_SDK_Abiotic_GenericDestructible_BP_HPP

class AAbiotic_GenericDestructible_BP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02D0 (size: 0x8)
    class UNiagaraComponent* BreakFX;                                                 // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* DestroyedMesh;                                        // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02E8 (size: 0x8)
    double Health;                                                                    // 0x02F0 (size: 0x8)
    bool Broken;                                                                      // 0x02F8 (size: 0x1)
    class UStaticMesh* DefaultStaticMesh;                                             // 0x0300 (size: 0x8)
    class UStaticMesh* DestroyedStaticMesh;                                           // 0x0308 (size: 0x8)
    bool DestroyedOnlyByTrigger;                                                      // 0x0310 (size: 0x1)
    FWorldFlagRowHandle DestroyOnWorldFlag;                                           // 0x0318 (size: 0x20)
    class UNiagaraSystem* BreakFXParticles;                                           // 0x0338 (size: 0x8)
    class USoundBase* BreakSFX;                                                       // 0x0340 (size: 0x8)
    FAbiotic_GenericDestructible_BP_COnDestructibleDestroyed OnDestructibleDestroyed; // 0x0348 (size: 0x10)
    void OnDestructibleDestroyed();
    FWorldFlagRowHandle SetWorldFlagOnBreak;                                          // 0x0358 (size: 0x20)
    TArray<class TSubclassOf<UAbiotic_DamageType_ParentBP_C>> ValidDamageTypes;       // 0x0378 (size: 0x10)

    void CheckDamageTypeAllowed(UClass* DamageType, bool& DamageAllowed);
    void Server_InitialBreakEvent();
    void SetStateBroken(bool NoFX);
    void TryApplyDamage(double Damage, TSubclassOf<class UDamageType> DamageType);
    void OnRep_Broken();
    void UserConstructionScript();
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveBeginPlay();
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void WorldFlagBreakCheck();
    void ExecuteUbergraph_Abiotic_GenericDestructible_BP(int32 EntryPoint);
    void OnDestructibleDestroyed__DelegateSignature();
}; // Size: 0x388

#endif
