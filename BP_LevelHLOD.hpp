#ifndef UE4SS_SDK_BP_LevelHLOD_HPP
#define UE4SS_SDK_BP_LevelHLOD_HPP

class ABP_LevelHLOD_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    TSoftObjectPtr<UWorld> LinkedLevel;                                               // 0x02B0 (size: 0x28)
    class UStaticMesh* HLODMesh;                                                      // 0x02D8 (size: 0x8)

    void IsLevelLoaded(bool& Loaded);
    void UpdateVisibilityState();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void OnLevelLoaded_Event(class ULevelStreaming* Level);
    void OnLevelUnloaded_Event(class ULevelStreaming* Level);
    void OnLevelVisibilityUpdated_Event(class ULevelStreaming* Level, bool bVisible);
    void ExecuteUbergraph_BP_LevelHLOD(int32 EntryPoint);
}; // Size: 0x2E0

#endif
