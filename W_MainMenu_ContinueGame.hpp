#ifndef UE4SS_SDK_W_MainMenu_ContinueGame_HPP
#define UE4SS_SDK_W_MainMenu_ContinueGame_HPP

class UW_MainMenu_ContinueGame_C : public UW_HostMenu_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UCanvasPanel* CanvasPanel_Sandbox;                                          // 0x02F0 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_ApplySandbox;                         // 0x02F8 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Back;                                 // 0x0300 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Host;                                 // 0x0308 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0310 (size: 0x8)
    class UW_SettingsPage_Sandbox_C* W_SettingsPage_Sandbox;                          // 0x0318 (size: 0x8)
    class UW_WorldSelectMenu_C* W_WorldSelectMenu;                                    // 0x0320 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0328 (size: 0x8)
    class UTextBlock* WorldCountText;                                                 // 0x0330 (size: 0x8)
    FName MapToHost;                                                                  // 0x0338 (size: 0x8)
    bool HostLAN;                                                                     // 0x0340 (size: 0x1)
    class UW_MenuPopup_YesNo_C* CurrentPopup;                                         // 0x0348 (size: 0x8)
    class UW_PopupPleaseWait_C* PleaseWaitPopup;                                      // 0x0350 (size: 0x8)
    FString LastSandboxFolder;                                                        // 0x0358 (size: 0x10)

    void SetMapToHost();
    void CheckCloudSaveConflict(bool& Conflict, int32& MainSaveMinutes, int32& BackupSaveMinutes);
    void SaveWorld_F1563F334F0772C9F353B69E4BA034B1(bool bSuccess);
    void BndEvt__W_MainMenu_HostGame_W_MainMenuButton_Back_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_HostGame_W_MainMenuButton_Host_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void HostGame();
    void OnHostSuccess();
    void OnHostFail();
    void HostError_Popup_Remove();
    void NoPasswordHostPublic();
    void Conflict_Restore();
    void Conflict_DontRestore();
    void RemovePopup();
    void BndEvt__W_MainMenu_ContinueGame_W_WorldSelectMenu_K2Node_ComponentBoundEvent_2_SandboxSettingsPressed__DelegateSignature(FString FolderName);
    void BndEvt__W_MainMenu_ContinueGame_W_MainMenuButton_ApplySandbox_K2Node_ComponentBoundEvent_3_ButtonPressed__DelegateSignature();
    void CloseSandboxOptions();
    void Construct();
    void WorldEntriesUpdated();
    void LANConfirm();
    void ExecuteUbergraph_W_MainMenu_ContinueGame(int32 EntryPoint);
}; // Size: 0x368

#endif
