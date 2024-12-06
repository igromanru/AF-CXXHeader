#ifndef UE4SS_SDK_Trigger_UnlockSimpleDoor_HPP
#define UE4SS_SDK_Trigger_UnlockSimpleDoor_HPP

class ATrigger_UnlockSimpleDoor_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    TArray<class ASimpleDoor_ParentBP_C*> DoorToUnlock;                               // 0x0350 (size: 0x10)

    void OnTrigger();
    void ExecuteUbergraph_Trigger_UnlockSimpleDoor(int32 EntryPoint);
}; // Size: 0x360

#endif
