#ifndef UE4SS_SDK_NPC_Monster_Carbuncle_HPP
#define UE4SS_SDK_NPC_Monster_Carbuncle_HPP

class ANPC_Monster_Carbuncle_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1EC8 (size: 0x8)
    class UCapsuleComponent* CarbuncleOverlap;                                        // 0x1ED0 (size: 0x8)
    class UStaticMeshComponent* StaticDeadVersion;                                    // 0x1ED8 (size: 0x8)
    class UCableComponent* Tongue;                                                    // 0x1EE0 (size: 0x8)
    double CableOffset;                                                               // 0x1EE8 (size: 0x8)
    class USceneComponent* GrabbedPhysicsObject;                                      // 0x1EF0 (size: 0x8)
    bool CarbuncleHarvested;                                                          // 0x1EF8 (size: 0x1)
    FText To Long Interact with Text;                                                 // 0x1F00 (size: 0x10)
    FText NPCName;                                                                    // 0x1F10 (size: 0x10)
    bool FloorPlanted;                                                                // 0x1F20 (size: 0x1)
    double CarbuncleOverlapRadius;                                                    // 0x1F28 (size: 0x8)
    class AAbioticCharacter* TetherTarget;                                            // 0x1F30 (size: 0x8)
    double Last TetherTimeStamp;                                                      // 0x1F38 (size: 0x8)
    double MaxTetherTime;                                                             // 0x1F40 (size: 0x8)
    double TetherCooldownTime;                                                        // 0x1F48 (size: 0x8)
    double MaxTetherDistance;                                                         // 0x1F50 (size: 0x8)
    bool IsOnCooldown;                                                                // 0x1F58 (size: 0x1)
    FTimerHandle CooldownTimerHandle;                                                 // 0x1F60 (size: 0x8)
    bool Tethered;                                                                    // 0x1F68 (size: 0x1)
    FName CarbuncleHarvestRow;                                                        // 0x1F6C (size: 0x8)
    double StompStartTime;                                                            // 0x1F78 (size: 0x8)
    float StompDuration;                                                              // 0x1F80 (size: 0x4)
    float StompDamage;                                                                // 0x1F84 (size: 0x4)
    bool RunTetherCheckOnTick;                                                        // 0x1F88 (size: 0x1)
    class UStaticMesh* HarvestedStaticMesh;                                           // 0x1F90 (size: 0x8)
    bool DamageTargetWhileTethering;                                                  // 0x1F98 (size: 0x1)

    void BuffTagsUpdated();
    void Check for Lost Line Of Sight(class AAbioticCharacter*& Target, bool& LostLineOfSight);
    void ResetCooldown();
    void UpdateTongueDistance();
    void UntetherTarget(bool LoseLineOfSight);
    void HasTimeElapsed(double Time, bool& Return Value);
    bool CanTetherTarget(class AAbiotic_Character_ParentBP_C* Target);
    void CheckTetherOverlaps();
    void OnRep_TetherTarget();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void ToggleFloorientation();
    void OnRep_FloorPlanted();
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void OnRep_CarbuncleHarvested();
    void CanBeCarbuncled(bool& Success);
    void UserConstructionScript();
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void BndEvt__NPC_Base_ParentBP_AIPerception_K2Node_ComponentBoundEvent_4_PerceptionUpdatedDelegate__DelegateSignature(const TArray<class AActor*>& UpdatedActors);
    void TICK_DeathSequence_FallToGround();
    void FadeBodyFX(bool FadeIn, bool DestroyAfterFadeOut);
    void BndEvt__NPC_Monster_Carbuncle_CarbuncleOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void Server_TryFadeOutCorpse();
    void InteractWith_A_LocalFX(bool Hold);
    void Server_PerformDeathSequence();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void DoHitReaction();
    void ExecuteUbergraph_NPC_Monster_Carbuncle(int32 EntryPoint);
}; // Size: 0x1F99

#endif
