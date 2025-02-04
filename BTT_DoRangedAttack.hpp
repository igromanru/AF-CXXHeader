#ifndef UE4SS_SDK_BTT_DoRangedAttack_HPP
#define UE4SS_SDK_BTT_DoRangedAttack_HPP

class UBTT_DoRangedAttack_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool TurnBeforeFiring;                                                            // 0x00B0 (size: 0x1)
    bool ResetCounter;                                                                // 0x00B1 (size: 0x1)
    bool SkipCooldown;                                                                // 0x00B2 (size: 0x1)

    double GetTargetDotProduct(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CombatReset_Event(bool Success);
    void ExecuteUbergraph_BTT_DoRangedAttack(int32 EntryPoint);
}; // Size: 0xB3

#endif
