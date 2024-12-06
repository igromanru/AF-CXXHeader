#ifndef UE4SS_SDK_W_RecipeBookEntryButton_HPP
#define UE4SS_SDK_W_RecipeBookEntryButton_HPP

class UW_RecipeBookEntryButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Icon_NeverCrafted;                                                  // 0x02E8 (size: 0x8)
    class UTextBlock* ItemNameText;                                                   // 0x02F0 (size: 0x8)
    class UTextBlock* ItemQuantity;                                                   // 0x02F8 (size: 0x8)
    class UImage* NewItemHighlight;                                                   // 0x0300 (size: 0x8)
    class UCheckBox* RecipeCheckbox;                                                  // 0x0308 (size: 0x8)
    class UImage* SelectionHighlight;                                                 // 0x0310 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventorySlot;                                    // 0x0318 (size: 0x8)
    bool Selected;                                                                    // 0x0320 (size: 0x1)
    FLinearColor DisabledRed;                                                         // 0x0324 (size: 0x10)
    FLinearColor DisabledRed_BG;                                                      // 0x0334 (size: 0x10)
    FLinearColor ActiveBlue;                                                          // 0x0344 (size: 0x10)
    FLinearColor SchematicBGColor;                                                    // 0x0354 (size: 0x10)
    FLinearColor SchematicTextColor;                                                  // 0x0364 (size: 0x10)
    FW_RecipeBookEntryButton_CNeverCraftedStatusUpdate NeverCraftedStatusUpdate;      // 0x0378 (size: 0x10)
    void NeverCraftedStatusUpdate();
    class UCraftingEntryItem* CraftingEntry;                                          // 0x0388 (size: 0x8)
    FLinearColor DefaultBG;                                                           // 0x0390 (size: 0x10)
    FSlateColor DefaultTextColor;                                                     // 0x03A0 (size: 0x14)

    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    void CheckHighlightColor();
    void CheckRecipeHighlight();
    void CheckResearchedState();
    void CheckNeverCraftedState();
    void SetCheckboxBackgroundColor(FLinearColor Specified Color);
    void Possible Quantity Can be Crafted(TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, int32& FinalCost);
    void Construct();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void CheckSelectionState(bool State);
    void SetItemCountVisibility(TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories);
    void BP_OnEntryReleased();
    void ExecuteUbergraph_W_RecipeBookEntryButton(int32 EntryPoint);
    void NeverCraftedStatusUpdate__DelegateSignature();
}; // Size: 0x3B4

#endif
