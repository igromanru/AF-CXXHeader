#ifndef UE4SS_SDK_Weapon_Gun_Vacuum_HPP
#define UE4SS_SDK_Weapon_Gun_Vacuum_HPP

class AWeapon_Gun_Vacuum_C : public AAbiotic_Weapon_Gun_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BA8 (size: 0x8)
    class UNiagaraComponent* Niagara_AirFunnel;                                       // 0x0BB0 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0BB8 (size: 0x8)
    TArray<class UPrimitiveComponent*> PulledComponents;                              // 0x0BC0 (size: 0x10)
    double VacuumSpeed;                                                               // 0x0BD0 (size: 0x8)
    class USphereComponent* VacuumOverlap;                                            // 0x0BD8 (size: 0x8)
    class USkeletalMeshComponent* Pest_Mesh;                                          // 0x0BE0 (size: 0x8)
    bool Jammed;                                                                      // 0x0BE8 (size: 0x1)
    class USkeletalMeshComponent* TP_SKMesh;                                          // 0x0BF0 (size: 0x8)
    class UAudioComponent* Vacuum_SFXComp;                                            // 0x0BF8 (size: 0x8)
    class USoundBase* NormalVacuum_SFX;                                               // 0x0C00 (size: 0x8)
    FHitResult HitResult;                                                             // 0x0C08 (size: 0xF8)
    class USoundBase* PestIn_SFX;                                                     // 0x0D00 (size: 0x8)
    class USoundBase* PestOut_SFX;                                                    // 0x0D08 (size: 0x8)
    class USkeletalMesh* SuckedPestMesh;                                              // 0x0D10 (size: 0x8)
    bool IsLocalWeapon;                                                               // 0x0D18 (size: 0x1)
    bool FunnelActive;                                                                // 0x0D19 (size: 0x1)

    void GetPestProjectile(TSoftClassPtr<AAbioticProjectile_ParentBP_C>& Projectile);
    void OnRep_SuckedPestMesh();
    void OnLoaded_2C6F5DC04001560C3BD9238978A4A967(UClass* Loaded);
    void OnLoaded_FF323B93433CCFE11A51A3A441AE0836(class UObject* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void GunFireResult(const TArray<FHitResult>& Hit Result);
    void GunStartFiring();
    void Server_ShootPestFromVacuum(const FTransform& MuzzleSocketTransform, const FTransform& ProjectileTransform, const TSoftClassPtr<AAbioticProjectile_ParentBP_C>& ProjectileToFire);
    void Local_AttachToVacuum(class AAbiotic_Character_ParentBP_C* OwningCharacter, class USkeletalMesh* MeshToAttach);
    void Server Apply Damage To Resource(float BaseDamage, class AController* EventInstigator, const FHitResult& HitInfo, class AActor* DamageCauser);
    void SetupItem();
    void TryPerformBatteryChangeOnUse();
    void Local_Play Sound Effect(class USoundBase* Sound);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void Request_AssignPestData(TSoftObjectPtr<USkeletalMesh> PestSkeletalMesh);
    void ReceiveBeginPlay();
    void Server_OnHit(FHitResult HitResult);
    void Broadcast_PlayFunnelFX();
    void ExecuteUbergraph_Weapon_Gun_Vacuum(int32 EntryPoint);
}; // Size: 0xD1A

#endif
