#ifndef UE4SS_SDK_Deployed_Crate_Hackable_ParentBP_HPP
#define UE4SS_SDK_Deployed_Crate_Hackable_ParentBP_HPP

class ADeployed_Crate_Hackable_ParentBP_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* KeyMesh;                                              // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0930 (size: 0x8)
    float KeyFinishTimeline_NewTrack_0_829935DA452776F41455019189AE26C7;              // 0x0938 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> KeyFinishTimeline__Direction_829935DA452776F41455019189AE26C7; // 0x093C (size: 0x1)
    class UTimelineComponent* KeyFinishTimeline;                                      // 0x0940 (size: 0x8)
    float KeyInsertTimeline_NewTrack_0_B266F73D45BA81A958C2FD8A376F3055;              // 0x0948 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> KeyInsertTimeline__Direction_B266F73D45BA81A958C2FD8A376F3055; // 0x094C (size: 0x1)
    class UTimelineComponent* KeyInsertTimeline;                                      // 0x0950 (size: 0x8)
    float Timeline_NewTrack_0_7AB835E141C3796DE7E86BA9E4394D87;                       // 0x0958 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_7AB835E141C3796DE7E86BA9E4394D87; // 0x095C (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0960 (size: 0x8)
    bool CrateUnlocked;                                                               // 0x0968 (size: 0x1)
    FDataTableRowHandle KeyItem;                                                      // 0x0970 (size: 0x10)
    FTransform KeyStartTrans;                                                         // 0x0980 (size: 0x60)
    FTransform KeyMidTrans;                                                           // 0x09E0 (size: 0x60)
    FTransform KeyFinalTrans;                                                         // 0x0A40 (size: 0x60)
    class USoundBase* FinalUnlockSFX;                                                 // 0x0AA0 (size: 0x8)
    double LastLockJiggleTime;                                                        // 0x0AA8 (size: 0x8)
    class USoundBase* LockJiggleSound;                                                // 0x0AB0 (size: 0x8)
    FAchievementRowHandle AchievementWhenUnlocked;                                    // 0x0AB8 (size: 0x20)

    void CheckForAchievementUnlock();
    void Server Set HCrate Lock State();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void OnRep_CrateUnlocked();
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void KeyInsertTimeline__FinishedFunc();
    void KeyInsertTimeline__UpdateFunc();
    void KeyFinishTimeline__FinishedFunc();
    void KeyFinishTimeline__UpdateFunc();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_B_LocalFX(bool Hold);
    void PlayChestTimeline(bool Open);
    void UnlockCrateFX();
    void ToggleOpenFX(bool Open);
    void OnLoadedFromSave(double NewLifespan);
    void ReceiveBeginPlay();
    void Broadcast_LockedSound();
    void ExecuteUbergraph_Deployed_Crate_Hackable_ParentBP(int32 EntryPoint);
}; // Size: 0xAD8

#endif
