#ifndef UE4SS_SDK_ElevatorZone_HPP
#define UE4SS_SDK_ElevatorZone_HPP

class AElevatorZone_C : public ABuffZone_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    FVector LastLocation;                                                             // 0x0330 (size: 0x18)

    void ExtraRemoveCheck(class AAbiotic_Character_ParentBP_C* Character, bool& ShouldRemoveBuff);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_ElevatorZone(int32 EntryPoint);
}; // Size: 0x348

#endif
