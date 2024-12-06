#ifndef UE4SS_SDK_BTD_IsAlertMode_HPP
#define UE4SS_SDK_BTD_IsAlertMode_HPP

class UBTD_IsAlertMode_C : public UBTDecorator_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A0 (size: 0x8)

    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ExecuteUbergraph_BTD_IsAlertMode(int32 EntryPoint);
}; // Size: 0xA8

#endif
