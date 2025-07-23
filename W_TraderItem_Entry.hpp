#ifndef UE4SS_SDK_W_TraderItem_Entry_HPP
#define UE4SS_SDK_W_TraderItem_Entry_HPP

class UW_TraderItem_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x02E8 (size: 0x8)
    class UImage* CustomizationImage;                                                 // 0x02F0 (size: 0x8)
    class UTextBlock* ItemNameText;                                                   // 0x02F8 (size: 0x8)
    class UW_InventoryItemSlot_C* ItemSlot_Buy;                                       // 0x0300 (size: 0x8)
    class UW_InventoryItemSlot_C* ItemSlot_Sell;                                      // 0x0308 (size: 0x8)
    class UTextBlock* RemainingCountText;                                             // 0x0310 (size: 0x8)
    class UImage* SelectionHighlight;                                                 // 0x0318 (size: 0x8)
    bool Selected;                                                                    // 0x0320 (size: 0x1)
    FLinearColor DisabledRed;                                                         // 0x0324 (size: 0x10)
    FLinearColor DisabledRed_BG;                                                      // 0x0334 (size: 0x10)
    FLinearColor ActiveBlue;                                                          // 0x0344 (size: 0x10)
    FLinearColor SchematicBGColor;                                                    // 0x0354 (size: 0x10)
    FLinearColor SchematicTextColor;                                                  // 0x0364 (size: 0x10)
    class UCraftingEntryItem* CraftingEntry;                                          // 0x0378 (size: 0x8)
    FLinearColor DefaultBG;                                                           // 0x0380 (size: 0x10)
    FSlateColor DefaultTextColor;                                                     // 0x0390 (size: 0x14)
    FAbioticItemCount_Struct BuyableItem;                                             // 0x03A8 (size: 0x18)
    FAbioticItemCount_Struct TradeableItem;                                           // 0x03C0 (size: 0x18)
    int32 BuyableStockAvailable;                                                      // 0x03D8 (size: 0x4)
    FW_TraderItem_Entry_CSelectionStateChanged SelectionStateChanged;                 // 0x03E0 (size: 0x10)
    void SelectionStateChanged(class UW_TraderItem_Entry_C* Item, bool Selected);
    FAbiotic_InventoryItemStruct ItemDataTemp;                                        // 0x03F0 (size: 0x650)
    int32 TraderItemIndex;                                                            // 0x0A40 (size: 0x4)
    bool HasDiscoveredTradeItem;                                                      // 0x0A44 (size: 0x1)

    void GetCosmeticCategoryFromTable(class UDataTable* Table, FText& CategoryText);
    void SetItemSelected(bool Selected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Construct();
    void BndEvt__W_TraderItem_Entry_RecipeCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void CheckboxClicked(bool Clicked);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
    void ExecuteUbergraph_W_TraderItem_Entry(int32 EntryPoint);
    void SelectionStateChanged__DelegateSignature(class UW_TraderItem_Entry_C* Item, bool Selected);
}; // Size: 0xA45

#endif
