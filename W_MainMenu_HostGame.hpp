#ifndef UE4SS_SDK_W_MainMenu_HostGame_HPP
#define UE4SS_SDK_W_MainMenu_HostGame_HPP

class UW_MainMenu_HostGame_C : public UW_HostMenu_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UButton* Button_DevMaps;                                                    // 0x02F8 (size: 0x8)
    class UComboBoxString* ComboBoxString_0;                                          // 0x0300 (size: 0x8)
    class UVerticalBox* SelectMap_VBox;                                               // 0x0308 (size: 0x8)
    class UW_HostGameSetup_C* W_HostGameSetup;                                        // 0x0310 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Back;                                 // 0x0318 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Host;                                 // 0x0320 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0328 (size: 0x8)
    class UW_SettingsPage_Sandbox_C* W_SettingsPage_Sandbox;                          // 0x0330 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_0;                                          // 0x0338 (size: 0x8)
    FName MapToHost;                                                                  // 0x0340 (size: 0x8)
    bool HostLAN;                                                                     // 0x0348 (size: 0x1)
    bool SingleplayerOnly;                                                            // 0x0349 (size: 0x1)
    int32 MaxPlayerCount;                                                             // 0x034C (size: 0x4)
    class UW_MenuPopup_YesNo_C* CurrentPopup;                                         // 0x0350 (size: 0x8)
    class UW_PopupPleaseWait_C* PleaseWaitPopup;                                      // 0x0358 (size: 0x8)
    class UW_LevelSavingScreen_C* AsyncBlockerPopup;                                  // 0x0360 (size: 0x8)

    void SavePreferences();
    void LoadPreferences();
    void SaveWorld_5F48A92B4FE1FFCBE7361F8C64A1FC0C(bool bSuccess);
    void BndEvt__ComboBoxString_0_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__W_MainMenu_HostGame_W_MainMenuButton_Host_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void TryHostGame();
    void BndEvt__W_MainMenu_HostGame_Button_DevMaps_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void CreateNewWorldSaveAndHost();
    void HostError_Popup_Remove();
    void BndEvt__W_MainMenu_HostGame_W_MainMenuButton_Back_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void OnHostFail();
    void OnHostSuccess();
    void NoPasswordHostPublic();
    void HostGameSelected();
    void BndEvt__W_MainMenu_HostGame_W_HostGameSetup_K2Node_ComponentBoundEvent_1_SandboxSettingsPressed__DelegateSignature();
    void ExecuteUbergraph_W_MainMenu_HostGame(int32 EntryPoint);
}; // Size: 0x368

#endif
