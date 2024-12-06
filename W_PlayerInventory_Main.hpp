#ifndef UE4SS_SDK_W_PlayerInventory_Main_HPP
#define UE4SS_SDK_W_PlayerInventory_Main_HPP

class UW_PlayerInventory_Main_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewItemBlurOverlayFadeIn;                                 // 0x02E8 (size: 0x8)
    class UW_Inventory_ArmorStand_C* ArmorStand;                                      // 0x02F0 (size: 0x8)
    class UImage* BG_BlueTint;                                                        // 0x02F8 (size: 0x8)
    class UBackgroundBlur* BGBlurClickBlocker;                                        // 0x0300 (size: 0x8)
    class UButton* Button_CloseInventory;                                             // 0x0308 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0310 (size: 0x8)
    class UImage* CharacterBGGlow;                                                    // 0x0318 (size: 0x8)
    class UW_Inventory_Container_C* CurrentContainerWidget;                           // 0x0320 (size: 0x8)
    class UNamedSlot* CustomInventorySlot;                                            // 0x0328 (size: 0x8)
    class UImage* HotbarTipIcon;                                                      // 0x0330 (size: 0x8)
    class UImage* Image_86;                                                           // 0x0338 (size: 0x8)
    class UWidgetSwitcher* InventoryCustomSwitcher;                                   // 0x0340 (size: 0x8)
    class UW_Inventory_HealthPanel_C* InventoryHealthPanel;                           // 0x0348 (size: 0x8)
    class UCanvasPanel* InventoryMain;                                                // 0x0350 (size: 0x8)
    class UW_Player_Journal_Main_C* JournalWidget;                                    // 0x0358 (size: 0x8)
    class UBackgroundBlur* NewItemBlockerBlur;                                        // 0x0360 (size: 0x8)
    class UCanvasPanel* Panel_Crafting;                                               // 0x0368 (size: 0x8)
    class UCanvasPanel* Panel_Health;                                                 // 0x0370 (size: 0x8)
    class UCanvasPanel* Panel_Journal;                                                // 0x0378 (size: 0x8)
    class UCanvasPanel* Panel_Primary;                                                // 0x0380 (size: 0x8)
    class UCanvasPanel* Panel_Skills;                                                 // 0x0388 (size: 0x8)
    class UW_Inventory_RepairArea_C* RepairArea;                                      // 0x0390 (size: 0x8)
    class UImage* TestTube_BG;                                                        // 0x0398 (size: 0x8)
    class UW_Inventory_Transmog_C* transmog;                                          // 0x03A0 (size: 0x8)
    class UCanvasPanel* UIPopupPanel;                                                 // 0x03A8 (size: 0x8)
    class UW_CraftingRewardPopup_C* W_CraftingRewardPopup;                            // 0x03B0 (size: 0x8)
    class UW_Inventory_CraftingArea_C* W_Inventory_CraftingArea;                      // 0x03B8 (size: 0x8)
    class UW_Inventory_EquipSlots_C* W_Inventory_EquipSlots;                          // 0x03C0 (size: 0x8)
    class UW_Inventory_NavBar_C* W_Inventory_NavBar;                                  // 0x03C8 (size: 0x8)
    class UW_Inventory_PlayerBackpack_C* W_Inventory_PlayerBackpack;                  // 0x03D0 (size: 0x8)
    class UW_InventoryGenericDropArea_C* W_InventoryGenericDropArea;                  // 0x03D8 (size: 0x8)
    class UW_Player_Skills_C* W_Player_Skills;                                        // 0x03E0 (size: 0x8)
    class UW_PlayerHUD_Hotbar_C* W_PlayerHUD_Hotbar;                                  // 0x03E8 (size: 0x8)
    class UW_SplitStackMenu_C* W_SplitStackMenu;                                      // 0x03F0 (size: 0x8)
    class UWidgetSwitcher* WS_Primary;                                                // 0x03F8 (size: 0x8)
    class UWidgetSwitcher* WS_PrimaryRightPanel;                                      // 0x0400 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* OwningCharacter;                                // 0x0408 (size: 0x8)
    TArray<FDataTableRowHandle> CurrentCraftingBenchesInRange;                        // 0x0410 (size: 0x10)
    EInventoryMode InventoryMode;                                                     // 0x0420 (size: 0x1)
    class UAbiotic_InventoryComponent_C* ActiveContainer;                             // 0x0428 (size: 0x8)
    bool LShiftModifierHeld;                                                          // 0x0430 (size: 0x1)
    FString BackpackName;                                                             // 0x0438 (size: 0x10)
    class UW_Player_Journal_Main_C* W Player Journal Main;                            // 0x0448 (size: 0x8)
    FString TakeAllInputAction;                                                       // 0x0450 (size: 0x10)
    bool TakeAllActionInProgress;                                                     // 0x0460 (size: 0x1)
    float Time Last Used Pager;                                                       // 0x0464 (size: 0x4)
    class UW_InventoryItemSlot_C* HoveredSlotWidget;                                  // 0x0468 (size: 0x8)
    FW_PlayerInventory_Main_CJournal_Entry_Update Journal_Entry_Update;               // 0x0470 (size: 0x10)
    void Journal_Entry_Update();
    FW_PlayerInventory_Main_CInventoryModeRefreshed InventoryModeRefreshed;           // 0x0480 (size: 0x10)
    void InventoryModeRefreshed(EInventoryMode InventoryMode);
    FW_PlayerInventory_Main_COnInventoryClosed OnInventoryClosed;                     // 0x0490 (size: 0x10)
    void OnInventoryClosed();
    bool CtrlModifierHeld;                                                            // 0x04A0 (size: 0x1)

    void WidgetAction_CycleMenu(bool Next, bool& Handled);
    void WidgetAction_CloseMenu(bool& Handled);
    void SetUniqueInventoryTheme();
    bool IsSplitStackOpen();
    void ToggleSplitStack(bool Show, FAbiotic_InventoryItemSlotStruct ItemSlotStruct, class UW_InventoryItemSlot_C* OriginSlot);
    void RemoveUIPopup(FUIPopupRowHandle PopupRow);
    void TryAddUIPopup(FUIPopupRowHandle PopupRow, bool ForceIfSeen);
    void Reset Scrap/ Repair Cursor Mode(bool& Success);
    void CloseInventorySafely();
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void Refresh All Panels();
    void ToggleHotbarVis(EInventoryMode InventoryMode);
    void RefreshSkillsPanel();
    void Try Place Item In Hotbar Slot(const int32 HotbarIndex, bool& Success);
    void Get Keybinding Key Data Action(TArray<FDovracInput>& KeyBindingList, FString InputName, FKey& KeyData);
    void CloseItemContextMenu();
    void RefreshEquipmentSlots();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UncheckAllTabs();
    void RefreshInventoryMode();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateMoney();
    void Construct();
    void TryUsePager(class AActor* LinkedActor);
    void Tab_Backpack(bool bIsChecked);
    void CloseInventory();
    void Tab_Crafting(bool bIsChecked);
    void Tab_Health(bool bIsChecked);
    void Tab_Journal(bool bIsChecked);
    void Tab_Skills(bool bIsChecked);
    void JournalEntriesViewed();
    void Toggle_NewItemBlurOverlay(bool Show, bool UserHidPopup);
    void UpdateHealthPanelBody();
    void BndEvt__W_PlayerInventory_Main_W_Inventory_NavBar_K2Node_ComponentBoundEvent_1_CycleNavTab__DelegateSignature(bool Next);
    void StatContainerRefreshed();
    void UpdateBodyTemp();
    void InventoryUpdated_Equipment(class UAbiotic_InventoryComponent_C* Inventory);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateInventoryBlur();
    void TryCloseInventory();
    void Delayed_CheckCharacterPaneRotation();
    void ExecuteUbergraph_W_PlayerInventory_Main(int32 EntryPoint);
    void OnInventoryClosed__DelegateSignature();
    void InventoryModeRefreshed__DelegateSignature(EInventoryMode InventoryMode);
    void Journal_Entry_Update__DelegateSignature();
}; // Size: 0x4A1

#endif
