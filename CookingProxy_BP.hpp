#ifndef UE4SS_SDK_CookingProxy_BP_HPP
#define UE4SS_SDK_CookingProxy_BP_HPP

class ACookingProxy_BP_C : public AItemProxyParent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x0358 (size: 0x8)
    class UTextRenderComponent* LiquidLevelDebugText;                                 // 0x0360 (size: 0x8)
    class UNiagaraComponent* Particle;                                                // 0x0368 (size: 0x8)
    class UStaticMeshComponent* PanMesh;                                              // 0x0370 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x0378 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0380 (size: 0x8)
    ECookingState State;                                                              // 0x0388 (size: 0x1)
    class AStove_ParentBP_C* ParentStove;                                             // 0x0390 (size: 0x8)
    FDataTableRowHandle OriginalItem;                                                 // 0x0398 (size: 0x10)
    FDataTableRowHandle CookwareItem;                                                 // 0x03A8 (size: 0x10)
    FGameplayTagContainer CookwareTags;                                               // 0x03B8 (size: 0x20)
    double TimeToCook;                                                                // 0x03D8 (size: 0x8)
    ECookingState ChefSkill;                                                          // 0x03E0 (size: 0x1)
    double TimeToBurn;                                                                // 0x03E8 (size: 0x8)
    double TimeToIgnite;                                                              // 0x03F0 (size: 0x8)
    bool ShowPanMesh;                                                                 // 0x03F8 (size: 0x1)
    class AAbiotic_PlayerCharacter_C* OriginalChef;                                   // 0x0400 (size: 0x8)
    bool Cookware;                                                                    // 0x0408 (size: 0x1)
    FGuid Cooking Delay GUID;                                                         // 0x040C (size: 0x10)
    class UStaticMesh* CookwareMesh;                                                  // 0x0420 (size: 0x8)
    TEnumAsByte<E_CookingTypes::Type> CurrentCookType;                                // 0x0428 (size: 0x1)
    bool IsCookingSoup;                                                               // 0x0429 (size: 0x1)
    FText CurrentCookedDisplay;                                                       // 0x0430 (size: 0x10)
    bool New Ingredient Added;                                                        // 0x0440 (size: 0x1)
    FString OriginalChefPlayerID;                                                     // 0x0448 (size: 0x10)
    int32 MaxLiquid;                                                                  // 0x0458 (size: 0x4)
    FCookingProxy_BP_CSoupDisplayUpdated SoupDisplayUpdated;                          // 0x0460 (size: 0x10)
    void SoupDisplayUpdated();
    FName CurrentFoodRowName;                                                         // 0x0470 (size: 0x8)
    TEnumAsByte<E_CookingProxyFXState::Type> Current FXState;                         // 0x0478 (size: 0x1)
    bool BoilingTaintedWater;                                                         // 0x0479 (size: 0x1)
    double TaintedWaterBoilDelay;                                                     // 0x0480 (size: 0x8)
    double LastModifiedTime;                                                          // 0x0488 (size: 0x8)
    int32 StovewareMeshType;                                                          // 0x0490 (size: 0x4)
    FName FoodRow;                                                                    // 0x0494 (size: 0x8)
    double Internal_TimeCookDelayFinishes;                                            // 0x04A0 (size: 0x8)

    void CanUseSharedInteraction(bool& Can Use);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void RequiresToolToDismantle(bool& Tool Required);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void GetStoredString(FString& String);
    void ApplyChunkMaterialsToSoup(const TArray<TSoftObjectPtr<UMaterialInterface>>& ChunkMaterials);
    int32 DoesCookwareExist(const FDataTableRowHandle& DataTableRowHandle, bool& Exist);
    void GetCorrectItemProxyMesh(class UStaticMesh* Mesh, bool IsPot, class UStaticMesh*& OutMesh);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void GetCookSpot(bool& Success, class USceneComponent*& CookSpot);
    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void Server_TryBoilTaintedWater(bool& Success);
    void OnRep_BoilingTaintedWater();
    void UpdateSoupLiquidLevel(TEnumAsByte<E_CookingTypes::Type> CookType, int32 LiquidLevel, TEnumAsByte<E_LiquidType::Type> LiquidType, TArray<FName>& IngredientList);
    void UpdateParticleAndSoundFX();
    void GetPrimarySoupTypeFromIngredients(bool RecipeExists);
    void OnRep_CurrentFoodRowName();
    void OnRep_OriginalItem();
    void Try Apply Food Texture Override(FName ItemRowOverride, bool& Applied);
    void Set Current Soup Stage(bool New Ingredient Added, bool& Success);
    void UpdateChangeableState(ECookingState CookingState);
    void Update Ingredient To Soup Data(bool New Ingredient, bool& RecipeExists, FAbioticRecipe_Struct& Recipe, TEnumAsByte<E_PrimarySoupTypes::Type>& SoupType);
    void Set Cookware Mesh(const TSoftObjectPtr<UObject>& CookwareMeshRef, const FDataTableRowHandle& CookwareItem, bool Original Item is Cookware, class UStaticMesh*& Output_Get);
    void Get Next Food Stage Item and Set(ECookingState NextStage, bool& Success);
    void OnRep_State();
    void OnLoaded_985D47C64717C914D1F3F19F4D01EF96(class UObject* Loaded);
    void OnLoaded_933FE2A641F342E2EDF7F98F092E4B17(class UObject* Loaded);
    void OnLoaded_1CDF4CF8466EE541FDCA03A4674BC021(class UObject* Loaded);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_B_LocalFX(bool Hold);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DeliverString(FString String, bool FromSave);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void DeliverInt(bool FromSave, const int32 New Int);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void ReceiveBeginPlay();
    void RefreshItemAppearance();
    void RefreshItemStates(FDataTableRowHandle OriginalItem, FAbiotic_InventoryChangeableDataStruct ChangeableData, ECookingState ChefSkill, double TimeToCook, double TimeToBurn, class AAbiotic_PlayerCharacter_C* OriginalChef, bool ShowCookwareMesh, bool Cookware, bool StartCookingSoup, bool New Ingredient Added, bool CanCookSoup);
    void Server_ResumeCooking();
    void Broadcast_Splash_NewIngredient(TEnumAsByte<E_CookingTypes::Type> CookingType, int32 LiquidLevel, TEnumAsByte<E_LiquidType::Type> LiquidType, const TArray<FName>& IngredientList);
    void Local_Splash_NewIngredient(TEnumAsByte<E_CookingTypes::Type> CookingType, int32 LiquidLevel, TEnumAsByte<E_LiquidType::Type> LiquidType, TArray<FName>& IngredientList);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void SetInitialStoveware();
    void InteractWith_A_LocalFX(bool Hold);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void Local_SetSoupAppearance(class UPrimaryDataAsset* DatAsset);
    void ExecuteUbergraph_CookingProxy_BP(int32 EntryPoint);
    void SoupDisplayUpdated__DelegateSignature();
}; // Size: 0x4A8

#endif
