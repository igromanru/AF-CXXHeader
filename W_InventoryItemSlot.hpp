#ifndef UE4SS_SDK_W_InventoryItemSlot_HPP
#define UE4SS_SDK_W_InventoryItemSlot_HPP

class UW_InventoryItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Recharge;                                                 // 0x02E8 (size: 0x8)
    class UWidgetAnimation* BounceOutline;                                            // 0x02F0 (size: 0x8)
    class UWidgetAnimation* ScaleDown;                                                // 0x02F8 (size: 0x8)
    class UWidgetAnimation* ScaleUp;                                                  // 0x0300 (size: 0x8)
    class UImage* BG;                                                                 // 0x0308 (size: 0x8)
    class UImage* BrokenIcon;                                                         // 0x0310 (size: 0x8)
    class UImage* EdgeGlow;                                                           // 0x0318 (size: 0x8)
    class UImage* ExtraIcon;                                                          // 0x0320 (size: 0x8)
    class UImage* HigherCostIcon;                                                     // 0x0328 (size: 0x8)
    class UImage* HotkeyNumberBox;                                                    // 0x0330 (size: 0x8)
    class UTextBlock* HotkeyNumberText;                                               // 0x0338 (size: 0x8)
    class UBorder* HoverBorder;                                                       // 0x0340 (size: 0x8)
    class UImage* Icon;                                                               // 0x0348 (size: 0x8)
    class UImage* Icon_Craftable;                                                     // 0x0350 (size: 0x8)
    class UImage* Icon_Favorite;                                                      // 0x0358 (size: 0x8)
    class UImage* Icon_Radioactive;                                                   // 0x0360 (size: 0x8)
    class UProgressBar* ProgressBar_DurabilityBar;                                    // 0x0368 (size: 0x8)
    class UProgressBar* ProgressBar_FillLevel;                                        // 0x0370 (size: 0x8)
    class UImage* RechargeIcon;                                                       // 0x0378 (size: 0x8)
    class UImage* SelectionBorder;                                                    // 0x0380 (size: 0x8)
    class UTextBlock* StackText;                                                      // 0x0388 (size: 0x8)
    class UImage* WeightBG;                                                           // 0x0390 (size: 0x8)
    FAbiotic_InventoryItemSlotStruct ItemInSlot;                                      // 0x0398 (size: 0x128)
    bool Empty;                                                                       // 0x04C0 (size: 0x1)
    bool HasEmptySlotTooltip;                                                         // 0x04C1 (size: 0x1)
    FText EmptySlotTooltipText;                                                       // 0x04C8 (size: 0x10)
    bool HasEmptySlotIcon;                                                            // 0x04D8 (size: 0x1)
    TSoftObjectPtr<UTexture2D> EmptySlotIcon;                                         // 0x04E0 (size: 0x28)
    class UW_InventoryItemSlot_Tooltip_C* HoverTooltip;                               // 0x0508 (size: 0x8)
    FVector2D DragOffset;                                                             // 0x0510 (size: 0x10)
    class UW_Inventory_DraggableItem_C* DraggedItemWidget;                            // 0x0520 (size: 0x8)
    TEnumAsByte<E_InventorySlotType::Type> SlotType;                                  // 0x0528 (size: 0x1)
    int32 SlotIndex;                                                                  // 0x052C (size: 0x4)
    bool RepresentationOnly;                                                          // 0x0530 (size: 0x1)
    class UW_InventoryGrid_C* ParentInventoryGrid;                                    // 0x0538 (size: 0x8)
    FLinearColor DefaultBG_Color;                                                     // 0x0540 (size: 0x10)
    FLinearColor PinnedRecipeBG_Color;                                                // 0x0550 (size: 0x10)
    FLinearColor RedBG_Color;                                                         // 0x0560 (size: 0x10)
    bool UnavailableItem;                                                             // 0x0570 (size: 0x1)
    FAbiotic_InventoryChangeableDataStruct ItemChangeableStats;                       // 0x0578 (size: 0x118)
    double MaxWeightShown;                                                            // 0x0690 (size: 0x8)
    double MinWeightShown;                                                            // 0x0698 (size: 0x8)
    TSoftObjectPtr<UTexture2D> LastItemIcon;                                          // 0x06A0 (size: 0x28)
    bool LastItemCanLoseDurability;                                                   // 0x06C8 (size: 0x1)
    int32 LastItemMaxLiquid;                                                          // 0x06CC (size: 0x4)
    TArray<TEnumAsByte<E_LiquidType::Type>> LastItemAllowedLiquids;                   // 0x06D0 (size: 0x10)
    double LastItemWeight;                                                            // 0x06E0 (size: 0x8)
    TArray<FDataTableRowHandle> LastItemDropDownItems;                                // 0x06E8 (size: 0x10)
    bool Same Item;                                                                   // 0x06F8 (size: 0x1)
    TMap<TEnumAsByte<E_LiquidType::Type>, FLinearColor> LiquidFillColors;             // 0x0700 (size: 0x50)
    class UW_RecipeSubstitute_Tooltip_C* RecipeSubsToolTip;                           // 0x0750 (size: 0x8)
    FKey KeyPressed;                                                                  // 0x0758 (size: 0x18)
    bool ShowTopLeftHotkeyNumber;                                                     // 0x0770 (size: 0x1)
    FString TopLeftHotkeyBinding;                                                     // 0x0778 (size: 0x10)
    bool QuickMoveOn;                                                                 // 0x0788 (size: 0x1)
    int32 Leftovers;                                                                  // 0x078C (size: 0x4)
    bool BriefTooltip;                                                                // 0x0790 (size: 0x1)
    bool CanShowCraftableIcon;                                                        // 0x0791 (size: 0x1)
    bool EdgeGlowWhenFilled;                                                          // 0x0792 (size: 0x1)
    bool RemoveGlowWhenHovered;                                                       // 0x0793 (size: 0x1)
    bool PinnedRecipeItemPresent;                                                     // 0x0794 (size: 0x1)
    TEnumAsByte<E_ItemTooltipState::Type> TooltipDisplayState;                        // 0x0795 (size: 0x1)
    EPaintColor SlotTheme;                                                            // 0x0796 (size: 0x1)
    TArray<double> RadiationWarningTiers;                                             // 0x0798 (size: 0x10)
    float DragGhostOpacity;                                                           // 0x07A8 (size: 0x4)
    FTextureVariant_Struct TextureVariantStruct;                                      // 0x07B0 (size: 0x68)
    bool RecentlyClientPredicted;                                                     // 0x0818 (size: 0x1)
    TEnumAsByte<E_InventorySlotAppearance::Type> SlotAppearance;                      // 0x0819 (size: 0x1)
    bool HiddenItem;                                                                  // 0x081A (size: 0x1)
    TSoftObjectPtr<UTexture2D> UnknownItemIcon;                                       // 0x0820 (size: 0x28)
    bool CanBeFavorited;                                                              // 0x0848 (size: 0x1)
    FW_InventoryItemSlot_COnSpecialClick OnSpecialClick;                              // 0x0850 (size: 0x10)
    void OnSpecialClick(bool Clicked);

    void TryToggleFavoriteSlot();
    void SetNewBackgroundColorFromTheme();
    FEventReply PerformMouseButtonDown(const FPointerEvent& MouseEvent);
    void Local Try Perform Scrap Action(bool ForceScrap, TEnumAsByte<E_CursorMode::Type> CursorModeToCheck, bool& Success);
    void ToggleFavoritedSlot();
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    bool CanEquipGear?();
    void Is Gear Slot(TEnumAsByte<E_InventorySlotType::Type> SlotType, bool& Return);
    void OnEmptySlotClicked();
    double GetItemWeightMultiplier(double BaseWeight, FAbiotic_InventoryItemStruct& ItemData);
    void ClientDragDropPrediction(class UW_InventoryItemSlot_C* OriginWidget, FInventorySlotSelected_Struct IncomingItemSlot, TEnumAsByte<E_ItemDragDropOutcome::Type> Outcome, int32 Leftovers, int32 StackSize);
    double GetLiquidWeightMultiplier();
    void SetupTextureVariantData(FDataTableRowHandle TextureVariantRow, bool& FoundRow);
    void ResetBackgroundToDefault();
    void OnItemDragFinished();
    void Update Recipe Item Count In Slot(bool ItemFound, int32 ItemCount, int32 AmountNeeded);
    void Toggle Bounce Outline(bool Start, bool RemoveWithHover);
    void UpdateDebugTooltip();
    bool IsInteractable();
    void Jump to Recipe for Item in Slot();
    FEventReply On_HoverBorder_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ToggleCraftableIcon();
    void ToggleCurrentItemWeightIndicator(bool Show);
    void RefreshWeightIndicator(double ItemDefaultWeight, int32 ItemMaxLiquid, TArray<TEnumAsByte<E_LiquidType::Type>>& AllowedLiquidTypes);
    bool IsItemMoney();
    void TryOpenContextMenu();
    void ToggleLiquidFillBar(bool Show);
    void ToggleDurabilityBar(bool Show);
    void IsSameSlotAsItemOnCursor?(bool AdvancedCheck, bool& DropOnClick?, bool& SameItemSlot, bool& SlotChangedDuringDrag);
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void PickUpThisItemToCursor(bool DraggedBySplitStack, int32 SplitStackSize);
    void DropItemFromCursor(class UDragDropOperation*& DragDropOperation, int32& Leftovers);
    void GetItemData(bool& Success, FAbiotic_InventoryItemStruct& ItemData);
    void TryPerformActionOnSlot(bool& Success, int32& Leftovers);
    void TryReceiveItemInInventorySlot(FInventorySlotSelected_Struct IncomingItemSlot, class UDraggableItem_Operation_C* DragOperation, int32& Leftovers);
    bool IsSlotEmpty();
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ToggleItemTooltip(bool Create);
    void ToggleSelected();
    void OnLoaded_5BE9753D47238C254B96898F51F5AE85(class UObject* Loaded);
    void OnLoaded_46D259C94A3C21F3E04BA6AD42D9E4DE(class UObject* Loaded);
    void OnLoaded_80C00AE842035BF319B84E86CF5B3C02(class UObject* Loaded);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void UpdateSlot_UI(FAbiotic_InventoryItemSlotStruct ItemInSlot, FAbiotic_InventoryChangeableDataStruct ItemChangeableStats, bool Selected, bool HigherCost, bool RecipePinHighlighted, bool ClientPrediction, bool HiddenItem);
    void SetupEmptyIcon();
    void Construct();
    void PickupMoney();
    void PlayInventoryMoveSound(TSoftObjectPtr<UObject> 2DSound);
    void PreConstruct(bool IsDesignTime);
    void Start Scrap Item Event();
    void Close Item Scrap Popup();
    void StartDisplayScrapConfirmMenu(TEnumAsByte<E_CursorMode::Type> CursorModeToCheck);
    void TryPerformRechargeAnim();
    void Destruct();
    void ExecuteUbergraph_W_InventoryItemSlot(int32 EntryPoint);
    void OnSpecialClick__DelegateSignature(bool Clicked);
}; // Size: 0x860

#endif
