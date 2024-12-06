#ifndef UE4SS_SDK_W_MenuPopup_TextInputBox_HPP
#define UE4SS_SDK_W_MenuPopup_TextInputBox_HPP

class UW_MenuPopup_TextInputBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* WiggleErrorText;                                          // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UButton* Button_No;                                                         // 0x02F8 (size: 0x8)
    class UButton* Button_ShowPassword;                                               // 0x0300 (size: 0x8)
    class UButton* Button_Yes;                                                        // 0x0308 (size: 0x8)
    class UCircularThrobber* CircularThrobber_0;                                      // 0x0310 (size: 0x8)
    class UEditableTextBox* EditableTextInput;                                        // 0x0318 (size: 0x8)
    class UTextBlock* ErrorText;                                                      // 0x0320 (size: 0x8)
    class UImage* Image;                                                              // 0x0328 (size: 0x8)
    class UImage* Image_159;                                                          // 0x0330 (size: 0x8)
    class UImage* Image_275;                                                          // 0x0338 (size: 0x8)
    class UTextBlock* MainText;                                                       // 0x0340 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x0348 (size: 0x8)
    FW_MenuPopup_TextInputBox_CYesClicked YesClicked;                                 // 0x0350 (size: 0x10)
    void YesClicked();
    FW_MenuPopup_TextInputBox_CNoClicked NoClicked;                                   // 0x0360 (size: 0x10)
    void NoClicked();
    FText Text_InputHint;                                                             // 0x0370 (size: 0x10)
    FText Text_InputDefault;                                                          // 0x0380 (size: 0x10)
    FText Text_Main;                                                                  // 0x0390 (size: 0x10)
    FText Text_Title;                                                                 // 0x03A0 (size: 0x10)
    bool AllowSpecialCharacters;                                                      // 0x03B0 (size: 0x1)
    TArray<FString> ABC_Strings;                                                      // 0x03B8 (size: 0x10)
    int32 Character_Limit;                                                            // 0x03C8 (size: 0x4)
    bool IsDefaultText;                                                               // 0x03CC (size: 0x1)
    bool CharIsOnRepeat;                                                              // 0x03CD (size: 0x1)
    bool Is Password;                                                                 // 0x03CE (size: 0x1)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void DisplayErrorText(bool Remove, FText NewText);
    void BndEvt__W_MenuPopup_TextInputBox_EditableTextInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Destruct();
    void Construct();
    void BndEvt__W_MenuPopup_TextInputBox_EditableTextInput_K2Node_ComponentBoundEvent_3_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__W_HostGameSetup_Button_ShowPassword_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_HostGameSetup_Button_ShowPassword_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__W_BetaNotice_Button_Enter_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_BetaNotice_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_MenuPopup_TextInputBox(int32 EntryPoint);
    void NoClicked__DelegateSignature();
    void YesClicked__DelegateSignature();
}; // Size: 0x3CF

#endif
