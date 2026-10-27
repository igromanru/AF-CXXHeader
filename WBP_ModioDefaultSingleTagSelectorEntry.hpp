#ifndef UE4SS_SDK_WBP_ModioDefaultSingleTagSelectorEntry_HPP
#define UE4SS_SDK_WBP_ModioDefaultSingleTagSelectorEntry_HPP

class UWBP_ModioDefaultSingleTagSelectorEntry_C : public UModioModTagSelectorEntry
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UWBP_ModioDefaultSlottedButton_C* Button;                                   // 0x0398 (size: 0x8)
    class UModioDefaultImage* CheckboxIMG;                                            // 0x03A0 (size: 0x8)
    class UModioDefaultTextBlock* Label;                                              // 0x03A8 (size: 0x8)
    FSlateBrush RadioButton_Selected;                                                 // 0x03B0 (size: 0xD0)
    FSlateBrush RadioButton_Unselected;                                               // 0x0480 (size: 0xD0)

    void ItemSelectionChangedHandler(bool bIsSelected);
    void GetRadioButtonImageWidget(TScriptInterface<class IModioUIImageDisplayWidget>& RadioButtonImage);
    void GetWidgetToFocus(EUINavigation NavigationType);
    void OnSetDataSource(class UObject* InDataSource);
    void UpdateSelectedVisualState(bool Index);
    void GetClickableWidget();
    void GetTagLabelWidget();
    void BP_OnEntryReleased();
    void SetDataSource(class UObject* InDataSource);
    void SetSelectedState(bool bNewSelectedState);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_WBP_ModioDefaultSingleTagSelectorEntry(int32 EntryPoint);
}; // Size: 0x550

#endif
