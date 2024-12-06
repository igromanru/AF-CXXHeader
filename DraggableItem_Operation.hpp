#ifndef UE4SS_SDK_DraggableItem_Operation_HPP
#define UE4SS_SDK_DraggableItem_Operation_HPP

class UDraggableItem_Operation_C : public UAbiotic_Draggable_Operation_C
{
    FVector2D DragOffset;                                                             // 0x0090 (size: 0x10)
    TEnumAsByte<E_InventorySlotType::Type> InventorySlotFrom;                         // 0x00A0 (size: 0x1)
    bool DraggedBySplitStack;                                                         // 0x00A1 (size: 0x1)
    bool Dropped;                                                                     // 0x00A2 (size: 0x1)
    FInventorySlotSelected_Struct ItemOrigin;                                         // 0x00A8 (size: 0x10)
    FString AssetID;                                                                  // 0x00B8 (size: 0x10)
    int32 StackAmount;                                                                // 0x00C8 (size: 0x4)
    class UW_InventoryItemSlot_C* SlotOrigin;                                         // 0x00D0 (size: 0x8)

    void UpdateStackAmount(int32 NewStackSize);
}; // Size: 0xD8

#endif
