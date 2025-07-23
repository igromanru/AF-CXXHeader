#ifndef UE4SS_SDK_W_Inventory_PlayerBackpack_HPP
#define UE4SS_SDK_W_Inventory_PlayerBackpack_HPP

class UW_Inventory_PlayerBackpack_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_SortWeight;                                                 // 0x02E8 (size: 0x8)
    class UImage* CharacterPaneBG;                                                    // 0x02F0 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Backpack;                                 // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UTextBlock* InvDebugText;                                                   // 0x0308 (size: 0x8)
    class UTextBlock* InventoryBackpackText;                                          // 0x0310 (size: 0x8)
    class UTextBlock* MoneyText;                                                      // 0x0318 (size: 0x8)
    class UW_InventoryGrid_C* W_BackpackGrid;                                         // 0x0320 (size: 0x8)
    class UW_ButtonPromptHelperBar_C* W_ButtonPromptHelperBar;                        // 0x0328 (size: 0x8)
    class UW_InventoryWeight_C* W_InventoryWeight;                                    // 0x0330 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton_Backpack;                 // 0x0338 (size: 0x8)
    class UTextBlock* WeightNumberText;                                               // 0x0340 (size: 0x8)
    class UW_PlayerInventory_Main_C* ParentInventoryWidget;                           // 0x0348 (size: 0x8)
    double CurrentWeight;                                                             // 0x0350 (size: 0x8)
    class UWidget* Temp Slot;                                                         // 0x0358 (size: 0x8)
    TArray<class UWidget*> SortedGridSlots;                                           // 0x0360 (size: 0x10)
    int32 Index;                                                                      // 0x0370 (size: 0x4)
    float LiquidWeightMultiplier;                                                     // 0x0374 (size: 0x4)

    void FavoritedSlotsUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void UpdateMoneyCount(int32 money);
    void SlotHighlighted(int32 SlotIndex);
    void InventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void SetInventoryReference(class UAbiotic_InventoryComponent_C* InventoryComponent);
    void UpdateWeight();
    void Construct();
    void BndEvt__W_Inventory_PlayerBackpack_Button_SortWeight_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Inventory_PlayerBackpack(int32 EntryPoint);
}; // Size: 0x378

#endif
