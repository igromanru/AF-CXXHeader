#ifndef UE4SS_SDK_Abiotic_CookableStruct_HPP
#define UE4SS_SDK_Abiotic_CookableStruct_HPP

struct FAbiotic_CookableStruct
{
    bool IsCookware_36_E60FF3174809E5F04F20E290DEF53B8C;                              // 0x0000 (size: 0x1)
    bool CanBeCooked_1_F8283E94449BB680D9E4D0B6435E50F2;                              // 0x0001 (size: 0x1)
    FDataTableRowHandle CookedItem_11_EFC590354E4A63C58C41C3982B38F7DC;               // 0x0008 (size: 0x10)
    FDataTableRowHandle BurnedItem_19_109C79FE416ADB62B4AC7E893BCD2958;               // 0x0018 (size: 0x10)
    double TimeToCookBaseline_26_EC459D4A450678325EB8409C755D7470;                    // 0x0028 (size: 0x8)
    double TimeToBurnBaseline_29_A879BF574759AE7B242961AC5B2B62BC;                    // 0x0030 (size: 0x8)
    FPlantRowHandle FarmableDataRow_48_7F52477E453E35CB6673A6914103179E;              // 0x0038 (size: 0x20)
    bool RequiresBaking_39_DBBD2AB047509D0C3B49169C342B3676;                          // 0x0058 (size: 0x1)
    int32 StartingPortions_51_A4A87C9F4D96DFB285715B9C4EF3981D;                       // 0x005C (size: 0x4)
    bool CanItemDecay_41_ED9D0360494304403FBDFAB9B4D33D35;                            // 0x0060 (size: 0x1)
    TEnumAsByte<E_InternalTemperature::Type> ItemDecayTemperature_47_E057BEE84D43178AA60FD59503C79701; // 0x0061 (size: 0x1)
    FDataTableRowHandle DecayToItem_46_BC887D114948DE4082DD63BC166B5DE2;              // 0x0068 (size: 0x10)

}; // Size: 0x78

#endif
