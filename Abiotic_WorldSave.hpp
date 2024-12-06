#ifndef UE4SS_SDK_Abiotic_WorldSave_HPP
#define UE4SS_SDK_Abiotic_WorldSave_HPP

class UAbiotic_WorldSave_C : public UAbioticSave
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E0 (size: 0x8)
    TMap<class FString, class FSaveData_Door_Struct> SimpleDoorMap;                   // 0x00E8 (size: 0x50)
    TArray<FName> WorldFlags;                                                         // 0x0138 (size: 0x10)
    TMap<class FString, class FSaveData_Deployable_Struct> DeployedObjectMap;         // 0x0148 (size: 0x50)
    TMap<class FString, class FSaveData_Resource_Struct> ResourceNodeMap;             // 0x0198 (size: 0x50)
    TMap<class FString, class FSaveData_Destructible_Struct> DestructibleMap;         // 0x01E8 (size: 0x50)
    TMap<class FString, class FSaveData_SecurityDoor_Struct> SecurityDoorMap;         // 0x0238 (size: 0x50)
    TMap<class FString, class FSaveData_Elevator_Struct> ElevatorMap;                 // 0x0288 (size: 0x50)
    TMap<class FString, class FSaveData_ButtonStruct> ButtonMap;                      // 0x02D8 (size: 0x50)
    int32 AssetID;                                                                    // 0x0328 (size: 0x4)
    TMap<class FString, class FSaveData_NPCState_Struct> NarrativeNPCMap;             // 0x0330 (size: 0x50)
    TMap<class FString, class FSaveData_PowerSockets> PowerSocketMap;                 // 0x0380 (size: 0x50)
    FTimeOfDay_Struct TimeOfDay;                                                      // 0x03D0 (size: 0x28)
    TMap<class FString, class FSaveData_Trigger_Struct> TriggerMap;                   // 0x03F8 (size: 0x50)
    TMap<class FString, class FSaveData_NPCSpawn> NPCSpawnMap;                        // 0x0448 (size: 0x50)
    TMap<class FString, class FSaveData_PortalStruct> portalmap;                      // 0x0498 (size: 0x50)
    FString LevelGUID;                                                                // 0x04E8 (size: 0x10)
    FDateTime DateTime;                                                               // 0x04F8 (size: 0x8)
    int32 DayDiscovered;                                                              // 0x0500 (size: 0x4)
    TMap<class FString, class FSaveData_Vehicle_Struct> VehicleMap;                   // 0x0508 (size: 0x50)
    TArray<FSoftObjectPath> DestroyedActorPaths;                                      // 0x0558 (size: 0x10)
    TMap<class FString, class FSaveData_Tram> TramMap;                                // 0x0568 (size: 0x50)
    TMap<class FString, class FSaveData_NPCState_Struct> PetNPC;                      // 0x05B8 (size: 0x50)
    TMap<class FString, class FSaveData_DroppedItem_Struct> DroppedItemMap;           // 0x0608 (size: 0x50)
    TMap<class FString, class FCorpseSave_Struct> CorpseMap;                          // 0x0658 (size: 0x50)

    void ResetSimpleDoorMap();
    bool ApplyVersion2Upgrade();
    void ResetVignette();
    void GenerateLevelGUID();
    void AddWorldFlag(FWorldFlagRowHandle WorldFlagToSet);
    void ExecuteUbergraph_Abiotic_WorldSave(int32 EntryPoint);
}; // Size: 0x6A8

#endif
