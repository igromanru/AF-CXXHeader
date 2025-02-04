#ifndef UE4SS_SDK_Abiotic_Item_Held_HPP
#define UE4SS_SDK_Abiotic_Item_Held_HPP

class AAbiotic_Item_Held_C : public AAbiotic_Item_ParentBP_C
{

    void Server_GetAmmoConsumeAmount(double ChargeAmount, int32& AmountToConsume);
    void Local_GetOverrideAmmoIcon(bool& Handled, TSoftObjectPtr<UTexture2D>& Icon);
    void Local_InteractWithLiquidContainer(class ADeployed_LiquidContainer_ParentBP_C* Container, bool& Handled);
    void Server_InteractWithLiquidContainer(class ADeployed_LiquidContainer_ParentBP_C* Container, bool& Handled);
    void CanOverrideInteractWithLiquidContainer(TEnumAsByte<E_LiquidType::Type> CurrentLiquid, bool& CanInteract);
    void Should Override Sprint Action(bool& Override);
}; // Size: 0xB11

#endif
