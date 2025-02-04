#ifndef UE4SS_SDK_Assault_Struct_HPP
#define UE4SS_SDK_Assault_Struct_HPP

struct FAssault_Struct
{
    EReleaseGroup ReleaseGroup_67_264EAB4041DDC1ECE8CDC499D4161538;                   // 0x0000 (size: 0x1)
    TArray<FDataTableRowHandle> WorldFlagsRequired_41_86C964A143E4882D32CBE898EAC1D25D; // 0x0008 (size: 0x10)
    TEnumAsByte<E_AssaultSpawnMethod::Type> AssaultSpawnMethod_40_45A45EFC4865CA0BEF4407AAB1065DCA; // 0x0018 (size: 0x1)
    TArray<FDataTableRowHandle> NPCSpawnOrder_7_290A2E7D4DC55FDC7A94ECBA3D298857;     // 0x0020 (size: 0x10)
    TArray<FDataTableRowHandle> NPCFinalBoss_31_590B2CE0411EF10F4084D789AD359DAD;     // 0x0030 (size: 0x10)
    bool RandomSpawnOrder_28_6DAA6064481E33953D79EBAE4D362975;                        // 0x0040 (size: 0x1)
    FText AssaultWarningText_18_284D22564719BD07A425ACA3639B5BBC;                     // 0x0048 (size: 0x10)
    FText AssaultStartedText_19_1C0D1F3247831C1BF02A73882F8399D5;                     // 0x0058 (size: 0x10)
    TEnumAsByte<E_AnnouncementType::Type> AssaultWarningAnnounceLine_64_A84CFBE3496B86EEEF010E9CA2BF8A77; // 0x0068 (size: 0x1)
    class USoundBase* AssaultWarningSound_37_9C509661465E8ACB2DE943ABA585C1AB;        // 0x0070 (size: 0x8)
    class USoundBase* AssaultStartSound_35_4C12A2EC4C2B953ED7CD86922FABDAAF;          // 0x0078 (size: 0x8)
    double AssaultPrepTime_58_3CA2B5904E9FE2EB428ABEAFF52C6B4E;                       // 0x0080 (size: 0x8)
    double SpawnRate_Wave1_51_A581A0FF4929204673F831B606F107BB;                       // 0x0088 (size: 0x8)
    double SpawnRate_Wave2_52_C22A1E2D460359824DC44C976D16912F;                       // 0x0090 (size: 0x8)
    double SpawnRate_Wave3_53_103CE75749AD731024F5C1BDA2F877DC;                       // 0x0098 (size: 0x8)
    double SpawnRate_BossWave_54_256D1A7141EFD7796B16D998642B14C9;                    // 0x00A0 (size: 0x8)

}; // Size: 0xA8

#endif
