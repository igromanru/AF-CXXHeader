#ifndef UE4SS_SDK_Abiotic_PlayerCorpse_HPP
#define UE4SS_SDK_Abiotic_PlayerCorpse_HPP

class AAbiotic_PlayerCorpse_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F8 (size: 0x8)
    class UAbiotic_InventoryComponent_C* FormerEquipSlotInventory;                    // 0x0A00 (size: 0x8)
    class UAbiotic_InventoryComponent_C* FormerHotbarInventory;                       // 0x0A08 (size: 0x8)
    class UAbiotic_InventoryComponent_C* FormerBackpackInventory;                     // 0x0A10 (size: 0x8)
    FString playerName;                                                               // 0x0A18 (size: 0x10)
    FString OwningPlayerID;                                                           // 0x0A28 (size: 0x10)
    bool BodyFadingOut;                                                               // 0x0A38 (size: 0x1)
    double CorpseFadeTime;                                                            // 0x0A40 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynMatInstances;                          // 0x0A48 (size: 0x10)
    bool Looted;                                                                      // 0x0A58 (size: 0x1)
    FText CorpseDisplayText;                                                          // 0x0A60 (size: 0x10)
    class UHumanCustomizationComponent_C* DeadPlayerCustomizationComponent;           // 0x0A70 (size: 0x8)
    bool WasPlacedAtWorldStart;                                                       // 0x0A78 (size: 0x1)

    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Local_TrySendMessageToOwner();
    void SetPositionToWorldStart(bool& Success);
    void OnRep_DeadPlayerCustomizationComponent();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetStoredString(FString& String);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void RequiresToolToDismantle(bool& Tool Required);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void OnRep_OwningPlayerID();
    void ToggleWaypointToLocalOwningPlayer();
    void OnRep_Looted();
    void TryTransferItemsToPlayerCharacter(class AAbiotic_PlayerCharacter_C* PlayerCharacter, TArray<FAbiotic_InventoryItemSlotStruct>& ItemsLeftover);
    void Set Player Name Text();
    void OnRep_PlayerName();
    void ReceiveBeginPlay();
    void DeliverString(FString String, bool FromSave);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void CollisionFix();
    void SetPositionTryAgain();
    void ExecuteUbergraph_Abiotic_PlayerCorpse(int32 EntryPoint);
}; // Size: 0xA79

#endif
