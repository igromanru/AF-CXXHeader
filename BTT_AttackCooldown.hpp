#ifndef UE4SS_SDK_BTT_AttackCooldown_HPP
#define UE4SS_SDK_BTT_AttackCooldown_HPP

class UBTT_AttackCooldown_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    double Distance;                                                                  // 0x00B0 (size: 0x8)
    int32 PlayersA;                                                                   // 0x00B8 (size: 0x4)
    int32 PlayersB;                                                                   // 0x00BC (size: 0x4)
    double DelayA;                                                                    // 0x00C0 (size: 0x8)
    double DelayB;                                                                    // 0x00C8 (size: 0x8)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_AttackCooldown(int32 EntryPoint);
}; // Size: 0xD0

#endif
