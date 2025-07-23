#ifndef UE4SS_SDK_W_SettingsPage_Gameplay_HPP
#define UE4SS_SDK_W_SettingsPage_Gameplay_HPP

class UW_SettingsPage_Gameplay_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UButton_SpecialImageButton_C* Button_SpecialImageButton;                    // 0x0320 (size: 0x8)
    class UHorizontalBox* HBox_ReportBugCode;                                         // 0x0328 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0330 (size: 0x8)
    class UVerticalBox* VBOX_ReportBugCode;                                           // 0x0338 (size: 0x8)
    class UW_MainMenu_QRCode_C* W_MainMenu_QRCode;                                    // 0x0340 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_ReportBug;                            // 0x0348 (size: 0x8)
    class UW_MainMenuButton_C* W_ResetTutorialPopups;                                 // 0x0350 (size: 0x8)
    class UW_SettingSubCategory_C* W_SettingSubCategory;                              // 0x0358 (size: 0x8)
    class UW_MainMenu_BackgroundSelection_C* MainMenuSelectionUI;                     // 0x0360 (size: 0x8)
    class UW_MenuPopup_YesNo_C* Popup;                                                // 0x0368 (size: 0x8)

    void GetSettingsFromTable();
    void BndEvt__W_SettingsPage_Gameplay_W_ResetTutorialPopups_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void Construct();
    void BndEvt__W_SettingsPage_Gameplay_W_MainMenuButton_ReportBug_1_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void RemovePopup();
    void OpenUrl();
    void Destruct();
    void ExecuteUbergraph_W_SettingsPage_Gameplay(int32 EntryPoint);
}; // Size: 0x370

#endif
