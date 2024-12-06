#ifndef UE4SS_SDK_W_SettingsPanel_HPP
#define UE4SS_SDK_W_SettingsPanel_HPP

class UW_SettingsPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_SettingsMenu_C* SettingsParentMenu;                                      // 0x02E8 (size: 0x8)

    void RefreshSettingsPanel();
    void GetGameInst(class UAbiotic_GameInstance_C*& ABF_Game_Instance);
    void FinishedSettingsRefresh();
    void ExecuteUbergraph_W_SettingsPanel(int32 EntryPoint);
}; // Size: 0x2F0

#endif
