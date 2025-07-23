#ifndef UE4SS_SDK_Abiotic_CustomizationStruct_HPP
#define UE4SS_SDK_Abiotic_CustomizationStruct_HPP

struct FAbiotic_CustomizationStruct
{
    FString DisplayName_63_0B8B1AF54D656E42C963068B22B44D3A;                          // 0x0000 (size: 0x10)
    FString DisplayDescription_64_18455B7D443E0B763E6A259599C5CCB0;                   // 0x0010 (size: 0x10)
    TSoftObjectPtr<UTexture2D> Icon_46_908AB2E34BA99C452FF621A9A34A10A7;              // 0x0020 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> Material_47_2BCAA56043478B8F8AF097B87369896A;  // 0x0048 (size: 0x28)
    TSoftObjectPtr<UStaticMesh> StaticMesh_20_A4A408164457F857B4E91487F73D7AC1;       // 0x0070 (size: 0x28)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh_21_6AE38B6846F6DB34DA17F38E52D58FB3;   // 0x0098 (size: 0x28)
    TMap<TEnumAsByte<E_InventorySlotType::Type>, TSoftObjectPtr<USkeletalMesh>> EquipmentBasedSkeletalMeshes_57_EFA2C87B4513D9BC283DEA9A06A6F7F2; // 0x00C0 (size: 0x50)
    FGameEntitlementRowHandle DLCRequirement_72_24BA1E1C488E14F6E03B829A93DF15A8;     // 0x0110 (size: 0x20)
    FAchievementRowHandle AchievementRequired_76_F6007E5A476FADBDDBA86E864BD7CB3C;    // 0x0130 (size: 0x20)
    bool UnlockedByDefault_73_8C0F4163431DFF87062EA3ABFC8E8482;                       // 0x0150 (size: 0x1)
    FLinearColor ColorA_38_48A0590C4984FA0BF470568FBF92F889;                          // 0x0154 (size: 0x10)
    FLinearColor ColorB_39_3822B550469594F922E379847D5EBF48;                          // 0x0164 (size: 0x10)
    FLinearColor ColorC_40_9F427AD14FB5A1947B698EA1A4F8C176;                          // 0x0174 (size: 0x10)
    TEnumAsByte<E_SkinTones::Type> SkinTone_60_03519A424DBA1796501ECAA5F93B0B50;      // 0x0184 (size: 0x1)
    FGameplayTagContainer Tags_67_53C7CA184101D5AC79BCD983AF71AC7C;                   // 0x0188 (size: 0x20)

}; // Size: 0x1A8

#endif
