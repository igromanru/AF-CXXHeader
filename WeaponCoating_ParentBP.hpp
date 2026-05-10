#ifndef UE4SS_SDK_WeaponCoating_ParentBP_HPP
#define UE4SS_SDK_WeaponCoating_ParentBP_HPP

class UWeaponCoating_ParentBP_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    FWeaponCoating_Struct CoatingData;                                                // 0x00B0 (size: 0x128)

    bool GetOwningPlayerCharacter(class AAbiotic_PlayerCharacter_C*& AsAbiotic Player Character);
    void ShouldConsumeResource(bool& Consume);
    void ShouldBypassDamageResistance(bool& ShouldBypass);
    void ProcessBonusDamage(class AActor* Target, TSubclassOf<class UDamageType> DamageType, float Damage, const FHitResult& Hit);
    void Server_OnDamageApplied(class AActor* Target, double RawDamage, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, FHitResult HitResult, bool IsMelee);
    void ExecuteUbergraph_WeaponCoating_ParentBP(int32 EntryPoint);
}; // Size: 0x1D8

#endif
