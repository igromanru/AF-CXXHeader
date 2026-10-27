#ifndef UE4SS_SDK_WBP_ModioFilterCounterButton_HPP
#define UE4SS_SDK_WBP_ModioFilterCounterButton_HPP

class UWBP_ModioFilterCounterButton_C : public UModioFilterCounterButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x03A0 (size: 0x8)
    class UWBP_ModioTagCounterIcon_C* FilterCounter;                                  // 0x03A8 (size: 0x8)
    class UModioDefaultBorder* HighlightBorder;                                       // 0x03B0 (size: 0x8)
    class UModioDefaultTextBlock* LabelWidget;                                        // 0x03B8 (size: 0x8)
    FLinearColorRef NormalColor;                                                      // 0x03C0 (size: 0x18)
    FLinearColorRef SelectedColor;                                                    // 0x03D8 (size: 0x18)
    FLinearColorRef HoveredColor;                                                     // 0x03F0 (size: 0x18)
    FLinearColorRef TextColor;                                                        // 0x0408 (size: 0x18)
    FLinearColorRef SelectedTextColor;                                                // 0x0420 (size: 0x18)
    FHAlignOverride HorizontalAlignmentOverride;                                      // 0x0438 (size: 0x2)
    FLinearColorRef NormalBorderColor;                                                // 0x043C (size: 0x18)

    void OnPreConstruct();
    void GetLabelWidget_ConfigurableColor(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetHighlightBorder(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetBackgroundBorder(TScriptInterface<class IModioUIHasConfigurableColor>& Border);
    void GetFilterCounterWidget();
    void GetLabelWidget();
    void OnSelectionStateChanged(bool bNewSelectionState);
    void SetSelectedVisualState();
    void SetNormalVisualState();
    void SetHoveredVisualState();
    void OnUnhovered();
    void OnHovered();
    void PreConstruct(bool IsDesignTime);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void BP_OnSelected();
    void BP_OnDeselected();
    void ExecuteUbergraph_WBP_ModioFilterCounterButton(int32 EntryPoint);
}; // Size: 0x454

#endif
