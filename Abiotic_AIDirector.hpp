#ifndef UE4SS_SDK_Abiotic_AIDirector_HPP
#define UE4SS_SDK_Abiotic_AIDirector_HPP

class AAbiotic_AIDirector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    FTimerHandle Tick_PrioritySpawns;                                                 // 0x02B0 (size: 0x8)
    FTimerHandle Tick_DormantSpawns;                                                  // 0x02B8 (size: 0x8)
    bool CurrentFacilitySpawns;                                                       // 0x02C0 (size: 0x1)
    bool DirectorDebugOn;                                                             // 0x02C1 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x02C8 (size: 0x8)
    bool DebugNoDayNightManager;                                                      // 0x02D0 (size: 0x1)
    TArray<class ANPC_Base_ParentBP_C*> NPCArray;                                     // 0x02D8 (size: 0x10)
    int32 NPCCap;                                                                     // 0x02E8 (size: 0x4)
    FTimerHandle Assault_Timer;                                                       // 0x02F0 (size: 0x8)
    TEnumAsByte<E_AssaultPhases::Type> Assault_CurrentPhase;                          // 0x02F8 (size: 0x1)
    FAssault_Struct Assault_CurrentData;                                              // 0x0300 (size: 0xA8)
    FTimerHandle Assault_ActiveLogicTimer;                                            // 0x03A8 (size: 0x8)
    double Assault_TimeLastSpawnedNPC;                                                // 0x03B0 (size: 0x8)
    TArray<FVector> Assault_CurrentTargetLocation;                                    // 0x03B8 (size: 0x10)
    FVector Assault_BenchTargetLocation;                                              // 0x03C8 (size: 0x18)
    FVector Assault_PatrolTargetLocation;                                             // 0x03E0 (size: 0x18)
    FName Assault_CurrentRow;                                                         // 0x03F8 (size: 0x8)
    int32 Assault_CurrentSpawnIndex;                                                  // 0x0400 (size: 0x4)
    TArray<FName> Assault_NPCList_Wave1;                                              // 0x0408 (size: 0x10)
    TArray<FName> Assault_NPCList_Wave2;                                              // 0x0418 (size: 0x10)
    TArray<FName> Assault_NPCList_Wave3;                                              // 0x0428 (size: 0x10)
    TArray<FName> Assault_NPCList_BossWave;                                           // 0x0438 (size: 0x10)
    double Assault_TimeOfInitialWarning;                                              // 0x0448 (size: 0x8)
    int32 Assault_PreviousSpawnIndex;                                                 // 0x0450 (size: 0x4)
    FTransform Assault_LastNPCSpawnTransform;                                         // 0x0460 (size: 0x60)
    int32 TimeBeforeAssaults;                                                         // 0x04C0 (size: 0x4)
    FTimerHandle LeyakTimer;                                                          // 0x04C8 (size: 0x8)
    double LeyakCooldown;                                                             // 0x04D0 (size: 0x8)
    class ANPC_Leyak_C* ActiveLeyak;                                                  // 0x04D8 (size: 0x8)
    class AAbioticCharacter* CurrentLeyakTarget;                                      // 0x04E0 (size: 0x8)
    int32 LeyakSpawnAttempts;                                                         // 0x04E8 (size: 0x4)
    FWorldFlagRowHandle LeyakWorldFlag;                                               // 0x04F0 (size: 0x20)
    double TimeLastLeyakSpawn;                                                        // 0x0510 (size: 0x8)
    FTimerHandle AnomalyTimer;                                                        // 0x0518 (size: 0x8)
    FTimerHandle CoworkerTimer;                                                       // 0x0520 (size: 0x8)
    FWorldFlagRowHandle CoworkerWorldFlag;                                            // 0x0528 (size: 0x20)
    class ANPC_Coworker_C* ActiveCoworker;                                            // 0x0548 (size: 0x8)
    class AAbioticCharacter* CurrentCoworkerTarget;                                   // 0x0550 (size: 0x8)
    class AAbioticCharacter* LastAnomalyTarget;                                       // 0x0558 (size: 0x8)
    bool PatrolTargetRequiresUpdate;                                                  // 0x0560 (size: 0x1)
    class AActor* TargetAssaultBench;                                                 // 0x0568 (size: 0x8)
    int32 MaxAssaultPortals;                                                          // 0x0570 (size: 0x4)
    int32 LeyakViewCounter;                                                           // 0x0574 (size: 0x4)
    int32 CurrentAssaultPortals;                                                      // 0x0578 (size: 0x4)
    double LeyakTauntCooldownMultiplier;                                              // 0x0580 (size: 0x8)
    bool DebugDisableNPCFreezing;                                                     // 0x0588 (size: 0x1)
    class AAbiotic_NPCSpawn_ParentBP_C* NPCSpawnToCheck;                              // 0x0590 (size: 0x8)
    TArray<class AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Quick;                  // 0x0598 (size: 0x10)
    TArray<class AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Moderate;               // 0x05A8 (size: 0x10)
    TArray<class AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Slow;                   // 0x05B8 (size: 0x10)
    int32 LastIndex_Quick;                                                            // 0x05C8 (size: 0x4)
    int32 LastIndex_Moderate;                                                         // 0x05CC (size: 0x4)
    int32 LastIndex_Slow;                                                             // 0x05D0 (size: 0x4)
    FTimerHandle Tick_QuickSpawns;                                                    // 0x05D8 (size: 0x8)
    FTimerHandle Tick_ModerateSpawns;                                                 // 0x05E0 (size: 0x8)
    FTimerHandle Tick_SlowSpawns;                                                     // 0x05E8 (size: 0x8)

    void ProcessSpawns_Slow();
    void ProcessSpawns_Moderate();
    void ProcessSpawns_Quick();
    bool IsCharacterInVignette?(class AAbioticCharacter* Player, bool AllowDuringCombat);
    void AtLeast1PlayerWithTag(FGameplayTag Tag, bool& Found);
    void OnPortalForceClosed(FVector Location);
    void CleanUpAssaultRiftPortals();
    void IncreaseLeyakViewCounter();
    void ResetLeyakViewCounter();
    void Spawn Assault Portal(FVector PortalLocation);
    void UpdateAssaultTargetLocation(FVector InLocation);
    void DrawDebugInfo(bool Condition, FVector Location, FVector DrawFrom, FString Text, FLinearColor Color);
    void DebugDirectorTick();
    bool HasValidAssaultPatrolLocation();
    void TryUpdateAssaultPatrolLocation();
    void SpawnCoworker(FVector Location);
    void TryChooseCoworkerTarget();
    void SpawnAnomalyCheck();
    bool IsTodayAssaultDay(bool& LateArrival);
    void OnAssaultCheckHour();
    void ResetAssaultLocation();
    void TryUpdateAssaultLocation();
    bool HasValidAssaultLocation();
    bool CheckDaysSinceLastAssault(int32 RequiredDays);
    bool IsCloseEnoughToCraftingBench(class AActor* Target, double Distance, class AActor*& ClosestBench);
    void CheckForBenchesNearby(FBenchUpgradeRowHandle Upgrade, bool& Nearby);
    void SpawnLeyak(FVector Location);
    bool IsValidLeyakTarget(class AAbioticCharacter* Player, bool AllowDuringCombat);
    void TryChooseLeyakTarget(bool ForceSuccessAllTargets, FGameplayTag CheckByTagFirst);
    bool IsNight?();
    void TestLevel_SetAllSpawnsModified();
    void CheckForAssaultRestrictedHours(bool& Allowed);
    void CheckForAssaultWorldFlag(bool& FlagHasBeenSet);
    void EndAssault();
    void ChangeAssaultPhase(TEnumAsByte<E_AssaultPhases::Type> Assault_CurrentPhase);
    void SortAssaultSpawnLists();
    void SelectRandomAssaultType(bool& FoundValidRow);
    void IsSequencerCutsceneActive?(bool& CutsceneActive?);
    void Director Print Debug(FString InString, double Duration, TEnumAsByte<ECriticalityLevels::Type> Criticality, bool ShowOnCrosshair);
    void NPC_LoadUnload_Manager();
    void OnLoaded_FCAFE2E44CF6F75003EFBAA412D37F6C(UClass* Loaded);
    void AIDirector_PriorityTick();
    void AIDirector_DormantTick();
    void ReceiveBeginPlay();
    void AIDirector_AssaultTick();
    void ActiveAssaultTick();
    void BeginAssault();
    void Assault_WarnPlayers(bool Active (False=Warning), bool MorningWarning, bool AssaultEnd);
    void OnQueryFinishedEvent_Event(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void Toggle_AIDirector(bool On);
    void TriggerLeyakAttackOnTarget(class AAbioticCharacter* Target);
    void OnLeyakSpawnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void CheckForLeyakSpawn();
    void Server_ForceLeyakAttempt();
    void DelayedEndAssaultMessage();
    void CheckForCoworker();
    void TriggerCoworkerEventNearTarget(class AAbioticCharacter* Target);
    void CoworkerEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void TriggerAnomalySpawn(class AAbioticCharacter* Target);
    void AnomalyEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void LeyakFailsafeRemove();
    void SetLeyakOnCooldown(double CooldownReductionMultiplier);
    void PlayerTauntedLeyak();
    void CheckForStuckLeyak();
    void ExecuteUbergraph_Abiotic_AIDirector(int32 EntryPoint);
}; // Size: 0x5F0

#endif
