#ifndef UE4SS_SDK_Projectile_ThrownWeapon_HPP
#define UE4SS_SDK_Projectile_ThrownWeapon_HPP

class AProjectile_ThrownWeapon_C : public AAbioticProjectile_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0710 (size: 0x8)
    FAbiotic_WeaponStruct WeaponData;                                                 // 0x0718 (size: 0x1A0)
    FDataTableRowHandle ItemDataRow;                                                  // 0x08B8 (size: 0x10)
    FInventorySlotSelected_Struct OriginalHotbarSlot;                                 // 0x08C8 (size: 0x10)
    float ReturnDelay;                                                                // 0x08D8 (size: 0x4)
    class AAbiotic_Item_Dropped_C* SpawnedItem;                                       // 0x08E0 (size: 0x8)
    float ReturnMaxDespawnTime;                                                       // 0x08E8 (size: 0x4)

    void CalculateDamageForThrownWeapon(double& OutputDamage);
    double Get New Speed Based On Throwing Skill(float BaseValue);
    void SetThrownWeaponDamage(bool ItemIsWeapon, double ItemWeight);
    void OnRep_SpawnedItem();
    void TryReturnSpawnImpactItemToSlot(class AAbiotic_Item_Dropped_C*& SpawnImpactItem, bool& Success);
    void ReceiveBeginPlay();
    void Server_StartDealDamage();
    void SetAlternateProjectileMesh();
    void DoActionBeforeProjectileDestroy(const class AActor*& SpawnImpactActor);
    void BroadcastTeleportFX(class AAbiotic_Item_Dropped_C* ActorToTeleport);
    void Server_ApplyPointDamage();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_Projectile_ThrownWeapon(int32 EntryPoint);
}; // Size: 0x8EC

#endif
