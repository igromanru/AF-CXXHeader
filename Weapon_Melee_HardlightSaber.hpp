#ifndef UE4SS_SDK_Weapon_Melee_HardlightSaber_HPP
#define UE4SS_SDK_Weapon_Melee_HardlightSaber_HPP

class AWeapon_Melee_HardlightSaber_C : public AAbiotic_Weapon_Melee_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B68 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B70 (size: 0x8)
    float DeflectedHitscanConeAngle;                                                  // 0x0B78 (size: 0x4)
    TArray<FHitResult> RecentHitArray;                                                // 0x0B80 (size: 0x10)
    TArray<class TSubclassOf<UDamageType>> DamageTypes;                               // 0x0B90 (size: 0x10)
    bool RecentlyBlocked;                                                             // 0x0BA0 (size: 0x1)
    bool RecentlyAttacked;                                                            // 0x0BA1 (size: 0x1)

    void ReduceEnergyOnHit(const FHitResult& Hit);
    bool CanCurrentlyShieldBlock(class AActor* DamageCauser, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageTypeClass, double& DamagePassthroughPercent);
    void ReceiveBeginPlay();
    void TryPerformBatteryChangeOnUse();
    void BlockProjectile(FHitResult Hit Result, class AAbioticProjectile_ParentBP_C* Projectile);
    void BlockHitscanRanged(FHitResult HitResult, class AActor* Instigator, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void Broadcast_RangedAttack(const TArray<FHitResult>& Hits, const TArray<class TSubclassOf<UDamageType>>& DamageTypes);
    void Broadcast_BlockFX();
    void Broadcast_OnMeleeSwing();
    void Server_FinishBlock();
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void ExecuteUbergraph_Weapon_Melee_HardlightSaber(int32 EntryPoint);
}; // Size: 0xBA2

#endif
