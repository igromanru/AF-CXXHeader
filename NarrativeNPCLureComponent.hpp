#ifndef UE4SS_SDK_NarrativeNPCLureComponent_HPP
#define UE4SS_SDK_NarrativeNPCLureComponent_HPP

class UNarrativeNPCLureComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FDataTableRowHandle TraderNPCToLure;                                              // 0x00B0 (size: 0x10)
    class ANarrativeNPC_ParentBP_C* SpawnedNPC;                                       // 0x00C0 (size: 0x8)
    class AAbiotic_AIDirector_C* AI Director;                                         // 0x00C8 (size: 0x8)
    FTimerHandle DespawnTimer;                                                        // 0x00D0 (size: 0x8)
    bool Spawn Enabled;                                                               // 0x00D8 (size: 0x1)

    bool CanSpawn();
    void UpdateSpawnedNPCData();
    bool IsLevelLoaded();
    bool CanSpawnBeEnabled();
    void CheckAndRemoveExistingTraders(TSubclassOf<class ANarrativeNPC_ParentBP_C> NarrativeClass, bool& ShouldSpawn);
    void SetSpawnEnabled(bool NewSpawnEnabled);
    void OnLoaded_81534E57405B69BEBA2CFABF1AC88CD8(UClass* Loaded);
    void Despawn();
    void SpawnNPC();
    void OnLevelLoaded(class ULevelStreaming* Level);
    void OnLevelUnloaded(class ULevelStreaming* Level);
    void TryDespawn();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void OnSpawnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void ExecuteUbergraph_NarrativeNPCLureComponent(int32 EntryPoint);
}; // Size: 0xD9

#endif
