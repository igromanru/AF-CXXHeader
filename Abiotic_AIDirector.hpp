#ifndef UE4SS_SDK_Abiotic_AIDirector_HPP
#define UE4SS_SDK_Abiotic_AIDirector_HPP

class AAbiotic_AIDirector_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UNarrativeNPCDirectorComponent_C* NarrativeNPCDirector;                     // 0x02A0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    FTimerHandle Tick_PrioritySpawns;                                                 // 0x02B8 (size: 0x8)
    FTimerHandle Tick_DormantSpawns;                                                  // 0x02C0 (size: 0x8)
    bool CurrentFacilitySpawns;                                                       // 0x02C8 (size: 0x1)
    bool DirectorDebugOn;                                                             // 0x02C9 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x02D0 (size: 0x8)
    bool DebugNoDayNightManager;                                                      // 0x02D8 (size: 0x1)
    TArray<ANPC_Base_ParentBP_C*> NPCArray;                                           // 0x02E0 (size: 0x10)
    int32 NPCCap;                                                                     // 0x02F0 (size: 0x4)
    FTimerHandle Assault_Timer;                                                       // 0x02F8 (size: 0x8)
    TEnumAsByte<E_AssaultPhases::Type> Assault_CurrentPhase;                          // 0x0300 (size: 0x1)
    FAssault Assault_CurrentData;                                                     // 0x0308 (size: 0xB0)
    FTimerHandle Assault_ActiveLogicTimer;                                            // 0x03B8 (size: 0x8)
    double Assault_TimeLastSpawnedNPC;                                                // 0x03C0 (size: 0x8)
    TArray<FVector> Assault_CurrentTargetLocation;                                    // 0x03C8 (size: 0x10)
    FVector Assault_BenchTargetLocation;                                              // 0x03D8 (size: 0x18)
    FVector Assault_PatrolTargetLocation;                                             // 0x03F0 (size: 0x18)
    FAssaultRowHandle Assault_CurrentRow;                                             // 0x0408 (size: 0x10)
    int32 Assault_CurrentSpawnIndex;                                                  // 0x0418 (size: 0x4)
    TArray<FNPCRowHandle> Assault_NPCList_Wave1;                                      // 0x0420 (size: 0x10)
    TArray<FNPCRowHandle> Assault_NPCList_Wave2;                                      // 0x0430 (size: 0x10)
    TArray<FNPCRowHandle> Assault_NPCList_Wave3;                                      // 0x0440 (size: 0x10)
    TArray<FNPCRowHandle> Assault_NPCList_BossWave;                                   // 0x0450 (size: 0x10)
    double Assault_TimeOfInitialWarning;                                              // 0x0460 (size: 0x8)
    int32 Assault_PreviousSpawnIndex;                                                 // 0x0468 (size: 0x4)
    FTransform Assault_LastNPCSpawnTransform;                                         // 0x0470 (size: 0x60)
    int32 TimeBeforeAssaults;                                                         // 0x04D0 (size: 0x4)
    double LeyakCooldown;                                                             // 0x04D8 (size: 0x8)
    class ANPC_Leyak_C* ActiveLeyak;                                                  // 0x04E0 (size: 0x8)
    class AAbioticCharacter* CurrentLeyakTarget;                                      // 0x04E8 (size: 0x8)
    FWorldFlagRowHandle LeyakWorldFlag;                                               // 0x04F0 (size: 0x10)
    double TimeLastLeyakSpawn;                                                        // 0x0500 (size: 0x8)
    FTimerHandle AnomalyTimer;                                                        // 0x0508 (size: 0x8)
    FTimerHandle CoworkerTimer;                                                       // 0x0510 (size: 0x8)
    FWorldFlagRowHandle CoworkerWorldFlag;                                            // 0x0518 (size: 0x10)
    class ANPC_Coworker_C* ActiveCoworker;                                            // 0x0528 (size: 0x8)
    class AAbioticCharacter* CurrentCoworkerTarget;                                   // 0x0530 (size: 0x8)
    class AAbioticCharacter* LastAnomalyTarget;                                       // 0x0538 (size: 0x8)
    bool PatrolTargetRequiresUpdate;                                                  // 0x0540 (size: 0x1)
    class AActor* TargetAssaultBench;                                                 // 0x0548 (size: 0x8)
    int32 MaxAssaultPortals;                                                          // 0x0550 (size: 0x4)
    int32 LeyakViewCounter;                                                           // 0x0554 (size: 0x4)
    int32 CurrentAssaultPortals;                                                      // 0x0558 (size: 0x4)
    double LeyakTauntCooldownMultiplier;                                              // 0x0560 (size: 0x8)
    bool DebugDisableNPCFreezing;                                                     // 0x0568 (size: 0x1)
    class AAbiotic_NPCSpawn_ParentBP_C* NPCSpawnToCheck;                              // 0x0570 (size: 0x8)
    TArray<AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Quick;                        // 0x0578 (size: 0x10)
    TArray<AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Moderate;                     // 0x0588 (size: 0x10)
    TArray<AAbiotic_NPCSpawn_ParentBP_C*> PendingSpawns_Slow;                         // 0x0598 (size: 0x10)
    int32 LastIndex_Quick;                                                            // 0x05A8 (size: 0x4)
    int32 LastIndex_Moderate;                                                         // 0x05AC (size: 0x4)
    int32 LastIndex_Slow;                                                             // 0x05B0 (size: 0x4)
    FTimerHandle Tick_QuickSpawns;                                                    // 0x05B8 (size: 0x8)
    FTimerHandle Tick_ModerateSpawns;                                                 // 0x05C0 (size: 0x8)
    FTimerHandle Tick_SlowSpawns;                                                     // 0x05C8 (size: 0x8)
    TMap<FName, FNarrativeNPCSpawns_Struct> NarrativeSpawns;                          // 0x05D0 (size: 0x50)
    TMap<FGuid, FPlayerBaseData> PlayerBaseMap;                                       // 0x0620 (size: 0x50)
    bool FoundPlayerBases;                                                            // 0x0670 (size: 0x1)
    FAbiotic_AIDirector_COnFinishFindingPlayerBases OnFinishFindingPlayerBases;       // 0x0678 (size: 0x10)
    void OnFinishFindingPlayerBases();
    FName PlayerBaseTag;                                                              // 0x0688 (size: 0x8)
    TMap<FVector, FGuid> PlayerBaseLocationMap;                                       // 0x0690 (size: 0x50)
    TMap<AActor*, FGuid> PlayerBaseSignificantFurnitureMap;                           // 0x06E0 (size: 0x50)
    double LastFoundPlayerBaseTime;                                                   // 0x0730 (size: 0x8)
    FAbiotic_AIDirector_COnFoundAssaultEQSLocation OnFoundAssaultEQSLocation;         // 0x0738 (size: 0x10)
    void OnFoundAssaultEQSLocation(TEnumAsByte<EEnvQueryStatus::Type> QuesryStatus);
    FPlayerBaseData CurrentlyTargetedPlayerBase;                                      // 0x0748 (size: 0x48)
    TArray<ANPC_Base_ParentBP_C*> AssaultNPCs;                                        // 0x0790 (size: 0x10)
    double AssaultMaxTimeLimitSeconds;                                                // 0x07A0 (size: 0x8)
    FWaypointRowHandle AssaultWaypointRow;                                            // 0x07A8 (size: 0x10)
    TMap<ANPC_PowerLeech_C*, AActor*> ActivePowerLeeches;                             // 0x07B8 (size: 0x50)
    class AAbioticCharacter* CurrentDynamicReaperTarget;                              // 0x0808 (size: 0x8)
    class ANPC_Monster_Reaper_C* ActiveDynamicReaper;                                 // 0x0810 (size: 0x8)
    FTimerHandle BoxyTimer;                                                           // 0x0818 (size: 0x8)
    FWorldFlagRowHandle BoxyWorldFlag;                                                // 0x0820 (size: 0x10)
    class ANPC_Boxy_C* ActiveBoxy;                                                    // 0x0830 (size: 0x8)
    class AAbioticCharacter* CurrentBoxyTarget;                                       // 0x0838 (size: 0x8)
    double LastBoxySpawnTime;                                                         // 0x0840 (size: 0x8)
    double BoxySpawnFrequency;                                                        // 0x0848 (size: 0x8)
    double BoxySpawnFrequency_Encumbered;                                             // 0x0850 (size: 0x8)
    bool PetGodMode;                                                                  // 0x0858 (size: 0x1)
    FAbiotic_AIDirector_COnAIDirectorTagBroadcast OnAIDirectorTagBroadcast;           // 0x0860 (size: 0x10)
    void OnAIDirectorTagBroadcast(FGameplayTag Tag);
    TMap<FClassManagerRowHandle, UActorComponent*> ClassManagerDirectors;             // 0x0870 (size: 0x50)
    TMap<FName, FString> LeyakContainmentIDs;                                         // 0x08C0 (size: 0x50)
    FAbiotic_AIDirector_COnLoadLeyakContainmentIDs OnLoadLeyakContainmentIDs;         // 0x0910 (size: 0x10)
    void OnLoadLeyakContainmentIDs();
    FAbiotic_AIDirector_COnUpdatedLeyakContainment OnUpdatedLeyakContainment;         // 0x0920 (size: 0x10)
    void OnUpdatedLeyakContainment();

    void SetLeyakContainmentData(TMap<FName, FString> NewLeyakContainmentIDs);
    void GetStalkingComponentByRow(const FClassManagerRowHandle& ClassManagerRow);
    void GetLegacyLeyakDirector(class UStalkingNpcDirector_ParentBP_C*& LeyakDirector);
    void IsAssaultHappening();
    void SpawnBoxy(FVector Location);
    void AlertNPCToNearbyPlayers(class ANPC_Base_ParentBP_C* NPC);
    void SpawnDynamicReaper(FVector Location);
    void TriggerPowerLeechAttackOnTarget(class AActor* Target);
    void SpawnPowerLeechCheck(bool& Success);
    void AddPlayerBase(FPlayerBaseData& NewPlayerBase);
    void ClearNPCsWithoutDestroying();
    void CheckAssaultNPCsDead(bool& AreNPCsDead);
    void OnAssaultEQSResult(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void AddPlayerBase_OLD(const FGuid& Guid, TArray<AAbioticDeployed_ParentBP_C*>& SignificantFurniture, TArray<AAbioticDeployed_ParentBP_C*>& AllFurniture, FPlayerBaseData& NewPlayerBase);
    void TryAddFurnitureToBase(class AAbioticDeployed_ParentBP_C* NewDeployable);
    void FindLoadedPlayerBase_Internal(TArray<AAbioticDeployed_ParentBP_C*>& AllDeployablesWithTag, FGuid Guid);
    void RegisterNarrativeSpawnLocation(class ANPCSpawn_Narrative_C* SpawnPoint);
    void SelectNewAssaultType(FName RowName, bool Force, bool& FoundValidRow);
    void ProcessSpawns_Slow();
    void ProcessSpawns_Moderate();
    void ProcessSpawns_Quick();
    void IsCharacterInVignette?(class AAbioticCharacter* Player, bool AllowDuringCombat);
    void AtLeast1PlayerWithTag(FGameplayTag Tag, bool& Found);
    void OnPortalForceClosed(FVector Location);
    void CleanUpAssaultRiftPortals();
    void Spawn Assault Portal(FVector PortalLocation);
    void UpdateAssaultTargetLocation(FVector InLocation);
    void DrawDebugInfo(bool Condition, FVector Location, FVector DrawFrom, FString Text, FLinearColor Color, float Duration);
    void DebugDirectorTick(double DeltaTime);
    void HasValidAssaultPatrolLocation();
    void TryUpdateAssaultPatrolLocation(bool ForceSpawnAssaultLocation);
    void SpawnCoworker(FVector Location);
    void SpawnAnomalyCheck();
    void IsTodayAssaultDay(bool& LateArrival);
    void OnAssaultCheckHour();
    void ResetAssaultLocation();
    void TryUpdateAssaultLocation();
    void HasValidAssaultLocation();
    void CheckDaysSinceLastAssault(int32 RequiredDays);
    void IsCloseEnoughToCraftingBench(class AActor* Target, double Distance, class AActor*& ClosestBench);
    void CheckForBenchesNearby(FBenchUpgradeRowHandle Upgrade, bool& Nearby);
    void IsNight?();
    void TestLevel_SetAllSpawnsModified();
    void CheckForAssaultRestrictedHours(bool& Allowed);
    void CheckForAssaultWorldFlag(bool& FlagHasBeenSet);
    void EndAssault();
    void ChangeAssaultPhase(TEnumAsByte<E_AssaultPhases::Type> Assault_CurrentPhase);
    void SortAssaultSpawnLists();
    void SelectRandomAssaultType(bool& FoundValidRow);
    void IsSequencerCutsceneActive?(bool& CutsceneActive?);
    void Director Print Debug(FString InString, double Duration, ECriticalityLevels Criticality, bool ShowOnCrosshair);
    void NPC_LoadUnload_Manager();
    void OnLoaded_FCAFE2E44CF6F75003EFBAA412D37F6C(UClass* Loaded);
    void Complete_BBEE9D3A4BB8F99BCAD0279F410FBC61(bool bSuccess, const TArray<FPlayerBaseData>& Bases);
    void AIDirector_AssaultTick();
    void ActiveAssaultTick();
    void BeginAssault();
    void Assault_WarnPlayers(bool Active (False=Warning), bool MorningWarning, bool AssaultEnd);
    void AIDirector_DormantTick();
    void AIDirector_PriorityTick();
    void OnQueryFinishedEvent_Event(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void Toggle_AIDirector(bool On);
    void ReceiveBeginPlay();
    void Server_ForceLeyakAttempt();
    void DelayedEndAssaultMessage();
    void TriggerCoworkerEventNearTarget(class AAbioticCharacter* Target);
    void CoworkerEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void TriggerAnomalySpawn(class AAbioticCharacter* Target);
    void AnomalyEQSComplete(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
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
    void ExecuteUbergraph_Abiotic_AIDirector(int32 EntryPoint);
    void OnUpdatedLeyakContainment__DelegateSignature();
    void OnLoadLeyakContainmentIDs__DelegateSignature();
    void OnAIDirectorTagBroadcast__DelegateSignature(FGameplayTag Tag);
    void OnFoundAssaultEQSLocation__DelegateSignature(TEnumAsByte<EEnvQueryStatus::Type> QuesryStatus);
    void OnFinishFindingPlayerBases__DelegateSignature();
}; // Size: 0x930

#endif
