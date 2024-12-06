#ifndef UE4SS_SDK_Trigger_WorldFlag_HPP
#define UE4SS_SDK_Trigger_WorldFlag_HPP

class ATrigger_WorldFlag_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    FWorldFlagRowHandle WorldFlagToActivate;                                          // 0x0350 (size: 0x20)

    void OnTrigger();
    void ExecuteUbergraph_Trigger_WorldFlag(int32 EntryPoint);
}; // Size: 0x370

#endif
