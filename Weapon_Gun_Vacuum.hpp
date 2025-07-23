#ifndef UE4SS_SDK_Weapon_Gun_Vacuum_HPP
#define UE4SS_SDK_Weapon_Gun_Vacuum_HPP

class AWeapon_Gun_Vacuum_C : public AAbiotic_Weapon_Gun_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BB8 (size: 0x8)
    class UCapsuleComponent* AirFunnelOverlap;                                        // 0x0BC0 (size: 0x8)
    class USphereComponent* VacuumOverlap;                                            // 0x0BC8 (size: 0x8)
    class UNiagaraComponent* Niagara_AirFunnel;                                       // 0x0BD0 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0BD8 (size: 0x8)
    TArray<class UPrimitiveComponent*> PulledComponents;                              // 0x0BE0 (size: 0x10)
    double VacuumSpeed;                                                               // 0x0BF0 (size: 0x8)
    class UMeshComponent* FP_Mesh;                                                    // 0x0BF8 (size: 0x8)
    class UMeshComponent* TP_Mesh;                                                    // 0x0C00 (size: 0x8)
    class UAudioComponent* Vacuum_SFXComp;                                            // 0x0C08 (size: 0x8)
    class USoundBase* VacuumStart_SFX;                                                // 0x0C10 (size: 0x8)
    class USoundBase* VacuumEnd_SFX;                                                  // 0x0C18 (size: 0x8)
    class USoundBase* PestIn_SFX;                                                     // 0x0C20 (size: 0x8)
    class USoundBase* PestOut_SFX;                                                    // 0x0C28 (size: 0x8)
    bool IsLocalWeapon;                                                               // 0x0C30 (size: 0x1)
    bool FunnelActive;                                                                // 0x0C31 (size: 0x1)
    TArray<FVacuumSuctionableData_Struct> SuctionableData;                            // 0x0C38 (size: 0x10)
    FVacuumSuctionableData_Struct CurrentSuctionedData;                               // 0x0C50 (size: 0xD0)
    int32 SuctionedIndex;                                                             // 0x0D20 (size: 0x4)
    int32 LastIndex;                                                                  // 0x0D24 (size: 0x4)
    bool RecentlyFiredProjectile;                                                     // 0x0D28 (size: 0x1)

    void Local_FireReleased(bool& ShouldFire);
    void Local_FirePressed(bool& ConsumedByWeapon);
    void CanToggleUse(bool& IsUseToggleable);
    void InitMesh(TSubclassOf<class UMeshComponent> MeshComponentClass, class UMeshComponent*& MeshComponent, class USceneComponent* ParentComponent, bool FirstPerson, const FTransform& RelativeOffset);
    void Local_AttachToVacuum(class AAbiotic_PlayerCharacter_C* OwningCharacter, class USkeletalMesh* SkeletalMeshToAttach, class UStaticMesh* StaticMeshToAttach, class UAnimationAsset* NewAnimToPlay, const FTransform& MuzzleRelativeOffset, class UMaterialInterface* MaterialOverride);
    bool IsJammed();
    void OnRep_SuctionedIndex();
    bool CheckActorAgainstSuctionData(class AActor* ActorToCheck, const FVacuumSuctionableData_Struct& SuctionData);
    bool ActorToSuctionedData(class AActor* NewActor, FVacuumSuctionableData_Struct& Data);
    bool IndexToSuctionedData(int32 AmmoType, FVacuumSuctionableData_Struct& Data);
    bool TryAttachOverlappedActor();
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
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void ReceiveBeginPlay();
    void PlayFunnelFX();
    void OnUpdateSuctionedIndex();
    void Server_Request_ActorSuckedUp(class AActor* Actor);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void GunStartFiring();
    void UseToggleUpdated(bool NewActive);
    void Local_PlaySuckAnim();
    void BndEvt__Weapon_Gun_Vacuum_VacuumOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void SetVacuumSfxPlaying(bool Playing);
    void ExecuteUbergraph_Weapon_Gun_Vacuum(int32 EntryPoint);
}; // Size: 0xD29

#endif
