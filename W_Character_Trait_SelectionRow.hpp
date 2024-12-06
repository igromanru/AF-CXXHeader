#ifndef UE4SS_SDK_W_Character_Trait_SelectionRow_HPP
#define UE4SS_SDK_W_Character_Trait_SelectionRow_HPP

class UW_Character_Trait_SelectionRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* GlowImage;                                                          // 0x02E8 (size: 0x8)
    class UTextBlock* PointCountText;                                                 // 0x02F0 (size: 0x8)
    class UCheckBox* TraitCheckbox;                                                   // 0x02F8 (size: 0x8)
    class UImage* TraitIcon;                                                          // 0x0300 (size: 0x8)
    class UTextBlock* TraitNameText;                                                  // 0x0308 (size: 0x8)
    FName TraitRowName;                                                               // 0x0310 (size: 0x8)
    FTrait_Struct TraitData;                                                          // 0x0318 (size: 0xC8)
    FText Trait Description;                                                          // 0x03E0 (size: 0x10)
    class UW_Character_Trait_Selection_C* ParentTraitSelect;                          // 0x03F0 (size: 0x8)
    FString SkillChangeList;                                                          // 0x03F8 (size: 0x10)
    TArray<FTrait_Struct> BlockingTraits;                                             // 0x0408 (size: 0x10)
    class UW_GenericTooltip_C* MyTooltip;                                             // 0x0418 (size: 0x8)

    void Deselect();
    void ToggleDisableTrait(bool Disable, FTrait_Struct CausedByTrait, bool RemoveAllTraitBlockers);
    void PopulateTooltipInfo(const TMap<TEnumAsByte<E_CharacterSkills::Type>, int32>& SkillBonuses);
    void OnLoaded_F1576AEC4C4F71B4946602A537D691A5(class UObject* Loaded);
    void Construct();
    void BndEvt__TraitCheckbox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_Character_Trait_SelectionRow(int32 EntryPoint);
}; // Size: 0x420

#endif
