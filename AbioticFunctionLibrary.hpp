#ifndef UE4SS_SDK_AbioticFunctionLibrary_HPP
#define UE4SS_SDK_AbioticFunctionLibrary_HPP

class UAbioticFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void CheckAndRemoveSpecialCharacter(FString SourceString, const TArray<FString>& ABCStrings, bool CheckOnly, class UObject* __WorldContext, bool& FoundBadCharacter, FString& FinalString);
    void FilterString(bool AllowSpecialCharacters, const TArray<FString>& ABCStrings, FString SourceString, int32 CharacterLimit, class UObject* __WorldContext, FString& FilteredString, bool& HasSpecialCharacters);
    void HasCustomizationUnlocked(TArray<FDataTableRowHandle>& CustomizationUnlocksToCheck, class UObject* __WorldContext, bool& AllUnlocked, TArray<FDataTableRowHandle>& Leftovers);
    void CreateHitscanTracer(FVector StartLocation, const FVector& EndLocation, double Velocity, bool RicochetEnabled, class UObject* __WorldContext);
    void Modify Item Liquid In Slot(class UAbiotic_InventoryComponent_C* Inventory, int32 Index, int32 BatteryAmount, const TEnumAsByte<E_LiquidType::Type> LiquidType, class UObject* __WorldContext);
    void GetPawnFromDamageInstigator(class AActor* Actor, class UObject* __WorldContext, class APawn*& Pawn);
    void Server_GrantFishingReward(class AAbiotic_PlayerCharacter_C* Player, FFishRowHandle Reward, bool Lucky, class UObject* __WorldContext);
    bool Is Matching Slot Type(TEnumAsByte<E_InventorySlotType::Type> IncomingSlotType, TEnumAsByte<E_InventorySlotType::Type> CurrentSlotType, class UObject* __WorldContext);
    void GetDifficultyPerceivedPlayers(int32 PerceivedPlayers, class UObject* __WorldContext, int32& Players);
    void GetCurrentDifficulty(class UObject* __WorldContext, int32& Difficulty);
    void TryPlayWidgetAnimation(bool Play, class UWidgetAnimation* Animation, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, class UObject* __WorldContext);
    void Get Current Calendar Date Text(const int32 DaysPassed, bool Comma After Day, bool All Caps Month Text, class UObject* __WorldContext, FText& Result);
    void Get Value Divided by Day Night Cycle Speed(double Original Value, class UObject* __WorldContext, double& New Value);
    void Has Weightless Liquid Type(const TArray<TEnumAsByte<E_LiquidType::Type>>& TargetArray, class UObject* __WorldContext, bool& Return);
    void BelongsToAnyPlayerFaction?(TEnumAsByte<E_Factions::Type> Faction, class UObject* __WorldContext, bool& IsPlayerFaction, TEnumAsByte<E_Factions::Type>& SpecificFaction);
    void Calculate Remaining Amount(int32 TotalAmount, int32 ExchangeRate, class UObject* __WorldContext, int32& RemainingAmount, int32& AmountUsed);
    void Try Apply Thorn Damage to Damage Causer(class AAbiotic_Character_ParentBP_C* AffectingCharacter, class APawn* DamageCauser, FAbiotic_PointDamageStruct LastPointDamage, class UObject* __WorldContext);
    void IsCharacterImmuneToBuffDebuff?(class AActor* ActorToCheck, const FName& BuffDebuffToFind, class UObject* __WorldContext, bool& Return);
    void CompendiumGetUnlockedSections(FName CompendiumRowName, TArray<FCompendiumSection>& Sections, bool HasKillRequirement, class UObject* __WorldContext, bool& HasUnlockedSection, int32& SectionsUnlocked, bool& KillUnlocked);
    void FindClosestNumber(double TargetValue, double Value1, double Value2, class UObject* __WorldContext, double& ClosestValue);
    void Locate Item in Player Inventory by Asset ID(class AAbiotic_PlayerCharacter_C*& OwningCharacter, FName ItemRowName, FString AssetID, bool IncludeEquipInventory, class UObject* __WorldContext, bool& Success, class UAbiotic_InventoryComponent_C*& InventoryFound, int32& InventoryIndex);
    double Get Sandbox Enemy Damage Towards Target(double BaseDamage, class AActor* Instigator, FSandboxOptionRowHandle SandboxOption, class UObject* __WorldContext);
    void ConsumeItemInSlot(FInventorySlotSelected_Struct& CurrentItemSlot, class AAbiotic_PlayerCharacter_C*& OwningCharacter, int32 Amount, class UObject* __WorldContext, FInventorySlotSelected_Struct& ItemSlot);
    void Get Character Gear Slot Item Data(TEnumAsByte<E_InventorySlotType::Type> SlotType, class UObject* __WorldContext, bool& Success, FAbiotic_InventoryItemSlotStruct& SlotData);
    int32 Get Possible Barricade Recipe Item Discount(class AAbiotic_Character_ParentBP_C*& OwningCharacter, const FDataTableRowHandle& ItemToCreate, int32 CurrentRecipeItemCount, class UObject* __WorldContext);
    void CalculateDeployPlacement(TEnumAsByte<E_DeployableOrientations::Type> PlacementOrienationsAllowed, class USceneComponent* QueryComponent, const TArray<class AActor*>& ActorsToIgnore, bool OnlyFlatPlacement, TEnumAsByte<ETraceTypeQuery> TraceChannel, class UObject* __WorldContext, bool& IsHit, FVector& Location, FRotator& Rotation, FVector& TraceEnd, bool& CanBePlaced?, FVector& Normal, class AActor*& OutHitActor);
    int32 Get Precision Engineering Item Discount(int32 Original Item Count, bool Perk exist, class UObject* __WorldContext);
    void Terminal Velocity Stagger Chance(TEnumAsByte<ENPCCharacterSize::Type> CharacterSize, class UObject* __WorldContext, bool& Success);
    bool PlayerIsInVignette(class AAbiotic_PlayerController_C* PlayerController, class UObject* __WorldContext);
    bool Is Component Is Inside Actor Bounds(const class USceneComponent* ComponentToCheck, class AActor* ContainerActor, class UObject* __WorldContext);
    void Get Nearby Container Inventories(class AActor* InteractingActor, float Radius, class UObject* __WorldContext, TArray<class UAbiotic_InventoryComponent_C*>& InventoriesFound);
    void GetDamageTypeResistance(TMap<TSubclassOf<UAbiotic_DamageType_ParentBP_C>, double>& DamageMitigationType, const class UDamageType* DamageType, class UObject* __WorldContext, double& DamageBlocked);
    void WakePhysicsOnMovingPlatform(class UPrimitiveComponent* OverlapVolume, class UObject* __WorldContext);
    void CheckNearMiss(FHitResult& HitResult, class AAbiotic_Character_ParentBP_C* Owner, class UObject* __WorldContext);
    void BridgeSupportTrace(FTransform Origin, TArray<class AActor*>& ActorsToIgnore, double Distance, class UObject* __WorldContext, bool& Success, FHitResult& HitResult);
    void GetLevelAtLocation(const FVector& Location, class UObject* __WorldContext, FString& LevelName);
    void Get Possible Quantity Can be Crafted(class AAbiotic_PlayerCharacter_C*& InteractingCharacter, class UDataTable* DataTable, FName ItemRowName, bool PlayerCraftingOnly, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, const TArray<FName>& PlayerCraftingExtraCostItems, class UObject* __WorldContext, int32& FinalCost);
    void Does Any Recipe Uses This Item?(FName ItemToLookFor, TArray<FName>& RecipeList, class UObject* __WorldContext, TArray<FName>& Recipes, bool& RecipeUseThisItem);
    void RequiredBenchesAvailable(FAbioticRecipe_Struct& Recipe, bool RequiresBench, const TArray<FDataTableRowHandle>& BenchesAvailable, class UObject* __WorldContext, bool& Available, bool& NoRequirement);
    void Requires Bench?(FAbioticRecipe_Struct Recipe, class UObject* __WorldContext, bool& RequiresBench);
    void CheckAvailableRecipeItems(class AAbiotic_PlayerCharacter_C*& TargetCharacter, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, const FAbioticItemCount_Struct& ItemCount, bool RequireBenches, class UW_InventoryItemSlot_C*& ItemSlot, bool PlayerCraftingOnly, bool HiddenFromPlayer, class UObject* __WorldContext, bool& AtLeastOneItemIsMissing);
    void CableRecursionTest(class AActor* Actor, class AActor* Target, class UObject* __WorldContext, bool& Valid);
    void ResetMeshMaterialsToDefaults(class UMeshComponent* Mesh, class UObject* __WorldContext);
    void Try Set Material by Name(class UMeshComponent* MeshComponent, const FName& MaterialSlotName, class UMaterialInterface* Material, class UObject* __WorldContext, bool& Found);
    void Update Criticial Injury Visual(class AAbiotic_Character_ParentBP_C*& OwningCharacter, class UImage* BleedingImageToShow, class UImage* BrokenBoneToShow, TEnumAsByte<ECriticalityLevels::Type> Critical Level, EBodyLimbs Limb, class UObject* __WorldContext);
    void Is Object Not Aligned with the Ground?(class AActor* TargetActor, class UObject* __WorldContext, bool& Not Aligned);
    bool PlayerTeleportCheck(FVector TeleportLocation, class AActor* OwningActor, double CapsuleRadius, class UObject* __WorldContext);
    void GetPaintColor(EPaintColor PaintColor, class UObject* __WorldContext, FLinearColor& FinalColor);
    void FindSoupRecipe(class UDataTable* RecipeTable, TArray<FAbioticItemCount_Struct>& Ingredient, class UObject* __WorldContext, bool& FoundRecipe, FAbioticRecipe_Struct& Recipes, FName& RecipeRow);
    void Get Point Location in Circle from Segment(int32 CurrentSegment, int32 TotalAngle, int32 TotalSegment, FRotator SourceRotation, double DistanceFromTheSource, double ConeAngle, double RotationOffset, class UObject* __WorldContext, FVector& PointLocation);
    void ChangeItemStackSize(FAbiotic_InventoryChangeableDataStruct ChangeableData, int32 NewStackSize, class UObject* __WorldContext, FAbiotic_InventoryChangeableDataStruct& ChangeableOutput);
    void Local_PlayerCameraShake(TSubclassOf<class UCameraShakeBase> ShakeClass, class UObject* __WorldContext);
    void IsItemCookingPot(FName ItemRowName, class UObject* __WorldContext, bool& IsCookingPot);
    void IsPawnCharacterOrVehicleOfLocalPlayer?(class APawn* Pawn, class UObject* __WorldContext, bool& IsLocalPlayer);
    void FindWord(FText Text, FString Value, class UObject* __WorldContext, bool& WordFound);
    void Get Skill Perks(FSkillRowHandle SkillRow, int32 AtLevel, class UObject* __WorldContext, bool& Success, TArray<FSkillPerkRowHandle>& FoundPerkRows);
    class AAbiotic_Character_ParentBP_C* Find Closest Characters(const class AActor* WorldContextObject, TSubclassOf<class AActor> ActorClass, double Radius, class APawn* Instigator, bool MustBeAlive, bool MustBeFriendly, class UObject* __WorldContext, bool& IsValid, TArray<class AAbiotic_Character_ParentBP_C*>& FoundActorsWithinArea);
    void CalculatePercentageChance(double Percent (0 - 1), class UObject* __WorldContext, bool& Success, double& ChanceRolled);
    void FindMidpointBetweenVectors(FVector A, FVector B, class UObject* __WorldContext, FVector& Midpoint);
    void GetAbioticGameInstance(class UObject* __WorldContext, class UAbiotic_GameInstance_C*& GameInstance);
    void Get Keybinding as String(FString InputName, bool Axis (False=Action), class UObject* __WorldContext, FString& KeyString);
    void CompareSoftReferences(TSoftObjectPtr<AActor> A, TSoftObjectPtr<AActor> B, class UObject* __WorldContext, bool& Same);
    void IsSaveableGame?(class UObject* __WorldContext, bool& SaveAllowed);
    void Revert Focus To Main Widget(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, class UObject* __WorldContext, bool& Success);
    void Get Angle Between Vectors(FVector Vector A, FVector Vector B, class UObject* __WorldContext, double& Degrees, double& DotProduct);
    void CreateNewButtonGenericTooltip(class UWidget* TargetWidgetToSetTooltip, FText Text, FText Text_Additional, FText Text_Negative, class UObject* __WorldContext);
    void IsDemoMode?(class UObject* __WorldContext, bool& DemoMode);
    void TryPlaceInHotbar?(const FDataTableRowHandle& Item, class UObject* __WorldContext, bool& TryHotbarFirst);
    void GetTotalValueBasedOnPercentage(double InitialValue, double PercentageToCalculateWith, bool SubtractInstead?, class UObject* __WorldContext, double& Total);
    void DoesLevelContainActor(FString LevelName, class AActor* Actor, class UObject* __WorldContext, bool& ContainsActor);
    void Add to Stack Size(const FAbiotic_InventoryItemSlotStruct& SlotStruct, int32 ValueToAdd, int32 MaxStackSize, class UObject* __WorldContext, FAbiotic_InventoryItemSlotStruct& Return Struct, int32& TotalValue, bool& ExceedMaxSize?);
    void Calculate Item Weight(double ItemDefaultWeight, int32 MaxLiquid, double LiquidWeightMultiplier, FAbiotic_InventoryChangeableDataStruct& ChangeableData, TEnumAsByte<E_InventorySlotType::Type> InventorySlotType, TArray<TEnumAsByte<E_LiquidType::Type>>& Allowed Liquid Types, class UObject* __WorldContext, double& TotalWeight);
    void TimeElapsedSince(double SinceTime, double ElapsedTimeRequired, class UObject* __WorldContext, bool& Elapsed);
}; // Size: 0x28

#endif
