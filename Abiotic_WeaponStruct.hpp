#ifndef UE4SS_SDK_Abiotic_WeaponStruct_HPP
#define UE4SS_SDK_Abiotic_WeaponStruct_HPP

struct FAbiotic_WeaponStruct
{
    bool Melee_1_AB17935A4F944DCEEB1AB3A5B598E702;                                    // 0x0000 (size: 0x1)
    FDataTableRowHandle MeleeSwingData_80_EA5C63F44178A08106BE41B8F7D8DE36;           // 0x0008 (size: 0x10)
    FAbiotic_SkeletalWeapon_Struct SkeletalData_64_E0F5C13A4352D5DD3F09BCA89E206150;  // 0x0018 (size: 0x38)
    class USoundCue* FireSound_29_ACAACB32480D71F2E04FBC90CC2B2F29;                   // 0x0050 (size: 0x8)
    TSoftClassPtr<AAbioticProjectile_ParentBP_C> OptionalProjectileToFire_25_D40C00D0454A9F57AB0519BEB5370672; // 0x0058 (size: 0x28)
    double TimeBetweenShots_8_71ACC9414B36314DEF34B3A54649941C;                       // 0x0080 (size: 0x8)
    double MaximumHitscanRange_26_F36D29CA48831A6C3AD49EB94F5D2BE2;                   // 0x0088 (size: 0x8)
    double DamagePerHit_16_F95199D1425C37191C55CDA0DC07BDDC;                          // 0x0090 (size: 0x8)
    double BulletSpread_Min_38_08ADC0BA4BEA02135BE0438A60AE5725;                      // 0x0098 (size: 0x8)
    double BulletSpread_Max_39_4AE2E5744A934A3FFCEC2A9D7A1A6963;                      // 0x00A0 (size: 0x8)
    TSubclassOf<class UDamageType> DamageType_Hitscan_90_494ECC1043D5471AAB8B09AC08A80D80; // 0x00A8 (size: 0x8)
    double RecoilAmount_42_85AFA9834A1CABF8183C088D857840EE;                          // 0x00B0 (size: 0x8)
    int32 PelletCount_77_4504318146345E7029C78790B317E074;                            // 0x00B8 (size: 0x4)
    int32 MagazineSize_57_E890A3944240BB8D07EF0B9251F1FBD4;                           // 0x00BC (size: 0x4)
    bool RequireAmmo_85_8BB1C1954D2A83BB1994549DDEEBA306;                             // 0x00C0 (size: 0x1)
    FDataTableRowHandle AmmoType_54_D19EDD9E48E4252D492757BFAAC23A73;                 // 0x00C8 (size: 0x10)
    TArray<FDataTableRowHandle> AmmoTypes_99_6514B50249092C020B24F9ABF9AF0E37;        // 0x00D8 (size: 0x10)
    FDataTableRowHandle TPAnimationData_67_BE1F9C6445BEEFAE8A0C26AB7E43EA93;          // 0x00E8 (size: 0x10)
    TEnumAsByte<E_SecondaryAttackTypes::Type> SecondaryAttack_82_0ADE2DC74388F34F125F0DB6D9AAC1CD; // 0x00F8 (size: 0x1)
    double LoudnessOnPrimaryUse_74_7829648A4C3F44A62DCA09B3817DF796;                  // 0x0100 (size: 0x8)
    double LoudnessOnSecondaryUse_73_89AB59C84EBC77DEB5DD2C9C88E9C237;                // 0x0108 (size: 0x8)
    FLoadedAmmoVisual_Struct AmmoVisuals_88_A93123464F0C80A9B3E5C793FD0EB2DC;         // 0x0110 (size: 0x78)
    TEnumAsByte<E_UnderwaterUsage::Type> UnderwaterState_95_972463794CBCCEA48AC987A7FA4C0118; // 0x0188 (size: 0x1)
    int32 BurstFireCount_102_880FB81B4CA5EC7F7B5D6FBDE68275B8;                        // 0x018C (size: 0x4)
    double MaxAimCorrection_105_366DD6AB4598DCFBDC2188A398104400;                     // 0x0190 (size: 0x8)
    int32 TracerPerShots_109_2C6FA21B4843F16184542BB461F62BD3;                        // 0x0198 (size: 0x4)

}; // Size: 0x19C

#endif
