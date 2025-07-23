#ifndef UE4SS_SDK_W_TextChatBox_HPP
#define UE4SS_SDK_W_TextChatBox_HPP

class UW_TextChatBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UBackgroundBlur* BGBlur;                                                    // 0x02F0 (size: 0x8)
    class UScrollBox* ChatScrollBox;                                                  // 0x02F8 (size: 0x8)
    class UVerticalBox* TextChat_Vbox;                                                // 0x0300 (size: 0x8)
    class UEditableTextBox* TextInputBox;                                             // 0x0308 (size: 0x8)
    TEnumAsByte<E_AbioticWidgetVisbility::Type> CurrentChatVisiblity;                 // 0x0310 (size: 0x1)
    FW_TextChatBox_CChatBoxToggled ChatBoxToggled;                                    // 0x0318 (size: 0x10)
    void ChatBoxToggled(bool Opened);

    void CheckForTooManyTextLines(int32 MaxLines, bool& RemovedLine);
    void OnFailure_D45ABECA493003D81C88129368383068(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_D45ABECA493003D81C88129368383068(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void ChangeTextChatVisibility(TEnumAsByte<E_AbioticWidgetVisbility::Type> Visibility);
    void BndEvt__TextInputBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void DisplayTextChatMessage(FString Prefix, FLinearColor PrefixColor, FString MessageContent, FLinearColor MessageColor, bool IsPlayerChatMessage);
    void ChatMessageReady(FString Text1, FString text2);
    void ExecuteUbergraph_W_TextChatBox(int32 EntryPoint);
    void ChatBoxToggled__DelegateSignature(bool Opened);
}; // Size: 0x328

#endif
