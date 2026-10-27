#ifndef UE4SS_SDK_Weapon_Gun_Vacuum_HPP
#define UE4SS_SDK_Weapon_Gun_Vacuum_HPP

class AWeapon_Gun_Vacuum_C : public AAbiotic_Weapon_Gun_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C70 (size: 0x8)
    class UCapsuleComponent* AirFunnelOverlap;                                        // 0x0C78 (size: 0x8)
    class USphereComponent* VacuumOverlap;                                            // 0x0C80 (size: 0x8)
    class UNiagaraComponent* Niagara_AirFunnel;                                       // 0x0C88 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0C90 (size: 0x8)
    TArray<UPrimitiveComponent*> PulledComponents;                                    // 0x0C98 (size: 0x10)
    double VacuumSpeed;                                                               // 0x0CA8 (size: 0x8)
    class UMeshComponent* FP_Mesh;                                                    // 0x0CB0 (size: 0x8)
    class UMeshComponent* TP_Mesh;                                                    // 0x0CB8 (size: 0x8)
    class UAudioComponent* Vacuum_SFXComp;                                            // 0x0CC0 (size: 0x8)
    class USoundBase* VacuumStart_SFX;                                                // 0x0CC8 (size: 0x8)
    class USoundBase* VacuumEnd_SFX;                                                  // 0x0CD0 (size: 0x8)
    class USoundBase* PestIn_SFX;                                                     // 0x0CD8 (size: 0x8)
    class USoundBase* PestOut_SFX;                                                    // 0x0CE0 (size: 0x8)
    bool IsLocalWeapon;                                                               // 0x0CE8 (size: 0x1)
    bool FunnelActive;                                                                // 0x0CE9 (size: 0x1)
    TArray<FVacuumSuctionableData_Struct> SuctionableData;                            // 0x0CF0 (size: 0x10)
    FVacuumSuctionableData_Struct CurrentSuctionedData;                               // 0x0D00 (size: 0xD0)
    int32 SuctionedIndex;                                                             // 0x0DD0 (size: 0x4)
    int32 LastIndex;                                                                  // 0x0DD4 (size: 0x4)
    bool RecentlyFiredProjectile;                                                     // 0x0DD8 (size: 0x1)

    void Local_FireReleased(bool& ShouldFire);
    void Local_FirePressed(bool& ConsumedByWeapon);
    void CanToggleUse(bool& IsUseToggleable);
    void InitMesh(TSubclassOf<class UMeshComponent> MeshComponentClass, class UMeshComponent*& MeshComponent, class USceneComponent* ParentComponent, bool FirstPerson, const FTransform& RelativeOffset);
    void Local_AttachToVacuum(class AAbiotic_PlayerCharacter_C* OwningCharacter, class USkeletalMesh* SkeletalMeshToAttach, class UStaticMesh* StaticMeshToAttach, class UAnimationAsset* NewAnimToPlay, const FTransform& MuzzleRelativeOffset, class UMaterialInterface* MaterialOverride);
    void IsJammed();
    void OnRep_SuctionedIndex();
    void CheckActorAgainstSuctionData(class AActor* ActorToCheck, const FVacuumSuctionableData_Struct& SuctionData);
    void ActorToSuctionedData(class AActor* NewActor, FVacuumSuctionableData_Struct& Data);
    void IndexToSuctionedData(int32 AmmoType, FVacuumSuctionableData_Struct& Data);
    void TryAttachOverlappedActor();
    void TryAddOverlappedItemToInventory();
    void SuckHit(class AActor* Actor, class UPrimitiveComponent* Component);
    void GetOverrideProjectileClass(bool& Override, TSoftClassPtr<AAbioticProjectile_ParentBP_C>& ProjectileClass);
    void OnLoaded_2C6F5DC04001560C3BD9238978A4A967(UClass* Loaded);
    void OnLoaded_FF323B93433CCFE11A51A3A441AE0836(class UObject* Loaded);
    void OnLoaded_349193DA4025A50EB631D481B472B4AC(class UObject* Loaded);
    void ReceiveTick(float DeltaSeconds);
    void Server_Request_ShootPestFromVacuum(const FTransform& MuzzleSocketTransform, const FTransform& ProjectileTransform);
    void Server Apply Damage To Resource(float BaseDamage, class AController* EventInstigator, const FHitResult& HitInfo, class AActor* DamageCauser);
    void SetupItem();
    void TryPerformBatteryChangeOnUse();
    void Local_Play Sound Effect(class USoundBase* Sound);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbioticInventoryItemSlot SlotData);
    void ReceiveBeginPlay();
    void PlayFunnelFX();
    void OnUpdateSuctionedIndex();
    void Server_Request_ActorSuckedUp(class AActor* Actor);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbioticInventoryItemSlot SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void GunStartFiring();
    void UseToggleUpdated(bool NewActive);
    void Local_PlaySuckAnim();
    void BndEvt__Weapon_Gun_Vacuum_VacuumOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetVacuumSfxPlaying(bool Playing);
    void ExecuteUbergraph_Weapon_Gun_Vacuum(int32 EntryPoint);
}; // Size: 0xDD9

#endif
