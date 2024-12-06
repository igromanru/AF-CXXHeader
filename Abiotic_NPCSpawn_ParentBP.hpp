#ifndef UE4SS_SDK_Abiotic_NPCSpawn_ParentBP_HPP
#define UE4SS_SDK_Abiotic_NPCSpawn_ParentBP_HPP

class AAbiotic_NPCSpawn_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* SpawnHologram;                                        // 0x02A0 (size: 0x8)
    class USceneComponent* SpawnLocations;                                            // 0x02A8 (size: 0x8)
    class USceneComponent* SpawnParticleLoc;                                          // 0x02B0 (size: 0x8)
    class UArrowComponent* SpawnArrow;                                                // 0x02B8 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x02C0 (size: 0x8)
    class UTextRenderComponent* SpawnTypeText;                                        // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    FWorldFlagRowHandle DisablePermanentlyFlag;                                       // 0x02D8 (size: 0x20)
    double SpawnCooldown_Default;                                                     // 0x02F8 (size: 0x8)
    double PlayerWithinDistanceToSpawn;                                               // 0x0300 (size: 0x8)
    TEnumAsByte<ETimesOfDay::Type> AllowableSpawnHours;                               // 0x0308 (size: 0x1)
    FWorldFlagRowHandle WorldFlagRequiredToSpawnAnything;                             // 0x0310 (size: 0x20)
    int32 PlayersRequiredToSpawn;                                                     // 0x0330 (size: 0x4)
    TMap<class FName, class FName> NPCSpawnsByFlag;                                   // 0x0338 (size: 0x50)
    TArray<class ANPC_Base_ParentBP_C*> CurrentNPCs;                                  // 0x0388 (size: 0x10)
    int32 NPCsAllowedFromSpawn;                                                       // 0x0398 (size: 0x4)
    TArray<class AAI_PatrolPath_C*> PotentialPatrolPaths;                             // 0x03A0 (size: 0x10)
    bool PatrolOnlyActiveAfterCombat;                                                 // 0x03B0 (size: 0x1)
    bool CanSpawnInLineOfSight;                                                       // 0x03B1 (size: 0x1)
    TEnumAsByte<ENPCAwarenessState::Type> AwarenessState;                             // 0x03B2 (size: 0x1)
    bool StationaryUntilPlayerEncounter;                                              // 0x03B3 (size: 0x1)
    bool AlwaysPassDistanceCheck;                                                     // 0x03B4 (size: 0x1)
    int32 DirectorFailCounter;                                                        // 0x03B8 (size: 0x4)
    class AAbiotic_AIDirector_C* AI Director;                                         // 0x03C0 (size: 0x8)
    bool NoLoot;                                                                      // 0x03C8 (size: 0x1)
    TArray<FAbiotic_NPCSpawnsStruct> NPCsToSpawn;                                     // 0x03D0 (size: 0x10)
    int32 NPC Level;                                                                  // 0x03E0 (size: 0x4)
    bool OnlySpawnOnce;                                                               // 0x03E4 (size: 0x1)
    bool HasSpawnedOnce;                                                              // 0x03E5 (size: 0x1)
    bool SpawnedViaTrigger;                                                           // 0x03E6 (size: 0x1)
    bool WorldSaveHasModified;                                                        // 0x03E7 (size: 0x1)
    bool SpawnWithEffect;                                                             // 0x03E8 (size: 0x1)
    class UAnimMontage* MontageOnSpawn;                                               // 0x03F0 (size: 0x8)
    bool Debug;                                                                       // 0x03F8 (size: 0x1)
    bool AlwaysDropGibs;                                                              // 0x03F9 (size: 0x1)
    FAbiotic_NPCSpawn_ParentBP_CCooldownUpdated CooldownUpdated;                      // 0x0400 (size: 0x10)
    void CooldownUpdated();
    bool ManualSpawn;                                                                 // 0x0410 (size: 0x1)
    bool Spawn Without Squad;                                                         // 0x0411 (size: 0x1)
    bool NeverBlockedByInhibitors;                                                    // 0x0412 (size: 0x1)
    TArray<FTransform> SpawnTransforms;                                               // 0x0418 (size: 0x10)
    FTransform LastAttemptedSpawnLocation;                                            // 0x0430 (size: 0x60)
    double LastCooldownSaveTimestamp;                                                 // 0x0490 (size: 0x8)
    double CooldownSaveInterval;                                                      // 0x0498 (size: 0x8)
    TSoftObjectPtr<ANPCTetherVolume_C> TetherVolume;                                  // 0x04A0 (size: 0x28)
    TSoftObjectPtr<ABP_SquadManager_C> LinkedSquadManager;                            // 0x04C8 (size: 0x28)
    FWeatherEventRowHandle RequiredWeather;                                           // 0x04F0 (size: 0x20)
    FGameplayTagContainer SpawnCharacterWithTags;                                     // 0x0510 (size: 0x20)
    TSoftObjectPtr<UWorld> OwningLevel;                                               // 0x0530 (size: 0x28)
    bool ExcludedFromAssaults;                                                        // 0x0558 (size: 0x1)
    bool ShouldSpawnSkipPlayerChecks;                                                 // 0x0559 (size: 0x1)

    void ShouldSkipSpawnFX?(bool& Skip);
    void TrySpawnNPCNew(bool IsNight, bool ForceSuccessByTrigger, bool CheckOnlyNoSpawn, bool& Success, class ANPC_Base_ParentBP_C*& SpawnedNPC, FString& DebugMessage, TEnumAsByte<E_NPCSpawnResponse::Type>& Response);
    void DetermineNPCSubstitute(FName PotentialNPC, FName& OutNPC);
    double GetSpawnCooldownValue();
    TEnumAsByte<ENPCAwarenessState::Type> GetAwarenessState();
    FTransform ChooseSpawnLocation();
    void InitSpawnLocations();
    void CheckSpawnProximityToInhibitors(FName Potential NPC to Spawn, bool& SomethingTooClose, FString& ObjectName);
    bool IsOnCooldown();
    void DebugSpawn();
    int32 GetCurrentSpawnedCount(bool CheckDead);
    void Check Line Of Sight and Distance to Players(bool& Allowed, FString& Debug);
    void Check Spawn Proximity to Player Base(bool& SomethingTooClose, FString& ObjectName);
    void UpdateCurrentCooldownAndSave(bool ForceWorldSave);
    void SetupSpawnValues();
    void IsSpawnCapReached?(bool& SpawnLimitReached);
    void SaveSpawnPoint(bool ForceWorldSave);
    void TrySeekPatrolPath();
    void TrySpawnNPC(bool IsNight, bool ForceSuccessByTrigger, bool CheckOnlyNoSpawn, bool& Success, class ANPC_Base_ParentBP_C*& SpawnedNPC, FString& DebugMessage, TEnumAsByte<E_NPCSpawnResponse::Type>& Response);
    void SetSpawnOnCooldown(double TimeRemaining);
    void ToggleSpawnDebug(bool On);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SpawnerCooldownUpdated(TSoftObjectPtr<AActor> Spawner);
    void UpdateDebugVisibility();
    void ExecuteUbergraph_Abiotic_NPCSpawn_ParentBP(int32 EntryPoint);
    void CooldownUpdated__DelegateSignature();
}; // Size: 0x55A

#endif
