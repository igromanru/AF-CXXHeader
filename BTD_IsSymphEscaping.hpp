#ifndef UE4SS_SDK_BTD_IsSymphEscaping_HPP
#define UE4SS_SDK_BTD_IsSymphEscaping_HPP

class UBTD_IsSymphEscaping_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ExecuteUbergraph_BTD_IsSymphEscaping(int32 EntryPoint);
}; // Size: 0xA8

#endif
