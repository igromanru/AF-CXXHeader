#ifndef UE4SS_SDK_W_RecipeFilterTab_HPP
#define UE4SS_SDK_W_RecipeFilterTab_HPP

class UW_RecipeFilterTab_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Start_Glow;                                               // 0x02E8 (size: 0x8)
    class UBorder* Border_InteractBlocker;                                            // 0x02F0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x02F8 (size: 0x8)
    class UImage* Icon;                                                               // 0x0300 (size: 0x8)
    class UImage* NewItem_Icon;                                                       // 0x0308 (size: 0x8)
    class UImage* ResearchableItem_Icon;                                              // 0x0310 (size: 0x8)
    TEnumAsByte<E_RecipeCategory::Type> Recipe Category;                              // 0x0318 (size: 0x1)
    class UTexture2D* Icon_Texture;                                                   // 0x0320 (size: 0x8)
    FLinearColor Icon_UncheckedColor;                                                 // 0x0328 (size: 0x10)
    FLinearColor Icon_CheckedColor;                                                   // 0x0338 (size: 0x10)
    FW_RecipeFilterTab_CTabCheckboxSelected TabCheckboxSelected;                      // 0x0348 (size: 0x10)
    void TabCheckboxSelected(class UW_RecipeFilterTab_C* Tab, bool Favorites);
    FText DisplayText;                                                                // 0x0358 (size: 0x10)
    bool Favorites;                                                                   // 0x0368 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void SetNewCheckState(ECheckBoxState InCheckedState);
    void BndEvt__W_RecipeFilterTab_CheckBox_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void IconTab_UpdateGlowEffectState(bool Stop);
    void IconTabUpdateResearchState(bool Researched?);
    void Construct();
    void IconTabUpdateState(bool NeedsResearch?, bool NewItem?);
    void ExecuteUbergraph_W_RecipeFilterTab(int32 EntryPoint);
    void TabCheckboxSelected__DelegateSignature(class UW_RecipeFilterTab_C* Tab, bool Favorites);
}; // Size: 0x369

#endif
