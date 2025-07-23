#ifndef UE4SS_SDK_Weapon_Gun_wFlashlight_HPP
#define UE4SS_SDK_Weapon_Gun_wFlashlight_HPP

class AWeapon_Gun_wFlashlight_C : public AAbiotic_Weapon_Gun_ParentBP_C
{
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0BB8 (size: 0x8)

    TArray<FItemActionRowHandle> GetPrimaryItemActionArray();
}; // Size: 0xBC0

#endif
