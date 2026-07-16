#ifndef UE4SS_SDK_NPC_Leyak_HPP
#define UE4SS_SDK_NPC_Leyak_HPP

class ANPC_Leyak_C : public ANPC_Flying_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x21C0 (size: 0x8)
    class USphereComponent* DamageSphere;                                             // 0x21C8 (size: 0x8)
    class USphereComponent* GhostCollisionOverlap;                                    // 0x21D0 (size: 0x8)
    float Timeline_Dissolve_NewTrack_1_039C1F844D7D7D0E8CA9FEBA672ECF59;              // 0x21D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Dissolve__Direction_039C1F844D7D7D0E8CA9FEBA672ECF59; // 0x21DC (size: 0x1)
    class UTimelineComponent* Timeline_Dissolve;                                      // 0x21E0 (size: 0x8)
    float RequiredMegalightDuration;                                                  // 0x21E8 (size: 0x4)
    class AAbioticCharacter* TargetPlayer;                                            // 0x21F0 (size: 0x8)
    bool HasBeenXrayed;                                                               // 0x21F8 (size: 0x1)
    bool ViewedByTarget;                                                              // 0x21F9 (size: 0x1)
    double CachedTimeSeen;                                                            // 0x2200 (size: 0x8)
    double DistanceDifferenceToDespawn;                                               // 0x2208 (size: 0x8)
    double SeenDespawnTime;                                                           // 0x2210 (size: 0x8)
    bool DealDamageInfront;                                                           // 0x2218 (size: 0x1)
    FTimerHandle DamageTimer;                                                         // 0x2220 (size: 0x8)
    class ULeyakDirectorComponent_C* LinkedLeyakDirector;                             // 0x2228 (size: 0x8)
    double StuckStartTime;                                                            // 0x2230 (size: 0x8)
    bool PotentiallyStuck;                                                            // 0x2238 (size: 0x1)
    bool AbsolutelyStuck;                                                             // 0x2239 (size: 0x1)
    double TimeAllowedToBeStuck;                                                      // 0x2240 (size: 0x8)
    TSubclassOf<class AResourceNode_ParentBP_C> ItemDropWhenBanished;                 // 0x2248 (size: 0x8)
    FLinearColor DebugColor;                                                          // 0x2250 (size: 0x10)
    TEnumAsByte<E_LeyakType::Type> LeyakType;                                         // 0x2260 (size: 0x1)

    void SetLeyakInSleepMinigame();
    void GetLinkedDirectorFallback();
    void DirectorDebugTick();
    void TriggerTargetLookedAway();
    void GetClosestLeyakContainment(class ADeployed_LeyakContainment_C*& Leyak Containment);
    void TargetableByTurrets(bool& Targetable);
    void LeyakDamageTarget(class AActor* HitActor);
    void Server_UpdateDamageVolume();
    void TargetableByNPCs(bool Maintain, class AActor* TargetingNPC, bool& Targetable);
    void CheckViewedByTargetDistance();
    void TriggerViewedByTarget();
    void CheckLineOfSightFromTarget(bool& Visible);
    void OnRep_HasBeenXrayed();
    void UpdateLeyakVisibility();
    void DoLeyakGrabAttack();
    void Timeline_Dissolve__FinishedFunc();
    void Timeline_Dissolve__UpdateFunc();
    void Broadcast_DoSuccessfulGrabAnimation();
    void Broadcast_DoFailedGrabAnimation();
    void UpdateDisabledState();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ToggleCombatStateFX(bool IsInCombat);
    void Broadcast_DespawnFX();
    void BndEvt__NPC_Leyak_GhostCollisionOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnDespawn();
    void DropEssence();
    void DamageTargetInZone();
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void StartedSpeaking(EAudioComponentPlayState PlayState);
    void UpdateBreathingAudio(EAudioComponentPlayState PlayState);
    void OnCharacterSpeakingStart();
    void TryTrapLeyakInContainment();
    void PrepareLeyakDespawn();
    void OnMegalightHit(class UAbiotic_MegalightComponent_C* megalight, int32 Tier);
    void ExecuteUbergraph_NPC_Leyak(int32 EntryPoint);
}; // Size: 0x2261

#endif
