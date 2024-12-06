#ifndef UE4SS_SDK_W_Player_JournalLine_HPP
#define UE4SS_SDK_W_Player_JournalLine_HPP

class UW_Player_JournalLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_Pin;                                                        // 0x02E8 (size: 0x8)
    class UTextBlock* NoteText;                                                       // 0x02F0 (size: 0x8)
    class UTextBlock* TitleText;                                                      // 0x02F8 (size: 0x8)
    FDataTableRowHandle JournalEntry;                                                 // 0x0300 (size: 0x10)
    FButtonStyle Style_Unpinned;                                                      // 0x0310 (size: 0x3F0)
    FButtonStyle Style_Pinned;                                                        // 0x0700 (size: 0x3F0)

    void Construct();
    void BndEvt__W_Player_JournalLine_Button_150_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void RefreshJournalRow();
    void ExecuteUbergraph_W_Player_JournalLine(int32 EntryPoint);
}; // Size: 0xAF0

#endif
