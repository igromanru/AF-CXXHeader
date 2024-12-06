#ifndef UE4SS_SDK_Deployed_Furniture_Bed_ParentBP_HPP
#define UE4SS_SDK_Deployed_Furniture_Bed_ParentBP_HPP

class ADeployed_Furniture_Bed_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class USceneComponent* SleepSocket;                                               // 0x0928 (size: 0x8)
    class USceneComponent* TeleportLocation3;                                         // 0x0930 (size: 0x8)
    class USceneComponent* TeleportLocation2;                                         // 0x0938 (size: 0x8)
    class USceneComponent* TeleportLocation;                                          // 0x0940 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* CharacterSleepingInBed;                      // 0x0948 (size: 0x8)
    int32 BedComfortRating;                                                           // 0x0950 (size: 0x4)
    bool CanBeUsedAsSpawn;                                                            // 0x0954 (size: 0x1)
    FString BedOwnerID;                                                               // 0x0958 (size: 0x10)
    FString BedOwnerLastPlayerName;                                                   // 0x0968 (size: 0x10)
    bool Local_JustClaimedBed;                                                        // 0x0978 (size: 0x1)
    FDeployed_Furniture_Bed_ParentBP_COccupantSleepingStateChange OccupantSleepingStateChange; // 0x0980 (size: 0x10)
    void OccupantSleepingStateChange(bool Sleeping);

    bool CanKickPlayerOutOfBed();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetStoredString(FString& String);
    void Sufficient Sleeping Space?(class AAbiotic_PlayerCharacter_C* InteractingCharacter, bool& HasEnoughSpace);
    FText GetItemNameText();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void SetNewBedOwner(class AAbiotic_PlayerState_C* PlayerState, bool RevokeOwnership);
    void CheckForBedOwnership(class AAbiotic_PlayerState_C* PlayerState, bool& OwnedByAnyPlayer, bool& OwnedByThisPlayer);
    void GetItemDataDeprecated(FAbiotic_InventoryItemStruct& ItemData);
    void CheckIfEnemiesAreNearby(double WithinRange, TEnumAsByte<E_Factions::Type> FriendlyFaction, bool& NearbyEnemies);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ReceiveDestroyed();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DeliverString(FString String, bool FromSave);
    void ExecuteUbergraph_Deployed_Furniture_Bed_ParentBP(int32 EntryPoint);
    void OccupantSleepingStateChange__DelegateSignature(bool Sleeping);
}; // Size: 0x990

#endif
