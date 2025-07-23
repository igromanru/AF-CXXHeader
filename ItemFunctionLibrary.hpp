#ifndef UE4SS_SDK_ItemFunctionLibrary_HPP
#define UE4SS_SDK_ItemFunctionLibrary_HPP

class UItemFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void TryGetCorrectItemSlotIcon(const FAbiotic_InventoryChangeableDataStruct& ChangeableData, FName ItemRowName, TSoftObjectPtr<UTexture2D> DefaultIcon, class UObject* __WorldContext, TSoftObjectPtr<UTexture2D>& Icon);
    void GetTeleporterIdentifier(int32 Index, class UObject* __WorldContext, bool& Found, FString& Identifier);
    void CanPlayerAccessItem(class AAbiotic_PlayerCharacter_C* PlayerCharacter, FDataTableRowHandle Item, int32 RequiredCount, bool IncludeItemTransporterBenchUpgrade, class UObject* __WorldContext, bool& Accessible);
    void HasValidCookingDataAset(TArray<FName>& Ingredient, FName FoodItemRow, class UObject* __WorldContext, bool& Return, class UPrimaryDataAsset*& DataAsset);
    void GetAttachedEquippedGearMesh(TEnumAsByte<E_InventorySlotType::Type> GearSlot, class USceneComponent* ParentComponent, bool bIncludeAllDescendants, class UObject* __WorldContext, class USceneComponent*& Output);
    void GetChildrenComponentsByTag(class USceneComponent* ParentComponent, FName ChildTag, bool bIncludeAllDescendants, class UObject* __WorldContext, TArray<class USceneComponent*>& ChildrenFound);
    void GetItemStructFromSlotData(FAbiotic_InventoryItemSlotStruct& SlotData, class UObject* __WorldContext, bool& Success, FAbiotic_InventoryItemStruct& ItemStruct);
    void SetChildrenComponentsVisibility(class USceneComponent* ParentComponent, FName ChildTag, bool Visible, bool bIncludeAllDescendants, class UObject* __WorldContext);
    TSoftObjectPtr<UStaticMesh> GetCorrectItemMesh(FAbiotic_InventoryItemSlotStruct& SlotData, TSoftObjectPtr<UStaticMesh> ItemMesh, bool DeployMode, FGameplayTagContainer& ItemTags, class UObject* __WorldContext, TSoftObjectPtr<USkeletalMesh>& SkeletalMeshAlternative);
    void GetRecipeRowFromItem(FName ItemRowName, class UObject* __WorldContext, FDataTableRowHandle& RecipeRow);
    FAbiotic_InventoryItemStruct GetCorrectConsumeItemData(FAbiotic_InventoryItemStruct ItemData, FAbiotic_InventoryChangeableDataStruct ChangeableData, bool IncludePortionData, class UObject* __WorldContext, bool& Valid);
    void ConvertIngredientsToString(const TArray<FName>& InIngredients, class UObject* __WorldContext, FString& OutString);
    void ConvertIngredientsFromString(FString String, class UObject* __WorldContext, TArray<FName>& Ingredients);
    void LookForItemRecipe(FName ItemRowName, class UObject* __WorldContext, bool& RecipeFound, FAbioticRecipe_Struct& Recipe);
    void GetWeaponType(const FAbiotic_WeaponStruct& WeaponData, class UObject* __WorldContext, bool& Blunt, bool& Sharp);
    void GetItemCosmeticDataAsset(FName RowToFind, class UObject* __WorldContext, bool& Success, class UPrimaryDataAsset*& DataAsset);
    void DoesItemExistInSlot(TArray<FAbiotic_InventoryItemSlotStruct>& ItemSlotArray, FName ItemRowName, FString AssetID, class UObject* __WorldContext, bool& Success, int32& InventoryIndex, FAbiotic_InventoryItemSlotStruct& Element Found);
    void IsItemThrowingKnife?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& TKnife);
    void GetLocalGadgetWidgetByID(FString ItemId, class UObject* __WorldContext, class UW_HUD_GadgetBar_C*& WidgetFound);
    void IsUsingNeedle?(const FGameplayTagContainer& ItemTagContainer, class UObject* __WorldContext, bool& NeedleUsed);
    void ModifyLiquidLevel(const FAbiotic_LiquidStruct& Liquid Data, FAbiotic_InventoryChangeableDataStruct ChangeableData, const TEnumAsByte<E_LiquidType::Type> LiquidType, int32 LiquidAmount, class UObject* __WorldContext, FAbiotic_InventoryChangeableDataStruct& ChangeableDataOut, int32& NewLiquidLevel);
    void IsItemFishingBait?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Bait);
    void IsItemFishingRod?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Rod);
    bool IsCookableItem(const FAbiotic_InventoryItemSlotStruct& FoodSlotData, class UObject* __WorldContext);
    void Can Place In Soup as Ingredient(const FAbiotic_InventoryItemSlotStruct& PotentialSoupIngredient, class UObject* __WorldContext, bool& CanPlaceInSoup, TEnumAsByte<E_ItemStateInHand::Type>& ItemStateResult);
    void Can Place Item On Stove(const FAbiotic_InventoryItemSlotStruct& FoodSlotData, class UObject* __WorldContext, bool& CanPlaceOnStove, TEnumAsByte<E_ItemStateInHand::Type>& ItemStateResult);
    void Find Owning Cooking Items(class AAbiotic_PlayerCharacter_C* Owning Character, class UObject* __WorldContext, TMap<class FName, class FAbiotic_InventoryItemSlotStruct>& CookingItems);
    void IsReadableBook?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& IsReadableBook);
    void IsMedicalItem?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& IsMedical);
    void Is Item Reloadable Weapon?(class UObject* __WorldContext, bool& Return);
    void IsItemGrenade?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& grenade);
    void Compare Items(FDataTableRowHandle Item Data 1, FDataTableRowHandle item Data 2, class UObject* __WorldContext, bool& Same Item);
    void IsItemFish?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Fish, bool& Rare);
    void IsItemAmmo?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Ammo);
    void IsItemTool?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& Tool);
    void IsHeavyWeapon?(const FGameplayTagContainer& TagContainer, class UObject* __WorldContext, bool& HeavyWeapon);
    void IsRareItem?(FAbiotic_InventoryChangeableDataStruct& ChangeableData, class UObject* __WorldContext, bool& Rare);
    void GetItemTypeText(FAbiotic_InventoryItemStruct& ItemData, FAbiotic_InventoryChangeableDataStruct& ChangeableData, class UObject* __WorldContext, bool& Result, FText& ItemType, FLinearColor& OverrideColor);
    void GetActiveAmmoType(bool GetDefaultAmmoType, FAbiotic_WeaponStruct& WeaponData, FAbiotic_InventoryChangeableDataStruct& ChangeableData, class UObject* __WorldContext, bool& Found, FDataTableRowHandle& ItemRow);
    void FindAmmoForWeapon(class AAbiotic_PlayerCharacter_C* OwningCharacter, class UObject* __WorldContext, TArray<FName>& ItemsFound);
    double GetCurrentLiquidPercentage(const FAbiotic_InventoryItemSlotStruct& ItemSlotStruct, class UObject* __WorldContext);
    void Find Owning Character Low Battery Rechargeable Items(class AAbiotic_PlayerCharacter_C* OwningCharacter, class UObject* __WorldContext, TMap<class FName, class FAbiotic_InventoryItemSlotStruct>& ItemsFound);
    void Find Equipped Flashlight Items(class AAbiotic_PlayerCharacter_C* OwningCharacter, class UObject* __WorldContext, TMap<FName, int32>& ItemsFound);
    void TryGetItemTextureOverrideName(const FDataTableRowHandle& TextureOverrideDataRow, FText OriginalName, class UObject* __WorldContext, FText& New Name);
    void Display Broken Hotbar Item Text(class AAbiotic_PlayerController_C* Player Controller, class UObject* __WorldContext);
    void ReverseConvertItemCount(TArray<FAbioticItemCount_Struct>& In, class UObject* __WorldContext, TArray<FItemCount>& Out);
    void FindClosestSoupRecipe(TArray<FName>& IngredientsArray, TArray<FName>& UnlockedRecipes, TArray<FName>& KnownItems, bool IngredientCountMustMatchRecipe, class UObject* __WorldContext, bool& FoundRecipe, FName& SoupRowFound);
    int32 Get New Max Stack Size(int32 CurrentMaxStackSize, class UObject* __WorldContext);
    void Get Particle Socket(class UMeshComponent*& MeshComponent, class UObject* __WorldContext, FName& SocketName, FVector& SocketLocation);
    void ReturnRecipeButtonsByTag(TArray<class UW_RecipeBookEntryButton_C*>& WidgetArray, FGameplayTag TagToFilter, class UObject* __WorldContext, TArray<class UW_RecipeBookEntryButton_C*>& OutWidgets);
    void Get Secondary Item Use Speed On DBNO Player(const FAbiotic_InventoryItemStruct& ItemData, FGameplayTag TagToLookFor, class AAbiotic_Character_ParentBP_C* UsingCharacter, double BaseSpeed, bool SecondaryUse, bool Target is DBNO, class UObject* __WorldContext, double& NewSpeed);
    void GetSoupTypeRowNames(TEnumAsByte<E_PrimarySoupTypes::Type> SoupType, FName OptionalRegularSoupRowName, class UObject* __WorldContext, FName& RowName);
    void GetSoupTypeFromIngredients(bool RecipeExists, TArray<FName>& Ingredients, class UObject* __WorldContext, TEnumAsByte<E_PrimarySoupTypes::Type>& SoupType);
    void Get Current Item FXSpeed(double BaseSpeed, FGameplayTag TagToLookFor, class AAbioticCharacter* UsingActor, const FAbiotic_InventoryItemStruct& ItemData, class UObject* __WorldContext, double& NewSpeed);
    bool AreItemsStackable(FAbiotic_InventoryItemSlotStruct& Item1, FAbiotic_InventoryItemSlotStruct& Item2, class UObject* __WorldContext);
    FText GetItemFullName(FAbiotic_InventoryItemStruct& ItemData, FAbiotic_InventoryChangeableDataStruct& Changeable, FName ItemRowName, class UObject* __WorldContext, bool& PlaceholderNameDetected);
    double GetCookedStatMultiplier(ECookingState CookedState, class UObject* __WorldContext);
    void CreateEmptyItemSlotRow(class UObject* __WorldContext, FAbiotic_InventoryItemSlotStruct& EmptySlotDataRowHandle);
    void Get Long Interact Duration Based on Tag(FGameplayTag Tag, float BaseValue, FStatModifierRowHandle Modifier, class AAbiotic_PlayerCharacter_C* InteractingCharacter, class UObject* __WorldContext, double& Duration);
    FText SlotTypeToDisplayText(TEnumAsByte<E_InventorySlotType::Type> Index, class UObject* __WorldContext);
    bool IsItemRadioactive(FDataTableRowHandle& ItemDataTable, FAbiotic_InventoryChangeableDataStruct& ChangeableData, class UObject* __WorldContext, double& RadiationAmount);
    void Find Owning Character Medical Items(class AAbiotic_PlayerCharacter_C* OwningCharacter, class UObject* __WorldContext, TMap<FName, int32>& ItemsFound);
    void DetermineDroppedItemOutcome(FInventorySlotSelected_Struct IncomingItemSlot, TEnumAsByte<E_InventorySlotType::Type> IncomingSlotType, FInventorySlotSelected_Struct ItemSlotToCheck, TEnumAsByte<E_InventorySlotType::Type> SlotTypeToCheck, bool IsSplitStack, int32 StackSize, class UAbiotic_InventoryComponent_C* IncomingInventory, class UAbiotic_InventoryComponent_C* InventoryToCheck, class UObject* __WorldContext, TEnumAsByte<E_ItemDragDropOutcome::Type>& Outcome, int32& Leftovers);
    void GetNextFoodStageItem(const FDataTableRowHandle& OriginalItem, ECookingState NextStage, int32 StovewareType, class UObject* __WorldContext, bool& Success, FDataTableRowHandle& ItemRow, FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    TEnumAsByte<E_InventorySlotType::Type> IndexToSlotType(int32 Index, class UObject* __WorldContext);
    int32 SlotTypeToIndex(TEnumAsByte<E_InventorySlotType::Type> SlotType, class UObject* __WorldContext);
    bool DecayItem(FDataTableRowHandle& ItemDataTable, FAbiotic_InventoryChangeableDataStruct& ChangeableData, TEnumAsByte<E_InternalTemperature::Type> InternalTemperature, class UObject* __WorldContext, bool& FullyDecayed, FDataTableRowHandle& NewItemData, FAbiotic_InventoryChangeableDataStruct& NewChangeableData);
    void ItemCanBeEquipped(const FDataTableRowHandle& ItemData, class UObject* __WorldContext, bool& CanBeEquipped);
    void FilterItemsForSubstitutes(TArray<FAbioticItemCount_Struct>& InItems, class UObject* __WorldContext, TArray<FAbioticItemCount_Struct>& RegularItems, TArray<FAbioticSubstituteCount_Struct>& SubstituteItems);
    void AreItemsAvailable(TArray<FAbioticItemCount_Struct>& Items, class AAbiotic_PlayerCharacter_C* Player, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, class UObject* __WorldContext, bool& Success);
    void DoesInventoryHaveSubstituteItems(TArray<FDataTableRowHandle>& SubstituteItems, int32 TotalRequired, class AAbiotic_PlayerCharacter_C* Player, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, class UObject* __WorldContext, bool& ContainsItem, int32& CountFound);
    void FindItemCosmeticData(FName ItemRow, class UObject* __WorldContext, bool& Success, FItemCosmetics_Struct& ItemCosmeticData);
    TSoftObjectPtr<UStaticMesh> GetBrokenItemMesh(FName ItemRow, class UObject* __WorldContext);
    void ConvertItemCount(TArray<FItemCount>& In, class UObject* __WorldContext, TArray<FAbioticItemCount_Struct>& Out);
    FAbiotic_InventoryChangeableDataStruct CreateDefaultChangeableData(FAbiotic_InventoryItemStruct& ItemStruct, int32 Stack, FDataTableRowHandle TextureVariant, TArray<FDynamicProperty>& DynamicProperties, class UObject* __WorldContext);
    FAbiotic_InventoryChangeableDataStruct RemoveTagFromChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData, FGameplayTag Tag, class UObject* __WorldContext);
    FAbiotic_InventoryChangeableDataStruct AddTagToChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData, FGameplayTag Tag, class UObject* __WorldContext);
    bool ChangeableDataHasTag(FAbiotic_InventoryChangeableDataStruct& ChangeableData, FGameplayTag Tag, class UObject* __WorldContext);
    void TryScrapItemInSlot(FAbiotic_InventoryItemStruct& InItemData, FAbiotic_InventoryChangeableDataStruct& InChangeableData, double ExtraLootChance, class UObject* __WorldContext, bool& Success, TArray<FAbiotic_InventoryItemSlotStruct>& OutItems, FString& DebugNote);
}; // Size: 0x28

#endif
