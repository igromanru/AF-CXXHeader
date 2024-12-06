#ifndef UE4SS_SDK_BTT_EatCorpse_HPP
#define UE4SS_SDK_BTT_EatCorpse_HPP

class UBTT_EatCorpse_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTT_EatCorpse(int32 EntryPoint);
}; // Size: 0xB0

#endif
