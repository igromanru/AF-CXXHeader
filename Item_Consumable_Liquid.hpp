#ifndef UE4SS_SDK_Item_Consumable_Liquid_HPP
#define UE4SS_SDK_Item_Consumable_Liquid_HPP

class AItem_Consumable_Liquid_C : public AItem_Consumable_Offerable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B78 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> CorrectStaticMesh;                                    // 0x0B80 (size: 0x28)
    double LiquidValue;                                                               // 0x0BA8 (size: 0x8)

    void OnRep_LiquidValue();
    void UpdateLiquidVisuals(double Value);
    void RetryLiquidVisualUpdate();
    void Server_OnLiquidValueUpdated();
    void ReceiveBeginPlay();
    void SetMaterialProperties();
    void OnMeshComponentReady(class UMeshComponent* MeshComponent, bool FirstPerson);
    void ExecuteUbergraph_Item_Consumable_Liquid(int32 EntryPoint);
}; // Size: 0xBB0

#endif
