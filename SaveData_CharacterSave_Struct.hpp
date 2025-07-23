#ifndef UE4SS_SDK_SaveData_CharacterSave_Struct_HPP
#define UE4SS_SDK_SaveData_CharacterSave_Struct_HPP

struct FSaveData_CharacterSave_Struct
{
    bool CompletedIntro_26_7F0FCDEA4BA0DD4D229BF38724FF442C;                          // 0x0000 (size: 0x1)
    FVector LastSafeWorldLocation_30_486FB66C419E431BD6B754B0C04C9F5B;                // 0x0008 (size: 0x18)
    FString LastSafeWorldGUID_98_22FA31304F1D3CE0D223A99ED23D936E;                    // 0x0020 (size: 0x10)
    FRotator LastControlRotation_69_33E2359F425EBFDFB5CE2D84DCE6AD1B;                 // 0x0030 (size: 0x18)
    TArray<FAbiotic_InventoryItemSlotStruct> EquipmentInventory_11_78EC662B493ED43BF306CD8FD82EA45A; // 0x0048 (size: 0x10)
    TArray<FAbiotic_InventoryItemSlotStruct> HotbarInventory_12_EB0E545B44BB772E1CCFCEBF8F0170A1; // 0x0058 (size: 0x10)
    TArray<FAbiotic_InventoryItemSlotStruct> Inventory_8_758B207A48BE5E12B0022C91938F32BD; // 0x0068 (size: 0x10)
    TArray<FAbiotic_InventoryItemSlotStruct> TransmogInventory_106_927A0B6647350D453ED2F5B7E007ADDB; // 0x0078 (size: 0x10)
    TArray<bool> TransmogVisibility_109_1A641CB4456B8440A96AE58F027AD93C;             // 0x0088 (size: 0x10)
    TArray<bool> TransmogDisabledArray_145_2BA8A3F74C6661475F021A9999C06090;          // 0x0098 (size: 0x10)
    TArray<FName> Traits_15_0039F2B34D2A43327122E9960B328E55;                         // 0x00A8 (size: 0x10)
    FName PhD_42_91C6570A451A177090EE25AF113045D2;                                    // 0x00B8 (size: 0x8)
    TArray<FAbiotic_CharacterSkill_Struct> Skills_22_3287F93C42DD32FCD04E9E8295C6EDC3; // 0x00C0 (size: 0x10)
    TArray<FName> ItemsPickedUp_40_201286D74B6DA7CECD1480A56F844497;                  // 0x00D0 (size: 0x10)
    TArray<FName> RecipesUnlock_41_C6D066A3416620A76188D2A39E4D8DF9;                  // 0x00E0 (size: 0x10)
    TArray<FName> RecipesRequiringResearch_89_0A2778A74B6F1090075D8A9BEE7A0361;       // 0x00F0 (size: 0x10)
    TArray<FName> JournalEntries_79_C0F0FF544DFD1060769BBF9D2D90127C;                 // 0x0100 (size: 0x10)
    TArray<FName> EmailsRead_82_C3961BBA4AC266EDE4EC7A85E176A75E;                     // 0x0110 (size: 0x10)
    FBodyLimbHealth_Struct CharacterHealth_51_C8B0855046256D908ECD3FAC9FD050C0;       // 0x0120 (size: 0x30)
    FCharacterStatsSave_Struct CurrentSurvivalStats_61_828D08B64E0E5CCA5B7C968C1EFA0E07; // 0x0150 (size: 0x40)
    TArray<FBuffSave_Struct> CurrentBuffDebuffs_58_9E6DA0704D0DE0DEF375ACA4CFD2D80A;  // 0x0190 (size: 0x10)
    TSoftObjectPtr<ADeployed_Furniture_Bed_ParentBP_C> CurrentBed_65_AD4B63414DC6CA930DD825966CF17F32; // 0x01A0 (size: 0x28)
    bool IsCrouching_72_680FCFCC416605B90367E48F72C519EE;                             // 0x01C8 (size: 0x1)
    int32 LastHotbarSelection_75_9D56EAE8464F9FFF52C04AA7B388D489;                    // 0x01CC (size: 0x4)
    int32 CurrentMoney_85_7425E5BF43364C11279E4C8C26F5A7CA;                           // 0x01D0 (size: 0x4)
    TArray<FName> MapsUnlocked_93_E9A91D554F338AD17C73E7A6EC41EB87;                   // 0x01D8 (size: 0x10)
    TArray<FName> CraftedItems_102_5D7DF1C8402AF7997BA975ACE8206FAB;                  // 0x01E8 (size: 0x10)
    TArray<FName> Compendium_EmailSections_117_5AF84C14476FC99020114C93ED0DBDA0;      // 0x01F8 (size: 0x10)
    TArray<FName> Compendium_NarrativeSections_116_2FC6C70144FEDF460E5FE89B7CEA6B40;  // 0x0208 (size: 0x10)
    TArray<FName> Compendium_ExplorationSections_118_50A35DD9425836A07E8AB1A66CB9A8DE; // 0x0218 (size: 0x10)
    FName TerminalRespawnID_122_768A1D184AC865DC562E39A2765F34BE;                     // 0x0228 (size: 0x8)
    TArray<bool> FavoritedSlots_125_BD14BA2A40F37FA19BC7C6816BCC3F3C;                 // 0x0230 (size: 0x10)
    TArray<FName> Compendium_Fish_130_F3328DBD41952E919E4BF48486764935;               // 0x0240 (size: 0x10)
    TArray<FName> Compendium_Kill_134_68DA7D3440838FFFA0A3E996BC33C549;               // 0x0250 (size: 0x10)
    TArray<FCompendiumKillCount> Compendium_KillCount_137_580C4765460383FB00B3A0B49694B010; // 0x0260 (size: 0x10)
    TArray<FName> NewestRecipes_141_C7277E904ACCEB6C26F1FB967CADCAFA;                 // 0x0270 (size: 0x10)

}; // Size: 0x280

#endif
