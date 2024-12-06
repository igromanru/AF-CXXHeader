#ifndef UE4SS_SDK_W_Research_RG_ReceivingSlot_HPP
#define UE4SS_SDK_W_Research_RG_ReceivingSlot_HPP

class UW_Research_RG_ReceivingSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BG;                                                                 // 0x02E8 (size: 0x8)
    class UImage* CorrectCheckmark;                                                   // 0x02F0 (size: 0x8)
    class UImage* CorrectTrim;                                                        // 0x02F8 (size: 0x8)
    class UImage* ItemIcon;                                                           // 0x0300 (size: 0x8)
    class UImage* Trim;                                                               // 0x0308 (size: 0x8)
    FName MaterialRow;                                                                // 0x0310 (size: 0x8)
    FName ItemNameRow;                                                                // 0x0318 (size: 0x8)
    class UW_Research_RG_DraggableItem_C* ContainedItemOriginSlot;                    // 0x0320 (size: 0x8)
    FW_Research_RG_ReceivingSlot_CSlotReset SlotReset;                                // 0x0328 (size: 0x10)
    void SlotReset();

    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, class UDragDropOperation* Operation);
    void OnLoaded_540338A64415101FF6943E94DEDFA008(class UObject* Loaded);
    void Async_LoadMaterialFrame(TSoftObjectPtr<UObject> Asset);
    void ResetSlotToEmpty();
    void ExecuteUbergraph_W_Research_RG_ReceivingSlot(int32 EntryPoint);
    void SlotReset__DelegateSignature();
}; // Size: 0x338

#endif
