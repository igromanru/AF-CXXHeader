#ifndef UE4SS_SDK_W_CommandConfigMenu_HPP
#define UE4SS_SDK_W_CommandConfigMenu_HPP

class UW_CommandConfigMenu_C : public UW_SettingsPage_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UCheckBox* CheckBox_126;                                                    // 0x0320 (size: 0x8)
    class UAbioticMultiLineEditableTextBox* TextBox_CommandList;                      // 0x0328 (size: 0x8)
    class UEditableTextBox* TextInput_BeginPlay;                                      // 0x0330 (size: 0x8)
    class UW_MenuTitleBig_C* W_MenuTitleBig;                                          // 0x0338 (size: 0x8)
    TArray<FAssetData> IconPaths;                                                     // 0x0340 (size: 0x10)
    TArray<FGameCommandShortcutData> Shortcuts;                                       // 0x0350 (size: 0x10)
    bool Loading;                                                                     // 0x0360 (size: 0x1)

    void FindIconInString(FString SearchString, class UTexture2D*& IconTexture2D, FString& StringWithoutIcon);
    void LoadTextFromCustomShortcuts();
    void CacheAllIcons();
    void SetCustomShortcutsFromText(const FText& InText);
    void Construct();
    void BndEvt__W_CommandConfigMenu_TextBox_CommandList_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_CommandConfigMenu_CheckBox_126_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_CommandConfigMenu(int32 EntryPoint);
}; // Size: 0x361

#endif
