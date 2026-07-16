#ifndef UE4SS_SDK_Deployed_Bench_AmmoStation_HPP
#define UE4SS_SDK_Deployed_Bench_AmmoStation_HPP

class ADeployed_Bench_AmmoStation_C : public AAbioticDeployed_CraftingBench_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UBenchUpgradeActorComponent* BenchUpgrade_ItemTransporter;                  // 0x0908 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0910 (size: 0x8)
    double LastContainerUpdate;                                                       // 0x0918 (size: 0x8)

    void UpdateOverlappingContainers();
    void TogglePowerFX();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Deployed_Bench_AmmoStation(int32 EntryPoint);
}; // Size: 0x920

#endif
