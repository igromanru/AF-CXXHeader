#ifndef UE4SS_SDK_Abiotic_NPCSpawn_ParentBP_HPP
#define UE4SS_SDK_Abiotic_NPCSpawn_ParentBP_HPP

class AAbiotic_NPCSpawn_ParentBP_C : public ANPCSpawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* SpawnHologram;                                        // 0x02C0 (size: 0x8)
    class USceneComponent* SpawnLocations;                                            // 0x02C8 (size: 0x8)
    class USceneComponent* SpawnParticleLoc;                                          // 0x02D0 (size: 0x8)
    class UArrowComponent* SpawnArrow;                                                // 0x02D8 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x02E0 (size: 0x8)
    class UTextRenderComponent* SpawnTypeText;                                        // 0x02E8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F0 (size: 0x8)
    FWorldFlagRowHandle WorldFlagRequiredToSpawnAnything;                             // 0x02F8 (size: 0x10)
    FWorldFlagRowHandle DisablePermanentlyFlag;                                       // 0x0308 (size: 0x10)
    FWeatherEventRowHandle RequiredWeather;                                           // 0x0318 (size: 0x10)
    bool UseDaysCooldown;                                                             // 0x0328 (size: 0x1)
    int32 SpawnCooldownDays_Default;                                                  // 0x032C (size: 0x4)
    int32 NormalizedSpawnCooldownDays;                                                // 0x0330 (size: 0x4)
    double SpawnCooldown_Default;                                                     // 0x0338 (size: 0x8)
    double PlayerWithinDistanceToSpawn;                                               // 0x0340 (size: 0x8)
    TEnumAsByte<ETimesOfDay::Type> AllowableSpawnHours;                               // 0x0348 (size: 0x1)
    int32 PlayersRequiredToSpawn;                                                     // 0x034C (size: 0x4)
    TMap<FNPCRowHandle, FWorldFlagRowHandle> NPCSpawnsByFlag;                         // 0x0350 (size: 0x50)
    TArray<ANPC_Base_ParentBP_C*> CurrentNPCs;                                        // 0x03A0 (size: 0x10)
    int32 NPCsAllowedFromSpawn;                                                       // 0x03B0 (size: 0x4)
    TArray<AAI_PatrolPath_C*> PotentialPatrolPaths;                                   // 0x03B8 (size: 0x10)
    bool PatrolOnlyActiveAfterCombat;                                                 // 0x03C8 (size: 0x1)
    bool AllowPatrolAfterKilledOnce;                                                  // 0x03C9 (size: 0x1)
    bool CanSpawnInLineOfSight;                                                       // 0x03CA (size: 0x1)
    TEnumAsByte<ENPCAwarenessState::Type> AwarenessState;                             // 0x03CB (size: 0x1)
    bool StationaryUntilPlayerEncounter;                                              // 0x03CC (size: 0x1)
    bool AlwaysPassDistanceCheck;                                                     // 0x03CD (size: 0x1)
    int32 DirectorFailCounter;                                                        // 0x03D0 (size: 0x4)
    class AAbiotic_AIDirector_C* AI Director;                                         // 0x03D8 (size: 0x8)
    bool NoLoot;                                                                      // 0x03E0 (size: 0x1)
    int32 NPC Level;                                                                  // 0x03E4 (size: 0x4)
    bool OnlySpawnOnce;                                                               // 0x03E8 (size: 0x1)
    bool HasSpawnedOnce;                                                              // 0x03E9 (size: 0x1)
    bool SpawnedViaTrigger;                                                           // 0x03EA (size: 0x1)
    bool WorldSaveHasModified;                                                        // 0x03EB (size: 0x1)
    bool SpawnWithEffect;                                                             // 0x03EC (size: 0x1)
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
    TSoftObjectPtr<class ANPCTetherVolume_C> TetherVolume;                            // 0x04A0 (size: 0x28)
    TSoftObjectPtr<class ABP_SquadManager_C> LinkedSquadManager;                      // 0x04C8 (size: 0x28)
    FGameplayTagContainer SpawnCharacterWithTags;                                     // 0x04F0 (size: 0x20)
    TSoftObjectPtr<class UWorld> OwningLevel;                                         // 0x0510 (size: 0x28)
    bool ExcludedFromAssaults;                                                        // 0x0538 (size: 0x1)
    bool ShouldSpawnSkipPlayerChecks;                                                 // 0x0539 (size: 0x1)
    bool HasBeenEncounteredOnce;                                                      // 0x053A (size: 0x1)
    TArray<FNPCSpawnEntry> CachedNPCSpawns;                                           // 0x0540 (size: 0x10)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void IdenticalCheck();
    void UpdateCooldownDays();
    void GetNPCsToSpawn(TArray<FNPCSpawnEntry>& OutNPCsToSpawn);
    void SetSpawnOnCooldown(double TimeRemaining, int32 InCurrentDay);
    void ShouldSkipSpawnFX?(bool& Skip);
    void TrySpawnNPCNew(bool IsNight, bool ForceSuccessByTrigger, bool CheckOnlyNoSpawn, bool& Success, class ANPC_Base_ParentBP_C*& SpawnedNPC, FString& DebugMessage, TEnumAsByte<E_NPCSpawnResponse::Type>& Response);
    void DetermineNPCSubstitute(FNPCRowHandle PotentialNPC, FNPCRowHandle& OutNPC);
    void GetSpawnCooldownValue();
    void GetAwarenessState();
    void ChooseSpawnLocation();
    void InitSpawnLocations();
    void CheckSpawnProximityToInhibitors(FNPCRowHandle Potential NPC to Spawn, bool& SomethingTooClose, FString& ObjectName);
    void IsOnCooldown();
    void DebugSpawn();
    void GetCurrentSpawnedCount(bool CheckDead);
    void Check Line Of Sight and Distance to Players(bool& Allowed, FString& Debug);
    void Check Spawn Proximity to Player Base(bool& SomethingTooClose, FString& ObjectName);
    void UpdateCurrentCooldownAndSave(bool ForceWorldSave);
    void SetupSpawnValues();
    void IsSpawnCapReached?(bool& SpawnLimitReached);
    void SaveSpawnPoint(bool ForceWorldSave);
    void TrySeekPatrolPath();
    void TrySpawnNPC(bool IsNight, bool ForceSuccessByTrigger, bool CheckOnlyNoSpawn, bool& Success, class ANPC_Base_ParentBP_C*& SpawnedNPC, FString& DebugMessage, TEnumAsByte<E_NPCSpawnResponse::Type>& Response);
    void ToggleSpawnDebug(bool On);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void SpawnerCooldownUpdated(TSoftObjectPtr<class AActor> Spawner);
    void UpdateDebugVisibility();
    void ExecuteUbergraph_Abiotic_NPCSpawn_ParentBP(int32 EntryPoint);
    void CooldownUpdated__DelegateSignature();
}; // Size: 0x550

#endif
