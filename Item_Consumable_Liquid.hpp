#ifndef UE4SS_SDK_Item_Consumable_Liquid_HPP
#define UE4SS_SDK_Item_Consumable_Liquid_HPP

class AItem_Consumable_Liquid_C : public AItem_Consumable_Offerable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BC0 (size: 0x8)
    TSoftObjectPtr<class UStaticMesh> CorrectStaticMesh;                              // 0x0BC8 (size: 0x28)
    double LiquidValue;                                                               // 0x0BF0 (size: 0x8)

    void OnRep_LiquidValue();
    void UpdateLiquidVisuals(double Value);
    void RetryLiquidVisualUpdate();
    void Server_OnLiquidValueUpdated();
    void ReceiveBeginPlay();
    void SetMaterialProperties();
    void OnMeshComponentReady(class UMeshComponent* MeshComponent, bool FirstPerson);
    void ExecuteUbergraph_Item_Consumable_Liquid(int32 EntryPoint);
}; // Size: 0xBF8

#endif
