#ifndef UE4SS_SDK_Deployed_Furniture_Bed_ParentBP_HPP
#define UE4SS_SDK_Deployed_Furniture_Bed_ParentBP_HPP

class ADeployed_Furniture_Bed_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class USceneComponent* SleepSocket;                                               // 0x0858 (size: 0x8)
    class USceneComponent* TeleportLocation3;                                         // 0x0860 (size: 0x8)
    class USceneComponent* TeleportLocation2;                                         // 0x0868 (size: 0x8)
    class USceneComponent* TeleportLocation;                                          // 0x0870 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* CharacterSleepingInBed;                      // 0x0878 (size: 0x8)
    int32 BedComfortRating;                                                           // 0x0880 (size: 0x4)
    bool CanBeUsedAsSpawn;                                                            // 0x0884 (size: 0x1)
    FString BedOwnerID;                                                               // 0x0888 (size: 0x10)
    FString BedOwnerLastPlayerName;                                                   // 0x0898 (size: 0x10)
    bool Local_JustClaimedBed;                                                        // 0x08A8 (size: 0x1)
    FDeployed_Furniture_Bed_ParentBP_COccupantSleepingStateChange OccupantSleepingStateChange; // 0x08B0 (size: 0x10)
    void OccupantSleepingStateChange(bool Sleeping);
    FString Local_BedOwnerLastPlayerName;                                             // 0x08C0 (size: 0x10)
    class AAbiotic_PlayerState_C* BedOwnerPlayerState;                                // 0x08D0 (size: 0x8)

    void OnRep_BedOwnerPlayerState();
    void OnRep_BedOwnerLastPlayerName();
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
    void OnFailure_FF2F459245DCD45E69BF3191FBA45A4D(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_FF2F459245DCD45E69BF3191FBA45A4D(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ReceiveDestroyed();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DeliverString(FString String, bool FromSave);
    void LocalBedOwnerLastPlayerName();
    void ExecuteUbergraph_Deployed_Furniture_Bed_ParentBP(int32 EntryPoint);
    void OccupantSleepingStateChange__DelegateSignature(bool Sleeping);
}; // Size: 0x8D8

#endif
