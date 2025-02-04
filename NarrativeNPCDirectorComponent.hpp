#ifndef UE4SS_SDK_NarrativeNPCDirectorComponent_HPP
#define UE4SS_SDK_NarrativeNPCDirectorComponent_HPP

class UNarrativeNPCDirectorComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TMap<class FName, class FNarrativeNPCSpawns_Struct> NarrativeSpawns;              // 0x00B0 (size: 0x50)
    class ADayNightManager_C* DayNightManager;                                        // 0x0100 (size: 0x8)
    float DefaultChanceToSpawn;                                                       // 0x0108 (size: 0x4)
    bool HasLoaded;                                                                   // 0x010C (size: 0x1)
    int32 LastDay;                                                                    // 0x0110 (size: 0x4)

    void OnHourChanged(int32 NewHour, int32 PreviousHour);
    bool HasAnyRequiredWorldFlag(TArray<FWorldFlagRowHandle>& FlagsArray);
    void ApplyNarrativeNPCData(class UAbiotic_WorldSave_C* Save);
    void SaveNarrativeNPCData(class UAbiotic_WorldSave_C* Save);
    double GetChanceToSpawn(const FNPCTrader& NPCTrader);
    void RegisterTraderLure(class ADeployed_TraderLure_Parent_C* NewTraderLure);
    void RefreshNarrativeSpawns();
    void RegisterNarrativeSpawnLocation(class ANPCSpawn_Narrative_C* SpawnPoint);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NarrativeNPCDirectorComponent(int32 EntryPoint);
}; // Size: 0x114

#endif
