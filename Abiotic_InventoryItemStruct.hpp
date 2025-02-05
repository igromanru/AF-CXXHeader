#ifndef UE4SS_SDK_Abiotic_InventoryItemStruct_HPP
#define UE4SS_SDK_Abiotic_InventoryItemStruct_HPP

struct FAbiotic_InventoryItemStruct
{
    EReleaseGroup ReleaseGroup_158_2CCCBCAF4605A9126DF940B39061D361;                  // 0x0000 (size: 0x1)
    FText ItemName_51_B88648C048EE5BC2885E4E95F3E13F0A;                               // 0x0008 (size: 0x10)
    FText ItemDescription_38_E5F7B38A4F3C41EB9DA52CA14654D303;                        // 0x0018 (size: 0x10)
    FText ItemFlavorText_39_12D05DD74EA145A5E7D1159C7F326177;                         // 0x0028 (size: 0x10)
    FText ToInteractWith_Text_66_C2148289464D5AAA4D19BBA13F15FE41;                    // 0x0038 (size: 0x10)
    FText ToLongInteractWith_Text_68_4FBE88F341B6A020E3216CA026A1E4E8;                // 0x0048 (size: 0x10)
    FText ToPackage_Text_71_5094104748FCB4BD2F90C99A2C4C49A8;                         // 0x0058 (size: 0x10)
    FText ToLongPackage_Text_72_CB77853E49960F43E6422C90DC967508;                     // 0x0068 (size: 0x10)
    TSoftObjectPtr<UTexture2D> InventoryIcon_50_57AF4D5548B1985502D209AB8854A797;     // 0x0078 (size: 0x28)
    TSoftClassPtr<AAbiotic_Item_ParentBP_C> ItemClass_7_A94CF32A438C7DF014B8E2AF8D01B0AB; // 0x00A0 (size: 0x28)
    TSoftObjectPtr<UStaticMesh> WorldStaticMesh_19_71632A4B4A368D299BD41EA07881A95D;  // 0x00C8 (size: 0x28)
    double Scale_WorldMesh_143_AF66D856410026FCC19E70AC421B3667;                      // 0x00F0 (size: 0x8)
    double Scale_FirstPersonMesh_146_6AFCDB94484AE7625E73C6AFB835D21F;                // 0x00F8 (size: 0x8)
    double Scale_TPHeldMesh_145_6826D00A4F30AEDBF62E02892E4261E6;                     // 0x0100 (size: 0x8)
    double Scale_Cooking_152_328507B94E0FE12E2E2A938B5D4E8429;                        // 0x0108 (size: 0x8)
    double Scale_Hologram_155_D2482E9E445F3E18BD348CB4D4FD231D;                       // 0x0110 (size: 0x8)
    TSoftObjectPtr<USkeletalMesh> WorldSkeletalMesh_21_47A91367436724AEA6B6DA8259262399; // 0x0118 (size: 0x28)
    TSoftObjectPtr<UAnimSequence> WorldSkeletalMeshAnimation_22_90C4D72A48FA0FE5D934D880B2BF2943; // 0x0140 (size: 0x28)
    TSoftClassPtr<AAbioticDeployed_ParentBP_C> DeployedItemClass_33_2CB440284F44C59CE124E4A806544272; // 0x0168 (size: 0x28)
    TSoftObjectPtr<UStaticMesh> DeployHologramMesh_55_E52DCCC54303C0963597E2A66F16A038; // 0x0190 (size: 0x28)
    TEnumAsByte<E_DeployableOrientations::Type> PlacementOrientationsAllowed_122_75894D7C4B93F103C06AB18421167757; // 0x01B8 (size: 0x1)
    bool CanLoseDurability_29_42EA515F4AC1EC69D8480DB36C01D5E1;                       // 0x01B9 (size: 0x1)
    double MaxItemDurability_31_6EBCEFC943F9E85DE9350BBC0E249447;                     // 0x01C0 (size: 0x8)
    double ChanceToLoseDurability_97_DF967C464092E2E6AEEBFE84C536ACAB;                // 0x01C8 (size: 0x8)
    FAbiotic_ItemDropStruct RepairItem_106_C2E89B0B4B7F39FC3B2B828BBD13A391;          // 0x01D0 (size: 0x68)
    int32 StackSize_47_D124F11B4B6D9766B2B33699795845A9;                              // 0x0238 (size: 0x4)
    double Weight_119_CE7DB430417207921D739CAF458D4D7C;                               // 0x0240 (size: 0x8)
    bool TryPlaceInHotbar_128_F78F6AA34A238AEAB278F48066C080BF;                       // 0x0248 (size: 0x1)
    bool IsWeapon_63_57F6A703413EA260B1455CA81F2D4911;                                // 0x0249 (size: 0x1)
    FAbiotic_WeaponStruct WeaponData_61_3C29CF6C4A7F9DD435F9318FEE4B033D;             // 0x0250 (size: 0x1A0)
    FAbiotic_Equipment_Struct EquipmentData_100_576D05464F36104AFE501B878255E318;     // 0x03F0 (size: 0xB8)
    FDataTableRowHandle FPAnimationData_103_FFAE11A04A2E52F39BDCF5BA02948877;         // 0x04A8 (size: 0x10)
    FName FPAttachSocket_116_9BBC31B44A0C8DC200B003806CB6F10A;                        // 0x04B8 (size: 0x8)
    FName TPAttachSocket_135_5DABD45F4B7CC7412C24F2A96BE45603;                        // 0x04C0 (size: 0x8)
    FDataTableRowHandle SalvageData_81_DA79A7E04A8ED68D8B7D2F912AF0AEBB;              // 0x04C8 (size: 0x10)
    FAbiotic_Consumable_Struct ConsumableData_84_757B6B114FF23016981BEF888A31C670;    // 0x04D8 (size: 0x90)
    FAbiotic_CookableStruct CookableData_94_7EFD1F0A4A7EFB44D3D8B9B14581BF36;         // 0x0568 (size: 0x78)
    FAbiotic_LiquidStruct LiquidData_110_4D07F09C483C1E65B39024ABC7032FA0;            // 0x05E0 (size: 0x30)
    TArray<FDataTableRowHandle> ItemUseFlags_127_753F84CF4AE10832188BD88A31F94F87;    // 0x0610 (size: 0x10)
    FDataTableRowHandle TextureVariant_132_ADE79DC6445FF43625192BAF413DD666;          // 0x0620 (size: 0x10)
    FGameplayTagContainer GameplayTags_138_C253BD3B4A4A21569AFC138CF0DDB59A;          // 0x0630 (size: 0x20)

}; // Size: 0x650

#endif
