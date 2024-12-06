#ifndef UE4SS_SDK_Deployed_CraftingBench_Repair_HPP
#define UE4SS_SDK_Deployed_CraftingBench_Repair_HPP

class ADeployed_CraftingBench_Repair_C : public AAbioticDeployed_CraftingBench_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09B0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x09B8 (size: 0x8)

    void TogglePowerFX();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_Deployed_CraftingBench_Repair(int32 EntryPoint);
}; // Size: 0x9C0

#endif
