#ifndef UE4SS_SDK_W_HUD_PinnedJournals_HPP
#define UE4SS_SDK_W_HUD_PinnedJournals_HPP

class UW_HUD_PinnedJournals_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* MainVBox;                                                     // 0x02E8 (size: 0x8)

    void Journal Entry Is Visible?(FName JournalRow, bool& Visible);
    void TogglePinnedJournalEntry(bool Remove, FDataTableRowHandle JournalRow);
    void ClearAllPinnedEntries();
    void ExecuteUbergraph_W_HUD_PinnedJournals(int32 EntryPoint);
}; // Size: 0x2F0

#endif
