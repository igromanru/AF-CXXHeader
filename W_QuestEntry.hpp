#ifndef UE4SS_SDK_W_QuestEntry_HPP
#define UE4SS_SDK_W_QuestEntry_HPP

class UW_QuestEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* HorizontalSeparator;                                                // 0x02E8 (size: 0x8)
    class UTextBlock* Quest_description;                                              // 0x02F0 (size: 0x8)
    class UTextBlock* Quest_text;                                                     // 0x02F8 (size: 0x8)
    class UBorder* SelectionBorder;                                                   // 0x0300 (size: 0x8)
    class UVerticalBox* VerticalBox_Subquests;                                        // 0x0308 (size: 0x8)
    FLinearColor SelectedColor;                                                       // 0x0310 (size: 0x10)
    FLinearColor UnSelectedColor;                                                     // 0x0320 (size: 0x10)
    class UQuestEntryItem* QuestEntryItem;                                            // 0x0330 (size: 0x8)

    void UpdateSelection();
    void SetTextToNoObjective();
    void SetTextFromQuest();
    void CanSelectItem();
    void SetSelectionDisplay(bool Selected);
    void CheckForLargeFonts();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Construct();
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnTrackedQuestLineUpdated();
    void BP_OnEntryReleased();
    void ExecuteUbergraph_W_QuestEntry(int32 EntryPoint);
}; // Size: 0x338

#endif
