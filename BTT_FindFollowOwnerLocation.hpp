#ifndef UE4SS_SDK_BTT_FindFollowOwnerLocation_HPP
#define UE4SS_SDK_BTT_FindFollowOwnerLocation_HPP

class UBTT_FindFollowOwnerLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    double AveragePatrolDistance;                                                     // 0x00B0 (size: 0x8)
    FVector Random Location;                                                          // 0x00B8 (size: 0x18)
    double MaxDistance;                                                               // 0x00D0 (size: 0x8)
    FBlackboardName Key;                                                              // 0x00D8 (size: 0x8)

    void FindPatrolLocation(class AAIController* Controller, class APawn* Pawn, bool& Success);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_FindFollowOwnerLocation(int32 EntryPoint);
}; // Size: 0xE0

#endif
