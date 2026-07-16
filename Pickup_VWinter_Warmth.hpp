#ifndef UE4SS_SDK_Pickup_VWinter_Warmth_HPP
#define UE4SS_SDK_Pickup_VWinter_Warmth_HPP

class APickup_VWinter_Warmth_C : public AArcadePickup_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0520 (size: 0x8)
    float ScaleUp_NewTrack_0_58A895F44B146DE790F532A20D6B72B8;                        // 0x0528 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ScaleUp__Direction_58A895F44B146DE790F532A20D6B72B8; // 0x052C (size: 0x1)
    class UTimelineComponent* ScaleUp;                                                // 0x0530 (size: 0x8)

    void PlaySoundOnDestroy();
    void ScaleUp__FinishedFunc();
    void ScaleUp__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Pickup_VWinter_Warmth(int32 EntryPoint);
}; // Size: 0x538

#endif
