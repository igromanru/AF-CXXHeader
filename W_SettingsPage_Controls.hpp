#ifndef UE4SS_SDK_W_SettingsPage_Controls_HPP
#define UE4SS_SDK_W_SettingsPage_Controls_HPP

class UW_SettingsPage_Controls_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UVerticalBox* KeybindList;                                                  // 0x0300 (size: 0x8)
    class UVerticalBox* SettingsList;                                                 // 0x0308 (size: 0x8)
    class UW_MainMenuButton_C* W_ResetKeybinds;                                       // 0x0310 (size: 0x8)

    bool InputMapCheck(FString& Name, double Scale, EKeybindType Type, TSet<FString>& InputMap);
    class UW_SettingSubCategory_C* GetInputCategory(FText CategoryText, TMap<class FString, class UW_SettingSubCategory_C*>& CategoryMap);
    void PopulateKeybindList();
    void GetSettingsFromTable();
    void BndEvt__W_SettingsPage_Controls_W_ResetKeybinds_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_W_SettingsPage_Controls(int32 EntryPoint);
}; // Size: 0x318

#endif
