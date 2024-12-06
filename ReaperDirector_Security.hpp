#ifndef UE4SS_SDK_ReaperDirector_Security_HPP
#define UE4SS_SDK_ReaperDirector_Security_HPP

class AReaperDirector_Security_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    TArray<class ANPCSpawn_Reaper_C*> ReaperSpawnPoints;                              // 0x02B0 (size: 0x10)
    FReaperDirector_Security_CAllGeneratorsActivated AllGeneratorsActivated;          // 0x02C0 (size: 0x10)
    void AllGeneratorsActivated();
    double NextReaperSpawnTime;                                                       // 0x02D0 (size: 0x8)
    class ANPC_Base_ParentBP_C* SpawnedReaper;                                        // 0x02D8 (size: 0x8)
    FWorldFlagRowHandle MinimumRequiredFlag;                                          // 0x02E0 (size: 0x20)
    FTimerHandle ReaperTimer;                                                         // 0x0300 (size: 0x8)
    bool AttemptingReaperSpawn;                                                       // 0x0308 (size: 0x1)
    FVector2D ReaperSpawnTimeRange_Easy;                                              // 0x0310 (size: 0x10)
    FVector2D ReaperSpawnTimeRange_Medium;                                            // 0x0320 (size: 0x10)
    FVector2D ReaperSpawnTimeRange_Hard;                                              // 0x0330 (size: 0x10)
    float MinimumReaperDistance;                                                      // 0x0340 (size: 0x4)
    double MaximumReaperDistance;                                                     // 0x0348 (size: 0x8)
    TArray<FWorldFlagRowHandle> WorldFlagOrder;                                       // 0x0350 (size: 0x10)
    int32 ActiveFlagIndex;                                                            // 0x0360 (size: 0x4)
    TArray<class APlayerReaperTeleportSpawn_C*> PlayerTeleportSpawns;                 // 0x0368 (size: 0x10)
    double TimeLastDroppedEssence;                                                    // 0x0378 (size: 0x8)
    class ANPCSpawn_Reaper_C* LastReaperSpawnPoint;                                   // 0x0380 (size: 0x8)

    void ResetReaperRespawnTime();
    TArray<class APlayerReaperTeleportSpawn_C*> GetValidPlayerSpawn();
    void TryTeleportPlayer(class AAbiotic_Character_ParentBP_C* Target);
    void UpdateActiveFlagIndex();
    class ANPCSpawn_Reaper_C* GetValidReaperSpawn();
    void CheckReaperSpawn(class ANPCSpawn_Reaper_C* ReaperSpawn, bool& ReturnValid);
    void ReaperTick();
    void SetCurrentReaper(class ANPC_Base_ParentBP_C* Reaper);
    void DespawnCurrentReaper();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void WorldFlagUpdated();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_ReaperDirector_Security(int32 EntryPoint);
    void AllGeneratorsActivated__DelegateSignature();
}; // Size: 0x388

#endif
