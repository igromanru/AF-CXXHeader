#ifndef UE4SS_SDK_W_Inventory_ArmorStand_HPP
#define UE4SS_SDK_W_Inventory_ArmorStand_HPP

class UW_Inventory_ArmorStand_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_NextPose;                                                   // 0x02F0 (size: 0x8)
    class UButton* Button_PreviousPose;                                               // 0x02F8 (size: 0x8)
    class UImage* CraftCount_LeftArrow;                                               // 0x0300 (size: 0x8)
    class UImage* CraftCount_RightArrow;                                              // 0x0308 (size: 0x8)
    class UTextBlock* CurrentPoseName_Text;                                           // 0x0310 (size: 0x8)
    class UW_InventoryGrid_C* Equipment_LogicOnlyInvGridRequired;                     // 0x0318 (size: 0x8)
    class UCheckBox* SwapEmptySlots;                                                  // 0x0320 (size: 0x8)
    class UTextBlock* TitleMain;                                                      // 0x0328 (size: 0x8)
    class UW_InventoryItemSlot_C* W_ArmArmorSlot;                                     // 0x0330 (size: 0x8)
    class UW_InventoryItemSlot_C* W_BackpackArmorSlot;                                // 0x0338 (size: 0x8)
    class UW_InventoryItemSlot_C* W_HeadArmorSlot;                                    // 0x0340 (size: 0x8)
    class UW_InventoryItemSlot_C* W_LegsArmorSlot;                                    // 0x0348 (size: 0x8)
    class UW_InventoryItemSlot_C* W_SuitArmorSlot;                                    // 0x0350 (size: 0x8)
    class UW_InventoryItemSlot_C* W_TorsoArmorSlot;                                   // 0x0358 (size: 0x8)
    TArray<class UW_InventoryItemSlot_C*> ArmorMeshEquipmentSlots;                    // 0x0360 (size: 0x10)
    TArray<FName> PoseNames;                                                          // 0x0370 (size: 0x10)
    int32 PoseNumber;                                                                 // 0x0380 (size: 0x4)
    ECheckBoxState EmptySlot;                                                         // 0x0384 (size: 0x1)
    bool SwapEmptySlot;                                                               // 0x0385 (size: 0x1)

    void SetArmorStandDynamicProperties(FDynamicProperty NewDynamicProperty);
    void Highlight Armor Slots(TEnumAsByte<E_InventorySlotType::Type> SlotType, bool StopHighlight);
    void Setup Armor Stand Slots(class UAbiotic_InventoryComponent_C* MainInventoryComponent);
    void Refresh Armor Stand Slots();
    void Construct();
    void InventoryUpdated_Event(class UAbiotic_InventoryComponent_C* Inventory);
    void BndEvt__W_Inventory_ArmorStand_Button_PreviousPose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_ArmorStand_Button_NextPose_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void SetNewPose(int32 PoseNumber);
    void OnItemDragStarted(TEnumAsByte<E_InventorySlotType::Type> Item Type);
    void OnItemDragFinished();
    void BndEvt__W_Inventory_ArmorStand_SwapEmptySlots_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void SwapEmptySlotChanged();
    void ExecuteUbergraph_W_Inventory_ArmorStand(int32 EntryPoint);
}; // Size: 0x386

#endif
