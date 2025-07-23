#ifndef UE4SS_SDK_AI_Controller_NPC_Coworker_HPP
#define UE4SS_SDK_AI_Controller_NPC_Coworker_HPP

class AAI_Controller_NPC_Coworker_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08B8 (size: 0x8)
    FTimerHandle EatTimer;                                                            // 0x08C0 (size: 0x8)
    float MaxCorpseDistanceCheck;                                                     // 0x08C8 (size: 0x4)
    int32 Mode;                                                                       // 0x08CC (size: 0x4)
    FTimerHandle CoworkerAnnoyTimer;                                                  // 0x08D0 (size: 0x8)

    void NearbyLarvaCheck(bool& DidLarvaLine);
    void BT_CheckObstruction();
    void CheckCombatTargetValidity(class AActor* TargetToCheck, bool Maintain, bool& Valid);
    void CheckLineOfSightToLocations(TArray<FVector>& LocationsMustSee, class AActor* OwningTarget, int32 RequiredLocationsToCount, bool QueryOnly, bool& Can See);
    void PerformCombatAlert(FVector Location, class AActor* Target);
    void CheckForCorpsesToEat();
    void ReceiveBeginPlay();
    void BeAnnoying();
    void ExecuteUbergraph_AI_Controller_NPC_Coworker(int32 EntryPoint);
}; // Size: 0x8D8

#endif
