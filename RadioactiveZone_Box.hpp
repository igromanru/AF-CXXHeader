#ifndef UE4SS_SDK_RadioactiveZone_Box_HPP
#define UE4SS_SDK_RadioactiveZone_Box_HPP

class ARadioactiveZone_Box_C : public ARadioactiveZone_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B0 (size: 0x8)
    class UBoxComponent* RadiationVolume;                                             // 0x02B8 (size: 0x8)
    FVector RadiationZoneSize;                                                        // 0x02C0 (size: 0x18)
    TEnumAsByte<ETimesOfDay::Type> ActivePeriod;                                      // 0x02D8 (size: 0x1)
    class ADayNightManager_C* DayNightManager;                                        // 0x02E0 (size: 0x8)

    class UPrimitiveComponent* GetOverlapVolume();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void UpdateStatus();
    void RunBeginPlayAgain();
    void ExecuteUbergraph_RadioactiveZone_Box(int32 EntryPoint);
}; // Size: 0x2E8

#endif
