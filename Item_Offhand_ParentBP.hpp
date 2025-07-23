#ifndef UE4SS_SDK_Item_Offhand_ParentBP_HPP
#define UE4SS_SDK_Item_Offhand_ParentBP_HPP

class AItem_Offhand_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B18 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* CurrentOwner;                                   // 0x0B20 (size: 0x8)
    FInventorySlotSelected_Struct CurrentSlot;                                        // 0x0B28 (size: 0x10)
    double LastTimeUsed;                                                              // 0x0B38 (size: 0x8)

    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void Server_GetAmmoConsumeAmount(double ChargeAmount, int32& AmountToConsume);
    void IsItemUseOnCooldown(bool& OnCooldown);
    void Local Check Ammo(bool& CanFire);
    int32 GetCurrentAmmoInMagazine();
    void ConsumeAmmunition(int32 Amount, bool Force, bool& AmmoConsumed);
    void GetProjectileInfoFromItemData(TSoftClassPtr<AAbioticProjectile_ParentBP_C>& OptionalProjectileToFire, TSubclassOf<class UDamageType>& DamageType_Hitscan);
    void OnLoaded_A10EA0DE4C447E1E84817BAC7C3A4AD2(UClass* Loaded);
    void ReceiveBeginPlay();
    void Request_FireProjectileOffhand(double Charge, int32 Pellets, FVector MuzzleFireLocation, FVector ForwardVector);
    void Local_DoMeleeAttack_Event();
    void TryAutoSecondary();
    void Server_OnMeleeHit(const FHitResult& Hit);
    void ExecuteUbergraph_Item_Offhand_ParentBP(int32 EntryPoint);
}; // Size: 0xB40

#endif
