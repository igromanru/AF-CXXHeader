#ifndef UE4SS_SDK_W_SubQuestEntryLine_HPP
#define UE4SS_SDK_W_SubQuestEntryLine_HPP

class UW_SubQuestEntryLine_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* StrikeoutText;                                            // 0x02E8 (size: 0x8)
    class UBorder* CompletedLine;                                                     // 0x02F0 (size: 0x8)
    class UImage* Dot;                                                                // 0x02F8 (size: 0x8)
    class UTextBlock* QuestTitle;                                                     // 0x0300 (size: 0x8)
    FQuestRowHandle QuestRow;                                                         // 0x0308 (size: 0x10)
    FWorldFlagRowHandle CompletionFlag;                                               // 0x0318 (size: 0x10)

    void CheckCompletion();
    void Construct();
    void ExecuteUbergraph_W_SubQuestEntryLine(int32 EntryPoint);
}; // Size: 0x328

#endif
