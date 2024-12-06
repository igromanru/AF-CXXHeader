#ifndef UE4SS_SDK_W_ServerBrowser_Row_HPP
#define UE4SS_SDK_W_ServerBrowser_Row_HPP

class UW_ServerBrowser_Row_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x02E8 (size: 0x8)
    class UImage* DedicatedIcon;                                                      // 0x02F0 (size: 0x8)
    class UImage* LockIcon;                                                           // 0x02F8 (size: 0x8)
    class UImage* ModifiedIcon;                                                       // 0x0300 (size: 0x8)
    class UTextBlock* PingText;                                                       // 0x0308 (size: 0x8)
    class UTextBlock* PlayersText;                                                    // 0x0310 (size: 0x8)
    class UImage* ProgressImage;                                                      // 0x0318 (size: 0x8)
    class UTextBlock* ServerNameText;                                                 // 0x0320 (size: 0x8)
    bool Selected;                                                                    // 0x0328 (size: 0x1)
    FName StoryProgressionRow;                                                        // 0x032C (size: 0x8)
    class USessionResultItem* SessionResult;                                          // 0x0338 (size: 0x8)

    void ToggleServerSelected(bool Selected);
    void OnLoaded_5E28FF9F4EACEDE4EBEA6FBB115D50E0(class UObject* Loaded);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnEntryReleased();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void ExecuteUbergraph_W_ServerBrowser_Row(int32 EntryPoint);
}; // Size: 0x340

#endif
