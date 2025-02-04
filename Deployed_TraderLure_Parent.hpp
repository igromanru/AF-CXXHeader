#ifndef UE4SS_SDK_Deployed_TraderLure_Parent_HPP
#define UE4SS_SDK_Deployed_TraderLure_Parent_HPP

class ADeployed_TraderLure_Parent_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    FDataTableRowHandle TraderNPCToLure;                                              // 0x0938 (size: 0x10)
    bool SpawnEnabled;                                                                // 0x0948 (size: 0x1)
    class ANarrativeNPC_ParentBP_C* SpawnedNPC;                                       // 0x0950 (size: 0x8)
    class AAbiotic_AIDirector_C* AI Director;                                         // 0x0958 (size: 0x8)
    FTimerHandle DespawnTimer;                                                        // 0x0960 (size: 0x8)

    void SetSpawnEnabled(bool SpawnEnabled);
    void OnLoaded_E92B29B943EBA1485E3EBB9144740648(UClass* Loaded);
    void SpawnNPC();
    void Despawn();
    void ReceiveBeginPlay();
    void OnLevelLoadUpdated(class ULevelStreaming* Level);
    void OnLevelLoaded(class ULevelStreaming* Level);
    void OnLevelUnloaded(class ULevelStreaming* Level);
    void TryDespawn();
    void ExecuteUbergraph_Deployed_TraderLure_Parent(int32 EntryPoint);
}; // Size: 0x968

#endif
