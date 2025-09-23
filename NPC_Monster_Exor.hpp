#ifndef UE4SS_SDK_NPC_Monster_Exor_HPP
#define UE4SS_SDK_NPC_Monster_Exor_HPP

class ANPC_Monster_Exor_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20A8 (size: 0x8)
    class UStaticMeshComponent* QuillAmmoState;                                       // 0x20B0 (size: 0x8)
    class UChildActorComponent* RadiationZone;                                        // 0x20B8 (size: 0x8)
    FDataTableRowHandle ExorProjectile;                                               // 0x20C0 (size: 0x10)
    int32 MaxBurstFire;                                                               // 0x20D0 (size: 0x4)
    int32 CurrentBurst;                                                               // 0x20D4 (size: 0x4)
    bool CurrentlyBluntDamage;                                                        // 0x20D8 (size: 0x1)
    TArray<class UStaticMeshComponent*> SpikeAmmo;                                    // 0x20E0 (size: 0x10)

    void SelectDeathAnimation(int32& SelectedIndex);
    void OnCurrentAmmoUpdated();
    TSubclassOf<class UDamageType> GetAttackDamageType();
    void CanBeCarbuncled(bool& Success);
    void OnLoaded_C3114B7445AA522DF0E8FF820598D9B5(class UObject* Loaded);
    void Server_DoRangedAttack(class AActor* ShootAtTarget, FVector ShootAtLocation, int32 BurstCount);
    void Broadcast_DoRangedAttackFX();
    void Broadcast_DoMeleeAttackFX(TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType);
    void FireWeaponFX();
    void SetRangedAttackOnCooldown();
    void PerformMeleeDamage(FVector AttemptLocation);
    void ReceiveBeginPlay();
    void ReceivedNewBuff(FBuffDebuffRowHandle BuffDebuffRowHandle);
    void Server_PerformDeathSequence();
    void OnSpawnFXStarted();
    void PerformMultiSwipe(FVector AttempLocation);
    void OnNPCEnraged(bool Enabled);
    void ExecuteUbergraph_NPC_Monster_Exor(int32 EntryPoint);
}; // Size: 0x20F0

#endif
