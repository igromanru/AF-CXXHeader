#ifndef UE4SS_SDK_BTS_CheckDistancedBasedAbility_HPP
#define UE4SS_SDK_BTS_CheckDistancedBasedAbility_HPP

class UBTS_CheckDistancedBasedAbility_C : public UBTService_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0098 (size: 0x8)
    TEnumAsByte<E_NPC_AbilityTypes::Type> Ability;                                    // 0x00A0 (size: 0x1)
    double MinimumDistance;                                                           // 0x00A8 (size: 0x8)
    double MaximumDistance;                                                           // 0x00B0 (size: 0x8)
    bool UsePathfinding;                                                              // 0x00B8 (size: 0x1)

    bool CheckMaximumDistance(class AActor* NPC, class AActor* Target);
    bool CheckMinimumDistance(class AActor* NPC, class AActor* Target);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BTS_CheckDistancedBasedAbility(int32 EntryPoint);
}; // Size: 0xB9

#endif
