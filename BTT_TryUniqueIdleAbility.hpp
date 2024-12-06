#ifndef UE4SS_SDK_BTT_TryUniqueIdleAbility_HPP
#define UE4SS_SDK_BTT_TryUniqueIdleAbility_HPP

class UBTT_TryUniqueIdleAbility_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void UniqueIdleReset(bool Success);
    void ExecuteUbergraph_BTT_TryUniqueIdleAbility(int32 EntryPoint);
}; // Size: 0xB0

#endif
