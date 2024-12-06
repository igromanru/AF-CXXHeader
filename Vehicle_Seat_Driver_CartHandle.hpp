#ifndef UE4SS_SDK_Vehicle_Seat_Driver_CartHandle_HPP
#define UE4SS_SDK_Vehicle_Seat_Driver_CartHandle_HPP

class AVehicle_Seat_Driver_CartHandle_C : public AVehicle_Seat_Driver_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0948 (size: 0x8)

    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_Vehicle_Seat_Driver_CartHandle(int32 EntryPoint);
}; // Size: 0x950

#endif
