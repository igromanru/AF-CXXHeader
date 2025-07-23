#ifndef UE4SS_SDK_W_Inventory_UpgradeBench_HPP
#define UE4SS_SDK_W_Inventory_UpgradeBench_HPP

class UW_Inventory_UpgradeBench_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Anim_EnhanceItem;                                         // 0x02E8 (size: 0x8)
    class UImage* BG;                                                                 // 0x02F0 (size: 0x8)
    class UButton* Button_UpgradeItem;                                                // 0x02F8 (size: 0x8)
    class UTextBlock* Button_UpgradeItem_Text;                                        // 0x0300 (size: 0x8)
    class UImage* EnhanceSpinner;                                                     // 0x0308 (size: 0x8)
    class UW_InventoryGrid_C* ItemDrop_LogicOnlyInvGridRequired;                      // 0x0310 (size: 0x8)
    class UTextBlock* TitleMain;                                                      // 0x0318 (size: 0x8)
    class UUniformGridPanel* UGrid_Enhancements;                                      // 0x0320 (size: 0x8)
    class UW_InventoryItemSlot_C* W_InventoryItemSlot;                                // 0x0328 (size: 0x8)
    class UW_ItemUpgradeEntry_C* W_ItemUpgradeEntry;                                  // 0x0330 (size: 0x8)
    class UW_ItemUpgradeEntry_C* W_ItemUpgradeEntry_1;                                // 0x0338 (size: 0x8)
    class UW_ItemUpgradeEntry_C* W_ItemUpgradeEntry_2;                                // 0x0340 (size: 0x8)
    class UW_ItemUpgradeEntry_C* W_ItemUpgradeEntry_3;                                // 0x0348 (size: 0x8)
    bool HasEnoughToRepairCurrentItem;                                                // 0x0350 (size: 0x1)
    TEnumAsByte<E_CursorMode::Type> SalvageCursorMode;                                // 0x0351 (size: 0x1)
    int32 MaxColumns;                                                                 // 0x0354 (size: 0x4)
    int32 SelectedUpgradeIndex;                                                       // 0x0358 (size: 0x4)
    FItemUpgradeRowHandle SelectedUpgrade;                                            // 0x0360 (size: 0x20)
    bool HasUpgradedAnItem;                                                           // 0x0380 (size: 0x1)

    void OnUpgradeSelectionChanged(int32 Index);
    void RefreshItemUpgradeSlot();
    void HighlightItemUpgradeSlot(TEnumAsByte<E_InventorySlotType::Type> SlotType, bool StopHighlight);
    void SetupItemUpgradeSlots(class UAbiotic_InventoryComponent_C* MainInventoryComponent);
    void DoesLocalPlayerHaveItem?(FDataTableRowHandle Item, int32 Count, bool& Found);
    void ItemUpgradeSlotUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void OnItemDragStarted(TEnumAsByte<E_InventorySlotType::Type> Item Type);
    void OnItemDragFinished();
    void BndEvt__W_Inventory_UpgradeBench_Button_UpgradeItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ItemInSlotHasChanged();
    void ExecuteUbergraph_W_Inventory_UpgradeBench(int32 EntryPoint);
}; // Size: 0x381

#endif
