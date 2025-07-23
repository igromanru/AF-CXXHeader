#ifndef UE4SS_SDK_W_SettingsPage_Sandbox_HPP
#define UE4SS_SDK_W_SettingsPage_Sandbox_HPP

class UW_SettingsPage_Sandbox_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0320 (size: 0x8)
    class UW_MainMenuButton_C* W_ResetSettings;                                       // 0x0328 (size: 0x8)
    TMap<class FName, class FString> SandboxSettings;                                 // 0x0330 (size: 0x50)
    TArray<class UW_SandboxSubCategory_C*> SandboxCategories;                         // 0x0380 (size: 0x10)
    bool DontShowHiddenOptions;                                                       // 0x0390 (size: 0x1)

    void ResetSettings();
    void PopulateSandboxList(TMap<class FName, class FSandboxOption>& SettingArray, class UVerticalBox* VerticleBox);
    void GetSettingsFromTable();
    void Construct();
    void BndEvt__W_SettingsPage_Gameplay_W_ResetTutorialPopups_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void RefreshSettings();
    void ExecuteUbergraph_W_SettingsPage_Sandbox(int32 EntryPoint);
}; // Size: 0x391

#endif
