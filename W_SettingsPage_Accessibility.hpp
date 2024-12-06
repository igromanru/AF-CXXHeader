#ifndef UE4SS_SDK_W_SettingsPage_Accessibility_HPP
#define UE4SS_SDK_W_SettingsPage_Accessibility_HPP

class UW_SettingsPage_Accessibility_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0300 (size: 0x8)
    class UW_MainMenuButton_C* W_AccessibilityFeedbackForm;                           // 0x0308 (size: 0x8)
    FString AccessibilityFeedbackFormURL;                                             // 0x0310 (size: 0x10)

    void GetSettingsFromTable();
    void Construct();
    void BndEvt__W_SettingsPage_Accessibility_W_AccessibilityFeedbackForm_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void ExecuteUbergraph_W_SettingsPage_Accessibility(int32 EntryPoint);
}; // Size: 0x320

#endif
