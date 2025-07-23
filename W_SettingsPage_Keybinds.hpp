#ifndef UE4SS_SDK_W_SettingsPage_Keybinds_HPP
#define UE4SS_SDK_W_SettingsPage_Keybinds_HPP

class UW_SettingsPage_Keybinds_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UVerticalBox* KeybindList;                                                  // 0x0320 (size: 0x8)
    class UW_MainMenuButton_C* W_ResetKeybinds;                                       // 0x0328 (size: 0x8)

    bool InputMapCheck(FString& Name, double Scale, EKeybindType Type, TSet<FString>& InputMap);
    class UW_SettingSubCategory_C* GetInputCategory(FText CategoryText, TMap<class FString, class UW_SettingSubCategory_C*>& CategoryMap);
    void PopulateKeybindList();
    void GetSettingsFromTable();
    void BndEvt__W_SettingsPage_Controls_W_ResetKeybinds_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_SettingsPage_Keybinds(int32 EntryPoint);
}; // Size: 0x330

#endif
