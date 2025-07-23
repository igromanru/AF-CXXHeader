#ifndef UE4SS_SDK_Trigger_TinyTutorialHint_HPP
#define UE4SS_SDK_Trigger_TinyTutorialHint_HPP

class ATrigger_TinyTutorialHint_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    bool RemoveExistingTip;                                                           // 0x0350 (size: 0x1)
    bool AutoRemoveHintAfterTimer;                                                    // 0x0351 (size: 0x1)
    FDataTableRowHandle TutorialHintRow;                                              // 0x0358 (size: 0x10)
    TArray<class AActor*> ObjectToOutlines;                                           // 0x0368 (size: 0x10)

    void ResetTriggerState();
    void OnTrigger();
    void ExecuteUbergraph_Trigger_TinyTutorialHint(int32 EntryPoint);
}; // Size: 0x378

#endif
