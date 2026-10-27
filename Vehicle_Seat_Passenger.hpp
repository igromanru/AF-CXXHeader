#ifndef UE4SS_SDK_Vehicle_Seat_Passenger_HPP
#define UE4SS_SDK_Vehicle_Seat_Passenger_HPP

class AVehicle_Seat_Passenger_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0860 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x0868 (size: 0x8)
    bool DriverSeat;                                                                  // 0x0870 (size: 0x1)
    class UStaticMesh* SeatMesh;                                                      // 0x0878 (size: 0x8)
    bool ReplicationCollisionFixEnabled;                                              // 0x0880 (size: 0x1)
    bool AllowEnterWhileSwimming;                                                     // 0x0881 (size: 0x1)

    void IsSeatLocationBlocked(int32 SeatIndex, class AAbioticCharacter* Character, bool Debug);
    void CanLoseDurability();
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetItemNameText();
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void HasSitLocations(bool& IsSittable);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void UserConstructionScript();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Vehicle_Seat_Passenger(int32 EntryPoint);
}; // Size: 0x882

#endif
