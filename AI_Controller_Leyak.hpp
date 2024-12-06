#ifndef UE4SS_SDK_AI_Controller_Leyak_HPP
#define UE4SS_SDK_AI_Controller_Leyak_HPP

class AAI_Controller_Leyak_C : public AAbiotic_AI_Controller_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    TArray<class AAbioticCharacter*> ValidTargets;                                    // 0x0908 (size: 0x10)
    bool SkipLeyakLevelCheck;                                                         // 0x0918 (size: 0x1)
    TSoftObjectPtr<UWorld> LeyakLevel;                                                // 0x0920 (size: 0x28)
    double MaxLeyakChaseDistance;                                                     // 0x0948 (size: 0x8)
    double LeyakAggroRange;                                                           // 0x0950 (size: 0x8)
    bool WantsToDespawn;                                                              // 0x0958 (size: 0x1)
    double MaxLeyakChaseDistance_Aggrod;                                              // 0x0960 (size: 0x8)

    bool ExtraFocusCheck();
    void BT_CheckObstruction();
    void Despawn();
    void CheckForNewBestTarget(bool& Found, bool& SameTargetAsBefore);
    void UpdateValidTargets();
    void CheckLineOfSightToLocations(TArray<FVector>& LocationsMustSee, class AActor* OwningTarget, int32 RequiredLocationsToCount, bool QueryOnly, bool& Can See);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void JustTookDamage(class AAbiotic_Character_ParentBP_C* FromCharacter, FVector FromLocation, double Damage, bool FriendlyFire, bool SkipPainLine);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_AI_Controller_Leyak(int32 EntryPoint);
}; // Size: 0x968

#endif
