#ifndef UE4SS_SDK_BTD_IsLocationFiltered_HPP
#define UE4SS_SDK_BTD_IsLocationFiltered_HPP

class UBTD_IsLocationFiltered_C : public UBTDecorator_BlueprintBase
{
    FBlackboardKeySelector LocationKey;                                               // 0x00A0 (size: 0x28)
    TSubclassOf<class UNavigationQueryFilter> Filter;                                 // 0x00C8 (size: 0x8)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xD0

#endif
