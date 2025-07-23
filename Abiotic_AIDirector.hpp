#ifndef UE4SS_SDK_Abiotic_AIDirector_HPP
#define UE4SS_SDK_Abiotic_AIDirector_HPP

class AAbiotic_AIDirector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UKrasueDirectorComponent_C* KrasueDirectorComponent;                        // 0x02A0 (size: 0x8)
    class ULeyakDirectorComponent_C* LeyakDirectorComponent;                          // 0x02A8 (size: 0x8)
    class UNarrativeNPCDirectorComponent_C* NarrativeNPCDirector;                     // 0x02B0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    FTimerHandle Tick_PrioritySpawns;                                                 // 0x02C8 (size: 0x8)
    FTimerHandle Tick_DormantSpawns;                                                  // 0x02D0 (size: 0x8)
    bool CurrentFacilitySpawns;                                                       // 0x02D8 (size: 0x1)
    bool DirectorDebugOn;                                                             // 0x02D9 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x02E0 (size: 0x8)
    bool DebugNoDayNightManager;                                                      // 0x02E8 (size: 0x1)
    TArray<class ANPC_Base_ParentBP_C*> NPCArray;                                     // 0x02F0 (size: 0x10)
    int32 NPCCap;                                                                     // 0x0300 (size: 0x4)
    FTimerHandle Assault_Timer;                                                       // 0x0308 (size: 0x8)
    TEnumAsByte<E_AssaultPhases::Type> Assault_CurrentPhase;                          // 0x0310 (size: 0x1)
    FAssault_Struct Assault_CurrentData;                                              // 0x0318 (size: 0xA8)
    FTimerHandle Assault_ActiveLogicTimer;                                            // 0x03C0 (size: 0x8)
    double Assault_TimeLastSpawnedNPC;                                                // 0x03C8 (size: 0x8)
    TArray<FVector> Assault_CurrentTargetLocation;                                    // 0x03D0 (size: 0x10)
    FVector Assault_BenchTargetLocation;                                              // 0x03E0 (size: 0x18)
    FVector Assault_PatrolTargetLocation;                                             // 0x03F8 (size: 0x18)
    FName Assault_CurrentRow;                                                         // 0x0410 (size: 0x8)
    int32 Assault_CurrentSpawnIndex;                                                  // 0x0418 (size: 0x4)
    TArray<FName> Assault_NPCList_Wave1;                                              // 0x0420 (size: 0x10)
    TArray<FName> Assault_NPCList_Wave2;                                              // 0x0430 (size: 0x10)
    TArray<FName> Assault_NPCList_Wave3;                                              // 0x0440 (size: 0x10)
    TArray<FName> Assault_NPCList_BossWave;                                           // 0x0450 (size: 0x10)
    double Assault_TimeOfInitialWarning;                                              // 0x0460 (size: 0x8)
    int32 Assault_PreviousSpawnIndex;                                                 // 0x0468 (size: 0x4)
    FTransform Assault_LastNPCSpawnTransform;                                         // 0x0470 (size: 0x60)
    int32 TimeBeforeAssaults;                                                         // 0x04D0 (size: 0x4)
    FTimerHandle LeyakTimer;                                                          // 0x04D8 (size: 0x8)
    double LeyakCooldown;                                                             // 0x04E0 (size: 0x8)
    class ANPC_Leyak_C* ActiveLeyak;                                                  // 0x04E8 (size: 0x8)
    class AAbioticCharacter* CurrentLeyakTarget;                                      // 0x04F0 (size: 0x8)
    int32 LeyakSpawnAttempts;                                                         // 0x04F8 (size: 0x4)
    FWorldFlagRowHandle LeyakWorldFlag;                                               // 0x0500 (size: 0x20)
    double TimeLastLeyakSpawn;                                                        // 0x0520 (size: 0x8)
    FTimerHandle AnomalyTimer;                                                        // 0x0528 (size: 0x8)
    FTimerHandle CoworkerTimer;                                                       // 0x0530 (size: 0x8)
    FWorldFlagRowHandle CoworkerWorldFlag;                                            // 0x0538 (size: 0x20)
    class ANPC_Coworker_C* ActiveCoworker;                                            // 0x0558 (size: 0x8)
    class AAbioticCharacter* CurrentCoworkerTarget;                                   // 0x0560 (size: 0x8)
    class AAbioticCharacter* LastAnomalyTarget;                                       // 0x0568 (size: 0x8)
    bool PatrolTargetRequiresUpdate;                                                  // 0x0570 (size: 0x1)
    class AActor* TargetAssaultBench;                                                 // 0x0578 (size: 0x8)
    int32 MaxAssaultPortals;                                                          // 0x0580 (size: 0x4)
    int32 LeyakViewCounter;                                                           // 0x0584 (size: 0x4)
    int32 CurrentAssaultPortals;                                                      // 0x0588 (size: 0x4)
    double LeyakTauntCooldownMultiplier;                                              // 0x0590 (size: 0x8)
    bool DebugDisableNPCFreezing;                                                     // 0x0598 (size: 0x1)
    class AAbiotic_NPCSpawn_ParentBP_C* NPCSpawnToCheck;                              // 0x05A0 (size: 0x8)
    TArray<class AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Quick;                  // 0x05A8 (size: 0x10)
    TArray<class AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Moderate;               // 0x05B8 (size: 0x10)
    TArray<class AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Slow;                   // 0x05C8 (size: 0x10)
    int32 LastIndex_Quick;                                                            // 0x05D8 (size: 0x4)
    int32 LastIndex_Moderate;                                                         // 0x05DC (size: 0x4)
    int32 LastIndex_Slow;                                                             // 0x05E0 (size: 0x4)
    FTimerHandle Tick_QuickSpawns;                                                    // 0x05E8 (size: 0x8)
    FTimerHandle Tick_ModerateSpawns;                                                 // 0x05F0 (size: 0x8)
    FTimerHandle Tick_SlowSpawns;                                                     // 0x05F8 (size: 0x8)
    TMap<class FName, class FNarrativeNPCSpawns_Struct> NarrativeSpawns;              // 0x0600 (size: 0x50)
    TMap<class FGuid, class FPlayerBaseData> PlayerBaseMap;                           // 0x0650 (size: 0x50)
    bool FoundPlayerBases;                                                            // 0x06A0 (size: 0x1)
    FAbiotic_AIDirector_COnFinishFindingPlayerBases OnFinishFindingPlayerBases;       // 0x06A8 (size: 0x10)
    void OnFinishFindingPlayerBases();
    FName PlayerBaseTag;                                                              // 0x06B8 (size: 0x8)
    TMap<class FVector, class FGuid> PlayerBaseLocationMap;                           // 0x06C0 (size: 0x50)
    TMap<class AActor*, class FGuid> PlayerBaseSignificantFurnitureMap;               // 0x0710 (size: 0x50)
    double LastFoundPlayerBaseTime;                                                   // 0x0760 (size: 0x8)
    FAbiotic_AIDirector_COnFoundAssaultEQSLocation OnFoundAssaultEQSLocation;         // 0x0768 (size: 0x10)
    void OnFoundAssaultEQSLocation(TEnumAsByte<EEnvQueryStatus::Type> QuesryStatus);
    FPlayerBaseData CurrentlyTargetedPlayerBase;                                      // 0x0778 (size: 0x48)
    TArray<class ANPC_Base_ParentBP_C*> AssaultNPCs;                                  // 0x07C0 (size: 0x10)
    double AssaultMaxTimeLimitSeconds;                                                // 0x07D0 (size: 0x8)
    FDataTableRowHandle AssaultWaypointRow;                                           // 0x07D8 (size: 0x10)
    TMap<class ANPC_PowerLeech_C*, class AActor*> ActivePowerLeeches;                 // 0x07E8 (size: 0x50)
    class AAbioticCharacter* CurrentDynamicReaperTarget;                              // 0x0838 (size: 0x8)
    class ANPC_Monster_Reaper_C* ActiveDynamicReaper;                                 // 0x0840 (size: 0x8)
    FTimerHandle BoxyTimer;                                                           // 0x0848 (size: 0x8)
    FWorldFlagRowHandle BoxyWorldFlag;                                                // 0x0850 (size: 0x20)
    class ANPC_Boxy_C* ActiveBoxy;                                                    // 0x0870 (size: 0x8)
    class AAbioticCharacter* CurrentBoxyTarget;                                       // 0x0878 (size: 0x8)
    double LastBoxySpawnTime;                                                         // 0x0880 (size: 0x8)
    double BoxySpawnFrequency;                                                        // 0x0888 (size: 0x8)
    double BoxySpawnFrequency_Encumbered;                                             // 0x0890 (size: 0x8)

    bool IsAssaultHappening();
    void SpawnBoxy(FVector Location);
    void TryChooseBoxyTarget(bool Only Encumbered);
    void AlertNPCToNearbyPlayers(class ANPC_Base_ParentBP_C* NPC);
    void SpawnDynamicReaper(FVector Location);
    void TriggerPowerLeechAttackOnTarget(class AActor* Target);
    void SpawnPowerLeechCheck(bool& Success);
    void AddPlayerBase(FPlayerBaseData& NewPlayerBase);
    void ClearNPCsWithoutDestroying();
    void CheckAssaultNPCsDead(bool& AreNPCsDead);
    void OnAssaultEQSResult(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void AddPlayerBase_OLD(const FGuid& Guid, TArray<class AAbioticDeployed_ParentBP_C*>& SignificantFurniture, TArray<class AAbioticDeployed_ParentBP_C*>& AllFurniture, FPlayerBaseData& NewPlayerBase);
    void TryAddFurnitureToBase(class AAbioticDeployed_ParentBP_C* NewDeployable);
    void FindLoadedPlayerBase_Internal(TArray<class AAbioticDeployed_ParentBP_C*>& AllDeployablesWithTag, FGuid Guid);
    void RegisterNarrativeSpawnLocation(class ANPCSpawn_Narrative_C* SpawnPoint);
    void SelectNewAssaultType(FName RowName, bool Force, bool& FoundValidRow);
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
    void DrawDebugInfo(bool Condition, FVector Location, FVector DrawFrom, FString Text, FLinearColor Color, float Duration);
    void DebugDirectorTick(double DeltaTime);
    bool HasValidAssaultPatrolLocation();
    void TryUpdateAssaultPatrolLocation(bool ForceSpawnAssaultLocation);
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
    void Complete_BBEE9D3A4BB8F99BCAD0279F410FBC61(bool bSuccess, const TArray<FPlayerBaseData>& Bases);
    void OnQueryFinishedEvent_Event(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void Toggle_AIDirector(bool On);
    void TriggerLeyakAttackOnTarget(class AAbioticCharacter* Target);
    void OnLeyakSpawnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void CheckForLeyakSpawn();
    void Assault_WarnPlayers(bool Active (False=Warning), bool MorningWarning, bool AssaultEnd);
    void BeginAssault();
    void Server_ForceLeyakAttempt();
    void DelayedEndAssaultMessage();
    void ActiveAssaultTick();
    void CheckForCoworker();
    void TriggerCoworkerEventNearTarget(class AAbioticCharacter* Target);
    void CoworkerEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void AIDirector_AssaultTick();
    void TriggerAnomalySpawn(class AAbioticCharacter* Target);
    void AnomalyEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void LeyakFailsafeRemove();
    void SetLeyakOnCooldown(double CooldownReductionMultiplier);
    void PlayerTauntedLeyak();
    void AIDirector_DormantTick();
    void CheckForStuckLeyak();
    void AIDirector_PriorityTick();
    void ReceiveBeginPlay();
    void ServerForceBeginAssault();
    void FindLoadedPlayerBases(bool Global);
    void ResetFindingPlayerBases();
    void ContinueAssaultTick();
    void ContinueForceBeginAssault();
    void UpdateAssaultInfo();
    void OnTargetAssaultBenchDestroyed(class AActor* DestroyedActor);
    void ForceBeginAssaultFindBase();
    void OnDestroyed_AssaultNPC(class AActor* DestroyedActor);
    void TriggerDynamicReaperAttack(class AAbioticCharacter* Target);
    void OnReaperQuery(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void TriggerBoxyEventNearTarget(class AAbioticCharacter* Target);
    void BoxyEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void CheckForBoxy();
    void ExecuteUbergraph_Abiotic_AIDirector(int32 EntryPoint);
    void OnFoundAssaultEQSLocation__DelegateSignature(TEnumAsByte<EEnvQueryStatus::Type> QuesryStatus);
    void OnFinishFindingPlayerBases__DelegateSignature();
}; // Size: 0x898

#endif
