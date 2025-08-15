#ifndef UE4SS_SDK_NPCSpawn_Narrative_HPP
#define UE4SS_SDK_NPCSpawn_Narrative_HPP

class ANPCSpawn_Narrative_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* SpawnTypeText;                                        // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02B0 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    FDataTableRowHandle NPCRow;                                                       // 0x02C8 (size: 0x10)
    FWorldFlagRowHandle WorldFlag;                                                    // 0x02D8 (size: 0x20)
    class AAbiotic_AIDirector_C* AI Director;                                         // 0x02F8 (size: 0x8)
    TSoftClassPtr<ANarrativeNPC_ParentBP_C> NPCClass;                                 // 0x0300 (size: 0x28)
    class ANarrativeNPC_ParentBP_C* SpawnedNPC;                                       // 0x0328 (size: 0x8)
    FTimerHandle DespawnTimer;                                                        // 0x0330 (size: 0x8)

    void CheckAndRemoveExistingNPCs(TSubclassOf<class ANarrativeNPC_ParentBP_C> NarrativeClass, bool& ShouldSpawn);
    bool IsSpawnValid();
    bool GetNPCData(FNPCTrader& NPCData);
    TSubclassOf<class ANarrativeNPC_ParentBP_C> GetNPCToSpawn();
    void OnLoaded_59D3F2E24B5EDEA8988634BADE1E6BC9(UClass* Loaded);
    void ReceiveBeginPlay();
    void SpawnNPC();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Despawn();
    void TryDespawn();
    void ExecuteUbergraph_NPCSpawn_Narrative(int32 EntryPoint);
}; // Size: 0x338

#endif
