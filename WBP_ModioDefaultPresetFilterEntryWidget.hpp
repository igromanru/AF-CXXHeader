#ifndef UE4SS_SDK_WBP_ModioDefaultPresetFilterEntryWidget_HPP
#define UE4SS_SDK_WBP_ModioDefaultPresetFilterEntryWidget_HPP

class UWBP_ModioDefaultPresetFilterEntryWidget_C : public UModioPresetFilterEntryWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UWBP_ModioDefaultIconButton_C* ViewButton;                                  // 0x0370 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0378 (size: 0x18)
    FWBP_ModioDefaultPresetFilterEntryWidget_COnClicked OnClicked;                    // 0x0390 (size: 0x10)
    void OnClicked(class UObject* ClickContext);

    void GetWidgetToFocus(EUINavigation NavigationType);
    void GetLabelWidget();
    void OnInternalButtonClicked(class UObject* ClickContext);
    void NotifyClicked();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void AddClickedHandler(const FAddClickedHandlerHandler& Handler);
    void RemoveClickedHandler(const FRemoveClickedHandlerHandler& Handler);
    void EnableClick();
    void DisableClick();
    void SetSelectedState(bool bNewSelectedState);
    void ExecuteUbergraph_WBP_ModioDefaultPresetFilterEntryWidget(int32 EntryPoint);
    void OnClicked__DelegateSignature(class UObject* ClickContext);
}; // Size: 0x3A0

#endif
