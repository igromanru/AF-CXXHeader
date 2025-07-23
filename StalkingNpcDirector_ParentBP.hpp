#ifndef UE4SS_SDK_StalkingNpcDirector_ParentBP_HPP
#define UE4SS_SDK_StalkingNpcDirector_ParentBP_HPP

class UStalkingNpcDirector_ParentBP_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FTimerHandle StalkingNpcTimer;                                                    // 0x00B0 (size: 0x8)
    class ANPC_Base_ParentBP_C* ActiveStalkingNPC;                                    // 0x00B8 (size: 0x8)
    class AAbioticCharacter* CurrentStalkingNpcTarget;                                // 0x00C0 (size: 0x8)
    FWorldFlagRowHandle RequiredWorldFlag;                                            // 0x00C8 (size: 0x20)
    bool DirectorDebugOn;                                                             // 0x00E8 (size: 0x1)
    class UEnvQuery* SpawnEQS;                                                        // 0x00F0 (size: 0x8)
    FGameplayTag StalkingTag;                                                         // 0x00F8 (size: 0x8)
    FDataTableRowHandle SpawnRow;                                                     // 0x0100 (size: 0x10)

    void GetSpawnClass(TSoftClassPtr<ANPC_Base_ParentBP_C>& SpawnClass);
    void SpawnNPC_Internal(TSubclassOf<class ANPC_Base_ParentBP_C> Class, FVector Location, FRotator Rotation);
    bool CanSpawn();
    void AtLeast1PlayerWithTag(FGameplayTag Tag, bool& Found);
    bool IsValidTarget(class AAbioticCharacter* Player, bool AllowDuringCombat);
    void Director Print Debug(FString InString, double Duration, TEnumAsByte<ECriticalityLevels::Type> Criticality, bool ShowOnCrosshair);
    void TryChooseTargetToStalk(bool ForceSuccessAllTargets, FGameplayTag CheckByTagFirst);
    void OnLoaded_E7FE3AE7465757AF9CE3D5844CB91405(UClass* Loaded);
    void TriggerStartStalkingTarget(class AAbioticCharacter* Target);
    void OnSpawnQueryFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void CheckForTrackingNpcSpawn();
    void Server_ForceSpawn();
    void ReceiveBeginPlay();
    void CheckForStuckNPC();
    void AsyncSpawnNPC(FVector Location, FRotator Rotation);
    void ExecuteUbergraph_StalkingNpcDirector_ParentBP(int32 EntryPoint);
}; // Size: 0x110

#endif
