#ifndef UE4SS_SDK_W_InventoryGenericDropArea_HPP
#define UE4SS_SDK_W_InventoryGenericDropArea_HPP

class UW_InventoryGenericDropArea_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BorderTrimImage;                                                    // 0x02E8 (size: 0x8)
    class UImage* DropIcon;                                                           // 0x02F0 (size: 0x8)
    class UBorder* MainDropBorder;                                                    // 0x02F8 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x0300 (size: 0x8)
    bool Invisible;                                                                   // 0x0308 (size: 0x1)
    int32 CachedIndex;                                                                // 0x030C (size: 0x4)

    void FocusCursorOnSlot(double Time, int32 Index);
    bool IsInteractable();
    void Try Drop Item(bool UseCustomOrigin, FInventorySlotSelected_Struct CustomOrigin, bool& SuccessfullyDropped);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Construct();
    void ExecuteUbergraph_W_InventoryGenericDropArea(int32 EntryPoint);
}; // Size: 0x310

#endif
