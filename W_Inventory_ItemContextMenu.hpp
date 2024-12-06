#ifndef UE4SS_SDK_W_Inventory_ItemContextMenu_HPP
#define UE4SS_SDK_W_Inventory_ItemContextMenu_HPP

class UW_Inventory_ItemContextMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_Drop;                                                       // 0x02E8 (size: 0x8)
    class UButton* Button_Favorite;                                                   // 0x02F0 (size: 0x8)
    class UButton* Button_PourOut;                                                    // 0x02F8 (size: 0x8)
    class UButton* Button_PrimaryUse;                                                 // 0x0300 (size: 0x8)
    class UButton* Button_Recharge;                                                   // 0x0308 (size: 0x8)
    class UButton* Button_repair;                                                     // 0x0310 (size: 0x8)
    class UButton* Button_SplitStack;                                                 // 0x0318 (size: 0x8)
    class UButton* Button_Take;                                                       // 0x0320 (size: 0x8)
    class UButton* Button_UnloadMagazine;                                             // 0x0328 (size: 0x8)
    class UTextBlock* FavoriteText;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* PrimaryUseText;                                                 // 0x0338 (size: 0x8)
    class UTextBlock* TakeText;                                                       // 0x0340 (size: 0x8)
    class UVerticalBox* VerticalBox_126;                                              // 0x0348 (size: 0x8)
    FAbiotic_InventoryItemSlotStruct ItemSlotStruct;                                  // 0x0350 (size: 0x128)
    class UW_InventoryItemSlot_C* OriginSlot;                                         // 0x0478 (size: 0x8)

    void TryRechargeWithFieldBattery();
    void Can Recharge Item(FDataTableRowHandle Item Needed To Recharge With, bool& Success, class UAbiotic_InventoryComponent_C*& Inventory, int32& InventoryIndex);
    void TryFavoriteSlot();
    void TryRepairWithDuctTape();
    void Can Repair Item(FDataTableRowHandle Item Needed To Repair With, bool& Success, class UAbiotic_InventoryComponent_C*& Inventory, int32& InventoryIndex);
    void Start Request Quick Move Item(bool EquippingGear);
    void TryConsumeItemInSlot(bool& Consumed);
    void Set Widget Location(FVector2D Mouse Position, FVector2D& Desired Location);
    void EmptyLiquidContainer();
    void UnloadMagazine();
    void ShowUseButton(FText InText);
    void IsConsumable?(const FAbiotic_Consumable_Struct& ConsumableData, FAbiotic_LiquidStruct LiquidData, bool& CanBeConsumed);
    void InitializeContextMenu();
    void Construct();
    void BndEvt__W_Inventory_ItemContextMenu_Button_Take_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ItemContextMenu_Button_PrimaryUse_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ItemContextMenu_Button_SplitStack_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ItemContextMenu_Button_UnloadMagazine_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ItemContextMenu_Button_PourOut_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ItemContextMenu_Button_Drop_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ItemContextMenu_Button_Repair_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_Inventory_ItemContextMenu_Button_Favorite_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ItemContextMenu_Button_Recharge_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_Inventory_ItemContextMenu(int32 EntryPoint);
}; // Size: 0x480

#endif
