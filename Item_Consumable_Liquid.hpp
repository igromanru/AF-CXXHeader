#ifndef UE4SS_SDK_Item_Consumable_Liquid_HPP
#define UE4SS_SDK_Item_Consumable_Liquid_HPP

class AItem_Consumable_Liquid_C : public AItem_Consumable_Offerable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B60 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> CorrectStaticMesh;                                    // 0x0B68 (size: 0x28)
    double LiquidValue;                                                               // 0x0B90 (size: 0x8)

    void OnRep_LiquidValue();
    void UpdateLiquidVisuals(double Value);
    void RetryLiquidVisualUpdate();
    void Server_OnLiquidValueUpdated();
    void ReceiveBeginPlay();
    void SetMaterialProperties();
    void ExecuteUbergraph_Item_Consumable_Liquid(int32 EntryPoint);
}; // Size: 0xB98

#endif
