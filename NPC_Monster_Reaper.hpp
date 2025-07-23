#ifndef UE4SS_SDK_NPC_Monster_Reaper_HPP
#define UE4SS_SDK_NPC_Monster_Reaper_HPP

class ANPC_Monster_Reaper_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20A8 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x20B0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x20B8 (size: 0x8)
    class UNiagaraComponent* DissolveParticle;                                        // 0x20C0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x20C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x20D0 (size: 0x8)
    float Timeline_0_NewTrack_1_62DF85804DA176A7E0F38A941D8B76E6;                     // 0x20D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_62DF85804DA176A7E0F38A941D8B76E6; // 0x20DC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x20E0 (size: 0x8)
    float EmissiveTimeline_Alpha_BE84A34447F20897B129359E909AF44D;                    // 0x20E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> EmissiveTimeline__Direction_BE84A34447F20897B129359E909AF44D; // 0x20EC (size: 0x1)
    class UTimelineComponent* EmissiveTimeline;                                       // 0x20F0 (size: 0x8)
    int32 ElectronicsDisrupted;                                                       // 0x20F8 (size: 0x4)
    double TimeLastDroppedEssence;                                                    // 0x2100 (size: 0x8)
    int32 DisruptionsToDropEssence;                                                   // 0x2108 (size: 0x4)
    FName CustomGrabTraceSocket;                                                      // 0x210C (size: 0x8)
    class AReaperDirector_Security_C* ReaperDirector;                                 // 0x2118 (size: 0x8)
    int32 StaggerDespawnCount;                                                        // 0x2120 (size: 0x4)

    void CanGrabValidTarget(bool& CanGrab);
    bool DespawnableDamageType(const class UObject* Object);
    void CheckForStagger(bool ForceStagger, FVector HitOrigin);
    void HandleVehicleHit(bool& Handled);
    double GetStaggerDamage();
    double GetTimeLastDroppedEssence();
    void OnTargetDamaged(class AActor* Target, bool FromMelee);
    FName GetGrabTraceSocket();
    void TryDisruptElectronicItem(class UObject* Object);
    void DoReaperGrabStab();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void EmissiveTimeline__FinishedFunc();
    void EmissiveTimeline__UpdateFunc();
    void InitDissolveMaterials(bool Reset);
    void ActivateDissolveParticles();
    void PlayDissolveFX(bool Reverse);
    void Broadcast_DoSuccessfulGrabAnimation();
    void BndEvt__NPC_Monster_Reaper_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void Server_PoopOnFloor();
    void DisruptNearbyElectronics();
    void Broadcast_DoFailedGrabAnimation();
    void UpdateEmissive();
    void ToggleCombatStateFX(bool IsInCombat);
    void Broadcast_DespawnFX();
    void OnDespawn();
    void OnSpawnFXStarted();
    void Server_PerformMegalightFear(class AActor* Instigator);
    void Broadcast_PerformStagger(TEnumAsByte<EStaggerDirection::Type> Direction);
    void Local_DoHitReaction();
    void OnMegalightHit(class UAbiotic_MegalightComponent_C* megalight, int32 Tier);
    void ExecuteUbergraph_NPC_Monster_Reaper(int32 EntryPoint);
}; // Size: 0x2124

#endif
