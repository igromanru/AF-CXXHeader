#ifndef UE4SS_SDK_BTS_MovingPosition_HPP
#define UE4SS_SDK_BTS_MovingPosition_HPP

class UBTS_MovingPosition_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)

    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_MovingPosition(int32 EntryPoint);
}; // Size: 0xA0

#endif
