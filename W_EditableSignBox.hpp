#ifndef UE4SS_SDK_W_EditableSignBox_HPP
#define UE4SS_SDK_W_EditableSignBox_HPP

class UW_EditableSignBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x02F0 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02F8 (size: 0x8)
    class UEditableTextBox* TextBox_Line1;                                            // 0x0300 (size: 0x8)
    class UEditableTextBox* TextBox_Line2;                                            // 0x0308 (size: 0x8)
    class UEditableTextBox* TextBox_Line3;                                            // 0x0310 (size: 0x8)
    class ADeployed_Sign_C* PlayerSignObject;                                         // 0x0318 (size: 0x8)
    int32 MaxCharPerLine;                                                             // 0x0320 (size: 0x4)
    FString StartingString;                                                           // 0x0328 (size: 0x10)
    TArray<FString> ABC_Strings;                                                      // 0x0338 (size: 0x10)

    void OnCommitText(TEnumAsByte<ETextCommit::Type> Selection);
    void UI_MonitorTextLength(class UEditableTextBox* TextBotWidget, const FText& InText);
    void CompileStringIntoSaveData(FString& String);
    void BndEvt__W_EditableSignBox_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_EditableSignBox_Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_EditableSignBox_TextBox_Line1_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_EditableSignBox_TextBox_Line2_K2Node_ComponentBoundEvent_4_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_EditableSignBox_TextBox_Line3_K2Node_ComponentBoundEvent_5_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Construct();
    void BndEvt__W_EditableSignBox_TextBox_Line1_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_EditableSignBox_TextBox_Line2_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_EditableSignBox_TextBox_Line3_K2Node_ComponentBoundEvent_8_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_W_EditableSignBox(int32 EntryPoint);
}; // Size: 0x348

#endif
