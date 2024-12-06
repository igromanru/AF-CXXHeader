#ifndef UE4SS_SDK_AI_Controller_NPC_Zombie_HPP
#define UE4SS_SDK_AI_Controller_NPC_Zombie_HPP

class AAI_Controller_NPC_Zombie_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    FTimerHandle EatTimer;                                                            // 0x0908 (size: 0x8)
    float MaxCorpseDistanceCheck;                                                     // 0x0910 (size: 0x4)

    void CheckLineOfSightToLocations(TArray<FVector>& LocationsMustSee, class AActor* OwningTarget, int32 RequiredLocationsToCount, bool QueryOnly, bool& Can See);
    void BT_HeardNewSound(class AActor* Actor, FAIStimulus Stimulus);
    void PerformCombatAlert(FVector Location, class AActor* Target);
    void CheckForCorpsesToEat();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AI_Controller_NPC_Zombie(int32 EntryPoint);
}; // Size: 0x914

#endif
