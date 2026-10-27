#ifndef UE4SS_SDK_W_InventoryItemSlot_HPP
#define UE4SS_SDK_W_InventoryItemSlot_HPP

class UW_InventoryItemSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* PulseUpgradeArrow;                                        // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Recharge;                                                 // 0x02F0 (size: 0x8)
    class UWidgetAnimation* BounceOutline;                                            // 0x02F8 (size: 0x8)
    class UWidgetAnimation* ScaleDown;                                                // 0x0300 (size: 0x8)
    class UWidgetAnimation* ScaleUp;                                                  // 0x0308 (size: 0x8)
    class UImage* BG;                                                                 // 0x0310 (size: 0x8)
    class UImage* BrokenIcon;                                                         // 0x0318 (size: 0x8)
    class UImage* EdgeGlow;                                                           // 0x0320 (size: 0x8)
    class UImage* ExtraIcon;                                                          // 0x0328 (size: 0x8)
    class UImage* HigherCostIcon;                                                     // 0x0330 (size: 0x8)
    class UImage* HotkeyNumberBox;                                                    // 0x0338 (size: 0x8)
    class UTextBlock* HotkeyNumberText;                                               // 0x0340 (size: 0x8)
    class UBorder* HoverBorder;                                                       // 0x0348 (size: 0x8)
    class UImage* Icon;                                                               // 0x0350 (size: 0x8)
    class UImage* Icon_Craftable;                                                     // 0x0358 (size: 0x8)
    class UImage* Icon_Favorite;                                                      // 0x0360 (size: 0x8)
    class UImage* Icon_Radioactive;                                                   // 0x0368 (size: 0x8)
    class UImage* Icon_UpgradeAvailable;                                              // 0x0370 (size: 0x8)
    class UProgressBar* ProgressBar_DurabilityBar;                                    // 0x0378 (size: 0x8)
    class UProgressBar* ProgressBar_FillLevel;                                        // 0x0380 (size: 0x8)
    class UImage* RechargeIcon;                                                       // 0x0388 (size: 0x8)
    class UImage* SelectionBorder;                                                    // 0x0390 (size: 0x8)
    class UTextBlock* StackText;                                                      // 0x0398 (size: 0x8)
    class UImage* WeightBG;                                                           // 0x03A0 (size: 0x8)
    FAbioticInventoryItemSlot ItemInSlot;                                             // 0x03A8 (size: 0x98)
    bool Empty;                                                                       // 0x0440 (size: 0x1)
    bool HasEmptySlotTooltip;                                                         // 0x0441 (size: 0x1)
    FText EmptySlotTooltipText;                                                       // 0x0448 (size: 0x10)
    bool HasEmptySlotIcon;                                                            // 0x0458 (size: 0x1)
    TSoftObjectPtr<class UTexture2D> EmptySlotIcon;                                   // 0x0460 (size: 0x28)
    class UW_InventoryItemSlot_Tooltip_C* HoverTooltip;                               // 0x0488 (size: 0x8)
    FVector2D DragOffset;                                                             // 0x0490 (size: 0x10)
    class UW_Inventory_DraggableItem_C* DraggedItemWidget;                            // 0x04A0 (size: 0x8)
    EInventorySlotType SlotType;                                                      // 0x04A8 (size: 0x1)
    int32 SlotIndex;                                                                  // 0x04AC (size: 0x4)
    bool RepresentationOnly;                                                          // 0x04B0 (size: 0x1)
    class UW_InventoryGrid_C* ParentInventoryGrid;                                    // 0x04B8 (size: 0x8)
    FLinearColor DefaultBG_Color;                                                     // 0x04C0 (size: 0x10)
    FLinearColor PinnedRecipeBG_Color;                                                // 0x04D0 (size: 0x10)
    FLinearColor RedBG_Color;                                                         // 0x04E0 (size: 0x10)
    bool UnavailableItem;                                                             // 0x04F0 (size: 0x1)
    FAbioticInventoryChangeableData ItemChangeableStats;                              // 0x04F8 (size: 0x88)
    double MaxWeightShown;                                                            // 0x0580 (size: 0x8)
    double MinWeightShown;                                                            // 0x0588 (size: 0x8)
    TSoftObjectPtr<class UTexture2D> LastItemIcon;                                    // 0x0590 (size: 0x28)
    bool LastItemCanLoseDurability;                                                   // 0x05B8 (size: 0x1)
    int32 LastItemMaxLiquid;                                                          // 0x05BC (size: 0x4)
    TArray<ELiquidType> LastItemAllowedLiquids;                                       // 0x05C0 (size: 0x10)
    double LastItemWeight;                                                            // 0x05D0 (size: 0x8)
    TArray<FGlobalItemRowHandle> LastItemDropDownItems;                               // 0x05D8 (size: 0x10)
    bool Same Item;                                                                   // 0x05E8 (size: 0x1)
    TMap<ELiquidType, FLinearColor> LiquidFillColors;                                 // 0x05F0 (size: 0x50)
    class UW_RecipeSubstitute_Tooltip_C* RecipeSubsToolTip;                           // 0x0640 (size: 0x8)
    FKey KeyPressed;                                                                  // 0x0648 (size: 0x18)
    bool ShowTopLeftHotkeyNumber;                                                     // 0x0660 (size: 0x1)
    FString TopLeftHotkeyBinding;                                                     // 0x0668 (size: 0x10)
    bool QuickMoveOn;                                                                 // 0x0678 (size: 0x1)
    int32 Leftovers;                                                                  // 0x067C (size: 0x4)
    bool BriefTooltip;                                                                // 0x0680 (size: 0x1)
    bool CanShowCraftableIcon;                                                        // 0x0681 (size: 0x1)
    bool EdgeGlowWhenFilled;                                                          // 0x0682 (size: 0x1)
    bool RemoveGlowWhenHovered;                                                       // 0x0683 (size: 0x1)
    bool PinnedRecipeItemPresent;                                                     // 0x0684 (size: 0x1)
    TEnumAsByte<E_ItemTooltipState::Type> TooltipDisplayState;                        // 0x0685 (size: 0x1)
    EPaintColor SlotTheme;                                                            // 0x0686 (size: 0x1)
    TArray<double> RadiationWarningTiers;                                             // 0x0688 (size: 0x10)
    float DragGhostOpacity;                                                           // 0x0698 (size: 0x4)
    FTextureVariant TextureVariantStruct;                                             // 0x06A0 (size: 0x78)
    bool RecentlyClientPredicted;                                                     // 0x0718 (size: 0x1)
    TEnumAsByte<E_InventorySlotAppearance::Type> SlotAppearance;                      // 0x0719 (size: 0x1)
    bool HiddenItem;                                                                  // 0x071A (size: 0x1)
    TSoftObjectPtr<class UTexture2D> UnknownItemIcon;                                 // 0x0720 (size: 0x28)
    bool CanBeFavorited;                                                              // 0x0748 (size: 0x1)
    FW_InventoryItemSlot_COnSpecialClick OnSpecialClick;                              // 0x0750 (size: 0x10)
    void OnSpecialClick(bool Clicked);
    TSoftObjectPtr<class UTexture2D> BackgroundImage;                                 // 0x0760 (size: 0x28)
    bool HideWeightBackground;                                                        // 0x0788 (size: 0x1)
    bool HideUpgradeIcon;                                                             // 0x0789 (size: 0x1)
    FW_InventoryItemSlot_COnItemSlotChanged OnItemSlotChanged;                        // 0x0790 (size: 0x10)
    void OnItemSlotChanged();
    bool IsRecipeSubstitute;                                                          // 0x07A0 (size: 0x1)
    FRecipeSubstituteRowHandle RecipeSubstituteRow;                                   // 0x07A8 (size: 0x10)

    void GetItemOrSubstitute(bool& IsSubstitute, FRecipeSubstituteRowHandle& RecipeSubstituteRow, FGlobalItemRowHandle& ItemRow);
    void FocusCursorOnSlot(double Time);
    void GetIconFromSoftReference(TSoftObjectPtr<class UTexture2D> InTexture, class UTexture2D*& OutTexture);
    void CheckItemUpgradeAvailability(bool ForceHide);
    void TryToggleFavoriteSlot();
    void SetNewBackgroundColorFromTheme();
    void PerformMouseButtonDown(const FPointerEvent& MouseEvent);
    void Local Try Perform Scrap Action(bool ForceScrap, TEnumAsByte<E_CursorMode::Type> CursorModeToCheck, bool& Success);
    void ToggleFavoritedSlot();
    void OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    void CanEquipGear?();
    void Is Gear Slot(EInventorySlotType SlotType, bool& Return);
    void OnEmptySlotClicked();
    void GetItemWeightMultiplier(double BaseWeight, FAbioticInventoryItem& ItemData);
    void ClientDragDropPrediction(class UW_InventoryItemSlot_C* OriginWidget, FInventorySlotSelected_Struct IncomingItemSlot, TEnumAsByte<E_ItemDragDropOutcome::Type> Outcome, int32 Leftovers, int32 StackSize);
    void GetLiquidWeightMultiplier();
    void SetupTextureVariantData(FTextureVariantRowHandle TextureVariantRow, bool& FoundRow);
    void ResetBackgroundColorToDefault();
    void OnItemDragFinished();
    void Update Recipe Item Count In Slot(bool ItemFound, int32 ItemCount, int32 AmountNeeded);
    void Toggle Bounce Outline(bool Start, bool RemoveWithHover);
    void UpdateDebugTooltip();
    void IsInteractable();
    void Jump to Recipe for Item in Slot();
    void On_HoverBorder_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ToggleCraftableIcon();
    void ToggleCurrentItemWeightIndicator(bool Show);
    void RefreshWeightIndicator(double ItemDefaultWeight, int32 ItemMaxLiquid, TArray<ELiquidType>& AllowedLiquidTypes);
    void IsItemMoney();
    void TryOpenContextMenu();
    void ToggleLiquidFillBar(bool Show);
    void ToggleDurabilityBar(bool Show);
    void IsSameSlotAsItemOnCursor?(bool AdvancedCheck, bool& DropOnClick?, bool& SameItemSlot, bool& SlotChangedDuringDrag);
    void OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void PickUpThisItemToCursor(bool DraggedBySplitStack, int32 SplitStackSize);
    void DropItemFromCursor(class UDragDropOperation*& DragDropOperation, int32& Leftovers);
    void GetItemData(bool& Success, FAbioticInventoryItem& ItemData);
    void TryPerformActionOnSlot(bool& Success, int32& Leftovers);
    void TryReceiveItemInInventorySlot(FInventorySlotSelected_Struct IncomingItemSlot, class UDraggableItem_Operation_C* DragOperation, int32& Leftovers);
    void IsSlotEmpty();
    void OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ToggleItemTooltip(bool Create);
    void ToggleSelected();
    void OnLoaded_80C00AE842035BF319B84E86CF5B3C02(class UObject* Loaded);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void UpdateSlot_UI(FAbioticInventoryItemSlot ItemInSlot, FAbioticInventoryChangeableData ItemChangeableStats, bool Selected, bool HigherCost, bool RecipePinHighlighted, bool ClientPrediction, bool HiddenItem, bool IsSubstitute, FRecipeSubstituteRowHandle SubstituteRow);
    void SetupEmptyIcon();
    void Construct();
    void PickupMoney();
    void PlayInventoryMoveSound(TSoftObjectPtr<class UObject> 2DSound);
    void PreConstruct(bool IsDesignTime);
    void Start Scrap Item Event();
    void Close Item Scrap Popup();
    void StartDisplayScrapConfirmMenu(TEnumAsByte<E_CursorMode::Type> CursorModeToCheck);
    void TryPerformRechargeAnim();
    void Destruct();
    void ResetBackgroundImage();
    void UpdateSlotAppearance(TEnumAsByte<E_InventorySlotAppearance::Type> SlotAppearance);
    void ExecuteUbergraph_W_InventoryItemSlot(int32 EntryPoint);
    void OnItemSlotChanged__DelegateSignature();
    void OnSpecialClick__DelegateSignature(bool Clicked);
}; // Size: 0x7B8

#endif
