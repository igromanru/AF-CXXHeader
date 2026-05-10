#ifndef UE4SS_SDK_BTD_IsNPCSitting_HPP
#define UE4SS_SDK_BTD_IsNPCSitting_HPP

class UBTD_IsNPCSitting_C : public UBTDecorator_BlueprintBase
{

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xA0

#endif
