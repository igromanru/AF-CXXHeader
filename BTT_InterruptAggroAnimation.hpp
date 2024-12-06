#ifndef UE4SS_SDK_BTT_InterruptAggroAnimation_HPP
#define UE4SS_SDK_BTT_InterruptAggroAnimation_HPP

class UBTT_InterruptAggroAnimation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_InterruptAggroAnimation(int32 EntryPoint);
}; // Size: 0xB0

#endif
