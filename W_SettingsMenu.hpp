#ifndef UE4SS_SDK_W_SettingsMenu_HPP
#define UE4SS_SDK_W_SettingsMenu_HPP

class UW_SettingsMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* AccessibilityTextLabel;                                         // 0x02E8 (size: 0x8)
    class UTextBlock* AudioTextLabel;                                                 // 0x02F0 (size: 0x8)
    class UCheckBox* Checkbox_Accessibility;                                          // 0x02F8 (size: 0x8)
    class UCheckBox* Checkbox_Audio;                                                  // 0x0300 (size: 0x8)
    class UCheckBox* Checkbox_Controls;                                               // 0x0308 (size: 0x8)
    class UCheckBox* Checkbox_Gameplay;                                               // 0x0310 (size: 0x8)
    class UCheckBox* Checkbox_Graphics;                                               // 0x0318 (size: 0x8)
    class UTextBlock* ControlsTextLabel;                                              // 0x0320 (size: 0x8)
    class UTextBlock* GameplayTextLabel;                                              // 0x0328 (size: 0x8)
    class UTextBlock* GraphicsTextLabel;                                              // 0x0330 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuLeft;                                             // 0x0338 (size: 0x8)
    class UW_Keybind_C* Keybind_MenuRight;                                            // 0x0340 (size: 0x8)
    class UWidgetSwitcher* SettingsMenu_WidgetSwitcher;                               // 0x0348 (size: 0x8)
    class UW_MainMenu_BackgroundSelection_C* W_MainMenu_BackgroundSelection;          // 0x0350 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Back;                                 // 0x0358 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0360 (size: 0x8)
    class UW_MainMenuButton_C* W_ResetSettings;                                       // 0x0368 (size: 0x8)
    class UW_SettingsPage_Accessibility_C* W_SettingsPage_Accessibility;              // 0x0370 (size: 0x8)
    class UW_SettingsPage_Audio_C* W_SettingsPage_Audio;                              // 0x0378 (size: 0x8)
    class UW_SettingsPage_Controls_C* W_SettingsPage_Controls;                        // 0x0380 (size: 0x8)
    class UW_SettingsPage_Gameplay_C* W_SettingsPage_Gameplay;                        // 0x0388 (size: 0x8)
    class UW_SettingsPage_Video_C* W_SettingsPage_Video;                              // 0x0390 (size: 0x8)
    TArray<class UW_SettingsPanel_C*> SettingsPanels;                                 // 0x0398 (size: 0x10)
    TEnumAsByte<ESettingsMode::Type> SettingsPanelMode;                               // 0x03A8 (size: 0x1)

    void CycleWidgetSettingsTab(bool Next);
    void RefreshEntireUI_State();
    void GetGameInst(class UAbiotic_GameInstance_C*& ABF_Game_Instance);
    void SaveAllSettings();
    void BndEvt__W_MainMenuButton_LeaveGame_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void BndEvt__W_SettingsMenu_Checkbox_Graphics_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_SettingsMenu_Checkbox_Accessibility_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_SettingsMenu_Checkbox_Gameplay_K2Node_ComponentBoundEvent_9_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_SettingsMenu_Checkbox_Controls_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_SettingsMenu_Checkbox_Audio_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_SettingsMenu_W_ResetSettings_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void Reset_No();
    void Reset_Yes();
    void OnInitialized();
    void CustomMenuBG();
    void ExecuteUbergraph_W_SettingsMenu(int32 EntryPoint);
}; // Size: 0x3A9

#endif
