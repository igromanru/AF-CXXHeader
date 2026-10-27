#ifndef UE4SS_SDK_WBP_ModioDefaultIconButton_HPP
#define UE4SS_SDK_WBP_ModioDefaultIconButton_HPP

class UWBP_ModioDefaultIconButton_C : public UModioDefaultIconButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x03C8 (size: 0x8)
    class UModioDefaultImage* ButtonIcon;                                             // 0x03D0 (size: 0x8)
    class UGridPanel* ContentPanel;                                                   // 0x03D8 (size: 0x8)
    class UModioDefaultBorder* HighlightBorder;                                       // 0x03E0 (size: 0x8)
    class UModioDefaultTextBlock* LabelWidget;                                        // 0x03E8 (size: 0x8)
    FLinearColorRef NormalColor;                                                      // 0x03F0 (size: 0x18)
    FLinearColorRef SelectedColor;                                                    // 0x0408 (size: 0x18)
    FLinearColorRef HoveredColor;                                                     // 0x0420 (size: 0x18)
    bool bFreezeBorderColorOnSelection;                                               // 0x0438 (size: 0x1)
    FLinearColorRef TextColor;                                                        // 0x043C (size: 0x18)
    FLinearColorRef SelectedTextColor;                                                // 0x0454 (size: 0x18)
    bool bSwapIconSide;                                                               // 0x046C (size: 0x1)
    FSlateBrush Icon;                                                                 // 0x0470 (size: 0xD0)
    FHAlignOverride HorizontalAlignmentOverride;                                      // 0x0540 (size: 0x2)
    FSlateFontInfoOverride FontProperties;                                            // 0x0548 (size: 0x68)
    FHAlignOverride TextAlignment;                                                    // 0x05B0 (size: 0x2)
    FTextTransformOverride TextTransform;                                             // 0x05B2 (size: 0x2)
    FLinearColorRef IconColor;                                                        // 0x05B4 (size: 0x18)
    FLinearColorRef SelectedIconColor;                                                // 0x05CC (size: 0x18)
    bool bDisplayText;                                                                // 0x05E4 (size: 0x1)
    FLinearColorRef BorderColorToFreeze;                                              // 0x05E8 (size: 0x18)
    bool bFreezeBorderColor;                                                          // 0x0600 (size: 0x1)
    bool bUseBorder;                                                                  // 0x0601 (size: 0x1)
    class UObject* HighlightBorderOverrideImage;                                      // 0x0608 (size: 0x8)
    class UObject* BackgroundBorderOverrideImage;                                     // 0x0610 (size: 0x8)
    FLinearColorRef SelectedBorderColor;                                              // 0x0618 (size: 0x18)
    FMargin ContentPadding;                                                           // 0x0630 (size: 0x10)
    FLinearColorRef NormalBorderColor;                                                // 0x0640 (size: 0x18)

    void SetBorderBrushes();
    void SetBorder();
    void FreezeBorderColor(bool bFreeze, FLinearColorRef ColorToFreeze);
    void SetHoverBorderColor(FLinearColorRef NewColor);
    void SetBackgroundColor(FLinearColorRef NewColor);
    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetHighlightBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void SetIconColor(const FLinearColorRef& Target);
    void ApplyContentAlignmentOverride();
    void SetIconSide();
    void GetImageWidget();
    void GetLabelWidget();
    void OnSelectionStateChanged(bool bNewSelectionState);
    void SetSelectedVisualState();
    void SetNormalVisualState(bool Unhover);
    void SetHoveredVisualState();
    void SetTextColor(const FLinearColorRef& Target);
    void OnUnhovered();
    void OnHovered();
    void PreConstruct(bool IsDesignTime);
    void BP_OnDeselected();
    void BP_OnHovered();
    void BP_OnUnhovered();
    void BP_OnSelected();
    void ExecuteUbergraph_WBP_ModioDefaultIconButton(int32 EntryPoint);
}; // Size: 0x658

#endif
