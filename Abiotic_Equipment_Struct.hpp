#ifndef UE4SS_SDK_Abiotic_Equipment_Struct_HPP
#define UE4SS_SDK_Abiotic_Equipment_Struct_HPP

struct FAbiotic_Equipment_Struct
{
    TEnumAsByte<E_InventorySlotType::Type> EquipSlot_5_7DAF59D54ADD37B8594D91A65C47292E; // 0x0000 (size: 0x1)
    bool CanAutoEquip_7_8C31C7864D1203170E1ED4B7CD8D86B7;                             // 0x0001 (size: 0x1)
    int32 ArmorBonus_18_84B6DFE74803168AF5603BB0EEE8EA4B;                             // 0x0004 (size: 0x4)
    int32 HeatResist_52_E754E64545126A0A6EB82EAE3DCC4843;                             // 0x0008 (size: 0x4)
    int32 ColdResist_53_B79B22384620D27871F4C4B5F6669791;                             // 0x000C (size: 0x4)
    TMap<TSubclassOf<UAbiotic_DamageType_ParentBP_C>, double> DamageMitigationType_26_A9588042478434D0454984B9FC9DDD3B; // 0x0010 (size: 0x50)
    bool IsContainer_13_34FE7C954474C022C6AEE48F5F8BA8AC;                             // 0x0060 (size: 0x1)
    int32 ContainerCapacity_20_DC743D864AC6607638E3D2B6D044F42D;                      // 0x0064 (size: 0x4)
    double ContainerWeightReduction_37_EDAD1C7B4B78383E02330C9186D35A2F;              // 0x0068 (size: 0x8)
    TSoftObjectPtr<USoundCue> InventoryPlaceSound_34_091D6ABA48452BFC350009A3FB09DCA5; // 0x0070 (size: 0x28)
    FSetBonusRowHandle SetBonus_47_CB28322D474A62221039CC98B6274502;                  // 0x0098 (size: 0x20)

}; // Size: 0xB8

#endif
