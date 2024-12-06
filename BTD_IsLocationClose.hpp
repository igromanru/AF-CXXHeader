#ifndef UE4SS_SDK_BTD_IsLocationClose_HPP
#define UE4SS_SDK_BTD_IsLocationClose_HPP

class UBTD_IsLocationClose_C : public UBTDecorator_BlueprintBase
{
    FBlackboardName VectorKey;                                                        // 0x00A0 (size: 0x8)
    double MaxPathLength;                                                             // 0x00A8 (size: 0x8)
    bool OverrideForAssault;                                                          // 0x00B0 (size: 0x1)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xB1

#endif
