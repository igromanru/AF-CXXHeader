#ifndef UE4SS_SDK_W_EditableIcons_HPP
#define UE4SS_SDK_W_EditableIcons_HPP

class UW_EditableIcons_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x02F0 (size: 0x8)
    class UButton* Button_Cancel;                                                     // 0x02F8 (size: 0x8)
    class UButton* Button_Left;                                                       // 0x0300 (size: 0x8)
    class UButton* Button_Right;                                                      // 0x0308 (size: 0x8)
    class UImage* CraftCount_LeftArrow;                                               // 0x0310 (size: 0x8)
    class UImage* CraftCount_RightArrow;                                              // 0x0318 (size: 0x8)
    class UImage* Icon;                                                               // 0x0320 (size: 0x8)
    class UEditableTextBox* TextBox_Line;                                             // 0x0328 (size: 0x8)
    class AActor* LinkedObject;                                                       // 0x0330 (size: 0x8)
    int32 MaxCharPerLine;                                                             // 0x0338 (size: 0x4)
    FString StartingString;                                                           // 0x0340 (size: 0x10)
    TArray<FString> ABC_Strings;                                                      // 0x0350 (size: 0x10)
    int32 ArrowCount;                                                                 // 0x0360 (size: 0x4)

    void OnCommitText(TEnumAsByte<ETextCommit::Type> Selection);
    void UI_MonitorTextLength(class UEditableTextBox* TextBotWidget, const FText& InText);
    void CompileStringIntoSaveData(FString& String);
    void OnLoaded_811778B2441A371142A5CDBF12E879ED(class UObject* Loaded);
    void OnLoaded_10C25B644D809B6BDA126394E0AE96B4(class UObject* Loaded);
    void OnLoaded_EE6BFEEE40B0896254A76C972A1CC625(class UObject* Loaded);
    void OnLoaded_2671B5614518644019641EBBA42361B4(class UObject* Loaded);
    void OnFailure_C61AE73A4B30D6241240E0979BEB8175(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_C61AE73A4B30D6241240E0979BEB8175(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void BndEvt__W_EditableSignBox_Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_EditableSignBox_Button_Accept_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_EditableSignBox_TextBox_Line1_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Construct();
    void BndEvt__W_EditableIcons_Button_Right_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_EditableIcons_Button_Left_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_EditableIcons(int32 EntryPoint);
}; // Size: 0x364

#endif
