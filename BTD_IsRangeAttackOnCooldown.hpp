#ifndef UE4SS_SDK_BTD_IsRangeAttackOnCooldown_HPP
#define UE4SS_SDK_BTD_IsRangeAttackOnCooldown_HPP

class UBTD_IsRangeAttackOnCooldown_C : public UBTDecorator_BlueprintBase
{
    bool SkipIfEnraged;                                                               // 0x00A0 (size: 0x1)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xA1

#endif
