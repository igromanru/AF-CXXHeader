#ifndef UE4SS_SDK_WeaponCoating_Struct_HPP
#define UE4SS_SDK_WeaponCoating_Struct_HPP

struct FWeaponCoating_Struct
{
    FText CoatingName_23_70439D2A43549A0C159D00A8D3212358;                            // 0x0000 (size: 0x10)
    FText Description_4_C9E13CD54F37A575EBBB65BC3AA1C623;                             // 0x0010 (size: 0x10)
    TSoftClassPtr<UWeaponCoating_ParentBP_C> ComponentClass_9_4599932D49F046F0C21F0894901E50D2; // 0x0020 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> OverlayMaterial_21_943C4A764B2CAC0681A233B5A80F3E28; // 0x0048 (size: 0x28)
    TMap<TSubclassOf<UAbiotic_DamageType_ParentBP_C>, double> BonusDamage_14_9B90DFBD42211F7A24E1A590E3AE3D61; // 0x0070 (size: 0x50)
    TArray<FBuffDebuffRowHandle> DebuffsToApply_22_550F52D64AA49C44AB5078ABFB86C90C;  // 0x00C0 (size: 0x10)
    TSoftObjectPtr<USoundBase> HitSound_26_BDE80EDC4D0A7C95830AF181CE9931CD;          // 0x00D0 (size: 0x28)
    TSoftObjectPtr<UNiagaraSystem> HitParticle_29_FE1ADA17451AE7D1121ED388651C76C6;   // 0x00F8 (size: 0x28)
    int32 Durability_32_32E736264F21B1149FADE79D49C0AEAA;                             // 0x0120 (size: 0x4)

}; // Size: 0x124

#endif
