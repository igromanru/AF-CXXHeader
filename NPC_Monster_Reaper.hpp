#ifndef UE4SS_SDK_NPC_Monster_Reaper_HPP
#define UE4SS_SDK_NPC_Monster_Reaper_HPP

class ANPC_Monster_Reaper_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1EC8 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x1ED0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x1ED8 (size: 0x8)
    class UNiagaraComponent* DissolveParticle;                                        // 0x1EE0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x1EE8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x1EF0 (size: 0x8)
    float Timeline_0_NewTrack_1_62DF85804DA176A7E0F38A941D8B76E6;                     // 0x1EF8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_62DF85804DA176A7E0F38A941D8B76E6; // 0x1EFC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x1F00 (size: 0x8)
    float EmissiveTimeline_Alpha_BE84A34447F20897B129359E909AF44D;                    // 0x1F08 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> EmissiveTimeline__Direction_BE84A34447F20897B129359E909AF44D; // 0x1F0C (size: 0x1)
    class UTimelineComponent* EmissiveTimeline;                                       // 0x1F10 (size: 0x8)
    int32 ElectronicsDisrupted;                                                       // 0x1F18 (size: 0x4)
    double TimeLastDroppedEssence;                                                    // 0x1F20 (size: 0x8)
    int32 DisruptionsToDropEssence;                                                   // 0x1F28 (size: 0x4)
    FName CustomGrabTraceSocket;                                                      // 0x1F2C (size: 0x8)
    class AReaperDirector_Security_C* ReaperDirector;                                 // 0x1F38 (size: 0x8)

    bool DespawnableDamageType(const class UObject* Object);
    void CheckForStagger(bool ForceStagger, FVector HitOrigin);
    void HandleVehicleHit(bool& Handled);
    double GetStaggerDamage();
    double GetTimeLastDroppedEssence();
    void OnTargetDamaged(class AActor* Target);
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
    void ExecuteUbergraph_NPC_Monster_Reaper(int32 EntryPoint);
}; // Size: 0x1F40

#endif
