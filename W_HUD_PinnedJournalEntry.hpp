#ifndef UE4SS_SDK_W_HUD_PinnedJournalEntry_HPP
#define UE4SS_SDK_W_HUD_PinnedJournalEntry_HPP

class UW_HUD_PinnedJournalEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PopIn;                                                    // 0x02E8 (size: 0x8)
    class UImage* Image_49;                                                           // 0x02F0 (size: 0x8)
    class UTextBlock* JournalTitle;                                                   // 0x02F8 (size: 0x8)
    FDataTableRowHandle JournalRow;                                                   // 0x0300 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_HUD_PinnedJournalEntry(int32 EntryPoint);
}; // Size: 0x310

#endif
