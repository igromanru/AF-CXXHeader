#ifndef UE4SS_SDK_Trigger_TinyTutorialHint_HPP
#define UE4SS_SDK_Trigger_TinyTutorialHint_HPP

class ATrigger_TinyTutorialHint_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool RemoveExistingTip;                                                           // 0x0370 (size: 0x1)
    bool AutoRemoveHintAfterTimer;                                                    // 0x0371 (size: 0x1)
    FDataTableRowHandle TutorialHintRow;                                              // 0x0378 (size: 0x10)
    TArray<class AActor*> ObjectToOutlines;                                           // 0x0388 (size: 0x10)

    void ResetTriggerState();
    void OnTrigger();
    void ExecuteUbergraph_Trigger_TinyTutorialHint(int32 EntryPoint);
}; // Size: 0x398

#endif
