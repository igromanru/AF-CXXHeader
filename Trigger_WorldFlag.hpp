#ifndef UE4SS_SDK_Trigger_WorldFlag_HPP
#define UE4SS_SDK_Trigger_WorldFlag_HPP

class ATrigger_WorldFlag_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    FWorldFlagRowHandle WorldFlagToActivate;                                          // 0x0360 (size: 0x10)

    void OnTrigger();
    void OnLoadedFromSave();
    void ExecuteUbergraph_Trigger_WorldFlag(int32 EntryPoint);
}; // Size: 0x370

#endif
