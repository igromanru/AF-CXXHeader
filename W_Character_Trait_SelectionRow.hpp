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
    FTraitRowHandle TraitRowName;                                                     // 0x0310 (size: 0x10)
    FTrait TraitData;                                                                 // 0x0320 (size: 0xE0)
    FText Trait Description;                                                          // 0x0400 (size: 0x10)
    class UW_Character_Trait_Selection_C* ParentTraitSelect;                          // 0x0410 (size: 0x8)
    FString SkillChangeList;                                                          // 0x0418 (size: 0x10)
    TArray<FTrait> BlockingTraits;                                                    // 0x0428 (size: 0x10)
    class UW_GenericTooltip_C* MyTooltip;                                             // 0x0438 (size: 0x8)

    void Deselect();
    void ToggleDisableTrait(bool Disable, FTrait CausedByTrait, bool RemoveAllTraitBlockers);
    void PopulateTooltipInfo(const TMap<ECharacterSkills, int32>& SkillBonuses);
    void OnLoaded_F1576AEC4C4F71B4946602A537D691A5(class UObject* Loaded);
    void Construct();
    void BndEvt__TraitCheckbox_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_Character_Trait_SelectionRow(int32 EntryPoint);
}; // Size: 0x440

#endif
