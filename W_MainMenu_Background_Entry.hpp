#ifndef UE4SS_SDK_W_MainMenu_Background_Entry_HPP
#define UE4SS_SDK_W_MainMenu_Background_Entry_HPP

class UW_MainMenu_Background_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG_Thumbnail;                                                       // 0x02E8 (size: 0x8)
    class UTextBlock* BGNameText;                                                     // 0x02F0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x02F8 (size: 0x8)
    class UImage* SelectionHighlight;                                                 // 0x0300 (size: 0x8)
    class UBackgroundEntryItem* BackgroundEntryItem;                                  // 0x0308 (size: 0x8)
    class ULevelStreaming* LevelToEnable;                                             // 0x0310 (size: 0x8)

    void ClearPreviousLevelStreamingStatus();
    void OnLoaded_201ACDCE440F5887B45277AC0F5B653D(class UObject* Loaded);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnEntryReleased();
    void UpdateSelectState(bool Selected);
    void ExecuteUbergraph_W_MainMenu_Background_Entry(int32 EntryPoint);
}; // Size: 0x318

#endif
