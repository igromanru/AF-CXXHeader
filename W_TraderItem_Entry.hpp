#ifndef UE4SS_SDK_W_TraderItem_Entry_HPP
#define UE4SS_SDK_W_TraderItem_Entry_HPP

class UW_TraderItem_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UCheckBox* CheckBox;                                                        // 0x02E8 (size: 0x8)
    class UTextBlock* ItemNameText;                                                   // 0x02F0 (size: 0x8)
    class UW_InventoryItemSlot_C* ItemSlot_Buy;                                       // 0x02F8 (size: 0x8)
    class UW_InventoryItemSlot_C* ItemSlot_Sell;                                      // 0x0300 (size: 0x8)
    class UTextBlock* RemainingCountText;                                             // 0x0308 (size: 0x8)
    class UImage* SelectionHighlight;                                                 // 0x0310 (size: 0x8)
    bool Selected;                                                                    // 0x0318 (size: 0x1)
    FLinearColor DisabledRed;                                                         // 0x031C (size: 0x10)
    FLinearColor DisabledRed_BG;                                                      // 0x032C (size: 0x10)
    FLinearColor ActiveBlue;                                                          // 0x033C (size: 0x10)
    FLinearColor SchematicBGColor;                                                    // 0x034C (size: 0x10)
    FLinearColor SchematicTextColor;                                                  // 0x035C (size: 0x10)
    class UCraftingEntryItem* CraftingEntry;                                          // 0x0370 (size: 0x8)
    FLinearColor DefaultBG;                                                           // 0x0378 (size: 0x10)
    FSlateColor DefaultTextColor;                                                     // 0x0388 (size: 0x14)
    FAbioticItemCount_Struct BuyableItem;                                             // 0x03A0 (size: 0x18)
    FAbioticItemCount_Struct TradeableItem;                                           // 0x03B8 (size: 0x18)
    int32 BuyableStockAvailable;                                                      // 0x03D0 (size: 0x4)
    FW_TraderItem_Entry_CSelectionStateChanged SelectionStateChanged;                 // 0x03D8 (size: 0x10)
    void SelectionStateChanged(class UW_TraderItem_Entry_C* Item, bool Selected);
    FAbiotic_InventoryItemStruct ItemDataTemp;                                        // 0x03E8 (size: 0x650)
    int32 TraderItemIndex;                                                            // 0x0A38 (size: 0x4)
    bool HasDiscoveredTradeItem;                                                      // 0x0A3C (size: 0x1)

    void SetItemSelected(bool Selected);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Construct();
    void BndEvt__W_TraderItem_Entry_RecipeCheckbox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void CheckboxClicked(bool Clicked);
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnEntryReleased();
    void ExecuteUbergraph_W_TraderItem_Entry(int32 EntryPoint);
    void SelectionStateChanged__DelegateSignature(class UW_TraderItem_Entry_C* Item, bool Selected);
}; // Size: 0xA3D

#endif
