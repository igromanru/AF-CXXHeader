#ifndef UE4SS_SDK_BTT_ChooseTarget_HPP
#define UE4SS_SDK_BTT_ChooseTarget_HPP

class UBTT_ChooseTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ChooseTarget(int32 EntryPoint);
}; // Size: 0xB0

#endif
