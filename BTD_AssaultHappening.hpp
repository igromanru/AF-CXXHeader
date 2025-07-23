#ifndef UE4SS_SDK_BTD_AssaultHappening_HPP
#define UE4SS_SDK_BTD_AssaultHappening_HPP

class UBTD_AssaultHappening_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)
    class AAbiotic_AIDirector_C* AIDIrector;                                          // 0x00A8 (size: 0x8)
    double OptionalDistanceFromBench;                                                 // 0x00B0 (size: 0x8)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTD_AssaultHappening(int32 EntryPoint);
}; // Size: 0xB8

#endif
