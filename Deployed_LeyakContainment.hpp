#ifndef UE4SS_SDK_Deployed_LeyakContainment_HPP
#define UE4SS_SDK_Deployed_LeyakContainment_HPP

class ADeployed_LeyakContainment_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UStaticMeshComponent* Terminal;                                             // 0x0858 (size: 0x8)
    class USceneComponent* Spout;                                                     // 0x0860 (size: 0x8)
    class USceneComponent* ItemRoot;                                                  // 0x0868 (size: 0x8)
    class USkeletalMeshComponent* LeyakMesh;                                          // 0x0870 (size: 0x8)
    float FrostGlassTimeline_NewTrack_0_08756EC44A134A401814C5B93A4A86D5;             // 0x0878 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FrostGlassTimeline__Direction_08756EC44A134A401814C5B93A4A86D5; // 0x087C (size: 0x1)
    class UTimelineComponent* FrostGlassTimeline;                                     // 0x0880 (size: 0x8)
    TArray<FLeyakContainment_Struct> LeyakContainmentData;                            // 0x0888 (size: 0x10)
    FName ContainsLeyak;                                                              // 0x0898 (size: 0x8)
    class AAbiotic_Survival_GameState_C* GameState;                                   // 0x08A0 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x08A8 (size: 0x8)
    int32 Stability Level;                                                            // 0x08B0 (size: 0x4)
    FTimerHandle DecayTimer;                                                          // 0x08B8 (size: 0x8)
    int32 StabilityDecreasePerNight;                                                  // 0x08C0 (size: 0x4)
    int32 MaxStability;                                                               // 0x08C4 (size: 0x4)
    int32 FeedRequiredToFill;                                                         // 0x08C8 (size: 0x4)
    bool FoggedGlass;                                                                 // 0x08CC (size: 0x1)
    class UMaterialInstanceDynamic* DynMat_ProgressBar;                               // 0x08D0 (size: 0x8)
    class UMaterialInstanceDynamic* DynMat_FrostedGlass;                              // 0x08D8 (size: 0x8)
    class ULeyakDirectorComponent_C* ContainedLeyakDirector;                          // 0x08E0 (size: 0x8)
    FName CurrentStabilisingFoodRowName;                                              // 0x08E8 (size: 0x8)

    bool DoesContainLeyak();
    bool HasEnoughStabilityItem();
    TArray<FName> GetCompatibleStabilityItems(bool FindAll);
    bool GetContainmentDataForLeyak(int32& ContainmentData);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void UpdateProgressBars();
    void OnRep_FoggedGlass();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void OnRep_Stability Level();
    bool Server_IsContainmentCurrentlyActive();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void OnRep_ContainsLeyak();
    void FrostGlassTimeline__FinishedFunc();
    void FrostGlassTimeline__UpdateFunc();
    void ReceiveBeginPlay();
    void UpdateContainmentVisual();
    void DestroyDeployable(bool NoLoot, int32 Extra Loot Quantity, bool LootBagLocationOverride, FVector LocationOverride);
    void TogglePowerFX();
    void Free Leyak();
    void ProduceLeyakEssence();
    void OnLoadedFromSave(double NewLifespan);
    void TryStartDecayProcess();
    void ServerUpdateStabilityLevel(int32 Value, FName RowName);
    void NewDayUpdate();
    void DelayTryReleaseLeyak(float DelayAmount);
    void TrapLeyak(double DelayBeforeSuccessfulTrap, FName LeyakRowName);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DoFrostGlassTimeline(bool On);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_Deployed_LeyakContainment(int32 EntryPoint);
}; // Size: 0x8F0

#endif
