#ifndef UE4SS_SDK_BTT_TurnToFaceTarget_HPP
#define UE4SS_SDK_BTT_TurnToFaceTarget_HPP

class UBTT_TurnToFaceTarget_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool WaitForFinish;                                                               // 0x00B0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_TurnToFaceTarget(int32 EntryPoint);
}; // Size: 0xB1

#endif
