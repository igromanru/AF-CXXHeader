#ifndef UE4SS_SDK_W_Inventory_CraftingArea_HPP
#define UE4SS_SDK_W_Inventory_CraftingArea_HPP

class UW_Inventory_CraftingArea_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* BounceCraftButton;                                        // 0x02E8 (size: 0x8)
    class UWidgetAnimation* PulseBenchUpgradesButton;                                 // 0x02F0 (size: 0x8)
    class UCanvasPanel* BenchUpgradeCanvas;                                           // 0x02F8 (size: 0x8)
    class UImage* BenchUpgradeIcon;                                                   // 0x0300 (size: 0x8)
    class UButton* Button_CraftItem;                                                  // 0x0308 (size: 0x8)
    class UButton* Button_CraftQueue_Left;                                            // 0x0310 (size: 0x8)
    class UButton* Button_CraftQueue_LeftMin;                                         // 0x0318 (size: 0x8)
    class UButton* Button_CraftQueue_Right;                                           // 0x0320 (size: 0x8)
    class UButton* Button_CraftQueue_RightMax;                                        // 0x0328 (size: 0x8)
    class UButton* Button_EditCraftingBenchName;                                      // 0x0330 (size: 0x8)
    class UButton* Button_PinRecipe;                                                  // 0x0338 (size: 0x8)
    class UButton* Button_ReturnToPrevRecipe;                                         // 0x0340 (size: 0x8)
    class UButton* Button_ShareRecipe;                                                // 0x0348 (size: 0x8)
    class UButton* Button_UnpinRecipe;                                                // 0x0350 (size: 0x8)
    class UButton* Button_Upgrades;                                                   // 0x0358 (size: 0x8)
    class UButton* Button_UpgradesBack;                                               // 0x0360 (size: 0x8)
    class UCheckBox* Checkbox_AddToFavorites;                                         // 0x0368 (size: 0x8)
    class UCheckBox* CheckBox_FilterByAvailable;                                      // 0x0370 (size: 0x8)
    class UCheckBox* CheckBox_FilterByBenchRecipes;                                   // 0x0378 (size: 0x8)
    class UHorizontalBox* Cold_HBox;                                                  // 0x0380 (size: 0x8)
    class UCanvasPanel* CraftButtonCanvas;                                            // 0x0388 (size: 0x8)
    class UImage* CraftCount_LeftArrow;                                               // 0x0390 (size: 0x8)
    class UImage* CraftCount_RightArrow;                                              // 0x0398 (size: 0x8)
    class UTextBlock* CraftingButtonText;                                             // 0x03A0 (size: 0x8)
    class UTextBlock* CraftingButtonText_1;                                           // 0x03A8 (size: 0x8)
    class UTextBlock* CraftingButtonText_2;                                           // 0x03B0 (size: 0x8)
    class UVerticalBox* CraftingCategoryVBox;                                         // 0x03B8 (size: 0x8)
    class UImage* CraftingImage3D;                                                    // 0x03C0 (size: 0x8)
    class UScrollBox* CraftingScrollBox_OLD;                                          // 0x03C8 (size: 0x8)
    class UTextBlock* CurrentItem_Details;                                            // 0x03D0 (size: 0x8)
    class UTextBlock* CurrentItem_SlotType;                                           // 0x03D8 (size: 0x8)
    class UTextBlock* CurrentItemDescription_text;                                    // 0x03E0 (size: 0x8)
    class UTextBlock* CurrentItemFlavor_text;                                         // 0x03E8 (size: 0x8)
    class UTextBlock* CurrentItemName_text;                                           // 0x03F0 (size: 0x8)
    class UUniformGridPanel* CurrentRecipeGrid;                                       // 0x03F8 (size: 0x8)
    class UEditableTextBox* EditableTextBox_0;                                        // 0x0400 (size: 0x8)
    class UTextBlock* FilterByAvailableText;                                          // 0x0408 (size: 0x8)
    class UTextBlock* FilterByBenchRecipesText;                                       // 0x0410 (size: 0x8)
    class UHorizontalBox* Heat_Hbox;                                                  // 0x0418 (size: 0x8)
    class UImage* Icon_PinRecipe;                                                     // 0x0420 (size: 0x8)
    class UImage* Icon_ShareRecipe;                                                   // 0x0428 (size: 0x8)
    class UTextBlock* NearbyItem_Amount;                                              // 0x0430 (size: 0x8)
    class UW_Keybind_C* NextCategory;                                                 // 0x0438 (size: 0x8)
    class UW_Keybind_C* PreviousCategory;                                             // 0x0440 (size: 0x8)
    class UProgressBar* ProgressBar_Crafitng;                                         // 0x0448 (size: 0x8)
    class UImage* RadiationIcon_2;                                                    // 0x0450 (size: 0x8)
    class UImage* RadiationIcon_3;                                                    // 0x0458 (size: 0x8)
    class UTextBlock* RecipeDebugText;                                                // 0x0460 (size: 0x8)
    class UTileView* RecipeEntryGrid_1;                                               // 0x0468 (size: 0x8)
    class UListView* RecipeEntryList_1;                                               // 0x0470 (size: 0x8)
    class USizeBox* RecipeList_Grid;                                                  // 0x0478 (size: 0x8)
    class USizeBox* RecipeList_List;                                                  // 0x0480 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_1;                                     // 0x0488 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_2;                                     // 0x0490 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_3;                                     // 0x0498 (size: 0x8)
    class UW_InventoryItemSlot_C* RequiredItem_4;                                     // 0x04A0 (size: 0x8)
    class UTextBlock* RequiresBenchWarning;                                           // 0x04A8 (size: 0x8)
    class UCanvasPanel* Screen_Crafting;                                              // 0x04B0 (size: 0x8)
    class UWidgetSwitcher* Switcher_Main;                                             // 0x04B8 (size: 0x8)
    class UTextBlock* TakeAll_Text;                                                   // 0x04C0 (size: 0x8)
    class UTextBlock* TakeAll_Text_1;                                                 // 0x04C8 (size: 0x8)
    class UTextBlock* TakeAll_Text_2;                                                 // 0x04D0 (size: 0x8)
    class UTextBlock* TemperatureCold_Text;                                           // 0x04D8 (size: 0x8)
    class UTextBlock* TemperatureHot_Text;                                            // 0x04E0 (size: 0x8)
    class UTextBlock* TitleMain_Crafting;                                             // 0x04E8 (size: 0x8)
    class UTextBlock* TitleMain_Crafting_1;                                           // 0x04F0 (size: 0x8)
    class UVerticalBox* VBOX_Buffs;                                                   // 0x04F8 (size: 0x8)
    class UVerticalBox* VBox_CraftingGridButtons;                                     // 0x0500 (size: 0x8)
    class UW_BenchUpgradeScreen_C* W_BenchUpgradeScreen;                              // 0x0508 (size: 0x8)
    class UW_CraftingListEmptyMessage_C* W_CraftingListEmptyMessage;                  // 0x0510 (size: 0x8)
    class UW_Research_Microscope_C* W_Research_Microscope;                            // 0x0518 (size: 0x8)
    class UW_Research_RecipeGuesser_C* W_Research_RecipeGuesser;                      // 0x0520 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Construction;                                   // 0x0528 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Defense;                                        // 0x0530 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Electricity;                                    // 0x0538 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Farming;                                        // 0x0540 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Fav;                                            // 0x0548 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Food;                                           // 0x0550 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Gear;                                           // 0x0558 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_General;                                        // 0x0560 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Health;                                         // 0x0568 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Resources;                                      // 0x0570 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Tools;                                          // 0x0578 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Vehicles;                                       // 0x0580 (size: 0x8)
    class UW_RecipeFilterTab_C* W_Tab_Weapons;                                        // 0x0588 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_CraftingMain;                               // 0x0590 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_EmptyList;                                  // 0x0598 (size: 0x8)
    bool PlayerCraftingOnly;                                                          // 0x05A0 (size: 0x1)
    FDataTableRowHandle SelectedItemToCraft;                                          // 0x05A8 (size: 0x10)
    FAbioticRecipe_Struct SelectedRecipe;                                             // 0x05B8 (size: 0xB8)
    FButtonStyle CraftButton_Style_Allowed;                                           // 0x0670 (size: 0x3F0)
    FButtonStyle CraftButton_Style_Disallowed;                                        // 0x0A60 (size: 0x3F0)
    bool Allowed to Craft;                                                            // 0x0E50 (size: 0x1)
    class AAbiotic_PlayerCharacter_C* CraftingPlayerCharacter;                        // 0x0E58 (size: 0x8)
    bool UsingBench;                                                                  // 0x0E60 (size: 0x1)
    bool ShowCraftingProgressBar;                                                     // 0x0E61 (size: 0x1)
    double CurrentCraftingBarPercent;                                                 // 0x0E68 (size: 0x8)
    double TimeToCraft;                                                               // 0x0E70 (size: 0x8)
    TArray<FName> PlayerCraftingExtraCostItems;                                       // 0x0E78 (size: 0x10)
    TArray<FDataTableRowHandle> Benches Available;                                    // 0x0E88 (size: 0x10)
    TEnumAsByte<E_RecipeCategory::Type> CurrentRecipeFilter;                          // 0x0E98 (size: 0x1)
    bool Favorites;                                                                   // 0x0E99 (size: 0x1)
    class UCheckBox* CurrentlyCheckedCheckbox;                                        // 0x0EA0 (size: 0x8)
    bool ShowOnlyAvailableRecipes;                                                    // 0x0EA8 (size: 0x1)
    class UCraftingEntryItem* LastSelectedRecipe_ItemRow;                             // 0x0EB0 (size: 0x8)
    class AAbioticDeployed_CraftingBench_ParentBP_C* BenchRef;                        // 0x0EB8 (size: 0x8)
    class UDataTable* Recipe Table;                                                   // 0x0EC0 (size: 0x8)
    class UCraftingEntryItem* LastSelectedRecipe;                                     // 0x0EC8 (size: 0x8)
    class UW_RecipeFilterTab_C* Current Filter Tab;                                   // 0x0ED0 (size: 0x8)
    bool CraftingCancelled;                                                           // 0x0ED8 (size: 0x1)
    bool IsCrafting;                                                                  // 0x0ED9 (size: 0x1)
    class UAudioComponent* CraftingSound;                                             // 0x0EE0 (size: 0x8)
    bool RecipeListEmpty;                                                             // 0x0EE8 (size: 0x1)
    bool RecipeListRequiresRefresh;                                                   // 0x0EE9 (size: 0x1)
    FTimerHandle RefreshRecipeListTimer;                                              // 0x0EF0 (size: 0x8)
    bool HasSortedRecipeArray;                                                        // 0x0EF8 (size: 0x1)
    TArray<FName> CachedAlphabetizedArray;                                            // 0x0F00 (size: 0x10)
    class UCraftingEntryItem* ItemRowShortcutFrom;                                    // 0x0F10 (size: 0x8)
    int32 CraftQueueCount;                                                            // 0x0F18 (size: 0x4)
    FW_Inventory_CraftingArea_CCraftQueueCountUpdate CraftQueueCountUpdate;           // 0x0F20 (size: 0x10)
    void CraftQueueCountUpdate(int32 QueueCount);
    int32 MaxCraftQueueCount;                                                         // 0x0F30 (size: 0x4)
    FW_Inventory_CraftingArea_CNeverCraftedItemUpdate NeverCraftedItemUpdate;         // 0x0F38 (size: 0x10)
    void NeverCraftedItemUpdate();
    FTimerHandle RefreshRecipe;                                                       // 0x0F48 (size: 0x8)
    TArray<FGameplayTag> RecipeTagOrder;                                              // 0x0F50 (size: 0x10)
    bool HasSeenBenchUpgradesTip;                                                     // 0x0F60 (size: 0x1)
    TArray<class UCraftingEntryItem*> CraftingEntries;                                // 0x0F68 (size: 0x10)
    TArray<uint8> NewItemCategories;                                                  // 0x0F78 (size: 0x10)
    TArray<uint8> NewResearchCategories;                                              // 0x0F88 (size: 0x10)
    FString SearchStringFilter;                                                       // 0x0F98 (size: 0x10)
    bool UseGridForSearchResults;                                                     // 0x0FA8 (size: 0x1)
    FLinearColor TitleTextColor;                                                      // 0x0FAC (size: 0x10)
    TSoftObjectPtr<UObject> PreviouslySelectedItem;                                   // 0x0FC0 (size: 0x28)
    bool JustUsedRecipeShortcut;                                                      // 0x0FE8 (size: 0x1)

    void CycleCraftingList(bool Next);
    void SetRecipeItemName(FText ItemName, int32 CraftCount, bool RecipeStripped, bool ItemStripped);
    void ShouldCraftingItemBeShown(bool HideUnknownItems, FName ItemName, bool& Show);
    void ClearSearchString();
    void HasSearchStringFilter(bool& HasSearch);
    void GetShownRecipeCount(int32& Count);
    void UpdateFilterTabStates();
    void UpdateListSizes();
    void UpdateListSelectState();
    FText GetNewNegativeText();
    void SetCraftQueueCount(int32 InCount);
    bool CanQuantityBeCrafted(int32 Count, FName ItemRowName);
    void ValidateCraftingQueue(bool& CancelCrafting);
    void CheckForInventoryUpdates(bool ClearOnly);
    void JumpToItemRecipe(FName ItemName, bool ShowReturnButton);
    void Refresh Bench Upgrade State(bool Show);
    void Update Filter Tab Research State();
    void RefreshNewPossibleCraftedItemCount();
    TArray<class UAbiotic_InventoryComponent_C*> GetAdditionalInventories();
    void ApplyBenchUpgrade(FBenchUpgradeRowHandle UpgradeRow);
    void RefreshBenchUpgrades();
    void SetBenchReference(class AAbioticDeployed_CraftingBench_ParentBP_C* Bench);
    double Get Crafting Speed(FAbioticRecipe_Struct Recipe, class AAbiotic_PlayerCharacter_C* Player);
    void SetNoRecipeSelected();
    void CancelCraft();
    void SetNewRecipeFilterTabEffect(TEnumAsByte<E_RecipeCategory::Type> NewRecipeFilter);
    void SetupHoverTooltips();
    void DoesInventoryHaveSubstituteItems(TArray<FDataTableRowHandle>& SubstituteItems, int32 TotalRequired, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, bool& ContainsItem, int32& CountFound);
    void SortCraftedItemArrayAlphabetically(TArray<FName>& Recipes, TArray<FName>& AlphabetizedArray);
    void UncheckAllOtherFilterTabs(class UW_RecipeFilterTab_C* StayCheckedTab);
    void ChangeFilter(bool Favorites, class UW_RecipeFilterTab_C* Filter Tab);
    void TryAddIncreasedCostToArray(TArray<FAbioticItemCount_Struct>& RecipeItems, TArray<FAbioticItemCount_Struct>& ConsumeItems);
    void RefreshCraftingEligibility();
    void UpdateSelectedRecipeItem(FAbioticRecipe_Struct Recipe, bool IgnoreCraftingVisual, bool& Success);
    void UpdateCurrentlySelectedItemInfo(class UCraftingEntryItem* RecipeEntry, bool& SameAsBefore);
    void UpdateRecipeArray();
    void RefreshRecipeList(bool SkipCraftingCancel);
    void OnFailure_FEF5799C4678D1A0BC2D56B8814B1C26(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_FEF5799C4678D1A0BC2D56B8814B1C26(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void ChangeCraftingButtonStatus(bool AllowedToCraft, bool BenchIsMissing, FText RequiredBenchText);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_CraftItem_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__W_Inventory_CraftingArea_CheckBox_FilterByAvailable_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_Inventory_CraftingArea_Button_CraftItem_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__W_Inventory_CraftingArea_Checkbox_AddToFavorites_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__W_Inventory_CraftingArea_Button_ShareRecipe_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BindCheckboxesState();
    void Set3DPreviewMesh(TSoftObjectPtr<UObject> StaticMesh, FName CosmeticRow, FDataTableRowHandle TextureVariantRow);
    void BndEvt__W_Inventory_CraftingArea_Button_Upgrades_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_CraftingArea_Button_Upgrades_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void SetRecipeListNeedsRefresh();
    void RefreshRecipeList_DONOTCALL();
    void BndEvt__W_Inventory_CraftingArea_Button_Upgrades_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_CraftingArea_Button_PinRecipe_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_CraftingArea_Button_UnpinRecipe_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void UpdateUnpinButtonVisibility(bool Show);
    void BndEvt__W_Inventory_CraftingArea_Button_CraftQueue_Right_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_CraftingArea_Button_CraftQueue_Left_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void CraftQueueCountUpdate_Event(int32 QueueCount);
    void ContinueCrafting();
    void BndEvt__W_Inventory_CraftingArea_Button_CraftQueue_RightMax_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__W_Inventory_CraftingArea_Button_CraftQueue_LeftMin_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void UpdateNeverCraftedListStatus();
    void ChangeRecipeFilterTab(class UW_RecipeFilterTab_C* Tab, bool Favorites);
    void ReturnToCraftingScreen();
    void GetMaxCraftingQuantity();
    void OnRecipeClicked(class UObject* Item, bool ClearPrevious);
    void CheckFavoriteRecipe();
    void BndEvt__W_Inventory_CraftingArea_EditableTextBox_0_K2Node_ComponentBoundEvent_16_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__W_Inventory_CraftingArea_Button_EditBenchName_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void SetNewCraftingBenchName();
    void CancelRenameCraftingBench();
    void OnTextChanged(const FText& Text);
    void InitPinRecipes();
    void BndEvt__W_Inventory_CraftingArea_RecipeEntryGrid_1_K2Node_ComponentBoundEvent_18_OnListItemSelectionChangedDynamic__DelegateSignature(class UObject* Item, bool bIsSelected);
    void TryCraftItem(bool UseCustomRecipe, const FAbioticRecipe_Struct& CustomRecipe, FName CustomRecipeRowName);
    void ExecuteUbergraph_W_Inventory_CraftingArea(int32 EntryPoint);
    void NeverCraftedItemUpdate__DelegateSignature();
    void CraftQueueCountUpdate__DelegateSignature(int32 QueueCount);
}; // Size: 0xFE9

#endif
