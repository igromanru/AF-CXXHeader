#ifndef UE4SS_SDK_W_Tooltip_JournalNote_HPP
#define UE4SS_SDK_W_Tooltip_JournalNote_HPP

class UW_Tooltip_JournalNote_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* HBox_Resources;                                             // 0x02E8 (size: 0x8)
    class UTextBlock* PossibleResourcesText;                                          // 0x02F0 (size: 0x8)
    class UTextBlock* Tooltip_Text;                                                   // 0x02F8 (size: 0x8)
    class UTextBlock* Tooltip_Text2;                                                  // 0x0300 (size: 0x8)
    class UTextBlock* Tooltip_Text3;                                                  // 0x0308 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot;                                // 0x0310 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot_1;                              // 0x0318 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot_2;                              // 0x0320 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot_3;                              // 0x0328 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot_4;                              // 0x0330 (size: 0x8)
    FText Text;                                                                       // 0x0338 (size: 0x10)
    FText Text_Additional;                                                            // 0x0348 (size: 0x10)
    FText Text_Negative;                                                              // 0x0358 (size: 0x10)
    FDataTableRowHandle ResourcesDataTableRow;                                        // 0x0368 (size: 0x10)
    bool ShowResources;                                                               // 0x0378 (size: 0x1)

    void AddItemToList(FName ItemRow, int32 Index);
    void Construct();
    void RefreshTooltip();
    void PinnedRecipeChanged(FName RecipesToPin, bool UnpinAllRecipes);
    void ExecuteUbergraph_W_Tooltip_JournalNote(int32 EntryPoint);
}; // Size: 0x379

#endif
