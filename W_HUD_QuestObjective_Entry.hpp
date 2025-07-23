#ifndef UE4SS_SDK_W_HUD_QuestObjective_Entry_HPP
#define UE4SS_SDK_W_HUD_QuestObjective_Entry_HPP

class UW_HUD_QuestObjective_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Popin;                                                    // 0x02E8 (size: 0x8)
    class UImage* Image_76;                                                           // 0x02F0 (size: 0x8)
    class UTextBlock* QuestTitle;                                                     // 0x02F8 (size: 0x8)
    FQuestRowHandle QuestRow;                                                         // 0x0300 (size: 0x20)

    void Construct();
    void ExecuteUbergraph_W_HUD_QuestObjective_Entry(int32 EntryPoint);
}; // Size: 0x320

#endif
