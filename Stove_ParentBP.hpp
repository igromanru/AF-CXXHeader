#ifndef UE4SS_SDK_Stove_ParentBP_HPP
#define UE4SS_SDK_Stove_ParentBP_HPP

class AStove_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class USceneComponent* InteractFallbackPoint;                                     // 0x0938 (size: 0x8)
    class UBoxComponent* FixableInteractBox;                                          // 0x0940 (size: 0x8)
    class UStaticMeshComponent* FixableDevice;                                        // 0x0948 (size: 0x8)
    class UAbiotic_InventoryComponent_C* PanInventory;                                // 0x0950 (size: 0x8)
    class UAbiotic_InventoryComponent_C* CookingInventory;                            // 0x0958 (size: 0x8)
    class UStaticMeshComponent* CookSpot1;                                            // 0x0960 (size: 0x8)
    bool IsBakingOven;                                                                // 0x0968 (size: 0x1)
    bool Local_LookingAtEmptyStoveSlot;                                               // 0x0969 (size: 0x1)
    bool Local_CookableItemInHand;                                                    // 0x096A (size: 0x1)
    TArray<class USceneComponent*> CookSpots;                                         // 0x0970 (size: 0x10)
    TArray<class ACookingProxy_BP_C*> CookableProxies;                                // 0x0980 (size: 0x10)
    TArray<bool> StovesOn;                                                            // 0x0990 (size: 0x10)
    double StoveTopVerticalOffset;                                                    // 0x09A0 (size: 0x8)
    bool Local_LookingAtEmptyCookware;                                                // 0x09A8 (size: 0x1)
    bool LocalHoldingCookware;                                                        // 0x09A9 (size: 0x1)
    bool Local Cookware Is A Pot;                                                     // 0x09AA (size: 0x1)
    bool Local Holding A Container;                                                   // 0x09AB (size: 0x1)
    bool Local Start Cooking Soup;                                                    // 0x09AC (size: 0x1)
    class UActorComponent* Component Used;                                            // 0x09B0 (size: 0x8)
    TArray<double> TimeStartedCooking;                                                // 0x09B8 (size: 0x10)
    bool LocalHoldingBakeable;                                                        // 0x09C8 (size: 0x1)
    TEnumAsByte<E_StoveTopStates::Type> Current Stove Top State;                      // 0x09C9 (size: 0x1)
    TEnumAsByte<E_ItemStateInHand::Type> Current Held Item State;                     // 0x09CA (size: 0x1)
    class USceneComponent* LastHighlightedComponent;                                  // 0x09D0 (size: 0x8)
    float SoupWidgetOffset;                                                           // 0x09D8 (size: 0x4)
    FString RequiredItemName;                                                         // 0x09E0 (size: 0x10)
    FDataTableRowHandle RequiredFixItItem;                                            // 0x09F0 (size: 0x10)
    bool HasBeenFixed;                                                                // 0x0A00 (size: 0x1)
    TArray<double> PanRotations;                                                      // 0x0A08 (size: 0x10)
    TSubclassOf<class ACookingProxy_BP_C> CookingProxyClass;                          // 0x0A18 (size: 0x8)
    bool IsFixingInventorySave;                                                       // 0x0A20 (size: 0x1)
    FVector StoveRefundOffset;                                                        // 0x0A28 (size: 0x18)

    void CalculateRemovedItem(int32 InIndex, FAbiotic_InventoryChangeableDataStruct& InChangeableData, FAbiotic_InventoryItemSlotStruct& OutItem);
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void GetLiquidContainerStoveState(int32 StoveSpot, TEnumAsByte<E_LiquidType::Type> Liquid Type, int32 ContainerMaxLiquid, bool& Can Pour, TEnumAsByte<E_StoveTopStates::Type>& NewStoveState);
    void TryCookRadialWheelItem(class AAbiotic_PlayerCharacter_C* InteractingCharacter, class UObject* CookSpot, const FName& FoodRowName);
    void CanLongInteractWith_A(bool& Success);
    void Get Current Stove State(class UObject* Hit Component, class AAbiotic_Character_ParentBP_C* Interacting Character, TEnumAsByte<E_StoveTopStates::Type>& StoveTopStateResult, bool& Can Interact);
    void GetSaveFixContents(TArray<FAbiotic_InventoryItemSlotStruct>& CombinedInventory);
    void OnInventoriesLoadedFromSave(TArray<FSaveData_Inventories_Struct>& Data);
    void GetInventoriesToSave(TArray<class UAbiotic_InventoryComponent_C*>& Inventories);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void GetStoveCookingType(bool CookSpotHasLiquid, TEnumAsByte<E_CookingTypes::Type>& CurrentCookTypeForProxy);
    double GetBurnTime(TEnumAsByte<EFoodCookStates::Type> State, double TimeToBurnBaseline);
    void Update Powered Cook Spots();
    FVector GetStoveInteractPromptLocation(class USceneComponent* LookAtComponent);
    void ServerUpdateStoveFixState();
    void OnRep_HasBeenFixed();
    void CanFixStove(class AAbiotic_PlayerCharacter_C* InteractingCharacter, class UActorComponent* HitComponent, bool& CanFix);
    void GetCookingTime(class AAbioticCharacter*& Chef, const FAbiotic_InventoryItemSlotStruct& CookableSlotInfo, float& TimeToCook, double& TimeToBurn, double& CookingTimeLeft, double& BurningTimeLeft);
    void HideCookingPrompt(class USceneComponent* Component);
    void ShowCookingPrompt(class USceneComponent* Component);
    FAbiotic_InventoryChangeableDataStruct UpdateCookingData(FAbiotic_InventoryChangeableDataStruct& ItemChangeable, FAbiotic_InventoryChangeableDataStruct& PanChangeable);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void Set Remaining Cooking Time(int32 StoveTopSpot, FAbiotic_InventoryChangeableDataStruct& NewChangeableData);
    void Update Player Cooking Skill(int32 StoveTopIndex);
    void Remove Proxy Data from Pan Inventory(class AAbiotic_Character_ParentBP_C* InteractingCharacter, FAbiotic_InventoryItemSlotStruct StoveSpotData, int32 StoveTopIndex);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void Update Current Stove Spot State(const class ACookingProxy_BP_C* CookingProxyItem, int32 StoveSpotIndex, const FAbiotic_InventoryItemSlotStruct NewFoodItemSlot, FAbiotic_InventoryItemSlotStruct NewStoveItemSlot, class AAbiotic_PlayerCharacter_C* ChefCharacter, bool UpdateAllInventories, bool UpdatePanInventoryOnly, bool TurnOnStoveSpot, bool ConsumeChef?);
    void Check Item State in Hand(const FAbiotic_InventoryItemSlotStruct& CurrentheldItemSlotInfo, bool InteractB, TEnumAsByte<E_ItemStateInHand::Type>& CurrentState);
    void ServerBeginStoveInteraction(class AAbiotic_Character_ParentBP_C* Interacting Character, int32 StoveSpot, bool InteractB, bool CheckOnly, bool UseCustomFoodData, FAbiotic_InventoryItemSlotStruct CustomFoodData, bool& SuccessfulInteraction, bool& IngredientItemExists, bool& SoupPotFull, TEnumAsByte<E_StoveTopStates::Type>& StoveTopStateResult, bool& LiquidFillAvailable);
    FTransform GetStoveSlotTransform(int32 StoveSlot);
    void Get Item Proxies Data();
    void Get New Cooking Time(int32 Index, double OriginalTimeToCook, double& CookingProgress);
    void Is Liquid Allowed in Pot(int32 StoveSlot, TEnumAsByte<E_LiquidType::Type> LiquidType, bool& Allowed, bool& PotIsEmpty);
    void Is Food Equal to State(int32 StoveSlot, TEnumAsByte<EFoodCookStates::Type> State, bool& Equal);
    void Get Item On Stove(int32 Index, class ACookingProxy_BP_C*& ItemFound);
    void LoadCookingProxyFromWorldSave(const TArray<FSaveData_ItemProxy_Struct>& ItemProxies);
    void Choose Stove Interaction Prompt(FText& PromptDisplayTextA, FText& PromptDisplayTextB);
    void Check For Food State On The Stove(int32 StoveIndex, TEnumAsByte<EFoodCookStates::Type> CookingState, bool& State Is Achieved?);
    void FindCookwareInInventory(class AAbiotic_PlayerCharacter_C* InteractingCharacter, bool LookingForSoupContainer, bool& Success, class UAbiotic_InventoryComponent_C*& Inventory, int32& InventoryIndex, FAbiotic_InventoryItemSlotStruct& Item Found, FText& WarningMessage);
    void OnRep_StovesOn();
    void Server Remove Object from Stove Spot(int32 Index, class AAbiotic_Character_ParentBP_C* RecipientCharacter, TEnumAsByte<E_StoveTopStates::Type> StoveTopState);
    void Server Complete Stove Interaction(int32 StoveSpotIndex, class AAbiotic_Character_ParentBP_C* Character, TEnumAsByte<E_StoveTopStates::Type> StoveTopState, bool CookwarePresent, bool FoodPresent, bool InteractB, bool UseCustomFoodData, FAbiotic_InventoryItemSlotStruct CustomFoodSlotData);
    void CharacterHoldingCookableItem(class AAbiotic_Character_ParentBP_C* PlayerCharacter, bool& cookable, bool& IsCookware, bool& LiquidContainer, bool& AllowBaking, TEnumAsByte<E_LiquidType::Type>& CurrentLiquidType);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void UpdateCooking_FX(bool SkipItemFX);
    void Update Deployable Proxies(const TArray<FSaveData_ItemProxy_Struct>& Item Proxies);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void BndEvt__Stove_ParentBP_PanInventory_K2Node_ComponentBoundEvent_2_InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void TogglePowerFX();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void UpdateCookingPrompt(class UActorComponent* Component, bool Show);
    void StoveInventorySaveFix();
    void InteractWith_A_LocalFX(bool Hold);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void ExecuteUbergraph_Stove_ParentBP(int32 EntryPoint);
}; // Size: 0xA40

#endif
