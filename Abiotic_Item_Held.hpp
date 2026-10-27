#ifndef UE4SS_SDK_Abiotic_Item_Held_HPP
#define UE4SS_SDK_Abiotic_Item_Held_HPP

class AAbiotic_Item_Held_C : public AAbiotic_Item_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B50 (size: 0x8)

    void UpdateMeshMaterials();
    void Server_GetAmmoConsumeAmount(double ChargeAmount, int32& AmountToConsume);
    void Local_GetOverrideAmmoIcon(bool& Handled, TSoftObjectPtr<class UTexture2D>& Icon);
    void Local_InteractWithLiquidContainer(class ADeployed_LiquidContainer_ParentBP_C* Container, bool& Handled);
    void Server_InteractWithLiquidContainer(class ADeployed_LiquidContainer_ParentBP_C* Container, bool& Handled);
    void CanOverrideInteractWithLiquidContainer(ELiquidType CurrentLiquid, bool& CanInteract);
    void Should Override Sprint Action(bool& Override);
    void ReceiveBeginPlay();
    void UpdateItemActionDisplay(bool bUsingGamepad);
    void ExecuteUbergraph_Abiotic_Item_Held(int32 EntryPoint);
}; // Size: 0xB58

#endif
