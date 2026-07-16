#ifndef UE4SS_SDK_NPC_Monster_WinterSprite_HPP
#define UE4SS_SDK_NPC_Monster_WinterSprite_HPP

class ANPC_Monster_WinterSprite_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x21B8 (size: 0x8)
    class UBoxComponent* TopHeadBox;                                                  // 0x21C0 (size: 0x8)
    float FadeOutTimeline_AlphaTrack_AE3F633A4CEBA9E65CD2EE97628C6572;                // 0x21C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeOutTimeline__Direction_AE3F633A4CEBA9E65CD2EE97628C6572; // 0x21CC (size: 0x1)
    class UTimelineComponent* FadeOutTimeline;                                        // 0x21D0 (size: 0x8)
    class UNiagaraComponent* ActiveChargingParticle;                                  // 0x21D8 (size: 0x8)
    class UAudioComponent* LightningLoopAudio;                                        // 0x21E0 (size: 0x8)
    bool BoppedOnHead;                                                                // 0x21E8 (size: 0x1)
    class UTexture2D* SurpriseFace;                                                   // 0x21F0 (size: 0x8)
    int32 HitsOnHead;                                                                 // 0x21F8 (size: 0x4)
    int32 HitsRequiredToKill;                                                         // 0x21FC (size: 0x4)
    double SelfKnockbackAmount;                                                       // 0x2200 (size: 0x8)
    bool KnockbackDamageCooldown;                                                     // 0x2208 (size: 0x1)
    class UMaterialInterface* PetMaterial;                                            // 0x2210 (size: 0x8)
    bool WasTamed;                                                                    // 0x2218 (size: 0x1)
    double TamedKnockback;                                                            // 0x2220 (size: 0x8)

    void UpdateHealthTextureIndex();
    void OnTamedChanged(bool Tamed);
    FVector CalculateLaunch2D(FVector From, FVector Towards, double Power2D, double UpOverride);
    void IsInvincible(bool& Return);
    void OnHeadBounce(class ACharacter* AttackingCharacter);
    void All_PerformDeathSequence();
    void Server_PerformDeathSequence();
    void FadeOutTimeline__FinishedFunc();
    void FadeOutTimeline__UpdateFunc();
    void Broadcast_MeleeAttackImpact(FHitResult Hit, TSubclassOf<class UDamageType> DamageHitType);
    void PerformDespawnFX();
    void BndEvt__NPC_Monster_WinterSprite_TopHeadBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void TargetBlockedAttack(class AActor* Target);
    void ExecuteUbergraph_NPC_Monster_WinterSprite(int32 EntryPoint);
}; // Size: 0x2228

#endif
