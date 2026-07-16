#ifndef UE4SS_SDK_NPC_PowerLeech_HPP
#define UE4SS_SDK_NPC_PowerLeech_HPP

class ANPC_PowerLeech_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x21B8 (size: 0x8)
    class UAudioComponent* PowerDrain_Loop;                                           // 0x21C0 (size: 0x8)
    class AActor* LinkedPowerSource;                                                  // 0x21C8 (size: 0x8)
    class UAudioComponent* LaserLoopSound;                                            // 0x21D0 (size: 0x8)
    FVector RotationOrigin;                                                           // 0x21D8 (size: 0x18)
    double RotationProgress;                                                          // 0x21F0 (size: 0x8)
    double RotationSpeed;                                                             // 0x21F8 (size: 0x8)
    FVector PreviousLocation;                                                         // 0x2200 (size: 0x18)
    float RotationOriginUpdateFrequency;                                              // 0x2218 (size: 0x4)
    FTimerHandle RotationUpdateTimerHandle;                                           // 0x2220 (size: 0x8)
    float PlayerZapDistance;                                                          // 0x2228 (size: 0x4)
    float PlayerZapDamage;                                                            // 0x222C (size: 0x4)
    bool UseSpinningMovement;                                                         // 0x2230 (size: 0x1)
    float FurnitureZapDistance;                                                       // 0x2234 (size: 0x4)
    float PlayerZagInterval;                                                          // 0x2238 (size: 0x4)
    bool DestroyedByPortalSuppression;                                                // 0x223C (size: 0x1)
    bool CanBeDestroyedByBenchSuppression;                                            // 0x223D (size: 0x1)
    class UNiagaraComponent* Beam;                                                    // 0x2240 (size: 0x8)
    bool PowerDraining;                                                               // 0x2248 (size: 0x1)

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
}; // Size: 0x2249

#endif
