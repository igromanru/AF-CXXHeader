#ifndef UE4SS_SDK_Deployed_Bench_CookingStation_HPP
#define UE4SS_SDK_Deployed_Bench_CookingStation_HPP

class ADeployed_Bench_CookingStation_C : public AAbioticDeployed_CraftingBench_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09B0 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_ItemTransporter;                  // 0x09B8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x09C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x09C8 (size: 0x8)
    class USceneComponent* InteractPosition_Left;                                     // 0x09D0 (size: 0x8)
    class USceneComponent* InteractPosition_Right;                                    // 0x09D8 (size: 0x8)
    class UStaticMeshComponent* CookingInteraction;                                   // 0x09E0 (size: 0x8)
    class UStaticMeshComponent* FishPrepInteraction;                                  // 0x09E8 (size: 0x8)
    int32 SelectedComponentIndex;                                                     // 0x09F0 (size: 0x4)
    double LastContainerUpdate;                                                       // 0x09F8 (size: 0x8)

    void UpdateOverlappingContainers();
    FText GetItemNameText();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void TogglePowerFX();
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_Deployed_Bench_CookingStation(int32 EntryPoint);
}; // Size: 0xA00

#endif
