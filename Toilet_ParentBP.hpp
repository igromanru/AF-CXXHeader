#ifndef UE4SS_SDK_Toilet_ParentBP_HPP
#define UE4SS_SDK_Toilet_ParentBP_HPP

class AToilet_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UArrowComponent* ExitFailsafe;                                              // 0x0858 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x0860 (size: 0x8)
    class ASimpleDoor_ParentBP_C* StallDoor;                                          // 0x0868 (size: 0x8)
    bool NoFlushSound;                                                                // 0x0870 (size: 0x1)

    FTransform GetExitFailsafeLocation();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void ReceiveBeginPlay();
    void ToggleStallDoor(int32 SeatIndex, bool Sitting);
    void OccupantDestroyed(int32 SeatIndex);
    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void Broadcast_FlushToilet();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_Toilet_ParentBP(int32 EntryPoint);
}; // Size: 0x871

#endif
