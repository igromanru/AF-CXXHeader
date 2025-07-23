#ifndef UE4SS_SDK_W_ItemUpgradeEntry_HPP
#define UE4SS_SDK_W_ItemUpgradeEntry_HPP

class UW_ItemUpgradeEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UW_InventoryItemSlot_C* Item1;                                              // 0x02E8 (size: 0x8)
    class UW_InventoryItemSlot_C* Item2;                                              // 0x02F0 (size: 0x8)
    class UW_InventoryItemSlot_C* Item3;                                              // 0x02F8 (size: 0x8)
    class UW_InventoryItemSlot_C* Item4;                                              // 0x0300 (size: 0x8)
    class UTextBlock* ItemNameText;                                                   // 0x0308 (size: 0x8)
    class UW_InventoryItemSlot_C* PrimaryItemIcon;                                    // 0x0310 (size: 0x8)
    class UImage* SelectionHighlight;                                                 // 0x0318 (size: 0x8)
    FItemUpgradeEntry ItemUpgradeEntry;                                               // 0x0320 (size: 0x48)
    FW_ItemUpgradeEntry_COnSelectionClicked OnSelectionClicked;                       // 0x0368 (size: 0x10)
    void OnSelectionClicked(int32 Index);
    int32 UpgradeIndex;                                                               // 0x0378 (size: 0x4)
    class AAbioticDeployed_CraftingBench_ParentBP_C* BenchRef;                        // 0x0380 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* CraftingPlayerCharacter;                        // 0x0388 (size: 0x8)
    bool CanCraft;                                                                    // 0x0390 (size: 0x1)

    TArray<class UAbiotic_InventoryComponent_C*> GetAdditionalInventories();
    void ShouldCraftingItemBeShown(bool HideUnknownItems, FName ItemName, bool& Show);
    void UpdateSelectedRecipeItem(bool IgnoreCraftingVisual, bool& Success, bool& AtLeast1HiddenItem);
    void UpgradePressed();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BP_OnEntryReleased();
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    void BP_OnItemSelectionChanged(bool bIsSelected);
    void OnListItemObjectSet(class UObject* ListItemObject);
    void Construct();
    void BndEvt__W_ItemUpgradeEntry_Item1_K2Node_ComponentBoundEvent_1_OnSpecialClick__DelegateSignature(bool Clicked);
    void BndEvt__W_ItemUpgradeEntry_Item2_K2Node_ComponentBoundEvent_2_OnSpecialClick__DelegateSignature(bool Clicked);
    void BndEvt__W_ItemUpgradeEntry_Item3_K2Node_ComponentBoundEvent_3_OnSpecialClick__DelegateSignature(bool Clicked);
    void BndEvt__W_ItemUpgradeEntry_Item4_K2Node_ComponentBoundEvent_4_OnSpecialClick__DelegateSignature(bool Clicked);
    void BndEvt__W_ItemUpgradeEntry_PrimaryItemIcon_K2Node_ComponentBoundEvent_5_OnSpecialClick__DelegateSignature(bool Clicked);
    void UpdateSelectionHighlightVisual(bool Highlight);
    void ExecuteUbergraph_W_ItemUpgradeEntry(int32 EntryPoint);
    void OnSelectionClicked__DelegateSignature(int32 Index);
}; // Size: 0x391

#endif
