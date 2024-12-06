#ifndef UE4SS_SDK_BTT_PerformDodge_HPP
#define UE4SS_SDK_BTT_PerformDodge_HPP

class UBTT_PerformDodge_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    float DodgeDuration;                                                              // 0x00B0 (size: 0x4)
    bool TurnToFace;                                                                  // 0x00B4 (size: 0x1)
    bool RandomDirection;                                                             // 0x00B5 (size: 0x1)
    bool DelayWithTurn;                                                               // 0x00B6 (size: 0x1)
    bool ForceBackwards;                                                              // 0x00B7 (size: 0x1)
    bool SkipEndTurn;                                                                 // 0x00B8 (size: 0x1)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_PerformDodge(int32 EntryPoint);
}; // Size: 0xB9

#endif
