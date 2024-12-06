#ifndef UE4SS_SDK_BTT_FindCoverLocation_HPP
#define UE4SS_SDK_BTT_FindCoverLocation_HPP

class UBTT_FindCoverLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    double AveragePatrolDistance;                                                     // 0x00B0 (size: 0x8)
    FVector Random Location;                                                          // 0x00B8 (size: 0x18)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_FindCoverLocation(int32 EntryPoint);
}; // Size: 0xD0

#endif
