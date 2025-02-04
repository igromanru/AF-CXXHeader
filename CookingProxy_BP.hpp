#ifndef UE4SS_SDK_CookingProxy_BP_HPP
#define UE4SS_SDK_CookingProxy_BP_HPP

class ACookingProxy_BP_C : public AItemProxyParent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* LiquidMesh;                                           // 0x03E8 (size: 0x8)
    class UTextRenderComponent* LiquidLevelDebugText;                                 // 0x03F0 (size: 0x8)
    class UNiagaraComponent* particle;                                                // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* PanMesh;                                              // 0x0400 (size: 0x8)
    class UTextRenderComponent* DebugText;                                            // 0x0408 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0410 (size: 0x8)
    TEnumAsByte<EFoodCookStates::Type> State;                                         // 0x0418 (size: 0x1)
    class AStove_ParentBP_C* ParentStove;                                             // 0x0420 (size: 0x8)
    FDataTableRowHandle OriginalItem;                                                 // 0x0428 (size: 0x10)
    FDataTableRowHandle CookwareItem;                                                 // 0x0438 (size: 0x10)
    FGameplayTagContainer CookwareTags;                                               // 0x0448 (size: 0x20)
    double TimeToCook;                                                                // 0x0468 (size: 0x8)
    TEnumAsByte<EFoodCookStates::Type> ChefSkill;                                     // 0x0470 (size: 0x1)
    double TimeToBurn;                                                                // 0x0478 (size: 0x8)
    double TimeToIgnite;                                                              // 0x0480 (size: 0x8)
    bool ShowPanMesh;                                                                 // 0x0488 (size: 0x1)
    class AAbiotic_PlayerCharacter_C* OriginalChef;                                   // 0x0490 (size: 0x8)
    bool Cookware;                                                                    // 0x0498 (size: 0x1)
    FGuid Cooking Delay GUID;                                                         // 0x049C (size: 0x10)
    class UStaticMesh* CookwareMesh;                                                  // 0x04B0 (size: 0x8)
    TEnumAsByte<E_CookingTypes::Type> CurrentCookType;                                // 0x04B8 (size: 0x1)
    bool IsCookingSoup;                                                               // 0x04B9 (size: 0x1)
    FAbiotic_Cooking_Struct Soup Data;                                                // 0x04C0 (size: 0x30)
    FText CurrentCookedDisplay;                                                       // 0x04F0 (size: 0x10)
    bool New Ingredient Added;                                                        // 0x0500 (size: 0x1)
    FString OriginalChefPlayerID;                                                     // 0x0508 (size: 0x10)
    int32 MaxLiquid;                                                                  // 0x0518 (size: 0x4)
    FCookingProxy_BP_CSoupDisplayUpdated SoupDisplayUpdated;                          // 0x0520 (size: 0x10)
    void SoupDisplayUpdated();
    FName CurrentFoodRowName;                                                         // 0x0530 (size: 0x8)
    TEnumAsByte<E_CookingProxyFXState::Type> Current FXState;                         // 0x0538 (size: 0x1)
    bool BoilingTaintedWater;                                                         // 0x0539 (size: 0x1)
    double TaintedWaterBoilDelay;                                                     // 0x0540 (size: 0x8)
    double LastModifiedTime;                                                          // 0x0548 (size: 0x8)
    int32 StovewareMeshType;                                                          // 0x0550 (size: 0x4)
    FName FoodRow;                                                                    // 0x0554 (size: 0x8)

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
    int32 DoesCookwareExist(const FDataTableRowHandle& DataTableRowHandle, bool& Exist);
    void GetCorrectItemProxyMesh(class UStaticMesh* Mesh, bool IsPot, class UStaticMesh*& OutMesh);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void GetCookSpot(bool& Success, class USceneComponent*& CookSpot);
    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void Server_TryBoilTaintedWater(bool& Success);
    void OnRep_BoilingTaintedWater();
    void UpdateSoupLiquidLevel(TEnumAsByte<E_CookingTypes::Type> CookType, int32 LiquidLevel, TEnumAsByte<E_LiquidType::Type> LiquidType);
    void UpdateParticleAndSoundFX();
    void GetPrimarySoupTypeFromIngredients(bool RecipeExists);
    void OnRep_CurrentFoodRowName();
    void OnRep_OriginalItem();
    void Try Apply Food Texture Override(FName ItemRowOverride, bool& Applied);
    void Set Current Soup Stage(bool New Ingredient Added, bool& Success);
    void UpdateChangeableState(TEnumAsByte<EFoodCookStates::Type> CookingState, double CookedProgress);
    void Update Ingredient To Soup Data(bool New Ingredient, bool& RecipeExists, FAbioticRecipe_Struct& Recipe, TEnumAsByte<E_PrimarySoupTypes::Type>& SoupType);
    void Set Cookware Mesh(const TSoftObjectPtr<UObject>& CookwareMeshRef, const FDataTableRowHandle& CookwareItem, bool Original Item is Cookware, class UStaticMesh*& Output_Get);
    void Get Next Food Stage Item and Set(TEnumAsByte<EFoodCookStates::Type> NextStage, bool& Success);
    void OnRep_State();
    void OnLoaded_985D47C64717C914D1F3F19F4D01EF96(class UObject* Loaded);
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
    void RefreshItemStates(FDataTableRowHandle OriginalItem, FAbiotic_InventoryChangeableDataStruct ChangeableData, TEnumAsByte<EFoodCookStates::Type> ChefSkill, double TimeToCook, double TimeToBurn, class AAbiotic_PlayerCharacter_C* OriginalChef, bool ShowCookwareMesh, bool Cookware, bool StartCookingSoup, bool New Ingredient Added, bool CanCookSoup);
    void Server_ResumeCooking();
    void Broadcast_Splash_NewIngredient(TEnumAsByte<E_CookingTypes::Type> CookingType, int32 LiquidLevel, TEnumAsByte<E_LiquidType::Type> LiquidType);
    void Local_Splash_NewIngredient(TEnumAsByte<E_CookingTypes::Type> CookingType, int32 LiquidLevel, TEnumAsByte<E_LiquidType::Type> LiquidType);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void SetInitialStoveware();
    void InteractWith_A_LocalFX(bool Hold);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void ExecuteUbergraph_CookingProxy_BP(int32 EntryPoint);
    void SoupDisplayUpdated__DelegateSignature();
}; // Size: 0x55C

#endif
