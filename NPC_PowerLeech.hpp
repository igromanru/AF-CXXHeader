#ifndef UE4SS_SDK_NPC_PowerLeech_HPP
#define UE4SS_SDK_NPC_PowerLeech_HPP

class ANPC_PowerLeech_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20A8 (size: 0x8)
    class UAudioComponent* PowerDrain_Loop;                                           // 0x20B0 (size: 0x8)
    class AActor* LinkedPowerSource;                                                  // 0x20B8 (size: 0x8)
    class UAudioComponent* LaserLoopSound;                                            // 0x20C0 (size: 0x8)
    FVector RotationOrigin;                                                           // 0x20C8 (size: 0x18)
    double RotationProgress;                                                          // 0x20E0 (size: 0x8)
    double RotationSpeed;                                                             // 0x20E8 (size: 0x8)
    FVector PreviousLocation;                                                         // 0x20F0 (size: 0x18)
    float RotationOriginUpdateFrequency;                                              // 0x2108 (size: 0x4)
    FTimerHandle RotationUpdateTimerHandle;                                           // 0x2110 (size: 0x8)
    float PlayerZapDistance;                                                          // 0x2118 (size: 0x4)
    float PlayerZapDamage;                                                            // 0x211C (size: 0x4)
    bool UseSpinningMovement;                                                         // 0x2120 (size: 0x1)
    float FurnitureZapDistance;                                                       // 0x2124 (size: 0x4)
    float PlayerZagInterval;                                                          // 0x2128 (size: 0x4)
    bool DestroyedByPortalSuppression;                                                // 0x212C (size: 0x1)
    bool CanBeDestroyedByBenchSuppression;                                            // 0x212D (size: 0x1)
    class UNiagaraComponent* Beam;                                                    // 0x2130 (size: 0x8)
    bool PowerDraining;                                                               // 0x2138 (size: 0x1)

    void UpdatePowerDrainAudio();
    void OnRep_PowerDraining();
    void IsSuppressionNearby(bool& Suppressed, class AAbioticDeployed_CraftingBench_ParentBP_C*& Bench);
    void SetupWorldFlagBasedGibLoot();
    void FireAtPlayer();
    void InterruptPoweredFurniture(TArray<class AActor*>& Furniture);
    void UpdateRotationOrigin();
    void ToggleCombatStateFX(bool IsInCombat);
    void ToggleCloakBasedOnState(bool ForceUncloak);
    void DestroyLeech();
    void Server_PerformDeathSequence();
    void LocalPerformDeathSequence();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ApplyCloakOverlay();
    void ReceiveTick(float DeltaSeconds);
    void Broadcast_FireAtTarget(FVector TargetLocation, bool SkipSound);
    void Broadcast_InterruptFX(class AActor* Target);
    void Server_InterruptFX(class AActor* Tatget);
    void Broadcast_ExplodePortal(class AAbioticDeployed_CraftingBench_ParentBP_C* CraftingBench);
    void All_PerformDeathSequence();
    void ExecuteUbergraph_NPC_PowerLeech(int32 EntryPoint);
}; // Size: 0x2139

#endif
