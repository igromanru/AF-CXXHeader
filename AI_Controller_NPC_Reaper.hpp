#ifndef UE4SS_SDK_AI_Controller_NPC_Reaper_HPP
#define UE4SS_SDK_AI_Controller_NPC_Reaper_HPP

class AAI_Controller_NPC_Reaper_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    double TimestampToDespawn;                                                        // 0x0908 (size: 0x8)
    double PatrolDespawnTime;                                                         // 0x0910 (size: 0x8)
    double TimestampToCantSee;                                                        // 0x0918 (size: 0x8)
    double HuntLength;                                                                // 0x0920 (size: 0x8)
    bool Despawning;                                                                  // 0x0928 (size: 0x1)

    void Despawn();
    bool CanSeeThroughWalls();
    void BT_SetCombatState(bool State, bool SkipAggroAnimation, bool& Success);
    void SetHuntState();
    void SetPatrolState(bool FromHunt);
    void CheckLineOfSightToLocations(TArray<FVector>& LocationsMustSee, class AActor* OwningTarget, int32 RequiredLocationsToCount, bool QueryOnly, bool& Can See);
    void CheckCombatTargetValidity(class AActor* TargetToCheck, bool Maintain, bool& Valid);
    void ReceiveBeginPlay();
    void DespawnTimer();
    void DespawnReaperFromHunt();
    void ExecuteUbergraph_AI_Controller_NPC_Reaper(int32 EntryPoint);
}; // Size: 0x929

#endif
