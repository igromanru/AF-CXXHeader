#ifndef UE4SS_SDK_W_MainMenu_LocalMods_HPP
#define UE4SS_SDK_W_MainMenu_LocalMods_HPP

class UW_MainMenu_LocalMods_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_MainMenuButton_C* Button_Back;                                           // 0x02E8 (size: 0x8)
    class UW_EnabledModsList_LocalOnly_C* W_EnabledModsList_LocalOnly;                // 0x02F0 (size: 0x8)

    void BndEvt__W_MainMenu_Mods_Button_Back_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Mods_Button_Installed_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void BndEvt__W_MainMenu_Mods_Button_Browse_K2Node_ComponentBoundEvent_2_ButtonPressed__DelegateSignature();
    void TriggerBack();
    void ExecuteUbergraph_W_MainMenu_LocalMods(int32 EntryPoint);
}; // Size: 0x2F8

#endif
