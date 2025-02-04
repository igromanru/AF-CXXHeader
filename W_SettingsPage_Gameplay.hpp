#ifndef UE4SS_SDK_W_SettingsPage_Gameplay_HPP
#define UE4SS_SDK_W_SettingsPage_Gameplay_HPP

class UW_SettingsPage_Gameplay_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UButton_SpecialImageButton_C* Button_SpecialImageButton;                    // 0x0300 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0308 (size: 0x8)
    class UW_MainMenuButton_C* W_ResetTutorialPopups;                                 // 0x0310 (size: 0x8)
    class UW_MainMenu_BackgroundSelection_C* MainMenuSelectionUI;                     // 0x0318 (size: 0x8)

    void GetSettingsFromTable();
    void Construct();
    void BndEvt__W_SettingsPage_Gameplay_W_ResetTutorialPopups_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void ExecuteUbergraph_W_SettingsPage_Gameplay(int32 EntryPoint);
}; // Size: 0x320

#endif
