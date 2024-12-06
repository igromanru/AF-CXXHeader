#ifndef UE4SS_SDK_W_PlayerCharacterManagement_HPP
#define UE4SS_SDK_W_PlayerCharacterManagement_HPP

class UW_PlayerCharacterManagement_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_DeleteCharacterData;                          // 0x02E8 (size: 0x8)
    class UW_MainMenuButton_C* W_MainMenuButton_Back;                                 // 0x02F0 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x02F8 (size: 0x8)
    TArray<class UW_SettingsPanel_C*> SettingsPanels;                                 // 0x0300 (size: 0x10)

    void RefreshEntireUI_State();
    void GetGameInst(class UAbiotic_GameInstance_C*& ABF_Game_Instance);
    void SaveAllSettings();
    void BndEvt__W_MainMenuButton_LeaveGame_K2Node_ComponentBoundEvent_1_ButtonPressed__DelegateSignature();
    void BndEvt__W_PlayerCharacterManagement_W_Button_DeleteCharacterData_K2Node_ComponentBoundEvent_5_ButtonPressed__DelegateSignature();
    void ConfirmDeletePlayer();
    void CancelDeletePlayer();
    void ExecuteUbergraph_W_PlayerCharacterManagement(int32 EntryPoint);
}; // Size: 0x310

#endif
