#ifndef UE4SS_SDK_Abiotic_InventoryChangeableDataStruct_HPP
#define UE4SS_SDK_Abiotic_InventoryChangeableDataStruct_HPP

struct FAbiotic_InventoryChangeableDataStruct
{
    FString AssetID_25_06DB7A12469849D19D5FC3BA6BEDEEAB;                              // 0x0000 (size: 0x10)
    double CurrentItemDurability_4_24B4D0E64E496B43FB8D3CA2B9D161C8;                  // 0x0010 (size: 0x8)
    double MaxItemDurability_6_F5D5F0D64D4D6050CCCDE4869785012B;                      // 0x0018 (size: 0x8)
    int32 CurrentStack_9_D443B69044D640B0989FD8A629801A49;                            // 0x0020 (size: 0x4)
    int32 CurrentAmmoInMagazine_12_D68C190F4B2FA78A4B1D57835B95C53D;                  // 0x0024 (size: 0x4)
    int32 LiquidLevel_46_D6414A6E49082BC020AADC89CC29E35A;                            // 0x0028 (size: 0x4)
    TEnumAsByte<E_LiquidType::Type> CurrentLiquid_19_3E1652F448223AAE5F405FB510838109; // 0x002C (size: 0x1)
    FDataTableRowHandle TextureVariantRow_28_1C7CF7A0441335E8AC4EA7B5CA91F636;        // 0x0030 (size: 0x10)
    FCagedCreature_Struct CagedCreature_33_6F66BC4947E914446880748146100A7B;          // 0x0040 (size: 0x60)
    FAbiotic_Cooking_Struct CookingData_37_E5F8C01943C24A15AF940F91A7E6662B;          // 0x00A0 (size: 0x30)
    bool DynamicState_39_7597AC6549E292B931C61BB13C9E42EB;                            // 0x00D0 (size: 0x1)
    FString PlayerMadeString_42_CC0B72B24DBEAB2CC04454AAFFD4BBE9;                     // 0x00D8 (size: 0x10)
    FGameplayTagContainer GameplayTags_45_1A018E824E25CC7BA608A6B2835209A1;           // 0x00E8 (size: 0x20)
    TArray<FDynamicProperty> DynamicProperties_50_5C138DB145048726E8C0FEAC7C9600F7;   // 0x0108 (size: 0x10)

}; // Size: 0x118

#endif
