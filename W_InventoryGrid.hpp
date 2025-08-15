#ifndef UE4SS_SDK_W_InventoryGrid_HPP
#define UE4SS_SDK_W_InventoryGrid_HPP

class UW_InventoryGrid_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UUniformGridPanel* UGrid_InventorySlots;                                    // 0x02E8 (size: 0x8)
    class UAbiotic_InventoryComponent_C* MainInventoryComponent;                      // 0x02F0 (size: 0x8)
    int32 CurrentRow;                                                                 // 0x02F8 (size: 0x4)
    int32 CurrentColumn;                                                              // 0x02FC (size: 0x4)
    int32 MaxColumns;                                                                 // 0x0300 (size: 0x4)
    int32 LeftoverColumns;                                                            // 0x0304 (size: 0x4)
    int32 RequiredRows;                                                               // 0x0308 (size: 0x4)
    int32 RealSlots;                                                                  // 0x030C (size: 0x4)
    class UW_PlayerHUD_Main_C* Player HUDRef;                                         // 0x0310 (size: 0x8)
    TArray<FName> RecipeList;                                                         // 0x0318 (size: 0x10)
    bool Recipe Use This Item;                                                        // 0x0328 (size: 0x1)
    class AAbiotic_PlayerCharacter_C* UsingCharacter;                                 // 0x0330 (size: 0x8)
    TArray<int32> PendingSlotHighlights;                                              // 0x0338 (size: 0x10)
    EPaintColor SlotThemeColor;                                                       // 0x0348 (size: 0x1)
    TEnumAsByte<E_InventorySlotAppearance::Type> SlotAppearance;                      // 0x0349 (size: 0x1)
    bool CanBeFavorited;                                                              // 0x034A (size: 0x1)
    TArray<TEnumAsByte<E_InventorySlotAppearance::Type>> SlotAppearanceOverrides;     // 0x0350 (size: 0x10)
    int32 Array Index;                                                                // 0x0360 (size: 0x4)
    TMap<int32, TSoftObjectPtr<UW_InventoryItemSlot_C>> ItemSlotMap;                  // 0x0368 (size: 0x50)

    EPaintColor GetThemeColorFromSlotAppearance(TEnumAsByte<E_InventorySlotAppearance::Type> Index);
    void FocusCursorAtSlotLocation(int32 Row, int32 Column, double Time);
    void DragDropDPadNavigation(class UW_InventoryItemSlot_C* HoveredSlot, TEnumAsByte<E_NavigationDirection::Type> Direction, bool& HandledNavigation, TEnumAsByte<E_NavigationDirection::Type>& EscapeDirection);
    void ClearHighlightedSlots();
    void CheckPendingSlotHighlights();
    void HighlightSlot(int32 SlotIndex, bool Visible);
    void Construct();
    void RefreshGrid();
    void ExecuteUbergraph_W_InventoryGrid(int32 EntryPoint);
}; // Size: 0x3B8

#endif
