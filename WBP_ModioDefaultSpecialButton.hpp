#ifndef UE4SS_SDK_WBP_ModioDefaultSpecialButton_HPP
#define UE4SS_SDK_WBP_ModioDefaultSpecialButton_HPP

class UWBP_ModioDefaultSpecialButton_C : public UModioDefaultTextButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UNamedSlot* AdditionalContent;                                              // 0x0398 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x03A0 (size: 0x8)
    class UModioDefaultBorder* HighlightBorder;                                       // 0x03A8 (size: 0x8)
    class UModioDefaultTextBlock* LabelWidget;                                        // 0x03B0 (size: 0x8)
    FLinearColorRef NormalColor;                                                      // 0x03B8 (size: 0x18)
    FLinearColorRef SelectedColor;                                                    // 0x03D0 (size: 0x18)
    FLinearColorRef HoveredColor;                                                     // 0x03E8 (size: 0x18)
    FLinearColorRef TextColor;                                                        // 0x0400 (size: 0x18)
    FLinearColorRef SelectedTextColor;                                                // 0x0418 (size: 0x18)
    bool bUseBorder;                                                                  // 0x0430 (size: 0x1)
    FLinearColorRef SelectedBorderColor;                                              // 0x0434 (size: 0x18)
    class UObject* HighlightBorderOverrideImage;                                      // 0x0450 (size: 0x8)
    class UObject* BackgroundBorderOverrideImage;                                     // 0x0458 (size: 0x8)

    void SetBorderBrushes();
    void GetHighlightBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetLabelWidget();
    void OnSelectionStateChanged(bool bNewSelectionState);
    void SetSelectedVisualState();
    void SetNormalVisualState();
    void SetHoveredVisualState();
    void SetTextColor(const FLinearColorRef& Target);
    void SetHoverBorderColor(FLinearColorRef NewColor);
    void SetBackgroundColor(FLinearColorRef NewColor);
    void OnUnhovered();
    void OnHovered();
    void PreConstruct(bool IsDesignTime);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void BP_OnSelected();
    void BP_OnDeselected();
    void ExecuteUbergraph_WBP_ModioDefaultSpecialButton(int32 EntryPoint);
}; // Size: 0x460

#endif
