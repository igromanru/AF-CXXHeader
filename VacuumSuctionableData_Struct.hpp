#ifndef UE4SS_SDK_VacuumSuctionableData_Struct_HPP
#define UE4SS_SDK_VacuumSuctionableData_Struct_HPP

struct FVacuumSuctionableData_Struct
{
    int32 ID_7_71E52F0A4275CA4CE332E682B688B924;                                      // 0x0000 (size: 0x4)
    FDataTableRowHandle ProjectileClass_30_E8DA4E2D4206283224F44092F76435AD;          // 0x0008 (size: 0x10)
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh_15_6C6CB8174C463FEDA5DEE89751BC882B;   // 0x0018 (size: 0x28)
    class USoundBase* SuckInSFX_25_8D682FE7421AD9D8365B69A0C207AB80;                  // 0x0040 (size: 0x8)
    class UAnimSequence* StuckAnim_29_CBF2C856436ADD5857F54CA7D0E9F4E1;               // 0x0048 (size: 0x8)
    FTransform TransformOffset_35_38926579414FC4164D7F92BE8550782E;                   // 0x0050 (size: 0x60)
    class UMaterialInterface* MaterialOverride_39_7B3B4B154B77CA26D224B784646D06D7;   // 0x00B0 (size: 0x8)
    TArray<FDataTableRowHandle> CompatibleProjectiles_45_2F53DB424ED84CCDB5E3FF87EB1D7732; // 0x00B8 (size: 0x10)

}; // Size: 0xC8

#endif
