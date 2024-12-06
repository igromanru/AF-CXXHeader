#ifndef UE4SS_SDK_DragDrop_ResearchItem_HPP
#define UE4SS_SDK_DragDrop_ResearchItem_HPP

class UDragDrop_ResearchItem_C : public UAbiotic_Draggable_Operation_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0090 (size: 0x8)
    bool DropHandledByReceivingWidget;                                                // 0x0098 (size: 0x1)

    void DragCancelled(const FPointerEvent& PointerEvent);
    void Drop(const FPointerEvent& PointerEvent);
    void ExecuteUbergraph_DragDrop_ResearchItem(int32 EntryPoint);
}; // Size: 0x99

#endif
