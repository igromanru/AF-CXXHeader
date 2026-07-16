#ifndef UE4SS_SDK_BTD_IsPhysicsVolumeAtNavMeshLocation_HPP
#define UE4SS_SDK_BTD_IsPhysicsVolumeAtNavMeshLocation_HPP

class UBTD_IsPhysicsVolumeAtNavMeshLocation_C : public UBTDecorator_BlueprintBase
{
    bool WaterOnly;                                                                   // 0x00A0 (size: 0x1)
    FBlackboardKeySelector LocationKey;                                               // 0x00A8 (size: 0x28)
    float CheckRadius;                                                                // 0x00D0 (size: 0x4)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
}; // Size: 0xD4

#endif
