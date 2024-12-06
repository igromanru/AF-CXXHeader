#ifndef UE4SS_SDK_BTT_RevertBackToTarget_HPP
#define UE4SS_SDK_BTT_RevertBackToTarget_HPP

class UBTT_RevertBackToTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_RevertBackToTarget(int32 EntryPoint);
}; // Size: 0xB0

#endif
