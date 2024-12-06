#ifndef UE4SS_SDK_W_ServerBrowser_HPP
#define UE4SS_SDK_W_ServerBrowser_HPP

class UW_ServerBrowser_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PopJoinButton;                                            // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UImage* BG_TopBar;                                                          // 0x02F8 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x0300 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x0308 (size: 0x8)
    class UCheckBox* CheckBox_1;                                                      // 0x0310 (size: 0x8)
    class UCheckBox* CheckBox_ShowDedicated;                                          // 0x0318 (size: 0x8)
    class UCheckBox* CheckBox_ShowLocked;                                             // 0x0320 (size: 0x8)
    class UCheckBox* Checkbox_ShowModified;                                           // 0x0328 (size: 0x8)
    class UEditableTextBox* EditableTextBox;                                          // 0x0330 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x0338 (size: 0x8)
    class UTextBlock* FilterText;                                                     // 0x0340 (size: 0x8)
    class UListView* ListView_169;                                                    // 0x0348 (size: 0x8)
    class UImage* LoadingRunner;                                                      // 0x0350 (size: 0x8)
    class UTextBlock* NoWorkNotice;                                                   // 0x0358 (size: 0x8)
    class UTextBlock* PingTitleText;                                                  // 0x0360 (size: 0x8)
    class UTextBlock* PlayersTitleText;                                               // 0x0368 (size: 0x8)
    class UTextBlock* SearchText;                                                     // 0x0370 (size: 0x8)
    class UTextBlock* ServerInfo_PingText;                                            // 0x0378 (size: 0x8)
    class UTextBlock* ServerInfo_PlayersText;                                         // 0x0380 (size: 0x8)
    class UImage* ServerInfo_ProgressImage;                                           // 0x0388 (size: 0x8)
    class UTextBlock* ServerInfo_StoryProgressDescription;                            // 0x0390 (size: 0x8)
    class UTextBlock* ServerInfo_StoryProgressText;                                   // 0x0398 (size: 0x8)
    class UCanvasPanel* ServerInfoBox;                                                // 0x03A0 (size: 0x8)
    class UTextBlock* ServerTitleText;                                                // 0x03A8 (size: 0x8)
    class UTextBlock* SeverCount_Text;                                                // 0x03B0 (size: 0x8)
    class UTextBlock* ShowDedicated_Text;                                             // 0x03B8 (size: 0x8)
    class UTextBlock* showEmptyText;                                                  // 0x03C0 (size: 0x8)
    class UTextBlock* showFullText;                                                   // 0x03C8 (size: 0x8)
    class UTextBlock* ShowLocked_Text;                                                // 0x03D0 (size: 0x8)
    class UTextBlock* ShowModified_Text;                                              // 0x03D8 (size: 0x8)
    class UTextBlock* showPasswordText;                                               // 0x03E0 (size: 0x8)
    class UTextBlock* StatusText;                                                     // 0x03E8 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Back;                                 // 0x03F0 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_DirectConnect;                        // 0x03F8 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Join;                                 // 0x0400 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_LANSwitch;                            // 0x0408 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Refresh;                              // 0x0410 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0418 (size: 0x8)
    bool SearchLAN;                                                                   // 0x0420 (size: 0x1)
    TArray<FBlueprintSessionResult> Results;                                          // 0x0428 (size: 0x10)
    FBlueprintSessionResult SelectedSession;                                          // 0x0438 (size: 0x120)
    bool Empty Servers Only;                                                          // 0x0558 (size: 0x1)
    bool Non Empty Servers Only;                                                      // 0x0559 (size: 0x1)
    FString PasswordEntered;                                                          // 0x0560 (size: 0x10)
    bool JoiningInProgress;                                                           // 0x0570 (size: 0x1)
    class UW_PopupPleaseWait_C* PleaseWaitPopup;                                      // 0x0578 (size: 0x8)
    TArray<class USessionResultItem*> SessionResults;                                 // 0x0580 (size: 0x10)
    FString FilterString;                                                             // 0x0590 (size: 0x10)

    void ForceJoinSession(FBlueprintSessionResult Session);
    void ToggleRefreshButtons(bool Enabled);
    void UpdateStatusText(FText Text, TEnumAsByte<ECriticalityLevels::Type> CriticalityLevel);
    void UpdateSelectedServerInfo(FBlueprintSessionResult Session, FName StoryProgressRowName);
    void ToggleSearchStatus(bool ShowText, FText Text, bool ShowThrobber);
    void OnFailure_06683391485E0CE7EB05878C8E49BF7B(const TArray<FBlueprintSessionResult>& Results);
    void OnSuccess_06683391485E0CE7EB05878C8E49BF7B(const TArray<FBlueprintSessionResult>& Results);
    void OnFailure_511C492E423F047E9329F9A576EFA5A5();
    void OnSuccess_511C492E423F047E9329F9A576EFA5A5();
    void BndEvt__W_ServerBrowser_W_MainMenuButton_Back_1_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void BndEvt__W_ServerBrowser_W_MainMenuButton_Back_K2Node_ComponentBoundEvent_4_ButtonPressed__DelegateSignature();
    void RefreshSessionList();
    void BndEvt__W_ServerBrowser_W_MainMenuButton_LANSwitch_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void Construct();
    void BndEvt__W_ServerBrowser_W_MainMenuButton_Join_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void ContinueJoin();
    void TestPassword();
    void ClosePopup();
    void BeginJoin();
    void ModJoin_Yes();
    void ModJoin_No();
    void FilterSessions();
    void BndEvt__W_ServerBrowser_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_ServerBrowser_CheckBox_ShowDedicated_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_ServerBrowser_CheckBox_ShowLocked_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_ServerBrowser_Checkbox_ShowModified_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_ServerBrowser_ListView_169_K2Node_ComponentBoundEvent_8_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item);
    void BndEvt__W_ServerBrowser_W_MainMenuButton_DirectConnect_K2Node_ComponentBoundEvent_9_ButtonPressed__DelegateSignature();
    void DirectConnect_No();
    void DirectConnect_Yes();
    void ExecuteUbergraph_W_ServerBrowser(int32 EntryPoint);
}; // Size: 0x5A0

#endif
