#ifndef UE4SS_SDK_BTT_DoCombatAbility_HPP
#define UE4SS_SDK_BTT_DoCombatAbility_HPP

class UBTT_DoCombatAbility_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TEnumAsByte<E_NPC_AbilityTypes::Type> Ability;                                    // 0x00B0 (size: 0x1)
    bool TurnTowardsTarget;                                                           // 0x00B1 (size: 0x1)
    TEnumAsByte<E_DialogLines::Type> DialogLine;                                      // 0x00B2 (size: 0x1)
    class ANPC_Base_ParentBP_C* NPCPawn;                                              // 0x00B8 (size: 0x8)
    bool UpdateLastKnownLocation;                                                     // 0x00C0 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void CombatReset_Event(bool Success);
    void ExecuteUbergraph_BTT_DoCombatAbility(int32 EntryPoint);
}; // Size: 0xC1

#endif
