#ifndef UE4SS_SDK_W_TransmogToggleButton_HPP
#define UE4SS_SDK_W_TransmogToggleButton_HPP

class UW_TransmogToggleButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_Toggle;                                                     // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class UAbiotic_TransmogInventoryComp_C* TmogInventory;                            // 0x02F8 (size: 0x8)
    TEnumAsByte<E_InventorySlotType::Type> EquipSlot;                                 // 0x0300 (size: 0x1)
    bool NewButtonState;                                                              // 0x0301 (size: 0x1)

    void UpdateButton(bool ShowingTransmog);
    void BndEvt__W_TransmogToggleButton_Button_316_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_TransmogToggleButton(int32 EntryPoint);
}; // Size: 0x302

#endif
