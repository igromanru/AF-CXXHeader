#ifndef UE4SS_SDK_Item_Consumable_SoupBowl_HPP
#define UE4SS_SDK_Item_Consumable_SoupBowl_HPP

class AItem_Consumable_SoupBowl_C : public AItem_Consumable_Liquid_C
{
    FBuffDebuffRowHandle ChosenBuff;                                                  // 0x0B98 (size: 0x20)

    FName GetOptionalLiquidItemRow();
    void TryApplyConsumableStats(class AAbiotic_Character_ParentBP_C* AffectedCharacter, class AAbiotic_PlayerCharacter_C* UsingCharacter);
}; // Size: 0xBB8

#endif
