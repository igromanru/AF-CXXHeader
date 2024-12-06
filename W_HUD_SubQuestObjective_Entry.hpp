#ifndef UE4SS_SDK_W_HUD_SubQuestObjective_Entry_HPP
#define UE4SS_SDK_W_HUD_SubQuestObjective_Entry_HPP

class UW_HUD_SubQuestObjective_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* StrikeoutText;                                            // 0x02E8 (size: 0x8)
    class UBorder* CompletedLine;                                                     // 0x02F0 (size: 0x8)
    class UImage* Dot;                                                                // 0x02F8 (size: 0x8)
    class UTextBlock* QuestTitle;                                                     // 0x0300 (size: 0x8)
    FQuestRowHandle QuestRow;                                                         // 0x0308 (size: 0x20)
    FWorldFlagRowHandle CompletionFlag;                                               // 0x0328 (size: 0x20)

    void Construct();
    void CheckCompletion();
    void ExecuteUbergraph_W_HUD_SubQuestObjective_Entry(int32 EntryPoint);
}; // Size: 0x348

#endif
