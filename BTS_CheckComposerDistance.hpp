#ifndef UE4SS_SDK_BTS_CheckComposerDistance_HPP
#define UE4SS_SDK_BTS_CheckComposerDistance_HPP

class UBTS_CheckComposerDistance_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    double Distance;                                                                  // 0x00A0 (size: 0x8)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_CheckComposerDistance(int32 EntryPoint);
}; // Size: 0xA8

#endif
