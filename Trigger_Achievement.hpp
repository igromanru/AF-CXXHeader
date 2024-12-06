#ifndef UE4SS_SDK_Trigger_Achievement_HPP
#define UE4SS_SDK_Trigger_Achievement_HPP

class ATrigger_Achievement_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FAchievementRowHandle Achievement;                                                // 0x0348 (size: 0x20)

    void ProcessTriggerOverlap(class AActor* Actor, bool& Success);
}; // Size: 0x368

#endif
