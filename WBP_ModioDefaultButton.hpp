#ifndef UE4SS_SDK_WBP_ModioDefaultButton_HPP
#define UE4SS_SDK_WBP_ModioDefaultButton_HPP

class UWBP_ModioDefaultButton_C : public UModioDefaultTextButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x0398 (size: 0x8)
    class UHorizontalBox* ContentBox;                                                 // 0x03A0 (size: 0x8)
    class UModioDefaultBorder* HighlightBorder;                                       // 0x03A8 (size: 0x8)
    class UModioDefaultTextBlock* LabelWidget;                                        // 0x03B0 (size: 0x8)
    FLinearColorRef NormalColor;                                                      // 0x03B8 (size: 0x18)
    FLinearColorRef SelectedColor;                                                    // 0x03D0 (size: 0x18)
    FLinearColorRef HoveredColor;                                                     // 0x03E8 (size: 0x18)
    FLinearColorRef TextColor;                                                        // 0x0400 (size: 0x18)
    FLinearColorRef SelectedTextColor;                                                // 0x0418 (size: 0x18)
    bool bUseBorder;                                                                  // 0x0430 (size: 0x1)
    FIntegerOverride TextSize;                                                        // 0x0434 (size: 0x8)
    FSlateFontInfoOverride FontProperties;                                            // 0x0440 (size: 0x68)
    FHAlignOverride TextAlignment;                                                    // 0x04A8 (size: 0x2)
    FTextTransformOverride TextTransform;                                             // 0x04AA (size: 0x2)
    class UObject* HighlightBorderOverrideImage;                                      // 0x04B0 (size: 0x8)
    class UObject* BackgroundBorderOverrideImage;                                     // 0x04B8 (size: 0x8)
    FLinearColorRef NormalBorderColor;                                                // 0x04C0 (size: 0x18)
    FLinearColorRef SelectedBorderColor;                                              // 0x04D8 (size: 0x18)
    FLinearColorRef HoveredBorderColor;                                               // 0x04F0 (size: 0x18)
    FMargin ContentPadding;                                                           // 0x0508 (size: 0x10)

    void SetBorderBrushes();
    void SetBackgroundColor(FLinearColorRef NewColor);
    void SetHoverBorderColor(FLinearColorRef NewColor);
    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetHighlightBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetSelectedState(bool& bCurrentSelectedState);
    void SetTextOverrides();
    void SetTextSize();
    void SetBorder();
    void GetLabelWidget();
    void OnSelectionStateChanged(bool bNewSelectionState);
    void SetSelectedVisualState();
    void SetNormalVisualState();
    void SetHoveredVisualState();
    void SetTextColor(const FLinearColorRef& Target);
    void OnUnhovered();
    void OnHovered();
    void PreConstruct(bool IsDesignTime);
    void BP_OnDeselected();
    void BP_OnSelected();
    void BP_OnUnhovered();
    void BP_OnHovered();
    void ExecuteUbergraph_WBP_ModioDefaultButton(int32 EntryPoint);
}; // Size: 0x518

#endif
