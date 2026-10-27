#ifndef UE4SS_SDK_ItemFunctionLibrary_HPP
#define UE4SS_SDK_ItemFunctionLibrary_HPP

class UItemFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void IsItemPlayerPet?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Pet);
    void DoesItemSupportWeaponCoatings(FAbioticInventoryItem& ItemData, class UObject* __WorldContext, bool& Supported);
    void ReduceWeaponCoatingDurability(const FAbioticInventoryChangeableData& ChangeableData, double DurabilityLossAmount, class UObject* __WorldContext, bool& CoatingWasRemoved);
    void HasWeaponCoating?(FAbioticInventoryChangeableData& ChangeableData, class UObject* __WorldContext, bool& HasCoating, FWeaponCoatingRowHandle& CoatingRow);
    void TryGetCorrectItemSlotIcon(const FAbioticInventoryChangeableData& ChangeableData, FGlobalItemRowHandle ItemRowName, TSoftObjectPtr<class UTexture2D> DefaultIcon, class UObject* __WorldContext, TSoftObjectPtr<class UTexture2D>& Icon);
    void GetTeleporterIdentifier(int32 Index, class UObject* __WorldContext, bool& Found, FString& Identifier);
    void CanPlayerAccessItem(class AAbiotic_PlayerCharacter_C* PlayerCharacter, FGlobalItemRowHandle Item, int32 RequiredCount, bool IncludeItemTransporterBenchUpgrade, class UObject* __WorldContext, bool& Accessible);
    void HasValidCookingDataAsset(TArray<FName>& Ingredient, FGlobalItemRowHandle FoodItemRow, class UObject* __WorldContext, bool& Return, class UPrimaryDataAsset*& DataAsset);
    void GetAttachedEquippedGearMesh(EInventorySlotType GearSlot, class USceneComponent* ParentComponent, bool bIncludeAllDescendants, class UObject* __WorldContext, class USceneComponent*& Output);
    void GetChildrenComponentsByTag(class USceneComponent* ParentComponent, FName ChildTag, bool bIncludeAllDescendants, class UObject* __WorldContext, TArray<USceneComponent*>& ChildrenFound);
    void GetItemStructFromSlotData(FAbioticInventoryItemSlot& SlotData, class UObject* __WorldContext, bool& Success, FAbioticInventoryItem& ItemStruct);
    void SetChildrenComponentsVisibility(class USceneComponent* ParentComponent, FName ChildTag, bool Visible, bool bIncludeAllDescendants, class UObject* __WorldContext);
    void GetCorrectItemMesh(FAbioticInventoryItemSlot& SlotData, TSoftObjectPtr<class UStaticMesh> ItemMesh, bool DeployMode, FGameplayTagContainer& ItemTags, class UObject* __WorldContext, TSoftObjectPtr<class USkeletalMesh>& SkeletalMeshAlternative);
    void GetCorrectConsumeItemData(FAbioticInventoryItem ItemData, FAbioticInventoryChangeableData ChangeableData, bool IncludePortionData, class UObject* __WorldContext, bool& Valid);
    void ConvertIngredientsToString(const TArray<FName>& InIngredients, class UObject* __WorldContext, FString& OutString);
    void ConvertIngredientsFromString(FString String, class UObject* __WorldContext, TArray<FName>& Ingredients);
    void LookForItemRecipe(FGlobalItemRowHandle ItemRowName, class UObject* __WorldContext, bool& RecipeFound, FAbioticRecipe& Recipe);
    void GetWeaponType(const FAbioticWeapon& WeaponData, class UObject* __WorldContext, bool& Blunt, bool& Sharp);
    void GetItemCosmeticDataAsset(FGlobalItemRowHandle RowToFind, class UObject* __WorldContext, bool& Success, class UPrimaryDataAsset*& DataAsset);
    void DoesItemExistInSlot(TArray<FAbioticInventoryItemSlot>& ItemSlotArray, FGlobalItemRowHandle ItemRowName, FString AssetID, class UObject* __WorldContext, bool& Success, int32& InventoryIndex, FAbioticInventoryItemSlot& Element Found);
    void IsItemThrowingKnife?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& TKnife);
    void GetLocalGadgetWidgetByID(FString ItemId, class UObject* __WorldContext, class UW_HUD_GadgetBar_C*& WidgetFound);
    void IsUsingNeedle?(const FGameplayTagContainer& ItemTagContainer, class UObject* __WorldContext, bool& NeedleUsed);
    void ModifyLiquidLevel(const FAbioticLiquid& Liquid Data, FAbioticInventoryChangeableData ChangeableData, const ELiquidType LiquidType, int32 LiquidAmount, class UObject* __WorldContext, FAbioticInventoryChangeableData& ChangeableDataOut, int32& NewLiquidLevel);
    void IsItemFishingBait?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Bait);
    void IsItemFishingRod?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Rod);
    void IsCookableItem(const FAbioticInventoryItemSlot& FoodSlotData, class UObject* __WorldContext);
    void Can Place In Soup as Ingredient(const FAbioticInventoryItemSlot& PotentialSoupIngredient, class UObject* __WorldContext, bool& CanPlaceInSoup, TEnumAsByte<E_ItemStateInHand::Type>& ItemStateResult);
    void Can Place Item On Stove(const FAbioticInventoryItemSlot& FoodSlotData, class UObject* __WorldContext, bool& CanPlaceOnStove, TEnumAsByte<E_ItemStateInHand::Type>& ItemStateResult);
    void Find Owning Cooking Items(class AAbiotic_PlayerCharacter_C* Owning Character, class UObject* __WorldContext, TMap<FGlobalItemRowHandle, FAbioticInventoryItemSlot>& CookingItems);
    void IsReadableBook?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& IsReadableBook);
    void IsMedicalItem?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& IsMedical);
    void Is Item Reloadable Weapon?(class UObject* __WorldContext, bool& Return);
    void IsItemGrenade?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& grenade);
    void IsItemFish?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Fish, bool& Rare);
    void IsItemAmmo?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Ammo);
    void IsItemTool?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Tool);
    void IsHeavyWeapon?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& HeavyWeapon);
    void IsRareItem?(FAbioticInventoryChangeableData& ChangeableData, class UObject* __WorldContext, bool& Rare);
    void GetItemTypeText(FAbioticInventoryItem& ItemData, FAbioticInventoryChangeableData& ChangeableData, class UObject* __WorldContext, bool& Result, FText& ItemType, FLinearColor& OverrideColor);
    void GetActiveAmmoType(bool GetDefaultAmmoType, FAbioticWeapon& WeaponData, FAbioticInventoryChangeableData& ChangeableData, class UObject* __WorldContext, bool& Found, FGlobalItemRowHandle& ItemRow);
    void FindAmmoForWeapon(class AAbiotic_PlayerCharacter_C* OwningCharacter, class UObject* __WorldContext, TArray<FGlobalItemRowHandle>& ItemsFound);
    void GetCurrentLiquidPercentage(const FAbioticInventoryItemSlot& ItemSlotStruct, class UObject* __WorldContext);
    void Find Owning Character Low Battery Rechargeable Items(class AAbiotic_PlayerCharacter_C* OwningCharacter, class UObject* __WorldContext, TMap<FGlobalItemRowHandle, FAbioticInventoryItemSlot>& ItemsFound);
    void Find Equipped Flashlight Items(class AAbiotic_PlayerCharacter_C* OwningCharacter, class UObject* __WorldContext, TMap<FGlobalItemRowHandle, int32>& ItemsFound);
    void TryGetItemTextureOverrideName(const FTextureVariantRowHandle& TextureOverrideDataRow, FText OriginalName, class UObject* __WorldContext, FText& New Name);
    void Display Broken Hotbar Item Text(class AAbiotic_PlayerController_C* Player Controller, class UObject* __WorldContext);
    void ReverseConvertItemCount(TArray<FAbioticItemInput>& In, class UObject* __WorldContext, TArray<FAbioticItemInput>& Out);
    void FindClosestSoupRecipe(TArray<FName>& IngredientsArray, TArray<FName>& UnlockedRecipes, TArray<FName>& KnownItems, bool IngredientCountMustMatchRecipe, class UObject* __WorldContext, bool& FoundRecipe, FSoupRecipeRowHandle& SoupRowFound);
    void Get New Max Stack Size(int32 CurrentMaxStackSize, class UObject* __WorldContext);
    void Get Particle Socket(class UMeshComponent*& MeshComponent, class UObject* __WorldContext, FName& SocketName, FVector& SocketLocation);
    void ReturnRecipeButtonsByTag(TArray<UW_RecipeBookEntryButton_C*>& WidgetArray, FGameplayTag TagToFilter, class UObject* __WorldContext, TArray<UW_RecipeBookEntryButton_C*>& OutWidgets);
    void Get Secondary Item Use Speed On DBNO Player(const FAbioticInventoryItem& ItemData, FGameplayTag TagToLookFor, class AAbiotic_Character_ParentBP_C* UsingCharacter, double BaseSpeed, bool SecondaryUse, bool Target is DBNO, class UObject* __WorldContext, double& NewSpeed);
    void GetSoupTypeRowNames(TEnumAsByte<E_PrimarySoupTypes::Type> SoupType, FName OptionalRegularSoupRowName, class UObject* __WorldContext, FName& RowName);
    void GetSoupTypeFromIngredients(bool RecipeExists, TArray<FName>& Ingredients, class UObject* __WorldContext, TEnumAsByte<E_PrimarySoupTypes::Type>& SoupType);
    void Get Current Item FXSpeed(double BaseSpeed, FGameplayTag TagToLookFor, class AAbioticCharacter* UsingActor, const FAbioticInventoryItem& ItemData, class UObject* __WorldContext, double& NewSpeed);
    void AreItemsStackable(FAbioticInventoryItemSlot& Item1, FAbioticInventoryItemSlot& Item2, class UObject* __WorldContext);
    void GetItemFullName(FAbioticInventoryItem& ItemData, FAbioticInventoryChangeableData& Changeable, FName ItemRowName, class UObject* __WorldContext, bool& PlaceholderNameDetected);
    void GetCookedStatMultiplier(ECookingState CookedState, class UObject* __WorldContext);
    void CreateEmptyItemSlotRow(class UObject* __WorldContext, FAbioticInventoryItemSlot& EmptySlotDataRowHandle);
    void Get Long Interact Duration Based on Tag(FGameplayTag Tag, float BaseValue, FStatModifierRowHandle Modifier, class AAbiotic_PlayerCharacter_C* InteractingCharacter, class UObject* __WorldContext, double& Duration);
    void SlotTypeToDisplayText(EInventorySlotType Index, class UObject* __WorldContext);
    void IsItemRadioactive(FGlobalItemRowHandle& ItemDataTable, FAbioticInventoryChangeableData& ChangeableData, class UObject* __WorldContext, double& RadiationAmount);
    void Find Owning Character Medical Items(class AAbiotic_PlayerCharacter_C* OwningCharacter, bool SkipTinctures, class UObject* __WorldContext, TMap<FGlobalItemRowHandle, int32>& ItemsFound);
    void DetermineDroppedItemOutcome(FInventorySlotSelected_Struct IncomingItemSlot, EInventorySlotType IncomingSlotType, FInventorySlotSelected_Struct ItemSlotToCheck, EInventorySlotType SlotTypeToCheck, bool IsSplitStack, int32 StackSize, class UAbiotic_InventoryComponent_C* IncomingInventory, class UAbiotic_InventoryComponent_C* InventoryToCheck, class UObject* __WorldContext, TEnumAsByte<E_ItemDragDropOutcome::Type>& Outcome, int32& Leftovers, FText& ErrorMessage);
    void GetNextFoodStageItem(const FGlobalItemRowHandle& OriginalItem, ECookingState NextStage, int32 StovewareType, class UObject* __WorldContext, bool& Success, FGlobalItemRowHandle& ItemRow, FAbioticInventoryChangeableData& ChangeableData);
    void IndexToSlotType(int32 Index, class UObject* __WorldContext);
    void SlotTypeToIndex(EInventorySlotType SlotType, class UObject* __WorldContext);
    void DecayItem(FGlobalItemRowHandle& ItemDataTable, FAbioticInventoryChangeableData& ChangeableData, EInternalTemperature InternalTemperature, bool Repair, class UObject* __WorldContext, bool& FullyDecayed, FGlobalItemRowHandle& NewItemData, FAbioticInventoryChangeableData& NewChangeableData);
    void ItemCanBeEquipped(const FGlobalItemRowHandle& ItemData, class UObject* __WorldContext, bool& CanBeEquipped);
    void FilterItemsForSubstitutes(TArray<FAbioticItemInput>& InItems, class UObject* __WorldContext, TArray<FAbioticItemCount>& RegularItems, TArray<FAbioticSubstituteCount_Struct>& SubstituteItems);
    void AreItemsAvailable(TArray<FAbioticItemInput>& Items, class AAbiotic_PlayerCharacter_C* Player, TArray<UAbiotic_InventoryComponent_C*>& AdditionalInventories, class UObject* __WorldContext, bool& Success);
    void DoesInventoryHaveSubstituteItems(TArray<FGlobalItemRowHandle>& SubstituteItems, int32 TotalRequired, class AAbiotic_PlayerCharacter_C* Player, TArray<UAbiotic_InventoryComponent_C*>& AdditionalInventories, class UObject* __WorldContext, bool& ContainsItem, int32& CountFound);
    void FindItemCosmeticData(FGlobalItemRowHandle ItemRow, class UObject* __WorldContext, bool& Success, FItemCosmetics& ItemCosmeticData);
    void GetBrokenItemMesh(FGlobalItemRowHandle ItemRow, class UObject* __WorldContext);
    void ConvertItemCount(TArray<FAbioticItemInput>& In, class UObject* __WorldContext, TArray<FAbioticItemInput>& Out);
    void CreateDefaultChangeableData(FAbioticInventoryItem& ItemStruct, int32 Stack, FTextureVariantRowHandle TextureVariant, TArray<FDynamicProperty>& DynamicProperties, class UObject* __WorldContext);
    void RemoveTagFromChangeableData(FAbioticInventoryChangeableData& ChangeableData, FGameplayTag Tag, class UObject* __WorldContext);
    void AddTagToChangeableData(FAbioticInventoryChangeableData& ChangeableData, FGameplayTag Tag, class UObject* __WorldContext);
    void ChangeableDataHasTag(FAbioticInventoryChangeableData& ChangeableData, FGameplayTag Tag, class UObject* __WorldContext);
    void TryScrapItemInSlot(FAbioticInventoryItem& InItemData, FAbioticInventoryChangeableData& InChangeableData, double ExtraLootChance, class UObject* __WorldContext, bool& Success, TArray<FAbioticInventoryItemSlot>& OutItems, FString& DebugNote);
}; // Size: 0x28

#endif
