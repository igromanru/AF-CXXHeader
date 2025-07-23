#ifndef UE4SS_SDK_AI_Controller_NPC_Reaper_HPP
#define UE4SS_SDK_AI_Controller_NPC_Reaper_HPP

class AAI_Controller_NPC_Reaper_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)
    double TimestampToDespawn;                                                        // 0x08C0 (size: 0x8)
    double PatrolDespawnTime;                                                         // 0x08C8 (size: 0x8)
    double TimestampToCantSee;                                                        // 0x08D0 (size: 0x8)
    double HuntLength;                                                                // 0x08D8 (size: 0x8)
    bool Despawning;                                                                  // 0x08E0 (size: 0x1)

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
}; // Size: 0x8E1

#endif
