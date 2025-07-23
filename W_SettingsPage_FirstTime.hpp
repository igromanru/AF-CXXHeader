#ifndef UE4SS_SDK_W_SettingsPage_FirstTime_HPP
#define UE4SS_SDK_W_SettingsPage_FirstTime_HPP

class UW_SettingsPage_FirstTime_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UImage* BG;                                                                 // 0x0320 (size: 0x8)
    class UButton* Button_Continue;                                                   // 0x0328 (size: 0x8)
    class UImage* Image;                                                              // 0x0330 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0338 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0340 (size: 0x8)
    TArray<FAccessibilitySettingRowHandle> AccessibilitySettings;                     // 0x0348 (size: 0x10)

    void GetSettingsFromTable();
    void Construct();
    void BndEvt__W_SettingsPage_AccessibilityFirstTime_Button_Enter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_SettingsPage_FirstTime(int32 EntryPoint);
}; // Size: 0x358

#endif
