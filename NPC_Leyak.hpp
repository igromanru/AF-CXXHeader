#ifndef UE4SS_SDK_NPC_Leyak_HPP
#define UE4SS_SDK_NPC_Leyak_HPP

class ANPC_Leyak_C : public ANPC_Flying_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1ED0 (size: 0x8)
    class USphereComponent* DamageSphere;                                             // 0x1ED8 (size: 0x8)
    class USphereComponent* GhostCollisionOverlap;                                    // 0x1EE0 (size: 0x8)
    float Timeline_Dissolve_NewTrack_1_039C1F844D7D7D0E8CA9FEBA672ECF59;              // 0x1EE8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Dissolve__Direction_039C1F844D7D7D0E8CA9FEBA672ECF59; // 0x1EEC (size: 0x1)
    class UTimelineComponent* Timeline_Dissolve;                                      // 0x1EF0 (size: 0x8)
    float RequiredMegalightDuration;                                                  // 0x1EF8 (size: 0x4)
    class AAbioticCharacter* TargetPlayer;                                            // 0x1F00 (size: 0x8)
    bool HasBeenXrayed;                                                               // 0x1F08 (size: 0x1)
    bool ViewedByTarget;                                                              // 0x1F09 (size: 0x1)
    double CachedTimeSeen;                                                            // 0x1F10 (size: 0x8)
    double DistanceDifferenceToDespawn;                                               // 0x1F18 (size: 0x8)
    double SeenDespawnTime;                                                           // 0x1F20 (size: 0x8)
    bool DealDamageInfront;                                                           // 0x1F28 (size: 0x1)
    FTimerHandle DamageTimer;                                                         // 0x1F30 (size: 0x8)
    class AAbiotic_AIDirector_C* LinkedAIDirector;                                    // 0x1F38 (size: 0x8)
    double StuckStartTime;                                                            // 0x1F40 (size: 0x8)
    bool PotentiallyStuck;                                                            // 0x1F48 (size: 0x1)
    bool AbsolutelyStuck;                                                             // 0x1F49 (size: 0x1)
    double TimeAllowedToBeStuck;                                                      // 0x1F50 (size: 0x8)

    void GetClosestLeyakContainment(class ADeployed_LeyakContainment_C*& Leyak Containment);
    void TargetableByTurrets(bool& Targetable);
    void LeyakDamageTarget(class AActor* HitActor);
    void Server_UpdateDamageVolume();
    void TargetableByNPCs(bool Maintain, bool& Targetable);
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
    void Megalight_Hit(class UAbiotic_MegalightComponent_C* MegalightComponent);
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
    void ExecuteUbergraph_NPC_Leyak(int32 EntryPoint);
}; // Size: 0x1F58

#endif
