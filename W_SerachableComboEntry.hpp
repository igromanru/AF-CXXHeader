#ifndef UE4SS_SDK_W_SerachableComboEntry_HPP
#define UE4SS_SDK_W_SerachableComboEntry_HPP

class UW_SerachableComboEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* ComboText;                                                      // 0x02E8 (size: 0x8)

    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void ExecuteUbergraph_W_SerachableComboEntry(int32 EntryPoint);
}; // Size: 0x2F0

#endif
