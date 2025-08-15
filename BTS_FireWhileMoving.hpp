#ifndef UE4SS_SDK_BTS_FireWhileMoving_HPP
#define UE4SS_SDK_BTS_FireWhileMoving_HPP

class UBTS_FireWhileMoving_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    bool AbortIfRequireReload;                                                        // 0x00A0 (size: 0x1)
    bool BlockOnCrouch;                                                               // 0x00A1 (size: 0x1)
    bool SkipSightCheck;                                                              // 0x00A2 (size: 0x1)
    bool CouldSeeTarget;                                                              // 0x00A3 (size: 0x1)
    class AAIController* Controller;                                                  // 0x00A8 (size: 0x8)
    class ANPC_Base_ParentBP_C* NPC;                                                  // 0x00B0 (size: 0x8)

    double GetTargetDotProduct(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_FireWhileMoving(int32 EntryPoint);
}; // Size: 0xB8

#endif
