#ifndef UE4SS_SDK_W_MainMenuButton_HPP
#define UE4SS_SDK_W_MainMenuButton_HPP

class UW_MainMenuButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* HoverPop;                                                 // 0x02E8 (size: 0x8)
    class UButton* AbioticButton;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* ButtonLabelText;                                                // 0x02F8 (size: 0x8)
    class UImage* HoverGlow;                                                          // 0x0300 (size: 0x8)
    class UImage* IconImage;                                                          // 0x0308 (size: 0x8)
    FText ButtonText;                                                                 // 0x0310 (size: 0x10)
    FW_MainMenuButton_CButtonPressed ButtonPressed;                                   // 0x0320 (size: 0x10)
    void ButtonPressed();
    FText OriginalText;                                                               // 0x0330 (size: 0x10)
    FLinearColor DefaultTextColor;                                                    // 0x0340 (size: 0x10)
    TEnumAsByte<EHorizontalAlignment> TextJustification;                              // 0x0350 (size: 0x1)
    class UTexture2D* Icon;                                                           // 0x0358 (size: 0x8)
    FLinearColor HoverColor;                                                          // 0x0360 (size: 0x10)

    void ChangeLabelText(FText NewText, bool ReturnToOriginal);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__AbioticButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void OnHover();
    void OnUnhover();
    void BndEvt__W_MainMenuButton_AbioticButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__W_MainMenuButton_AbioticButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_W_MainMenuButton(int32 EntryPoint);
    void ButtonPressed__DelegateSignature();
}; // Size: 0x370

#endif
