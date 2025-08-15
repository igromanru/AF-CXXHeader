#ifndef UE4SS_SDK_BTT_FindNarrativeWanderLocation_HPP
#define UE4SS_SDK_BTT_FindNarrativeWanderLocation_HPP

class UBTT_FindNarrativeWanderLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    double AveragePatrolDistance;                                                     // 0x00B0 (size: 0x8)
    FVector Random Location;                                                          // 0x00B8 (size: 0x18)

    void FindPatrolLocation(class AAIController* Controller, class APawn* Pawn, bool& Success);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_FindNarrativeWanderLocation(int32 EntryPoint);
}; // Size: 0xD0

#endif
