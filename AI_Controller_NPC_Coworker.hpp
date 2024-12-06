#ifndef UE4SS_SDK_AI_Controller_NPC_Coworker_HPP
#define UE4SS_SDK_AI_Controller_NPC_Coworker_HPP

class AAI_Controller_NPC_Coworker_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    FTimerHandle EatTimer;                                                            // 0x0908 (size: 0x8)
    float MaxCorpseDistanceCheck;                                                     // 0x0910 (size: 0x4)
    int32 Mode;                                                                       // 0x0914 (size: 0x4)
    FTimerHandle CoworkerAnnoyTimer;                                                  // 0x0918 (size: 0x8)

    void BT_CheckObstruction();
    void CheckCombatTargetValidity(class AActor* TargetToCheck, bool Maintain, bool& Valid);
    void CheckLineOfSightToLocations(TArray<FVector>& LocationsMustSee, class AActor* OwningTarget, int32 RequiredLocationsToCount, bool QueryOnly, bool& Can See);
    void PerformCombatAlert(FVector Location, class AActor* Target);
    void CheckForCorpsesToEat();
    void ReceiveBeginPlay();
    void BeAnnoying();
    void ExecuteUbergraph_AI_Controller_NPC_Coworker(int32 EntryPoint);
}; // Size: 0x920

#endif
