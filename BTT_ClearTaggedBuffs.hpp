#ifndef UE4SS_SDK_BTT_ClearTaggedBuffs_HPP
#define UE4SS_SDK_BTT_ClearTaggedBuffs_HPP

class UBTT_ClearTaggedBuffs_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FGameplayTagQuery TagQuery;                                                       // 0x00B0 (size: 0x48)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_ClearTaggedBuffs(int32 EntryPoint);
}; // Size: 0xF8

#endif
