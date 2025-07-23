#ifndef UE4SS_SDK_Container_TraderStorage_HPP
#define UE4SS_SDK_Container_TraderStorage_HPP

class AContainer_TraderStorage_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0928 (size: 0x8)
    float Timeline_NewTrack_0_BFA6EDC2495544D54B3485B86A24D911;                       // 0x0930 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_BFA6EDC2495544D54B3485B86A24D911; // 0x0934 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0938 (size: 0x8)
    FRotator A;                                                                       // 0x0940 (size: 0x18)
    FRotator B;                                                                       // 0x0958 (size: 0x18)

    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Container_TraderStorage(int32 EntryPoint);
}; // Size: 0x970

#endif
