#ifndef UE4SS_SDK_BTD_Chance_HPP
#define UE4SS_SDK_BTD_Chance_HPP

class UBTD_Chance_C : public UBTDecorator_BlueprintBase
{
    double ChancePercentage;                                                          // 0x00A0 (size: 0x8)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xA8

#endif
