#ifndef UE4SS_SDK_BTT_DoMeleeAttack_HPP
#define UE4SS_SDK_BTT_DoMeleeAttack_HPP

class UBTT_DoMeleeAttack_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    bool OnlyIncrementOnMiss;                                                         // 0x00B0 (size: 0x1)
    bool Delay;                                                                       // 0x00B1 (size: 0x1)
    bool OnlyIncrementOnHit;                                                          // 0x00B2 (size: 0x1)
    class ANPC_Base_ParentBP_C* NPC;                                                  // 0x00B8 (size: 0x8)
    bool HitTargets;                                                                  // 0x00C0 (size: 0x1)

    double GetTargetDotProduct(class AAIController* OwnerController, class APawn* ControlledPawn);
    bool DidHitAnyTargets?(TArray<class AActor*>& Actors);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CombatReset_Event(bool Success);
    void ExecuteUbergraph_BTT_DoMeleeAttack(int32 EntryPoint);
}; // Size: 0xC1

#endif
