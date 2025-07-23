#ifndef UE4SS_SDK_BTT_BoxyPickupItem_HPP
#define UE4SS_SDK_BTT_BoxyPickupItem_HPP

class UBTT_BoxyPickupItem_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    class UAnimMontage* PickupMontage;                                                // 0x00B0 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_BoxyPickupItem(int32 EntryPoint);
}; // Size: 0xB8

#endif
