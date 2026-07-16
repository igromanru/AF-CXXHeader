#ifndef UE4SS_SDK_BTT_TryConsumeOfferedItem_HPP
#define UE4SS_SDK_BTT_TryConsumeOfferedItem_HPP

class UBTT_TryConsumeOfferedItem_C : public UBTTask_BlueprintBase
{
    double MaxRange;                                                                  // 0x00A8 (size: 0x8)
    double PlayerDirectionTowardDot;                                                  // 0x00B0 (size: 0x8)
    FBlackboardName Key;                                                              // 0x00B8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xC0

#endif
