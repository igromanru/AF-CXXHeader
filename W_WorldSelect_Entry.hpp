#ifndef UE4SS_SDK_W_WorldSelect_Entry_HPP
#define UE4SS_SDK_W_WorldSelect_Entry_HPP

class UW_WorldSelect_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_UpgradeWorldSave;                                           // 0x02E8 (size: 0x8)
    class UCheckBox* CheckBox_0;                                                      // 0x02F0 (size: 0x8)
    class UImage* Icon_Upgrade;                                                       // 0x02F8 (size: 0x8)
    class UTextBlock* Incompatible_Text;                                              // 0x0300 (size: 0x8)
    class UBackgroundBlur* IncompatibleBlur;                                          // 0x0308 (size: 0x8)
    class UImage* ProgressImage;                                                      // 0x0310 (size: 0x8)
    class UImage* SelectionHighlight;                                                 // 0x0318 (size: 0x8)
    class UTextBlock* WorldLastPlayedText;                                            // 0x0320 (size: 0x8)
    class UTextBlock* WorldProgress_Text;                                             // 0x0328 (size: 0x8)
    class UTextBlock* WorldSaveName_Text;                                             // 0x0330 (size: 0x8)
    FString WorldSaveFolderText;                                                      // 0x0338 (size: 0x10)
    FString WorldProgressText;                                                        // 0x0348 (size: 0x10)
    FString WorldUptimeText;                                                          // 0x0358 (size: 0x10)
    FW_WorldSelect_Entry_CSelected Selected;                                          // 0x0368 (size: 0x10)
    void Selected(class UW_WorldSelect_Entry_C* World);
    bool CompatibleWorld;                                                             // 0x0378 (size: 0x1)
    FString MetadataPath;                                                             // 0x0380 (size: 0x10)
    FDateTime LastPlayed;                                                             // 0x0390 (size: 0x8)
    class UWorldEntryItem* EntryItem;                                                 // 0x0398 (size: 0x8)
    FString TimePlayedString;                                                         // 0x03A0 (size: 0x10)
    FString LastPlayedString;                                                         // 0x03B0 (size: 0x10)

    void OnLoaded_3E96AF5242DA3A6BE69A439C9771749E(class UObject* Loaded);
    void LoadMetaData();
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnEntryReleased();
    void UpdateSelectState(bool Selected);
    void BndEvt__W_WorldSelect_Entry_Button_UpgradeWorldSave_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void ExecuteUbergraph_W_WorldSelect_Entry(int32 EntryPoint);
    void Selected__DelegateSignature(class UW_WorldSelect_Entry_C* World);
}; // Size: 0x3C0

#endif
