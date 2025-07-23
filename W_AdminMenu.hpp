#ifndef UE4SS_SDK_W_AdminMenu_HPP
#define UE4SS_SDK_W_AdminMenu_HPP

class UW_AdminMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* AudioTextLabel;                                                 // 0x02E8 (size: 0x8)
    class UCheckBox* Checkbox_Admin;                                                  // 0x02F0 (size: 0x8)
    class UCheckBox* Checkbox_Players;                                                // 0x02F8 (size: 0x8)
    class UTextBlock* GameplayTextLabel;                                              // 0x0300 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuLeft;                                             // 0x0308 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuRight;                                            // 0x0310 (size: 0x8)
    class UWidgetSwitcher* PageSwitcher;                                              // 0x0318 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Back;                                 // 0x0320 (size: 0x8)
    class UW_PlayerMenu_C* W_PlayerMenu;                                              // 0x0328 (size: 0x8)
    class UW_ServerAdminMenu_C* W_ServerAdminMenu;                                    // 0x0330 (size: 0x8)
    TArray<class UW_SettingsPanel_C*> SettingsPanels;                                 // 0x0338 (size: 0x10)

    void RefreshEntireUI_State();
    void GetGameInst(class UAbiotic_GameInstance_C*& ABF_Game_Instance);
    void SaveAllSettings();
    void OnCompleted_305F2E53490E775F8D39A5A09ED0AB2A();
    void BndEvt__W_MainMenuButton_LeaveGame_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_AdminMenu_Checkbox_Players_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_AdminMenu_Checkbox_Admin_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void CycleMenu();
    void ExecuteUbergraph_W_AdminMenu(int32 EntryPoint);
}; // Size: 0x348

#endif
