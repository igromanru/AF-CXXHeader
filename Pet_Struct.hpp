#ifndef UE4SS_SDK_Pet_Struct_HPP
#define UE4SS_SDK_Pet_Struct_HPP

struct FPet_Struct
{
    FDataTableRowHandle DefaultParent_92_E299651B42ECBE86B17DF9A341D20BE0;            // 0x0000 (size: 0x10)
    FBodyLimbHealth_Struct HealthBase_42_DC63F7534C0EE2B080FAD089DF0F6769;            // 0x0010 (size: 0x30)
    FBodyLimbHealth_Struct HealthBonusPerLevel_32_FE45751A41BB7EE47D904280E587CF44;   // 0x0040 (size: 0x30)
    double BaseDamage_43_E70DF73543BB0A9344BCA08C0F48ACA2;                            // 0x0070 (size: 0x8)
    double BaseRangedDamage_51_5BD9E5ED491CCB6B98FDFB8B9E243508;                      // 0x0078 (size: 0x8)
    double DamageBonusPerLevel_35_6C0F4EDB4450401E56BF3E8FCE448561;                   // 0x0080 (size: 0x8)
    double BaseSpecial_82_FECA2F094F01CDF400EAFC8BE84DD731;                           // 0x0088 (size: 0x8)
    double SpecialBonusPerLevel_84_DFF632DC47A68293C29B128BEEFD34CD;                  // 0x0090 (size: 0x8)
    int32 DefaultLevel_54_C562DD66454C64AAF42354A0458A10D5;                           // 0x0098 (size: 0x4)
    FCompendiumEntryRowHandle PettingCompendiumUnlock_95_6BD8A226491FE22D6EB2C387CBA7D384; // 0x00A0 (size: 0x20)
    TArray<FDataTableRowHandle> TamingFood_45_9D007FD140E49E131C5D058D7CEFDDAF;       // 0x00C0 (size: 0x10)
    TArray<FPetMutations_Struct> Mutations_48_406F839C431B517C76CD77989812E90F;       // 0x00D0 (size: 0x10)
    TSoftObjectPtr<UAnimMontage> FeedAnim_6_896C52824A51D9E573968093E74AA64A;         // 0x00E0 (size: 0x28)
    TSoftObjectPtr<USoundBase> FeedAudio_23_7D51B6F9485D6FBC1FC9A1B54F668359;         // 0x0108 (size: 0x28)
    TSoftObjectPtr<USoundBase> FeedMutationAudio_72_A1C9973C4AD2C2EDC659FD94AEE7DEFC; // 0x0130 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> FeedDeclinedAnim_25_F2F48434436E2613F4A81D876BE9E10D; // 0x0158 (size: 0x28)
    TSoftObjectPtr<USoundBase> HungryAudio_65_A4FC9C7F41BD58F01B4A19B7E836B3F2;       // 0x0180 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> PetAnim_26_9951AEB349B28F584BC0298057D0219E;         // 0x01A8 (size: 0x28)
    TSoftObjectPtr<USoundBase> PetAudio_27_5FAC21A34F17A6AC4CF29F8D083F5EA7;          // 0x01D0 (size: 0x28)
    TSoftObjectPtr<USoundBase> FollowStartAudio_66_D566729F418E40B59FF2E0AD28043CC8;  // 0x01F8 (size: 0x28)
    TSoftObjectPtr<USoundBase> PickedUpAudio_68_E6291BCC49BD02C311BC839F8E272469;     // 0x0220 (size: 0x28)
    TSoftObjectPtr<UAnimSequence> SleepAnim_96_FB14A33F4F93D0826F0C2F9105515322;      // 0x0248 (size: 0x28)
    TSoftObjectPtr<UStaticMesh> CollarMesh_60_681C9D6241D34104ABA8A8A35B74E452;       // 0x0270 (size: 0x28)
    FAudioOverrideMap AudioOverrides_90_059F00C44D7E37B4582392855CAC2DA2;             // 0x0298 (size: 0x50)

}; // Size: 0x2E8

#endif
