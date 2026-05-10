#ifndef UE4SS_SDK_W_Compendium_DistillationEntry_HPP
#define UE4SS_SDK_W_Compendium_DistillationEntry_HPP

class UW_Compendium_DistillationEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* ChemistryNameText;                                              // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UW_InventoryItemSlot_C* PrimaryDistillationItem;                            // 0x02F8 (size: 0x8)
    class UWrapBox* WrapBox_46;                                                       // 0x0300 (size: 0x8)
    bool AtLeastOneDistillation;                                                      // 0x0308 (size: 0x1)
    FName DistillationRow;                                                            // 0x030C (size: 0x8)
    TMap<FName, int32> ItemRows;                                                      // 0x0318 (size: 0x50)
    TMap<class FName, class UW_InventoryItemSlot_C*> ItemWidgets;                     // 0x0368 (size: 0x50)

    void UpdateFoundItems();
    void AddItemWidget(FName RowName, int32 Count, bool Found);
    bool HasItemBeenDistilled?(FName RowName);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void PreConstruct(bool IsDesignTime);
    void UpdateDistillationVisibility();
    void InitDistillationEntry();
    void ExecuteUbergraph_W_Compendium_DistillationEntry(int32 EntryPoint);
}; // Size: 0x3B8

#endif
