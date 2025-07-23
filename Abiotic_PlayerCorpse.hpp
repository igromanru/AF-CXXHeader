#ifndef UE4SS_SDK_Abiotic_PlayerCorpse_HPP
#define UE4SS_SDK_Abiotic_PlayerCorpse_HPP

class AAbiotic_PlayerCorpse_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UAbiotic_InventoryComponent_C* FormerEquipSlotInventory;                    // 0x0928 (size: 0x8)
    class UAbiotic_InventoryComponent_C* FormerHotbarInventory;                       // 0x0930 (size: 0x8)
    class UAbiotic_InventoryComponent_C* FormerBackpackInventory;                     // 0x0938 (size: 0x8)
    FString playerName;                                                               // 0x0940 (size: 0x10)
    FString OwningPlayerID;                                                           // 0x0950 (size: 0x10)
    bool BodyFadingOut;                                                               // 0x0960 (size: 0x1)
    double CorpseFadeTime;                                                            // 0x0968 (size: 0x8)
    TArray<class UMaterialInstanceDynamic*> DynMatInstances;                          // 0x0970 (size: 0x10)
    bool Looted;                                                                      // 0x0980 (size: 0x1)
    FText CorpseDisplayText;                                                          // 0x0988 (size: 0x10)
    class UHumanCustomizationComponent_C* DeadPlayerCustomizationComponent;           // 0x0998 (size: 0x8)
    bool WasPlacedAtWorldStart;                                                       // 0x09A0 (size: 0x1)

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
    void OnRep_PlayerName();
    void OnFailure_4A7AEC034EEBD80794300E99EB7F2ED1(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_4A7AEC034EEBD80794300E99EB7F2ED1(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void ReceiveBeginPlay();
    void DeliverString(FString String, bool FromSave);
    void CollisionFix();
    void SetPositionTryAgain();
    void Set Player Name Text();
    void OnLoadedFromSave(double NewLifespan);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_Abiotic_PlayerCorpse(int32 EntryPoint);
}; // Size: 0x9A1

#endif
