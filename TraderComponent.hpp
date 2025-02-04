#ifndef UE4SS_SDK_TraderComponent_HPP
#define UE4SS_SDK_TraderComponent_HPP

class UTraderComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TSoftClassPtr<UUserWidget> TradeWidget;                                           // 0x00B0 (size: 0x28)
    FDataTableRowHandle TraderRow;                                                    // 0x00D8 (size: 0x10)
    FText TradeText;                                                                  // 0x00E8 (size: 0x10)
    TArray<class AAbiotic_PlayerCharacter_C*> TradingPlayers;                         // 0x00F8 (size: 0x10)
    FTimerHandle FallbackTimer;                                                       // 0x0108 (size: 0x8)
    double MaxTradeDistance;                                                          // 0x0110 (size: 0x8)
    FTraderComponent_CStartTrading StartTrading;                                      // 0x0118 (size: 0x10)
    void StartTrading(class AAbiotic_PlayerCharacter_C* Player);
    FDataTableRowHandle TradeItemsRow;                                                // 0x0128 (size: 0x10)
    TArray<int32> TradeStock;                                                         // 0x0138 (size: 0x10)
    bool AllowTradeWithoutIntro;                                                      // 0x0148 (size: 0x1)
    class AContainer_LootSpillBag_C* CurrentLootSpillBag;                             // 0x0150 (size: 0x8)
    bool HasPurchasedSomethingLocally;                                                // 0x0158 (size: 0x1)
    TArray<FNPCConversationLine> Lines;                                               // 0x0160 (size: 0x10)

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
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    bool IsRadioactive();
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void CanUseSharedInteraction(bool& Can Use);
    void Local_CheckForUIRefresh();
    void OnRep_TradeStock();
    bool Server_MakePurchase(int32 TraderItemIndex);
    bool Server_SetTradeStockData(TArray<int32>& NewTradeStock);
    void GetTradeData(FDataTableRowHandle& TradeItemsRow, TArray<int32>& TradeStock);
    void GenerateNewInventory();
    void SetTraderRow(FDataTableRowHandle NewTraderRow);
    void CheckPlayerFallback();
    void PlayerDespawnedWhileTrading(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    bool AreAnyPlayersTrading();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_B_LocalFX(bool Hold);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DeliverString(FString String, bool FromSave);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void DeliverInt(bool FromSave, const int32 New Int);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void Server_StartTrading(class AAbiotic_PlayerCharacter_C* Player);
    void Server_StopTrading(const class AAbiotic_PlayerCharacter_C*& Player);
    void ReceiveBeginPlay();
    void Server_SetTraderStock(TArray<int32>& NewTradeStock);
    void Local_OpenTraderWindow();
    void Server_PerformItemPurchase(int32 TradeIndex, class AAbiotic_PlayerCharacter_C* CustomerCharacter);
    void Local_CloseTraderWindow();
    void Server_TrySayPurchaseLine(bool Positive);
    void ExecuteUbergraph_TraderComponent(int32 EntryPoint);
    void StartTrading__DelegateSignature(class AAbiotic_PlayerCharacter_C* Player);
}; // Size: 0x170

#endif
