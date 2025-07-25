#ifndef UE4SS_SDK_Weapon_Gun_Laser_HPP
#define UE4SS_SDK_Weapon_Gun_Laser_HPP

class AWeapon_Gun_Laser_C : public AAbiotic_Weapon_Gun_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BB8 (size: 0x8)
    class UNiagaraComponent* Niagara_LaserEnd;                                        // 0x0BC0 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0BC8 (size: 0x8)
    class UNiagaraComponent* Niagara_LaserEmitterBeam;                                // 0x0BD0 (size: 0x8)
    class USceneComponent* LaserEndLocation;                                          // 0x0BD8 (size: 0x8)
    bool LaserFiring;                                                                 // 0x0BE0 (size: 0x1)
    FTimerHandle AmmoConsumptionTimer;                                                // 0x0BE8 (size: 0x8)
    bool TickAmmoConsumption;                                                         // 0x0BF0 (size: 0x1)
    float AmmoConsumptionInterval;                                                    // 0x0BF4 (size: 0x4)
    float LaserDuration;                                                              // 0x0BF8 (size: 0x4)
    bool Overdrive;                                                                   // 0x0BFC (size: 0x1)
    float AmmoOverdriveConsumptionInterval;                                           // 0x0C00 (size: 0x4)
    float LaserDamage;                                                                // 0x0C04 (size: 0x4)
    float LaserOverdriveDamage;                                                       // 0x0C08 (size: 0x4)
    bool IsLocalWeapon;                                                               // 0x0C0C (size: 0x1)
    class USoundBase* LaserStartSFX;                                                  // 0x0C10 (size: 0x8)
    float In Value;                                                                   // 0x0C18 (size: 0x4)
    EPaintColor LaserBeamColor;                                                       // 0x0C1C (size: 0x1)

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
    void ExecuteUbergraph_Weapon_Gun_Laser(int32 EntryPoint);
}; // Size: 0xC1D

#endif
