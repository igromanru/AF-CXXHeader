#ifndef UE4SS_SDK_Trigger_NarrativeNPCUpdate_HPP
#define UE4SS_SDK_Trigger_NarrativeNPCUpdate_HPP

class ATrigger_NarrativeNPCUpdate_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class ANarrativeNPC_ParentBP_C* NPCToUpdate;                                      // 0x0350 (size: 0x8)
    bool KillNPC?;                                                                    // 0x0358 (size: 0x1)
    bool DeleteNPC?;                                                                  // 0x0359 (size: 0x1)
    class UAnimSequence* NewIdleAnimation;                                            // 0x0360 (size: 0x8)
    double UpdateDelay;                                                               // 0x0368 (size: 0x8)
    TEnumAsByte<E_NarrativeNPCStates::Type> NewNPCState;                              // 0x0370 (size: 0x1)
    bool ChangeNPCBeckonInterval;                                                     // 0x0371 (size: 0x1)
    double New_NPCBeckonInterval;                                                     // 0x0378 (size: 0x8)
    FDataTableRowHandle New_NPCConversationRow;                                       // 0x0380 (size: 0x10)

    void OnTrigger();
    void ExecuteUbergraph_Trigger_NarrativeNPCUpdate(int32 EntryPoint);
}; // Size: 0x390

#endif
