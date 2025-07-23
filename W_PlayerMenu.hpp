#ifndef UE4SS_SDK_W_PlayerMenu_HPP
#define UE4SS_SDK_W_PlayerMenu_HPP

class UW_PlayerMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* AudioTextLabel_1;                                               // 0x02E8 (size: 0x8)
    class UVerticalBox* BlockedPlayerList;                                            // 0x02F0 (size: 0x8)
    class UCheckBox* Checkbox_BlockedPlayers;                                         // 0x02F8 (size: 0x8)
    class UCheckBox* Checkbox_MutedPlayers;                                           // 0x0300 (size: 0x8)
    class UTextBlock* GameplayTextLabel_1;                                            // 0x0308 (size: 0x8)
    class UVerticalBox* MutedPlayerList;                                              // 0x0310 (size: 0x8)
    class UWidgetSwitcher* PlayerListSwitcher;                                        // 0x0318 (size: 0x8)
    class UCanvasPanel* PlayerMenu;                                                   // 0x0320 (size: 0x8)
    class UW_MainMenuButton_C* W_Button_DeleteCharacterData;                          // 0x0328 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitle_Blocked;                                     // 0x0330 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitle_Muted;                                       // 0x0338 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig_2;                                        // 0x0340 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig_3;                                        // 0x0348 (size: 0x8)
    class UW_PlayerList_C* W_PlayerList_1;                                            // 0x0350 (size: 0x8)
    class UW_PlayerList_C* W_PlayerList_BlockedPlayers;                               // 0x0358 (size: 0x8)
    class UW_PlayerList_C* W_PlayerList_MutedPlayers;                                 // 0x0360 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_AdminMenu_Checkbox_Players_1_K2Node_ComponentBoundEvent_7_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_AdminMenu_Checkbox_Admin_1_K2Node_ComponentBoundEvent_8_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_PlayerMenu_W_Button_DeleteCharacterData_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void ConfirmDeletePlayer();
    void CancelDeletePlayer();
    void ExecuteUbergraph_W_PlayerMenu(int32 EntryPoint);
}; // Size: 0x368

#endif
