#ifndef UE4SS_SDK_BP_Teleporter_ParentBP_HPP
#define UE4SS_SDK_BP_Teleporter_ParentBP_HPP

class ABP_Teleporter_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A0 (size: 0x8)
    class UAudioComponent* PortalHumLoop;                                             // 0x02A8 (size: 0x8)
    class UArrowComponent* ExitPoint;                                                 // 0x02B0 (size: 0x8)
    class UBoxComponent* TeleportOverlapBox;                                          // 0x02B8 (size: 0x8)
    class UTextRenderComponent* DestText;                                             // 0x02C0 (size: 0x8)
    class UNiagaraComponent* ParticleLoop;                                            // 0x02C8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D0 (size: 0x8)
    FName MyTeleporterID;                                                             // 0x02D8 (size: 0x8)
    FName DestinationTeleporterID;                                                    // 0x02E0 (size: 0x8)
    FName DEMO_DestinationTeleporterID;                                               // 0x02E8 (size: 0x8)
    bool IsTeleporterActive;                                                          // 0x02F0 (size: 0x1)
    bool ActivateWhenUsedAsExit;                                                      // 0x02F1 (size: 0x1)
    FVector OverlapBoxSize;                                                           // 0x02F8 (size: 0x18)
    bool PlayersOnly;                                                                 // 0x0310 (size: 0x1)
    bool ZeroExitVelocity;                                                            // 0x0311 (size: 0x1)
    bool AlphaEndNotice;                                                              // 0x0312 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> PortalImage;                                   // 0x0318 (size: 0x28)
    TSoftObjectPtr<AResourceNode_ParentBP_C> ResourceNodeToActivate;                  // 0x0340 (size: 0x28)
    TSoftObjectPtr<AButton_Generic_C> ButtonToActivate;                               // 0x0368 (size: 0x28)
    double TeleportScreenshakeDistance;                                               // 0x0390 (size: 0x8)
    bool QuieterPortal;                                                               // 0x0398 (size: 0x1)
    TArray<FBuffDebuffRowHandle> BuffsToApplyOnUse;                                   // 0x03A0 (size: 0x10)
    TArray<class ABP_Teleporter_ParentBP_C*> PotentialTeleporters;                    // 0x03B0 (size: 0x10)
    bool FoundTeleporter;                                                             // 0x03C0 (size: 0x1)
    FWorldFlagRowHandle WorldFlagToTriggerOnUse;                                      // 0x03C8 (size: 0x20)
    class USoundBase* PortalActivateSound;                                            // 0x03E8 (size: 0x8)
    bool NoFlashOnEnter;                                                              // 0x03F0 (size: 0x1)
    TArray<class AActor*> RecentArrivals;                                             // 0x03F8 (size: 0x10)

    void UpdateControlRotation(class AAbiotic_PlayerCharacter_C* Player, class USceneComponent* TeleportLocation);
    void TryApplyBuffsOnUse(class AAbiotic_Character_ParentBP_C* Character);
    void SavePortalState(bool ForceWorldSave);
    void OnRep_IsTeleporterActive();
    void UserConstructionScript();
    void OnLoaded_A5AC56BF488F981F3C9AA78B24D05369(class UObject* Loaded);
    void OnLoaded_DE7104054D170B9134FD08832CCE853F(class UObject* Loaded);
    void OnLoaded_BB8CB02E4DF8733EB60E4CAFA703B71E(class UObject* Loaded);
    void TeleportToggleFX();
    void ReceiveBeginPlay();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void PortalActivateOnPickup();
    void PortalActivateOnButtonPress(bool Activated);
    void CheckRecentArrivals();
    void AddRecentArrival(class ABP_Teleporter_ParentBP_C* Teleporter, const class AActor*& NewArrival);
    void ExecuteUbergraph_BP_Teleporter_ParentBP(int32 EntryPoint);
}; // Size: 0x408

#endif
