#ifndef UE4SS_SDK_Trigger_FacilityEarthquake_HPP
#define UE4SS_SDK_Trigger_FacilityEarthquake_HPP

class ATrigger_FacilityEarthquake_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)

    void OnTrigger();
    void ExecuteUbergraph_Trigger_FacilityEarthquake(int32 EntryPoint);
}; // Size: 0x350

#endif
