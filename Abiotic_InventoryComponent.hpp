#ifndef UE4SS_SDK_Abiotic_InventoryComponent_HPP
#define UE4SS_SDK_Abiotic_InventoryComponent_HPP

class UAbiotic_InventoryComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TArray<FAbioticInventoryItemSlot> CurrentInventory;                               // 0x00B0 (size: 0x10)
    int32 MaxSlots;                                                                   // 0x00C0 (size: 0x4)
    EInventorySlotType InventorySlotType;                                             // 0x00C4 (size: 0x1)
    FText DisplayName;                                                                // 0x00C8 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> DisplayIcon;                                     // 0x00D8 (size: 0x28)
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
    int32 InitialInventorySize;                                                       // 0x0210 (size: 0x4)
    double CurrentTotalInventoryWeight;                                               // 0x0218 (size: 0x8)
    FAbiotic_InventoryComponent_CInventoryUpdated InventoryUpdated;                   // 0x0220 (size: 0x10)
    void InventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    bool CraftingCheck;                                                               // 0x0230 (size: 0x1)
    float ItemDecayInterval;                                                          // 0x0234 (size: 0x4)
    FTimerHandle ItemDecayTimerHandle;                                                // 0x0238 (size: 0x8)
    EInternalTemperature InternalTemperature;                                         // 0x0240 (size: 0x1)
    bool AutoStartItemDecay;                                                          // 0x0241 (size: 0x1)
    FAbiotic_InventoryComponent_CSlotHighlighted SlotHighlighted;                     // 0x0248 (size: 0x10)
    void SlotHighlighted(int32 SlotIndex);
    FAbiotic_InventoryComponent_CRadiationUpdated RadiationUpdated;                   // 0x0258 (size: 0x10)
    void RadiationUpdated(double RadiationAmount);
    double CurrentRadiation;                                                          // 0x0268 (size: 0x8)
    double RadioactiveShielding;                                                      // 0x0270 (size: 0x8)
    bool InventoryUpdateLocked;                                                       // 0x0278 (size: 0x1)
    TArray<bool> FavoritedSlots;                                                      // 0x0280 (size: 0x10)
    FAbiotic_InventoryComponent_CFavoritedSlotsUpdated FavoritedSlotsUpdated;         // 0x0290 (size: 0x10)
    void FavoritedSlotsUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    FAbiotic_InventoryComponent_COwnerStateUpdated OwnerStateUpdated;                 // 0x02A0 (size: 0x10)
    void OwnerStateUpdated();
    bool CustomDisplayName;                                                           // 0x02B0 (size: 0x1)
    TArray<int32> FreezerSlots;                                                       // 0x02B8 (size: 0x10)
    TArray<int32> RefrigeratedSlots;                                                  // 0x02C8 (size: 0x10)
    TArray<int32> Shielded Slots;                                                     // 0x02D8 (size: 0x10)
    bool EnableEmptyTraitSlotTooltip;                                                 // 0x02E8 (size: 0x1)
    bool HasUpdatedInventory;                                                         // 0x02E9 (size: 0x1)
    FAbiotic_InventoryComponent_CSlotAppearanceOverridesUpdated SlotAppearanceOverridesUpdated; // 0x02F0 (size: 0x10)
    void SlotAppearanceOverridesUpdated();
    TArray<int32> WarmingSlots;                                                       // 0x0300 (size: 0x10)
    bool RepairItemsWhenPowered;                                                      // 0x0310 (size: 0x1)
    FGameplayTagQuery TagRequirementWhenTagsDisabled;                                 // 0x0318 (size: 0x48)

    void ConsumeItemInSlot(int32 Index, int32 Amount);
    void TryPlaceIteminInventorySlot(FGlobalItemRowHandle DataTableRowHandle, FAbioticInventoryChangeableData ChangeableData, int32 TargetIndex, bool CheckOnly, bool IsEquippingGear?, int32& Remaining, bool& Success, FAbioticInventoryItemSlot& CurrentItem);
    void Server_TransferItemsToCharacterByRowName(class AAbiotic_Character_ParentBP_C* Character, FGlobalItemRowHandle ItemRowName, int32 Amount);
    void ExcludeItemsInInventoryByTag(FGameplayTag Item Tag, bool& ContainsItem, TMap<int32, FAbioticInventoryItemSlot>& ItemsRemaining);
    void Get Trait Slot DisplayTooltipData(int32 SlotIndex, bool& HasData, FText& DisplayText);
    void ServerSetInventoryTraitSlots(FGlobalItemRowHandle ItemRow);
    void IsItemSlotShielded(int32 SlotIndex, bool& Return);
    void GetInventoryDataAsset(const FGlobalItemRowHandle& ItemDataRow, class UInventoryData_Parent_C*& Return);
    void GetItemSlotTemperature(int32 SlotIndex, EInternalTemperature& SlotTemperature, bool& Repair);
    void GetSlotAppearanceForSlot(int32 Index, TEnumAsByte<E_InventorySlotAppearance::Type>& Appearance);
    void GetTagRequirementForSlot(int32 Index, FGameplayTagQuery& Requirement);
    void Transfer Multiple Items to Inventory(TArray<FAbioticInventoryItemSlot>& Items, bool& At Least One Item Is Transferred, TArray<FAbioticInventoryItemSlot>& Leftovers);
    void UpdateInventorySlot(int32 Slot, const FAbioticInventoryItemSlot& Data);
    void OnInventoryUpdated();
    void SetSlotFavoriteState(int32 Index, bool State);
    void IsSlotFavorited?(int32 Index, bool& Favorited);
    void OnFavoritedSlotsUpdated();
    void OnRep_FavoritedSlots();
    void Quick Move Single Item Into Stacks(class AAbiotic_PlayerCharacter_C* Interacting Character, int32 SlotIndex, bool& Success);
    void DoesInventoryContainItems(TArray<FGlobalItemRowHandle>& Items, bool& Found, TArray<FGlobalItemRowHandle>& OutFoundItems);
    void GetAllInventoryItemsByLiquidType(const ELiquidType Liquid Type, TMap<int32, FAbioticInventoryItemSlot>& ItemIndexesAndData, TArray<bool>& LiquidsAreFull);
    void ContainerTagCheck(FAbioticInventoryItemSlot& ItemToCheck, int32 Slot, bool& Success);
    void Server_ForceInventoryUpdate();
    void SetInventoryUpdateLock(bool Locked);
    void SortInventory();
    void GetItemSortType(FAbioticInventoryItem& ItemData, ESortedItemType& ItemType);
    void CreateSortedItemData();
    void Quick Move Item With Possible Stack(const FAbioticInventoryItemSlot& ItemSlotToBeTransferred, bool IsEquippingGear?, bool SingleItem, bool& Success, int32& Remaining, FAbioticInventoryItemSlot& CurrentItem);
    void Update Inventory Weapon Slot Ammo(int32 Index, int32 NewAmmoInMagazine);
    void LocateInventoryItemByAssetID(FGlobalItemRowHandle ItemRowName, FString AssetID, bool& Success, int32& InventoryIndex, FAbioticInventoryItemSlot& Element Found);
    void Empty Inventory Except Critical Items();
    void GetResistanceReductionAmount();
    void UpdateRadioactiveValue();
    void GetItemInSlot(int32 Index, bool& Success, FAbioticInventoryItemSlot& SlotData, FAbioticInventoryItem& ItemData);
    void GetContainerTemperature(bool& Repair);
    void ItemDecayTick();
    void StartItemDecayTimer();
    void CheckForRecipeUnlocks(FName RowName);
    void LocateInventoryItemByTypes(TArray<FName>& Items, bool& Success, EInventorySlotType& InventoryArray, int32& InventoryIndex, FAbioticInventoryItemSlot& Element Found);
    void GetInventorySlotIndex(EInventorySlotType SlotTypeToSearch, bool& Found, int32& SlotIndex);
    void CheckForStacks(class AAbiotic_PlayerCharacter_C* InteractingCharacter, int32 SlotIndex);
    void Get Destination Inventory(class AAbioticCharacter* InteractingCharacter, bool& Container, bool& backpack, bool& Hotbar, bool& Gear);
    void PickupMoney(class AAbiotic_PlayerCharacter_C* IntreractingCharacter, int32 MoneyValue, int32 SlotIndex);
    void IsItemMoney(const FAbioticInventoryItemSlot& ItemSlot, bool& TRUE);
    void Server Try Quick Move Item(class AAbiotic_PlayerCharacter_C* InteractingCharacter, int32 SlotIndex, bool EquippingGear, class UAbiotic_InventoryComponent_C* ContainerInventory, bool SingleStackOnly, bool EnableNotifyPopus, bool& Successful);
    void Try Place In Inventory By Same Item Type(TArray<UAbiotic_InventoryComponent_C*>& Source Inventories, FGameplayTagContainer TagsToIgnore, bool ItemNotifyOnHUD, class UAbiotic_InventoryComponent_C*& TargetInventory, bool& Success);
    void IsInventoryFull(bool IgnoreStackSize, bool& Full);
    void GetAllInventoryItemsByTag(FGameplayTag Tag, bool UseExcludeTag, FGameplayTag ExcludeTag, TMap<int32, FAbioticInventoryItemSlot>& ItemIndexesAndData);
    void ContainsMeleeWeapon(bool& Contains);
    void CheckForDuplicateItem(FString AssetID, int32 SlotIndexToIgnore, bool& DuplicateFound);
    void Remove Item from Inventory(FGlobalItemRowHandle Item, bool AllItemsOfType, int32 Count);
    void IsTryingToEquipGear(const int32& SlotIndex, const FAbioticInventoryItemSlot& NewItemToAdd, bool& Valid, TSoftObjectPtr<class USoundCue>& InventoryPlaceSound);
    void Get Inventory Size(int32& InventorySize);
    void CreateNewItemWithDefaultData(const FGlobalItemRowHandle& DataTableRowHandle, int32 StackAmount, FAbioticInventoryItemSlot& ItemSlotData);
    void ComputeCurrentInventoryWeight(double& TotalWeight);
    void OnRep_CurrentTotalInventoryWeight();
    void RevertInventoryToEmpty();
    void FindFirstAvailableEmptySlot(bool& Found, int32& Index, class UW_InventoryItemSlot_C*& SlotReference);
    void CreateEmptyItemSlotRow(FAbioticInventoryItemSlot& EmptySlotDataRowHandle);
    void IsInventorySlotEmpty(int32 Index, bool& Empty);
    void TryPlaceItemInStack(FAbioticInventoryItemSlot ItemToAdd, int32 SlotIndex, bool CheckOnly, bool& PlacedSuccessfully, int32& LeftoverCount);
    void LocateInventoryItemByType(FGlobalItemRowHandle ItemRowHandle, FGameplayTag ItemTagToLookFor, bool CheckForTagOnly, bool& Success, EInventorySlotType& InventoryArray, int32& InventoryIndex, FAbioticInventoryItemSlot& Element Found);
    void DoesInventoryContainItem(FGlobalItemRowHandle Item, int32 RequiredCount, int32 ExistingCount, bool& ItemFoundInCorrectQuantity, int32& CountFound);
    void IsInventoryEmpty(bool& Empty);
    void Try Place Item in Inventory(FGlobalItemRowHandle DataTableRowHandle, FAbioticInventoryChangeableData ChangeableData, bool CheckOnly, bool IsEquippingGear?, bool Place Leftover in the Same Inventory?, bool SkipStack, int32& Remaining, bool& Success, FAbioticInventoryItemSlot& CurrentItem);
    void OnRep_CurrentInventory();
    void UpdateInventorySlotCount(int32 NewMaxSlots, bool FallOnSpawn, FVector OverrideLocation);
    void ReceiveBeginPlay();
    void DelayedUpdateRadioactive();
    void Local_UpdateInventorySlotOverrides(const FGlobalItemRowHandle& ItemDataRow);
    void DelayedInventoryUpdate();
    void ExecuteUbergraph_Abiotic_InventoryComponent(int32 EntryPoint);
    void SlotAppearanceOverridesUpdated__DelegateSignature();
    void OwnerStateUpdated__DelegateSignature();
    void FavoritedSlotsUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void RadiationUpdated__DelegateSignature(double RadiationAmount);
    void SlotHighlighted__DelegateSignature(int32 SlotIndex);
    void InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void AnySlotStateChanged__DelegateSignature(int32 SlotIndex);
}; // Size: 0x360

#endif
