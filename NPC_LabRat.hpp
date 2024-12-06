#ifndef UE4SS_SDK_NPC_LabRat_HPP
#define UE4SS_SDK_NPC_LabRat_HPP

class ANPC_LabRat_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1EC8 (size: 0x8)
    class UNiagaraComponent* RadiationFX;                                             // 0x1ED0 (size: 0x8)
    class UChildActorComponent* RadiationZone;                                        // 0x1ED8 (size: 0x8)
    class USceneComponent* LootDropLocation;                                          // 0x1EE0 (size: 0x8)
    class UStaticMeshComponent* backpack;                                             // 0x1EE8 (size: 0x8)
    class UStaticMeshComponent* ShoulderLampBeam;                                     // 0x1EF0 (size: 0x8)
    class USpotLightComponent* ShoulderLamp;                                          // 0x1EF8 (size: 0x8)
    class USkeletalMeshComponent* Scanner;                                            // 0x1F00 (size: 0x8)
    double VoicePitch;                                                                // 0x1F08 (size: 0x8)
    bool HasShoulderLight;                                                            // 0x1F10 (size: 0x1)
    bool FlashlightOn;                                                                // 0x1F11 (size: 0x1)
    class USoundBase* WeaponFireSound;                                                // 0x1F18 (size: 0x8)
    FDataTableRowHandle HelmetLoot;                                                   // 0x1F20 (size: 0x10)
    class UNiagaraSystem* MuzzleFlashFX;                                              // 0x1F30 (size: 0x8)
    bool HitTarget;                                                                   // 0x1F38 (size: 0x1)
    int32 GruntBurstCount;                                                            // 0x1F3C (size: 0x4)
    float GruntBurstTimeBetweenShots;                                                 // 0x1F40 (size: 0x4)
    int32 RemainingLootDrops;                                                         // 0x1F44 (size: 0x4)
    TArray<FDataTableRowHandle> LabRatLoot;                                           // 0x1F48 (size: 0x10)
    bool RecentlyNetted;                                                              // 0x1F58 (size: 0x1)
    FVector LastLootDropLocation;                                                     // 0x1F60 (size: 0x18)
    double MinimumLootDropDistance;                                                   // 0x1F78 (size: 0x8)

    void TargetableByTurrets(bool& Targetable);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void DropLoot();
    void All_PerformDeathSequence();
    void Server_PerformDeathSequence();
    void DropLabRatLoot(bool SkipDistanceCheck);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void OnNotifyEnd_5290A46C486CD2129080A1A91A07D1DB(FName NotifyName);
    void OnNotifyBegin_5290A46C486CD2129080A1A91A07D1DB(FName NotifyName);
    void OnInterrupted_5290A46C486CD2129080A1A91A07D1DB(FName NotifyName);
    void OnBlendOut_5290A46C486CD2129080A1A91A07D1DB(FName NotifyName);
    void OnCompleted_5290A46C486CD2129080A1A91A07D1DB(FName NotifyName);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void PerformIdleAbility();
    void Broadcast_ScanEnvironment();
    void ToggleScanFX(bool Show);
    void Broadcast_MeleeAttackImpact(FHitResult Hit, TSubclassOf<class UDamageType> DamageHitType);
    void ReceiveBeginPlay();
    void BuffTagsUpdated();
    void ExecuteUbergraph_NPC_LabRat(int32 EntryPoint);
}; // Size: 0x1F80

#endif
