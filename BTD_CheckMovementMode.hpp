#ifndef UE4SS_SDK_BTD_CheckMovementMode_HPP
#define UE4SS_SDK_BTD_CheckMovementMode_HPP

class UBTD_CheckMovementMode_C : public UBTDecorator_BlueprintBase
{
    TEnumAsByte<EMovementMode> Mode;                                                  // 0x00A0 (size: 0x1)
    FBlackboardKeySelector CheckTarget;                                               // 0x00A8 (size: 0x28)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xD0

#endif
