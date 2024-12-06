#ifndef UE4SS_SDK_NPC_Monster_Symphonist_HPP
#define UE4SS_SDK_NPC_Monster_Symphonist_HPP

class ANPC_Monster_Symphonist_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1EC8 (size: 0x8)
    class USceneComponent* ThrowEndLocation;                                          // 0x1ED0 (size: 0x8)
    class UNiagaraComponent* Fog;                                                     // 0x1ED8 (size: 0x8)
    class UCapsuleComponent* NearbyAlertCapsule;                                      // 0x1EE0 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x1EE8 (size: 0x8)
    class UNiagaraComponent* DissolveParticle;                                        // 0x1EF0 (size: 0x8)
    class USceneComponent* StompLocation;                                             // 0x1EF8 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x1F00 (size: 0x8)
    float Timeline_Dissolve_NewTrack_1_3CA55A274045FB46A1A835948F11E3C3;              // 0x1F08 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_Dissolve__Direction_3CA55A274045FB46A1A835948F11E3C3; // 0x1F0C (size: 0x1)
    class UTimelineComponent* Timeline_Dissolve;                                      // 0x1F10 (size: 0x8)
    float Timeline_1_Value_1B8B4C8C4D664960582146A1ABA187CE;                          // 0x1F18 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_1B8B4C8C4D664960582146A1ABA187CE; // 0x1F1C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x1F20 (size: 0x8)
    double StompCheckDistance;                                                        // 0x1F28 (size: 0x8)
    bool SoundAlerted;                                                                // 0x1F30 (size: 0x1)
    class UAnimMontage* SoundAlertMontage;                                            // 0x1F38 (size: 0x8)
    bool HasTriggeredAlertAggro;                                                      // 0x1F40 (size: 0x1)
    bool IsStampeding;                                                                // 0x1F41 (size: 0x1)
    double TimeStampedeStarted;                                                       // 0x1F48 (size: 0x8)
    float StampedeDuration;                                                           // 0x1F50 (size: 0x4)
    class USoundBase* ChargeImpactSFX;                                                // 0x1F58 (size: 0x8)
    float ThrowVelocity;                                                              // 0x1F60 (size: 0x4)
    int32 NumberOfMirages;                                                            // 0x1F64 (size: 0x4)
    bool WantsToActivateMirage;                                                       // 0x1F68 (size: 0x1)
    bool PerformingMirage;                                                            // 0x1F69 (size: 0x1)
    class UAnimMontage* LeapAttackMontage;                                            // 0x1F70 (size: 0x8)
    bool ScarecrowEscape;                                                             // 0x1F78 (size: 0x1)
    FVector CalculatedThrowLocation;                                                  // 0x1F80 (size: 0x18)

    void DropHoldingCharacter();
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void GetResponseToDamageType(TSubclassOf<class UDamageType> DamageType, class AActor* DamageCauser, class UActorComponent* HitComponent, FName HitBone, bool& Immune, bool& Weakness, bool& Resisted);
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void UpdateHealthTextureIndex();
    void ProcessMirageSpawns(TArray<FVector>& EQSLocations, bool& Success, FVector& OwnerLocation);
    void CanBeCarbuncled(bool& Success);
    void OnRep_IsStampeding();
    void ThrowHeldCharacter();
    void Server_EndChargeImpact();
    void GetSoundSource();
    bool IsNPCBusy();
    void UserConstructionScript();
    void Timeline_Dissolve__FinishedFunc();
    void Timeline_Dissolve__UpdateFunc();
    void OnNotifyEnd_C5B43E4949F53B3082A073928ED410CE(FName NotifyName);
    void OnNotifyBegin_C5B43E4949F53B3082A073928ED410CE(FName NotifyName);
    void OnInterrupted_C5B43E4949F53B3082A073928ED410CE(FName NotifyName);
    void OnBlendOut_C5B43E4949F53B3082A073928ED410CE(FName NotifyName);
    void OnCompleted_C5B43E4949F53B3082A073928ED410CE(FName NotifyName);
    void OnNotifyEnd_04FFE697459A60405B8563846FBEF66F(FName NotifyName);
    void OnNotifyBegin_04FFE697459A60405B8563846FBEF66F(FName NotifyName);
    void OnInterrupted_04FFE697459A60405B8563846FBEF66F(FName NotifyName);
    void OnBlendOut_04FFE697459A60405B8563846FBEF66F(FName NotifyName);
    void OnCompleted_04FFE697459A60405B8563846FBEF66F(FName NotifyName);
    void OnNotifyEnd_D365EFBB41261D19C4A401BCF7783620(FName NotifyName);
    void OnNotifyBegin_D365EFBB41261D19C4A401BCF7783620(FName NotifyName);
    void OnInterrupted_D365EFBB41261D19C4A401BCF7783620(FName NotifyName);
    void OnBlendOut_D365EFBB41261D19C4A401BCF7783620(FName NotifyName);
    void OnCompleted_D365EFBB41261D19C4A401BCF7783620(FName NotifyName);
    void InitDissolveMaterials(bool Reset);
    void ActivateDissolveParticles();
    void PlayDissolveFX(bool Reverse);
    void Server_HeardSound(class AActor* Actor, const FAIStimulus& Stimulus, bool Loud);
    void PerformAggroAnimation(bool Startled, bool RunDecisionTickImmediately);
    void Server_AttemptStartle();
    void Server_PerformSoundAlerted();
    void Broadcast_PerformAlert();
    void Broadcast_AlertSuccess();
    void Broadcast_AlertFail();
    void Server_PerformVacuumFear(class AActor* Instigator);
    void OnQueryFinishedEvent_Event(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void ActivateMirage();
    void Broadcast_AbortAlert();
    void Broadcast_DoFailedGrabAnimation();
    void Broadcast_DoSuccessfulGrabAnimation();
    void StartThrowEQS();
    void ThrowEQSFinished(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
    void Server_DoStampedeExplosion(bool Detonation);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Broadcast_StampedeEnd(bool Detonation);
    void EndChargeWithExplosion();
    void Tick_RollAttack();
    void Broadcast_DespawnFX();
    void OnDespawn();
    void ReceiveBeginPlay();
    void PerformMeleeDamage(FVector AttemptLocation);
    void Broadcast_PerformStagger(TEnumAsByte<EStaggerDirection::Type> Direction);
    void Broadcast_CombatAbility1();
    void Server_PerformDeathSequence();
    void BndEvt__NPC_Monster_Symphonist_NearbyAlertCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void OnSpawnFXStarted();
    void Broadcast_TeleportFadeOut();
    void Broadcast_TeleportFadeIn();
    void Broadcast_CombatAbility3();
    void ExecuteUbergraph_NPC_Monster_Symphonist(int32 EntryPoint);
}; // Size: 0x1F98

#endif
