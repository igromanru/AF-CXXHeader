#ifndef UE4SS_SDK_BTT_FaceRandomDirection_HPP
#define UE4SS_SDK_BTT_FaceRandomDirection_HPP

class UBTT_FaceRandomDirection_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    double MaxAngle;                                                                  // 0x00B0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_FaceRandomDirection(int32 EntryPoint);
}; // Size: 0xB8

#endif
