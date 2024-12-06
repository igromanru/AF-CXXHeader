#ifndef UE4SS_SDK_BTT_ChooseNextPatrolPathIndex_HPP
#define UE4SS_SDK_BTT_ChooseNextPatrolPathIndex_HPP

class UBTT_ChooseNextPatrolPathIndex_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool IsPatrolLoop;                                                                // 0x00B0 (size: 0x1)

    void IncrementPatrolIndex(class AAIController* Controller);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ChooseNextPatrolPathIndex(int32 EntryPoint);
}; // Size: 0xB1

#endif
