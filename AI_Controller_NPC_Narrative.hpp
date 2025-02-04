#ifndef UE4SS_SDK_AI_Controller_NPC_Narrative_HPP
#define UE4SS_SDK_AI_Controller_NPC_Narrative_HPP

class AAI_Controller_NPC_Narrative_C : public AAbioticAIController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    class UBehaviorTree* BehaviorTree;                                                // 0x03C8 (size: 0x8)
    double TimeBetweenPatrols;                                                        // 0x03D0 (size: 0x8)
    double TimeOfLastIdlePatrol;                                                      // 0x03D8 (size: 0x8)
    float TargetFaceDirectionYaw;                                                     // 0x03E0 (size: 0x4)

    void ReceiveBeginPlay();
    void TurnToFaceDirection(FVector Direction, bool AllowTurnDuringMontage);
    void TurnToFaceTick();
    void TurnToFaceActor(class AActor* LookAtTarget, bool AllowTurnDuringMontage);
    void ResetPatrolTime();
    void ExecuteUbergraph_AI_Controller_NPC_Narrative(int32 EntryPoint);
}; // Size: 0x3E4

#endif
