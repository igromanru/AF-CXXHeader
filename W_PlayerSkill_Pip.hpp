#ifndef UE4SS_SDK_W_PlayerSkill_Pip_HPP
#define UE4SS_SDK_W_PlayerSkill_Pip_HPP

class UW_PlayerSkill_Pip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Expand;                                                   // 0x02E8 (size: 0x8)
    class UButton* HoverButton;                                                       // 0x02F0 (size: 0x8)
    class UImage* PerkIcon;                                                           // 0x02F8 (size: 0x8)
    class UBorder* PipBorder;                                                         // 0x0300 (size: 0x8)
    class USpacer* RightSpacer;                                                       // 0x0308 (size: 0x8)
    class UProgressBar* SkillProgressBar;                                             // 0x0310 (size: 0x8)
    int32 PipIndex;                                                                   // 0x0318 (size: 0x4)
    FSkillPerkRowHandle Perk;                                                         // 0x0320 (size: 0x20)

    bool IsInteractable();
    void SetPerk(FSkillPerkRowHandle RowHandle);
    void UpdateTooltip();
    void SetPipState(double Percentage, bool Disabled, FText Disabled_HoverText);
    void OnLoaded_257F65094F6833573A3B8EB117DAFA66(class UObject* Loaded);
    void AsyncLoad_PerkIcon(TSoftObjectPtr<UTexture2D> Icon);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__W_PlayerSkill_Pip_Button_201_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_PlayerSkill_Pip_Button_201_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_W_PlayerSkill_Pip(int32 EntryPoint);
}; // Size: 0x340

#endif
