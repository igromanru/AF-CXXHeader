#ifndef UE4SS_SDK_Abiotic_InventoryComponent_HPP
#define UE4SS_SDK_Abiotic_InventoryComponent_HPP

class UAbiotic_InventoryComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TArray<FAbiotic_InventoryItemSlotStruct> CurrentInventory;                        // 0x00B0 (size: 0x10)
    int32 MaxSlots;                                                                   // 0x00C0 (size: 0x4)
    TEnumAsByte<E_InventorySlotType::Type> InventorySlotType;                         // 0x00C4 (size: 0x1)
    FText DisplayName;                                                                // 0x00C8 (size: 0x10)
    TSoftObjectPtr<UTexture2D> DisplayIcon;                                           // 0x00D8 (size: 0x28)
    TEnumAsByte<E_ContainerType::Type> ContainerType;                                 // 0x0100 (size: 0x1)
    bool HasSlotRequirementOverrides;                                                 // 0x0101 (size: 0x1)
    FGameplayTagQuery ContainerTagRequirement;                                        // 0x0108 (size: 0x48)
    TMap<int32, FGameplayTagQuery> ContainerTagRequirementOverrides;                  // 0x0150 (size: 0x50)
    bool ForceTagIgnoreSandbox;                                                       // 0x01A0 (size: 0x1)
    TEnumAsByte<E_InventorySlotAppearance::Type> SlotAppearance;                      // 0x01A1 (size: 0x1)
    TMap<int32, TEnumAsByte<E_InventorySlotAppearance::Type>> SlotAppearanceOverrides; // 0x01A8 (size: 0x50)
    bool DestroyParentWhenEmpty;                                                      // 0x01F8 (size: 0x1)
    FAbiotic_InventoryComponent_CAnySlotStateChanged AnySlotStateChanged;             // 0x0200 (size: 0x10)
    void AnySlotStateChanged(int32 SlotIndex);
    FDataTableRowHandle EmptyItemRow;                                                 // 0x0210 (size: 0x10)
    int32 InitialInventorySize;                                                       // 0x0220 (size: 0x4)
    double CurrentTotalInventoryWeight;                                               // 0x0228 (size: 0x8)
    FAbiotic_InventoryComponent_CInventoryUpdated InventoryUpdated;                   // 0x0230 (size: 0x10)
    void InventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    bool CraftingCheck;                                                               // 0x0240 (size: 0x1)
    float ItemDecayInterval;                                                          // 0x0244 (size: 0x4)
    FTimerHandle ItemDecayTimerHandle;                                                // 0x0248 (size: 0x8)
    TEnumAsByte<E_InternalTemperature::Type> InternalTemperature;                     // 0x0250 (size: 0x1)
    bool AutoStartItemDecay;                                                          // 0x0251 (size: 0x1)
    FAbiotic_InventoryComponent_CSlotHighlighted SlotHighlighted;                     // 0x0258 (size: 0x10)
    void SlotHighlighted(int32 SlotIndex);
    FAbiotic_InventoryComponent_CRadiationUpdated RadiationUpdated;                   // 0x0268 (size: 0x10)
    void RadiationUpdated(double RadiationAmount);
    double CurrentRadiation;                                                          // 0x0278 (size: 0x8)
    double RadioactiveShielding;                                                      // 0x0280 (size: 0x8)
    bool InventoryUpdateLocked;                                                       // 0x0288 (size: 0x1)
    TArray<bool> FavoritedSlots;                                                      // 0x0290 (size: 0x10)
    FAbiotic_InventoryComponent_CFavoritedSlotsUpdated FavoritedSlotsUpdated;         // 0x02A0 (size: 0x10)
    void FavoritedSlotsUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    FAbiotic_InventoryComponent_COwnerStateUpdated OwnerStateUpdated;                 // 0x02B0 (size: 0x10)
    void OwnerStateUpdated();
    bool CustomDisplayName;                                                           // 0x02C0 (size: 0x1)
    TArray<int32> FreezerSlots;                                                       // 0x02C8 (size: 0x10)
    TArray<int32> RefrigeratedSlots;                                                  // 0x02D8 (size: 0x10)
    TArray<int32> Shielded Slots;                                                     // 0x02E8 (size: 0x10)
    bool EnableEmptyTraitSlotTooltip;                                                 // 0x02F8 (size: 0x1)
    bool HasUpdatedInventory;                                                         // 0x02F9 (size: 0x1)
    FAbiotic_InventoryComponent_CSlotAppearanceOverridesUpdated SlotAppearanceOverridesUpdated; // 0x0300 (size: 0x10)
    void SlotAppearanceOverridesUpdated();
    TArray<int32> WarmingSlots;                                                       // 0x0310 (size: 0x10)

    void Server_TransferItemsToCharacterByRowName(class AAbiotic_Character_ParentBP_C* Character, FName ItemRowName, int32 Amount);
    void ExcludeItemsInInventoryByTag(FGameplayTag Item Tag, bool& ContainsItem, TMap<int32, FAbiotic_InventoryItemSlotStruct>& ItemsRemaining);
    void Get Trait Slot DisplayTooltipData(int32 SlotIndex, bool& HasData, FText& DisplayText);
    void ServerSetInventoryTraitSlots(FDataTableRowHandle ItemRow);
    void IsItemSlotShielded(int32 SlotIndex, bool& Return);
    void GetInventoryDataAsset(const FDataTableRowHandle& ItemDataRow, class UInventoryData_Parent_C*& Return);
    void GetItemSlotTemperature(int32 SlotIndex, TEnumAsByte<E_InternalTemperature::Type>& SlotTemperature);
    void GetSlotAppearanceForSlot(int32 Index, TEnumAsByte<E_InventorySlotAppearance::Type>& Appearance);
    void GetTagRequirementForSlot(int32 Index, FGameplayTagQuery& Requirement);
    void Transfer Multiple Items to Inventory(TArray<FAbiotic_InventoryItemSlotStruct>& Items, bool& At Least One Item Is Transferred, TArray<FAbiotic_InventoryItemSlotStruct>& Leftovers);
    void UpdateInventorySlot(int32 Slot, const FAbiotic_InventoryItemSlotStruct& Data);
    void OnInventoryUpdated();
    void SetSlotFavoriteState(int32 Index, bool State);
    void IsSlotFavorited?(int32 Index, bool& Favorited);
    void OnFavoritedSlotsUpdated();
    void OnRep_FavoritedSlots();
    void Quick Move Single Item Into Stacks(class AAbiotic_PlayerCharacter_C* Interacting Character, int32 SlotIndex, bool& Success);
    void DoesInventoryContainItems(TArray<FDataTableRowHandle>& Items, bool& Found, TArray<FName>& OutFoundItems);
    void GetAllInventoryItemsByLiquidType(const TEnumAsByte<E_LiquidType::Type> Liquid Type, TMap<int32, FAbiotic_InventoryItemSlotStruct>& ItemIndexesAndData, TArray<bool>& LiquidsAreFull);
    void ContainerTagCheck(FAbiotic_InventoryItemSlotStruct& ItemToCheck, int32 Slot, bool& Success);
    void Server_ForceInventoryUpdate();
    void SetInventoryUpdateLock(bool Locked);
    void SortInventory();
    void GetItemSortType(FAbiotic_InventoryItemStruct& ItemData, ESortedItemType& ItemType);
    TArray<FSortedItem> CreateSortedItemData();
    void Quick Move Item With Possible Stack(const FAbiotic_InventoryItemSlotStruct& ItemSlotToBeTransferred, bool IsEquippingGear?, bool SingleItem, bool& Success, int32& Remaining, FAbiotic_InventoryItemSlotStruct& CurrentItem);
    void Update Inventory Weapon Slot Ammo(int32 Index, int32 NewAmmoInMagazine);
    void LocateInventoryItemByAssetID(FName ItemRowName, FString AssetID, bool& Success, int32& InventoryIndex, FAbiotic_InventoryItemSlotStruct& Element Found);
    void Empty Inventory Except Critical Items();
    float GetResistanceReductionAmount();
    void UpdateRadioactiveValue();
    void GetItemInSlot(int32 Index, bool& Success, FAbiotic_InventoryItemSlotStruct& SlotData, FAbiotic_InventoryItemStruct& ItemData);
    TEnumAsByte<E_InternalTemperature::Type> GetContainerTemperature();
    void ItemDecayTick();
    void StartItemDecayTimer();
    void CheckForRecipeUnlocks(FName RowName);
    void LocateInventoryItemByTypes(TArray<FName>& Items, bool& Success, TEnumAsByte<E_InventorySlotType::Type>& InventoryArray, int32& InventoryIndex, FAbiotic_InventoryItemSlotStruct& Element Found);
    void GetInventorySlotIndex(TEnumAsByte<E_InventorySlotType::Type> SlotTypeToSearch, bool& Found, int32& SlotIndex);
    void CheckForStacks(class AAbiotic_PlayerCharacter_C* InteractingCharacter, int32 SlotIndex);
    void Get Destination Inventory(class AAbioticCharacter* InteractingCharacter, bool& Container, bool& backpack, bool& Hotbar, bool& Gear);
    void PickupMoney(class AAbiotic_PlayerCharacter_C* IntreractingCharacter, int32 MoneyValue, int32 SlotIndex);
    void IsItemMoney(const FAbiotic_InventoryItemSlotStruct& ItemSlot, bool& TRUE);
    void Server Try Quick Move Item(class AAbiotic_PlayerCharacter_C* InteractingCharacter, int32 SlotIndex, bool EquippingGear, class UAbiotic_InventoryComponent_C* ContainerInventory, bool SingleStackOnly, bool EnableNotifyPopus, bool& Successful);
    void Try Place In Inventory By Same Item Type(TArray<class UAbiotic_InventoryComponent_C*>& Source Inventories, FGameplayTagContainer TagsToIgnore, class UAbiotic_InventoryComponent_C*& TargetInventory, bool& Success);
    void IsInventoryFull(bool IgnoreStackSize, bool& Full);
    void GetAllInventoryItemsByTag(FGameplayTag Tag, TMap<int32, FAbiotic_InventoryItemSlotStruct>& ItemIndexesAndData);
    void ContainsMeleeWeapon(bool& Contains);
    void CheckForDuplicateItem(FString AssetID, int32 SlotIndexToIgnore, bool& DuplicateFound);
    void Remove Item from Inventory(FName Item, bool AllItemsOfType, int32 Count);
    void IsTryingToEquipGear(const int32& SlotIndex, const FAbiotic_InventoryItemSlotStruct& NewItemToAdd, bool& Valid, TSoftObjectPtr<USoundCue>& InventoryPlaceSound);
    void Get Inventory Size(int32& InventorySize);
    void CreateNewItemWithDefaultData(const FDataTableRowHandle& DataTableRowHandle, int32 StackAmount, FAbiotic_InventoryItemSlotStruct& ItemSlotData);
    void ComputeCurrentInventoryWeight(double& TotalWeight);
    void OnRep_CurrentTotalInventoryWeight();
    void RevertInventoryToEmpty();
    void FindFirstAvailableEmptySlot(bool& Found, int32& Index, class UW_InventoryItemSlot_C*& SlotReference);
    void CreateEmptyItemSlotRow(FAbiotic_InventoryItemSlotStruct& EmptySlotDataRowHandle);
    void IsInventorySlotEmpty(int32 Index, bool& Empty);
    void TryPlaceItemInStack(FAbiotic_InventoryItemSlotStruct ItemToAdd, int32 SlotIndex, bool CheckOnly, bool& PlacedSuccessfully, int32& LeftoverCount);
    void LocateInventoryItemByType(FDataTableRowHandle ItemRowHandle, FGameplayTag ItemTagToLookFor, bool CheckForTagOnly, bool& Success, TEnumAsByte<E_InventorySlotType::Type>& InventoryArray, int32& InventoryIndex, FAbiotic_InventoryItemSlotStruct& Element Found);
    void DoesInventoryContainItem(FDataTableRowHandle Item, int32 RequiredCount, int32 ExistingCount, bool& ItemFoundInCorrectQuantity, int32& CountFound);
    void IsInventoryEmpty(bool& Empty);
    void Try Place Item in Inventory(FDataTableRowHandle DataTableRowHandle, FAbiotic_InventoryChangeableDataStruct ChangeableData, bool CheckOnly, bool IsEquippingGear?, bool Place Leftover in the Same Inventory?, int32& Remaining, bool& Success, FAbiotic_InventoryItemSlotStruct& CurrentItem);
    void OnRep_CurrentInventory();
    void UpdateInventorySlotCount(int32 NewMaxSlots);
    void ReceiveBeginPlay();
    void DelayedUpdateRadioactive();
    void Local_UpdateInventorySlotOverrides(const FDataTableRowHandle& ItemDataRow);
    void DelayedInventoryUpdate();
    void ExecuteUbergraph_Abiotic_InventoryComponent(int32 EntryPoint);
    void SlotAppearanceOverridesUpdated__DelegateSignature();
    void OwnerStateUpdated__DelegateSignature();
    void FavoritedSlotsUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void RadiationUpdated__DelegateSignature(double RadiationAmount);
    void SlotHighlighted__DelegateSignature(int32 SlotIndex);
    void InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void AnySlotStateChanged__DelegateSignature(int32 SlotIndex);
}; // Size: 0x320

#endif
