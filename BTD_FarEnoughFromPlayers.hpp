#ifndef UE4SS_SDK_BTD_FarEnoughFromPlayers_HPP
#define UE4SS_SDK_BTD_FarEnoughFromPlayers_HPP

class UBTD_FarEnoughFromPlayers_C : public UBTDecorator_BlueprintBase
{
    double Distance;                                                                  // 0x00A0 (size: 0x8)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xA8

#endif
