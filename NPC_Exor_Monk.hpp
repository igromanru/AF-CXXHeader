#ifndef UE4SS_SDK_NPC_Exor_Monk_HPP
#define UE4SS_SDK_NPC_Exor_Monk_HPP

class ANPC_Exor_Monk_C : public ANPC_Monster_Exor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20F0 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x20F8 (size: 0x8)
    class USkeletalMeshComponent* TorsoArmor;                                         // 0x2100 (size: 0x8)
    class USkeletalMeshComponent* HeadArmor;                                          // 0x2108 (size: 0x8)
    class USkeletalMeshComponent* LegArmor;                                           // 0x2110 (size: 0x8)
    float AttackWindupTime;                                                           // 0x2118 (size: 0x4)
    bool CastingAttack;                                                               // 0x211C (size: 0x1)
    class UNiagaraComponent* CastingBeam;                                             // 0x2120 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypesArray;                           // 0x2128 (size: 0x10)
    FVector Impact Point;                                                             // 0x2138 (size: 0x18)
    FVector PreviousLocation;                                                         // 0x2150 (size: 0x18)

    void OnCurrentAmmoUpdated();
    FRotator GetPortalRotation(FVector InLocation);
    FRotator GetDirectionToTarget();
    void UserConstructionScript();
    void FireWeaponFX();
    void Broadcast_BeamAttack(FVector TargetHitLocation);
    void Server_DoRangedAttack(class AActor* ShootAtTarget, FVector ShootAtLocation, int32 BurstCount);
    void ReceiveTick(float DeltaSeconds);
    void Broadcast_WindupAttack();
    void Broadcast_CombatAbility3();
    void Broadcast_DoRangedAttackFX();
    void Broadcast_TeleportFX(FVector PreviousLocation, FVector NewLocation);
    void PerformMeleeDamage(FVector AttemptLocation);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NPC_Exor_Monk(int32 EntryPoint);
}; // Size: 0x2168

#endif
