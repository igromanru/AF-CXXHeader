#ifndef UE4SS_SDK_BTT_PlayIdleAnimOverride_HPP
#define UE4SS_SDK_BTT_PlayIdleAnimOverride_HPP

class UBTT_PlayIdleAnimOverride_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FVector2D CrouchTime;                                                             // 0x00B0 (size: 0x10)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_PlayIdleAnimOverride(int32 EntryPoint);
}; // Size: 0xC0

#endif
