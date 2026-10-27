#ifndef UE4SS_SDK_W_Research_RG_DraggableItem_HPP
#define UE4SS_SDK_W_Research_RG_DraggableItem_HPP

class UW_Research_RG_DraggableItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* ClickDragBorder;                                                   // 0x02E8 (size: 0x8)
    class UImage* itemicon;                                                           // 0x02F0 (size: 0x8)
    FName ItemMaterialRow;                                                            // 0x02F8 (size: 0x8)
    FGlobalItemRowHandle ItemRowName;                                                 // 0x0300 (size: 0x10)
    FVector2D DragOffset;                                                             // 0x0310 (size: 0x10)
    class UW_Research_RG_DraggableItem_C* DraggedWidget;                              // 0x0320 (size: 0x8)
    FW_Research_RG_DraggableItem_CResearchItemPressed ResearchItemPressed;            // 0x0328 (size: 0x10)
    void ResearchItemPressed(FGlobalItemRowHandle RowName);
    class UW_Research_RG_DraggableItem_C* OriginWidget;                               // 0x0338 (size: 0x8)

    void SetupDraggedWidget(class UDragDrop_ResearchItem_C*& OutItem);
    void OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void SetDraggableShadow();
    void ResetDraggable(bool ErrorSound);
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, class UDragDropOperation*& Operation);
    void OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnLoaded_EE3882594028E26D46345AA36E11D5DF(class UObject* Loaded);
    void OnLoaded_025BDCF2440FA50B5425408A56B80D4A(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_W_Research_RG_DraggableItem(int32 EntryPoint);
    void ResearchItemPressed__DelegateSignature(FGlobalItemRowHandle RowName);
}; // Size: 0x340

#endif
