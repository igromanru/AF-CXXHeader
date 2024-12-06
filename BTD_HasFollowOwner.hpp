#ifndef UE4SS_SDK_BTD_HasFollowOwner_HPP
#define UE4SS_SDK_BTD_HasFollowOwner_HPP

class UBTD_HasFollowOwner_C : public UBTDecorator_BlueprintBase
{

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xA0

#endif
