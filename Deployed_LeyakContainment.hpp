#ifndef UE4SS_SDK_Deployed_LeyakContainment_HPP
#define UE4SS_SDK_Deployed_LeyakContainment_HPP

class ADeployed_LeyakContainment_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Terminal;                                             // 0x0938 (size: 0x8)
    class USceneComponent* Spout;                                                     // 0x0940 (size: 0x8)
    class USceneComponent* ItemRoot;                                                  // 0x0948 (size: 0x8)
    class USkeletalMeshComponent* LeyakMesh;                                          // 0x0950 (size: 0x8)
    float FrostGlassTimeline_NewTrack_0_08756EC44A134A401814C5B93A4A86D5;             // 0x0958 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FrostGlassTimeline__Direction_08756EC44A134A401814C5B93A4A86D5; // 0x095C (size: 0x1)
    class UTimelineComponent* FrostGlassTimeline;                                     // 0x0960 (size: 0x8)
    bool ContainsLeyak;                                                               // 0x0968 (size: 0x1)
    class AAbiotic_Survival_GameState_C* GameState;                                   // 0x0970 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x0978 (size: 0x8)
    int32 Stability Level;                                                            // 0x0980 (size: 0x4)
    FTimerHandle DecayTimer;                                                          // 0x0988 (size: 0x8)
    int32 StabilityDecreasePerNight;                                                  // 0x0990 (size: 0x4)
    int32 MaxStability;                                                               // 0x0994 (size: 0x4)
    int32 FeedRequiredToFill;                                                         // 0x0998 (size: 0x4)
    bool FoggedGlass;                                                                 // 0x099C (size: 0x1)
    class UMaterialInstanceDynamic* DynMat_ProgressBar;                               // 0x09A0 (size: 0x8)
    class UMaterialInstanceDynamic* DynMat_FrostedGlass;                              // 0x09A8 (size: 0x8)

    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void UpdateProgressBars();
    void OnRep_FoggedGlass();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void OnRep_Stability Level();
    bool IsContainmentCurrentlyActive();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void OnRep_ContainsLeyak();
    void FrostGlassTimeline__FinishedFunc();
    void FrostGlassTimeline__UpdateFunc();
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void TogglePowerFX();
    void Free Leyak();
    void ProduceLeyakEssence();
    void OnLoadedFromSave();
    void TryStartDecayProcess();
    void ServerUpdateStabilityLevel(int32 Value);
    void NewDayUpdate();
    void DelayTryReleaseLeyak(float DelayAmount);
    void UpdateContainmentVisual();
    void ReceiveBeginPlay();
    void TrapLeyak(double DelayBeforeSuccessfulTrap);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DoFrostGlassTimeline(bool On);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_ButtonPressFX();
    void ExecuteUbergraph_Deployed_LeyakContainment(int32 EntryPoint);
}; // Size: 0x9B0

#endif
