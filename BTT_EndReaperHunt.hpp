#ifndef UE4SS_SDK_BTT_EndReaperHunt_HPP
#define UE4SS_SDK_BTT_EndReaperHunt_HPP

class UBTT_EndReaperHunt_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_EndReaperHunt(int32 EntryPoint);
}; // Size: 0xB0

#endif
