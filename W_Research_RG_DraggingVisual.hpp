#ifndef UE4SS_SDK_W_Research_RG_DraggingVisual_HPP
#define UE4SS_SDK_W_Research_RG_DraggingVisual_HPP

class UW_Research_RG_DraggingVisual_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UBorder* ClickDragBorder;                                                   // 0x02E8 (size: 0x8)
    class UImage* ItemIcon;                                                           // 0x02F0 (size: 0x8)
    FName ItemMaterialRow;                                                            // 0x02F8 (size: 0x8)
    FName ItemRowName;                                                                // 0x0300 (size: 0x8)
    FVector2D DragOffset;                                                             // 0x0308 (size: 0x10)
    class UW_Research_RG_DraggableItem_C* DraggedWidget;                              // 0x0318 (size: 0x8)

    void OnLoaded_E65DA9F041A45DEA80598690392DECA4(class UObject* Loaded);
    void OnLoaded_C5F528A547957C554B60B7B735ACC799(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_W_Research_RG_DraggingVisual(int32 EntryPoint);
}; // Size: 0x320

#endif
