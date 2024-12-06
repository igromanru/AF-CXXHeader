#ifndef UE4SS_SDK_BTT_Despawn_HPP
#define UE4SS_SDK_BTT_Despawn_HPP

class UBTT_Despawn_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_Despawn(int32 EntryPoint);
}; // Size: 0xB0

#endif
