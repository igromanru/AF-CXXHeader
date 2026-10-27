#ifndef UE4SS_SDK_Trigger_TinyTutorialHint_HPP
#define UE4SS_SDK_Trigger_TinyTutorialHint_HPP

class ATrigger_TinyTutorialHint_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    bool RemoveExistingTip;                                                           // 0x0360 (size: 0x1)
    bool AutoRemoveHintAfterTimer;                                                    // 0x0361 (size: 0x1)
    FTutorialHintRowHandle TutorialHintRow;                                           // 0x0368 (size: 0x10)
    TArray<AActor*> ObjectToOutlines;                                                 // 0x0378 (size: 0x10)

    void ResetTriggerState();
    void OnTrigger();
    void ExecuteUbergraph_Trigger_TinyTutorialHint(int32 EntryPoint);
}; // Size: 0x388

#endif
