#ifndef UE4SS_SDK_Weapon_Gun_Laser_HPP
#define UE4SS_SDK_Weapon_Gun_Laser_HPP

class AWeapon_Gun_Laser_C : public AAbiotic_Weapon_Gun_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C08 (size: 0x8)
    class UNiagaraComponent* Niagara_LaserEnd;                                        // 0x0C10 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0C18 (size: 0x8)
    class UNiagaraComponent* Niagara_LaserEmitterBeam;                                // 0x0C20 (size: 0x8)
    class USceneComponent* LaserEndLocation;                                          // 0x0C28 (size: 0x8)
    bool LaserFiring;                                                                 // 0x0C30 (size: 0x1)
    FTimerHandle AmmoConsumptionTimer;                                                // 0x0C38 (size: 0x8)
    bool TickAmmoConsumption;                                                         // 0x0C40 (size: 0x1)
    float AmmoConsumptionInterval;                                                    // 0x0C44 (size: 0x4)
    float LaserDuration;                                                              // 0x0C48 (size: 0x4)
    bool Overdrive;                                                                   // 0x0C4C (size: 0x1)
    float AmmoOverdriveConsumptionInterval;                                           // 0x0C50 (size: 0x4)
    float LaserDamage;                                                                // 0x0C54 (size: 0x4)
    float LaserOverdriveDamage;                                                       // 0x0C58 (size: 0x4)
    bool IsLocalWeapon;                                                               // 0x0C5C (size: 0x1)
    class USoundBase* LaserStartSFX;                                                  // 0x0C60 (size: 0x8)
    float In Value;                                                                   // 0x0C68 (size: 0x4)
    EPaintColor LaserBeamColor;                                                       // 0x0C6C (size: 0x1)

    void PlaySFX();
    void Try Award XP to Instigating Player(class AActor* HitActor);
    void GetMissingAmmoText(FText ammo type, FText& Return);
    void Local_CheckForAmmoStop();
    void PlayStopFireAnim();
    void PlayFireAnim();
    void Laser_SufficientBattery?(bool& Sufficient);
    void CreateBeamsOrTracers(TArray<FHitResult>& Array, class UNiagaraSystem* BeamEffect);
    void UpdateOverdrive();
    void OnRep_Overdrive();
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void TickLaser();
    void ConsumeLaserAmmo();
    void OnRep_LaserFiring();
    void Local_FireReleased(bool& ShouldFire);
    void Local_FirePressed(bool& ConsumedByWeapon);
    void UpdateLaserEndLocation();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Server_OnHit(FHitResult HitResult);
    void Server_StopLaserFire();
    void Request_ServerHit(FHitResult HitResult);
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void Request_ToggleOverdrive();
    void UpdateAmmoConsumptionTimer();
    void ReceiveDestroyed();
    void Local_SetUseToggle(bool NewActive);
    void Request_SetUseToggle(bool NewActive);
    void Server_StartLaserFire();
    void UseToggleUpdated(bool NewActive);
    void OnMeshComponentReady(class UMeshComponent* MeshComponent, bool FirstPerson);
    void BndEvt__Weapon_Gun_Laser_LaserComponent_K2Node_ComponentBoundEvent_0_OnLaserDealDamage__DelegateSignature(class ULaserComponent_C* LaserComponent, FHitResult HitResult, double BaseDamage, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType);
    void ExecuteUbergraph_Weapon_Gun_Laser(int32 EntryPoint);
}; // Size: 0xC6D

#endif
