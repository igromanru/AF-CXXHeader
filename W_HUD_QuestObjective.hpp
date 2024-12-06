#ifndef UE4SS_SDK_W_HUD_QuestObjective_HPP
#define UE4SS_SDK_W_HUD_QuestObjective_HPP

class UW_HUD_QuestObjective_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UVerticalBox* MainVBox;                                                     // 0x02E8 (size: 0x8)
    class UVerticalBox* SubVBox;                                                      // 0x02F0 (size: 0x8)
    FW_HUD_QuestObjective_CQuestUpdated QuestUpdated;                                 // 0x02F8 (size: 0x10)
    void QuestUpdated(FQuestRowHandle NewQuest);
    FQuestRowHandle CurrentQuest;                                                     // 0x0308 (size: 0x20)

    void Set Quest Visibility(ESlateVisibility InVisibility);
    void UpdateCurrentQuest(FQuestRowHandle NewQuest, TEnumAsByte<E_WaypointMode::Type> WaypointMode);
    void Construct();
    void OnWorldFlagUpdated_Event();
    void ExecuteUbergraph_W_HUD_QuestObjective(int32 EntryPoint);
    void QuestUpdated__DelegateSignature(FQuestRowHandle NewQuest);
}; // Size: 0x328

#endif
