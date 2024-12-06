#ifndef UE4SS_SDK_W_Inventory_Transmog_HPP
#define UE4SS_SDK_W_Inventory_Transmog_HPP

class UW_Inventory_Transmog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UW_InventoryGrid_C* Equipment_LogicOnlyInvGridRequired;                     // 0x02F0 (size: 0x8)
    class UTextBlock* TitleMain;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* TitleMain_1;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* TitleMain_2;                                                    // 0x0308 (size: 0x8)
    class UW_TransmogItemSlot_C* W_ArmArmorSlot;                                      // 0x0310 (size: 0x8)
    class UW_TransmogItemSlot_C* W_BackpackSlot;                                      // 0x0318 (size: 0x8)
    class UW_TransmogItemSlot_C* W_HeadArmorSlot;                                     // 0x0320 (size: 0x8)
    class UW_TransmogItemSlot_C* W_LegsArmorSlot;                                     // 0x0328 (size: 0x8)
    class UW_TransmogItemSlot_C* W_SuitArmorSlot;                                     // 0x0330 (size: 0x8)
    class UW_TransmogItemSlot_C* W_TorsoArmorSlot;                                    // 0x0338 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton;                          // 0x0340 (size: 0x8)
    TArray<class UW_InventoryItemSlot_C*> TransmogInvSlots;                           // 0x0348 (size: 0x10)
    TArray<FName> PoseNames;                                                          // 0x0358 (size: 0x10)
    int32 PoseNumber;                                                                 // 0x0368 (size: 0x4)

    void HighlightTransmogSlots(TEnumAsByte<E_InventorySlotType::Type> SlotType, bool StopHighlight);
    void SetupTransmogSlots(class UAbiotic_InventoryComponent_C* MainInventoryComponent);
    void RefreshTransmogSlots();
    void Construct();
    void InventoryUpdated_Event(class UAbiotic_InventoryComponent_C* Inventory);
    void OnItemDragStarted(TEnumAsByte<E_InventorySlotType::Type> Item Type);
    void OnItemDragFinished();
    void ExecuteUbergraph_W_Inventory_Transmog(int32 EntryPoint);
}; // Size: 0x36C

#endif
