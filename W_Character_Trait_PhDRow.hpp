#ifndef UE4SS_SDK_W_Character_Trait_PhDRow_HPP
#define UE4SS_SDK_W_Character_Trait_PhDRow_HPP

class UW_Character_Trait_PhDRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CostCountText;                                                  // 0x02E8 (size: 0x8)
    class UImage* GlowImage;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* JobText;                                                        // 0x02F8 (size: 0x8)
    class UImage* PhDIcon;                                                            // 0x0300 (size: 0x8)
    class UCheckBox* SelectionCheckbox;                                               // 0x0308 (size: 0x8)
    FName JobRow;                                                                     // 0x0310 (size: 0x8)
    FTrait_Struct JobData;                                                            // 0x0318 (size: 0xC8)
    class UW_Character_Trait_Selection_C* ParentTraitSelect;                          // 0x03E0 (size: 0x8)
    bool Selected;                                                                    // 0x03E8 (size: 0x1)
    FString TooltipString;                                                            // 0x03F0 (size: 0x10)
    class UW_GenericTooltip_C* MyTooltip;                                             // 0x0400 (size: 0x8)

    void PopulateTooltipInfo(const TMap<TEnumAsByte<E_CharacterSkills::Type>, int32>& InputPin);
    void OnLoaded_0109B6B84DDAF1B4A66637BAF0B05559(class UObject* Loaded);
    void Construct();
    void BndEvt__SelectionCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Select();
    void ExecuteUbergraph_W_Character_Trait_PhDRow(int32 EntryPoint);
}; // Size: 0x408

#endif
