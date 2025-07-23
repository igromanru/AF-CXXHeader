#ifndef UE4SS_SDK_W_PlayerHUD_Hotbar_HPP
#define UE4SS_SDK_W_PlayerHUD_Hotbar_HPP

class UW_PlayerHUD_Hotbar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* CurrentItem;                                                    // 0x02E8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x02F0 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_1;                                       // 0x02F8 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_2;                                       // 0x0300 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_3;                                       // 0x0308 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_4;                                       // 0x0310 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_5;                                       // 0x0318 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_6;                                       // 0x0320 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_7;                                       // 0x0328 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_8;                                       // 0x0330 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_FannyPack1;                              // 0x0338 (size: 0x8)
    class UW_InventoryItemSlot_C* HotbarSlot_FannyPack2;                              // 0x0340 (size: 0x8)
    class UW_InventoryGrid_C* LogicOnlyInventoryGridDoNotDelete;                      // 0x0348 (size: 0x8)
    TArray<class UW_InventoryItemSlot_C*> HotbarSlots;                                // 0x0350 (size: 0x10)
    bool SetupComplete;                                                               // 0x0360 (size: 0x1)
    bool FannyPackUser;                                                               // 0x0361 (size: 0x1)
    double FannyPackOffset;                                                           // 0x0368 (size: 0x8)
    bool HideEmptySlots;                                                              // 0x0370 (size: 0x1)

    void DragDropDPadNavigation(class UW_InventoryItemSlot_C* HoveredSlot, TEnumAsByte<E_NavigationDirection::Type> Direction, bool& HandledNavigation, TEnumAsByte<E_NavigationDirection::Type>& EscapeDirection);
    void ProcessHiddenHotbarSlots();
    void UpdateHotbar();
    void Construct();
    void Local_FannyPack_EnableSlots(bool FannyPackEnabled);
    void ExecuteUbergraph_W_PlayerHUD_Hotbar(int32 EntryPoint);
}; // Size: 0x371

#endif
