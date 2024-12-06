#ifndef UE4SS_SDK_VehicleRecallStation_HPP
#define UE4SS_SDK_VehicleRecallStation_HPP

class AVehicleRecallStation_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Cube;                                                 // 0x02A0 (size: 0x8)
    class UChildActorComponent* RecallButton;                                         // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    class AVehicleSpawn_ParentBP_C* LinkedSpawner;                                    // 0x02B8 (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> ButtonImage;                                   // 0x02C0 (size: 0x28)

    void OnLoaded_02F20691464A69A33920FCBDB9149B78(class UObject* Loaded);
    void TryVehicleRecall(bool Activated);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_VehicleRecallStation(int32 EntryPoint);
}; // Size: 0x2E8

#endif
