#ifndef UE4SS_SDK_Deployed_WaterFilter_HPP
#define UE4SS_SDK_Deployed_WaterFilter_HPP

class ADeployed_WaterFilter_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A00 (size: 0x8)

    void RefreshLiquidLevelAppearance();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void ReceiveBeginPlay();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_Deployed_WaterFilter(int32 EntryPoint);
}; // Size: 0xA08

#endif
