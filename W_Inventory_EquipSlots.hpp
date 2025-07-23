#ifndef UE4SS_SDK_W_Inventory_EquipSlots_HPP
#define UE4SS_SDK_W_Inventory_EquipSlots_HPP

class UW_Inventory_EquipSlots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* WeightDroop_T3;                                           // 0x02E8 (size: 0x8)
    class UWidgetAnimation* WeightDroop_T2;                                           // 0x02F0 (size: 0x8)
    class UWidgetAnimation* WeightDroop_T1;                                           // 0x02F8 (size: 0x8)
    class UWidgetAnimation* WeightDroop_T0;                                           // 0x0300 (size: 0x8)
    class UImage* Armor_BG;                                                           // 0x0308 (size: 0x8)
    class UTextBlock* Armor_Text;                                                     // 0x0310 (size: 0x8)
    class UImage* CharacterPaneBG;                                                    // 0x0318 (size: 0x8)
    class UCheckBox* CheckBox_Rotation;                                               // 0x0320 (size: 0x8)
    class UW_InventoryGrid_C* Equipment_LogicOnlyInvGridRequired;                     // 0x0328 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Arms;                                     // 0x0330 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_HackingDevice;                            // 0x0338 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Head;                                     // 0x0340 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Headlamp;                                 // 0x0348 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Legs;                                     // 0x0350 (size: 0x8)
    class UImage* EquipSlot_Pager;                                                    // 0x0358 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Shield;                                   // 0x0360 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Suit;                                     // 0x0368 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Torso;                                    // 0x0370 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Trinket;                                  // 0x0378 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Trinket2;                                 // 0x0380 (size: 0x8)
    class UW_InventoryItemSlot_C* EquipSlot_Wristwatch;                               // 0x0388 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0390 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0398 (size: 0x8)
    class UButton* PageLocationButton;                                                // 0x03A0 (size: 0x8)
    class UCanvasPanel* Pane;                                                         // 0x03A8 (size: 0x8)
    class UTextBlock* PhDText;                                                        // 0x03B0 (size: 0x8)
    class UTextBlock* PlayerNameText;                                                 // 0x03B8 (size: 0x8)
    class UW_HUD_TemperatureBar_C* W_HUD_TemperatureBar;                              // 0x03C0 (size: 0x8)
    class UW_Inventory_3DCharacter_C* W_Inventory_3DCharacter;                        // 0x03C8 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton_Arms;                     // 0x03D0 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton_Chest;                    // 0x03D8 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton_Head;                     // 0x03E0 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton_Headlamp;                 // 0x03E8 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton_Legs;                     // 0x03F0 (size: 0x8)
    class UW_TransmogToggleButton_C* W_TransmogToggleButton_Suit;                     // 0x03F8 (size: 0x8)
    class UImage* Weight_BG;                                                          // 0x0400 (size: 0x8)
    class UImage* Weight_Glass;                                                       // 0x0408 (size: 0x8)
    class UImage* Weight_HookChain;                                                   // 0x0410 (size: 0x8)
    class UImage* Weight_Needle;                                                      // 0x0418 (size: 0x8)
    class UImage* Weight_Scale;                                                       // 0x0420 (size: 0x8)
    class UImage* Weight_Trim;                                                        // 0x0428 (size: 0x8)
    TArray<class UW_InventoryItemSlot_C*> CharacterEquipmentSlots;                    // 0x0430 (size: 0x10)
    class UW_PlayerInventory_Main_C* ParentInventoryWidget;                           // 0x0440 (size: 0x8)

    void GetSlotRow(class UW_InventoryItemSlot_C* Widget, int32& OutIndex);
    void SlotToTmogButton(class UW_InventoryItemSlot_C* Slot, class UWidget*& Button, bool& Found);
    void TmogButtonToSlot(class UW_TransmogToggleButton_C* Button, class UW_InventoryItemSlot_C*& Slot);
    void FocusCursorAtSlotLocation(int32 Row, double Time);
    void DragDropDPadNavigation(class UW_InventoryItemSlot_C* HoveredSlot, TEnumAsByte<E_NavigationDirection::Type> Direction, bool& HandledNavigation, TEnumAsByte<E_NavigationDirection::Type>& EscapeDirection, int32& RowIndex);
    void Get New Weight Class(int32 CurrentWeightClass, int32& NewCurrentWeightClass, bool& max);
    void Highlight Equip Slot(TEnumAsByte<E_InventorySlotType::Type> Slot Type, bool StopHighlight);
    void SetupEquipSlots(class AAbiotic_PlayerCharacter_C* OwningCharacter, bool PlayerStateFailed);
    void BndEvt__W_PlayerInventory_Main_Button_0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void OnItemDragStarted(TEnumAsByte<E_InventorySlotType::Type> Item Type);
    void OnItemDragFinished();
    void UpdateArmorWeightValue(int32 ArmorDefenseValue, int32 WeightClass, bool SkipAnimation);
    void WaitForPlayerState();
    void BndEvt__W_Inventory_EquipSlots_CheckBox_Rotation_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void CheckRotateState();
    void ExecuteUbergraph_W_Inventory_EquipSlots(int32 EntryPoint);
}; // Size: 0x448

#endif
