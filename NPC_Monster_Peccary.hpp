#ifndef UE4SS_SDK_NPC_Monster_Peccary_HPP
#define UE4SS_SDK_NPC_Monster_Peccary_HPP

class ANPC_Monster_Peccary_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20E8 (size: 0x8)
    class UNiagaraComponent* Niagara_Peccary_Bomb;                                    // 0x20F0 (size: 0x8)
    class URadialForceComponent* AOE_RadialForce;                                     // 0x20F8 (size: 0x8)
    class UStaticMeshComponent* PeccaryBombMesh;                                      // 0x2100 (size: 0x8)
    float Timeline_Emissive_Value_C62773524914701E06F7BA94A33961AD;                   // 0x2108 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Emissive__Direction_C62773524914701E06F7BA94A33961AD; // 0x210C (size: 0x1)
    class UTimelineComponent* Timeline_Emissive;                                      // 0x2110 (size: 0x8)
    double CarbuncleBomb_Damage;                                                      // 0x2118 (size: 0x8)
    bool AboutToThrow;                                                                // 0x2120 (size: 0x1)
    FVector LastShootAtLocation;                                                      // 0x2128 (size: 0x18)
    bool IsStampeding;                                                                // 0x2140 (size: 0x1)
    float StampedeDuration;                                                           // 0x2144 (size: 0x4)
    double TimeStampedeStarted;                                                       // 0x2148 (size: 0x8)
    class UNiagaraSystem* ChargeImpactParticle;                                       // 0x2150 (size: 0x8)
    class USoundBase* ChargeImpactSFX;                                                // 0x2158 (size: 0x8)
    TSubclassOf<class ANPC_Monster_Carbuncle_C> CarbuncleSpawnClass;                  // 0x2160 (size: 0x8)
    class UNiagaraComponent* ActiveChargingParticle;                                  // 0x2168 (size: 0x8)
    class UNiagaraSystem* ChargeLoopParticle;                                         // 0x2170 (size: 0x8)
    FVector TraceEndLocation;                                                         // 0x2178 (size: 0x18)
    bool LastCarbuncleFloorPlanted;                                                   // 0x2190 (size: 0x1)
    class UAudioComponent* LightningLoopAudio;                                        // 0x2198 (size: 0x8)
    TSubclassOf<class UDamageType> ChargeDamageType;                                  // 0x21A0 (size: 0x8)
    float ChargeDamageAmount;                                                         // 0x21A8 (size: 0x4)
    bool TurnWhileStampeding;                                                         // 0x21AC (size: 0x1)

    void GetMeleeTimeOffset(TEnumAsByte<E_NPC_MeleeTypes::Type> Type, double& LengthOffset);
    void GetCharacterEyesLocation(FVector& Location);
    void Server_EndChargeImpact();
    void BuffTagsUpdated();
    void OnRep_IsStampeding();
    void OnRep_AboutToThrow();
    void CanBeCarbuncled(bool& Success);
    void Timeline_Emissive__FinishedFunc();
    void Timeline_Emissive__UpdateFunc();
    void RefreshGibbedState(bool SkipFX);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Broadcast_StampedeEnd(bool Detonation);
    void Server_DoStampedeExplosion(bool Detonation);
    void Broadcast_PerformStagger(TEnumAsByte<EStaggerDirection::Type> Direction);
    void Broadcast_CombatAbility1();
    void ReceiveBeginPlay();
    void PerformIdleAbility();
    void EndChargeWithExplosion();
    void OnSpawnFXStarted();
    void ExecuteUbergraph_NPC_Monster_Peccary(int32 EntryPoint);
}; // Size: 0x21AD

#endif
