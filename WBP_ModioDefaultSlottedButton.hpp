#ifndef UE4SS_SDK_WBP_ModioDefaultSlottedButton_HPP
#define UE4SS_SDK_WBP_ModioDefaultSlottedButton_HPP

class UWBP_ModioDefaultSlottedButton_C : public UModioButtonWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UModioDefaultBorder* BackgroundBorder;                                      // 0x0380 (size: 0x8)
    class UNamedSlot* ContentSlot;                                                    // 0x0388 (size: 0x8)
    FLinearColorRef NormalColor;                                                      // 0x0390 (size: 0x18)
    FLinearColorRef SelectedColor;                                                    // 0x03A8 (size: 0x18)
    FLinearColorRef HoveredColor;                                                     // 0x03C0 (size: 0x18)
    FLinearColorRef TextColor;                                                        // 0x03D8 (size: 0x18)

    void GetBackgroundBorderWidget(TScriptInterface<class IModioUIHasConfigurableColor>& NewParam);
    void OnSelectionStateChanged(bool bNewSelectionState);
    void SetSelectedVisualState();
    void SetNormalVisualState();
    void SetHoveredVisualState();
    void OnUnhovered();
    void OnHovered();
    void PreConstruct(bool IsDesignTime);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void SetSelectedState(bool bNewSelectedState);
    void ExecuteUbergraph_WBP_ModioDefaultSlottedButton(int32 EntryPoint);
}; // Size: 0x3F0

#endif
