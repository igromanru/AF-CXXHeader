#ifndef UE4SS_SDK_BTS_InterruptMovementIfEnemiesClose_HPP
#define UE4SS_SDK_BTS_InterruptMovementIfEnemiesClose_HPP

class UBTS_InterruptMovementIfEnemiesClose_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    double DetectionDistance;                                                         // 0x00A0 (size: 0x8)
    double MoveDirectionDotTargetLocation;                                            // 0x00A8 (size: 0x8)
    bool RecheckBestTargetOnFirstFail;                                                // 0x00B0 (size: 0x1)
    class AActor* TargetActor;                                                        // 0x00B8 (size: 0x8)
    class AAbiotic_AI_Controller_ParentBP_C* Controller;                              // 0x00C0 (size: 0x8)
    class ANPC_Base_ParentBP_C* MyPawn;                                               // 0x00C8 (size: 0x8)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void CheckBestTarget();
    void ExecuteUbergraph_BTS_InterruptMovementIfEnemiesClose(int32 EntryPoint);
}; // Size: 0xD0

#endif
