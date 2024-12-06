#ifndef UE4SS_SDK_BTT_FaceAwarenessLocation_HPP
#define UE4SS_SDK_BTT_FaceAwarenessLocation_HPP

class UBTT_FaceAwarenessLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool WaitForFinish;                                                               // 0x00B0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_FaceAwarenessLocation(int32 EntryPoint);
}; // Size: 0xB1

#endif
