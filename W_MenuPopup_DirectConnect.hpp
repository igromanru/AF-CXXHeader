#ifndef UE4SS_SDK_W_MenuPopup_DirectConnect_HPP
#define UE4SS_SDK_W_MenuPopup_DirectConnect_HPP

class UW_MenuPopup_DirectConnect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* WiggleErrorText;                                          // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UButton* Button_IP;                                                         // 0x02F8 (size: 0x8)
    class UButton* Button_JoinCode;                                                   // 0x0300 (size: 0x8)
    class UButton* Button_No;                                                         // 0x0308 (size: 0x8)
    class UButton* Button_ShowPassword;                                               // 0x0310 (size: 0x8)
    class UButton* Button_Yes;                                                        // 0x0318 (size: 0x8)
    class UVerticalBox* ConnectType_IP;                                               // 0x0320 (size: 0x8)
    class UVerticalBox* ConnectType_JoinCode;                                         // 0x0328 (size: 0x8)
    class UTextBlock* ErrorText;                                                      // 0x0330 (size: 0x8)
    class UImage* Image;                                                              // 0x0338 (size: 0x8)
    class UImage* Image_159;                                                          // 0x0340 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0348 (size: 0x8)
    class UImage* RunnerGuy;                                                          // 0x0350 (size: 0x8)
    class UEditableTextBox* TextInput_IP;                                             // 0x0358 (size: 0x8)
    class UEditableTextBox* TextInput_JoinCode;                                       // 0x0360 (size: 0x8)
    class UEditableTextBox* TextInput_Password;                                       // 0x0368 (size: 0x8)
    class UEditableTextBox* TextInput_Port;                                           // 0x0370 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_ConnectType;                                // 0x0378 (size: 0x8)
    FW_MenuPopup_DirectConnect_CYesClicked YesClicked;                                // 0x0380 (size: 0x10)
    void YesClicked();
    FW_MenuPopup_DirectConnect_CNoClicked NoClicked;                                  // 0x0390 (size: 0x10)
    void NoClicked();
    TArray<FString> ABC_Strings;                                                      // 0x03A0 (size: 0x10)
    TArray<FString> IP_Strings;                                                       // 0x03B0 (size: 0x10)
    TArray<FString> PortStrings;                                                      // 0x03C0 (size: 0x10)
    int32 Character_Limit;                                                            // 0x03D0 (size: 0x4)
    bool IsDefaultText;                                                               // 0x03D4 (size: 0x1)
    bool CharIsOnRepeat;                                                              // 0x03D5 (size: 0x1)
    bool IsJoinCode;                                                                  // 0x03D6 (size: 0x1)

    void FilterAndClampText(const FText& InText, bool AllowSpecialCharacters, const TArray<FString>& ABCStrings, FText& OutputPin);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void BndEvt__W_BetaNotice_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_BetaNotice_Button_Enter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__W_MenuPopup_TextInputBox_EditableTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Destruct();
    void BndEvt__W_MenuPopup_TextInputBox_EditableTextInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_HostGameSetup_Button_ShowPassword_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_HostGameSetup_Button_ShowPassword_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_MenuPopup_TextInputBox_EditableTextInput_2_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_MenuPopup_TextInputBox_EditableTextInput_2_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ClickYes();
    void ClickNo();
    void HandleButtonClick();
    void BndEvt__W_MenuPopup_DirectConnect_TextInput_Port_K2Node_ComponentBoundEvent_8_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_MenuPopup_DirectConnect_TextInput_Port_K2Node_ComponentBoundEvent_9_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_MenuPopup_DirectConnect_TextInput_JoinCode_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_MenuPopup_DirectConnect_TextInput_JoinCode_K2Node_ComponentBoundEvent_11_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_MenuPopup_DirectConnect_Button_JoinCode_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_MenuPopup_DirectConnect_Button_IP_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void DisplayErrorText(bool Remove, FText NewText);
    void ExecuteUbergraph_W_MenuPopup_DirectConnect(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x3D7

#endif
