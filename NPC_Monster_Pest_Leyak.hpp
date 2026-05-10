#ifndef UE4SS_SDK_NPC_Monster_Pest_Leyak_HPP
#define UE4SS_SDK_NPC_Monster_Pest_Leyak_HPP

class ANPC_Monster_Pest_Leyak_C : public ANPC_Monster_Pest_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x22C0 (size: 0x8)
    float DeathTimeline_ZHeight_9D92EF904DE27168978698A4FAE05B45;                     // 0x22C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DeathTimeline__Direction_9D92EF904DE27168978698A4FAE05B45; // 0x22CC (size: 0x1)
    class UTimelineComponent* DeathTimeline;                                          // 0x22D0 (size: 0x8)
    float Timeline_Teleport_NewTrack_1_D4423FD64CF13EA22BC3628832748A0A;              // 0x22D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Teleport__Direction_D4423FD64CF13EA22BC3628832748A0A; // 0x22DC (size: 0x1)
    class UTimelineComponent* Timeline_Teleport;                                      // 0x22E0 (size: 0x8)
    FTimerHandle DamageTimer;                                                         // 0x22E8 (size: 0x8)
    float LeyakDamageTickRate;                                                        // 0x22F0 (size: 0x4)
    bool HasBeenXrayed;                                                               // 0x22F4 (size: 0x1)
    class AAbiotic_Character_ParentBP_C* TargetCharacter;                             // 0x22F8 (size: 0x8)
    float XrayedFearDuration;                                                         // 0x2300 (size: 0x4)
    bool ViewedByTarget;                                                              // 0x2304 (size: 0x1)
    float ViewDistance;                                                               // 0x2308 (size: 0x4)
    double DefaultMeshZ;                                                              // 0x2310 (size: 0x8)

    FVector PestWheelOffset();
    void DirectorDebugTick();
    void ApplyBuff();
    void CheckLookedAt();
    void CheckLineOfSightFromTarget(class AAbiotic_Character_ParentBP_C* Target, bool& Visible);
    void SetXrayed(bool HasBeenXrayed);
    void OnRep_TargetCharacter();
    void TargetableByNPCs(bool Maintain, class AActor* TargetingNPC, bool& Targetable);
    void UpdateLeyakVisibility();
    void DamageTarget();
    void Server_ToggleDamageTick(bool CombatActive);
    void LeyakDamageTarget(class AActor* HitActor);
    void UserConstructionScript();
    void Timeline_Teleport__FinishedFunc();
    void Timeline_Teleport__UpdateFunc();
    void DeathTimeline__FinishedFunc();
    void DeathTimeline__UpdateFunc();
    void StartedSpeaking(EAudioComponentPlayState PlayState);
    void OnMegalightHit(class UAbiotic_MegalightComponent_C* megalight, int32 Tier);
    void BuffTagsUpdated();
    void Broadcast_CombatAbility1();
    void TeleportComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void ReceiveBeginPlay();
    void Broadcast_TeleportFX();
    void ReceiveTick(float DeltaSeconds);
    void Broadcast_ImpactDamageFX(TSubclassOf<class UDamageType> Damage Class, FHitResult Hit);
    void ToggleCombatStateFX(bool IsInCombat);
    void TICK_DeathSequence_FallToGround();
    void ResetDeadAlive(class AAbiotic_Character_ParentBP_C* Character);
    void ToggleState_DownButNotOut(bool Begin (False=End));
    void ExecuteUbergraph_NPC_Monster_Pest_Leyak(int32 EntryPoint);
}; // Size: 0x2318

#endif
