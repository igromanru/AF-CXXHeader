#ifndef UE4SS_SDK_W_SearchableComboBox_HPP
#define UE4SS_SDK_W_SearchableComboBox_HPP

class UW_SearchableComboBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* DropDown;                                                          // 0x02E8 (size: 0x8)
    class UListView* ListView_38;                                                     // 0x02F0 (size: 0x8)
    class UEditableText* SearchText;                                                  // 0x02F8 (size: 0x8)
    class UButton* SelectedButton;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* SelectedText;                                                   // 0x0308 (size: 0x8)
    FW_SearchableComboBox_COnValueApplied OnValueApplied;                             // 0x0310 (size: 0x10)
    void OnValueApplied(FName Row, double Value);
    TArray<FString> ListNames;                                                        // 0x0320 (size: 0x10)
    TMap<FString, UW_SearchableComboObject_C*> ListObjects;                           // 0x0330 (size: 0x50)
    FString SelectedValue;                                                            // 0x0380 (size: 0x10)
    bool ExternallyOpened;                                                            // 0x0390 (size: 0x1)
    bool UseFuzzySearch;                                                              // 0x0391 (size: 0x1)
    FW_SearchableComboBox_COnDropDownManuallyOpened OnDropDownManuallyOpened;         // 0x0398 (size: 0x10)
    void OnDropDownManuallyOpened();

    void SearchCommitted();
    void SetListFromStrings(TArray<FString>& Names, bool Sort);
    void SetListFromNames(TArray<FName>& Names, bool Sort);
    void OptionSelected(FString Option);
    void GetSelectedValue(bool& Success, FString& SelectedValue);
    void SetSelectedValue(FString Value);
    void FilterList();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_SearchableComboBox_SearchText_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_SearchableComboBox_SelectedButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_SearchableComboBox_ListView_38_K2Node_ComponentBoundEvent_3_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__W_SearchableComboBox_SearchText_K2Node_ComponentBoundEvent_5_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExternalOpenCombo();
    void ExecuteUbergraph_W_SearchableComboBox(int32 EntryPoint);
    void OnDropDownManuallyOpened__DelegateSignature();
    void OnValueApplied__DelegateSignature(FName Row, double Value);
}; // Size: 0x3A8

#endif
