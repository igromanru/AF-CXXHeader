#ifndef UE4SS_SDK_AI_Controller_NPC_Boxy_HPP
#define UE4SS_SDK_AI_Controller_NPC_Boxy_HPP

class AAI_Controller_NPC_Boxy_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)
    bool FollowingPlayers;                                                            // 0x08C0 (size: 0x1)
    FTimerHandle NearbyPlayerTimer;                                                   // 0x08C8 (size: 0x8)
    FTimerHandle CrouchCheckTimer;                                                    // 0x08D0 (size: 0x8)
    FTimerHandle FollowPlayerTimer;                                                   // 0x08D8 (size: 0x8)

    void BT_CheckObstruction();
    void CheckCombatTargetValidity(class AActor* TargetToCheck, bool Maintain, bool& Valid);
    void CheckLineOfSightToLocations(TArray<FVector>& LocationsMustSee, class AActor* OwningTarget, int32 RequiredLocationsToCount, bool QueryOnly, bool& Can See);
    void CheckForCrouch();
    void CheckForNearbyPlayers();
    void UpdateStationaryTarget();
    void FollowPlayerUpdate();
    void ResetPlayerUpdateTimer();
    void ReceiveBeginPlay();
    void CheckForNearbyItems();
    void ExecuteUbergraph_AI_Controller_NPC_Boxy(int32 EntryPoint);
}; // Size: 0x8E0

#endif
