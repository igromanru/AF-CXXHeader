#ifndef UE4SS_SDK_W_MainMenu_Mods_Browse_HPP
#define UE4SS_SDK_W_MainMenu_Mods_Browse_HPP

class UW_MainMenu_Mods_Browse_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_MainMenuButton_C* Button_Back;                                           // 0x02E8 (size: 0x8)
    class UWidgetSwitcher* ModListOrDetails;                                          // 0x02F0 (size: 0x8)
    class UW_Mods_DetailInfo_C* W_Mods_DetailInfo;                                    // 0x02F8 (size: 0x8)
    class UW_Mods_List_C* W_Mods_List;                                                // 0x0300 (size: 0x8)
    bool bAcceptToS;                                                                  // 0x0308 (size: 0x1)

    void Refresh();
    void GoToModsMain();
    void BndEvt__W_MainMenu_Mods_Browse_Button_Back_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void ExecuteUbergraph_W_MainMenu_Mods_Browse(int32 EntryPoint);
}; // Size: 0x309

#endif
