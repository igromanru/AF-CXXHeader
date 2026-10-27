#ifndef UE4SS_SDK_W_EnabledModsList_HPP
#define UE4SS_SDK_W_EnabledModsList_HPP

class UW_EnabledModsList_C : public UAbioticMenuWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_1;                                                               // 0x02E8 (size: 0x8)
    class UListView* DisabledModList;                                                 // 0x02F0 (size: 0x8)
    class UOverlay* LoadingOverlay;                                                   // 0x02F8 (size: 0x8)
    class UImage* LoadingRunner_1;                                                    // 0x0300 (size: 0x8)
    class UListView* ModOrderList;                                                    // 0x0308 (size: 0x8)
    class UImage* SavingRunner;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* SearchText_1;                                                   // 0x0318 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0320 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig_1;                                        // 0x0328 (size: 0x8)
    class UW_MainMenuButton_C* W_SaveButton;                                          // 0x0330 (size: 0x8)
    TArray<UModInfoObject_C*> ModInfoList;                                            // 0x0338 (size: 0x10)
    TArray<UAbioticModListItem*> Items;                                               // 0x0348 (size: 0x10)
    bool Existing World;                                                              // 0x0358 (size: 0x1)
    TArray<int64> AdditionalMods;                                                     // 0x0360 (size: 0x10)
    class UWidget* CachedTooltip;                                                     // 0x0370 (size: 0x8)

    void VerifyModsBeforeSaveOrHost(bool& BlockingState);
    void RefreshList();
    void OnEnabledModsChanged_Event();
    void OpenModsCustomizationForWorld(bool ExistingWorld);
    void BndEvt__W_Mods_HostSettingsPage_W_SaveButton_K2Node_ComponentBoundEvent_0_ButtonPressed__DelegateSignature();
    void CheckSavedButtonState();
    void Construct();
    void OnSaveButtonPressed();
    void ToggleLoadingScreen(bool Show);
    void ExecuteUbergraph_W_EnabledModsList(int32 EntryPoint);
}; // Size: 0x378

#endif
