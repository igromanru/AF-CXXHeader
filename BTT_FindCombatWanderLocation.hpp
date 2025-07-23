#ifndef UE4SS_SDK_BTT_FindCombatWanderLocation_HPP
#define UE4SS_SDK_BTT_FindCombatWanderLocation_HPP

class UBTT_FindCombatWanderLocation_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    double AverageWanderDistance;                                                     // 0x00B0 (size: 0x8)
    FVector Random Location;                                                          // 0x00B8 (size: 0x18)
    bool Flying;                                                                      // 0x00D0 (size: 0x1)
    FVector2D Fly Offset;                                                             // 0x00D8 (size: 0x10)

    void FindWanderLocation(class AAIController* Controller, class APawn* Pawn, bool Flying, FVector2D FlyOffset, bool& Success);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_BTT_FindCombatWanderLocation(int32 EntryPoint);
}; // Size: 0xE8

#endif
