#ifndef UE4SS_SDK_W_Inventory_DraggableItem_HPP
#define UE4SS_SDK_W_Inventory_DraggableItem_HPP

class UW_Inventory_DraggableItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02E8 (size: 0x8)
    FAbiotic_InventoryItemSlotStruct DraggedItemPayload;                              // 0x02F0 (size: 0x98)
    class UTexture2D* itemicon;                                                       // 0x0388 (size: 0x8)
    FVector2D DragOffset;                                                             // 0x0390 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_Inventory_DraggableItem(int32 EntryPoint);
}; // Size: 0x3A0

#endif
