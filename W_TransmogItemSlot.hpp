#ifndef UE4SS_SDK_W_TransmogItemSlot_HPP
#define UE4SS_SDK_W_TransmogItemSlot_HPP

class UW_TransmogItemSlot_C : public UW_InventoryItemSlot_C
{
    bool Hidden;                                                                      // 0x0790 (size: 0x1)
    bool AllowClickEmptyToHide;                                                       // 0x0791 (size: 0x1)

    void RefreshHiddenIcon();
    void OnEmptySlotClicked();
}; // Size: 0x792

#endif
