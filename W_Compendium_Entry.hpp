#ifndef UE4SS_SDK_W_Compendium_Entry_HPP
#define UE4SS_SDK_W_Compendium_Entry_HPP

class UW_Compendium_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* AnimateUnreadFlicker;                                     // 0x02E8 (size: 0x8)
    class UCheckBox* CompEntryCheckbox;                                               // 0x02F0 (size: 0x8)
    class UTextBlock* CompEntrySectionCount;                                          // 0x02F8 (size: 0x8)
    class UTextBlock* CompEntrySubtitle;                                              // 0x0300 (size: 0x8)
    class UTextBlock* CompEntryTitle;                                                 // 0x0308 (size: 0x8)
    class UImage* Icon_UnreadCompendiumEntries;                                       // 0x0310 (size: 0x8)

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void UpdateUnreadStatus(class UCompendiumEntryItem* Entry, bool Unlocked);
    void BP_OnEntryReleased();
    void ExecuteUbergraph_W_Compendium_Entry(int32 EntryPoint);
}; // Size: 0x318

#endif
