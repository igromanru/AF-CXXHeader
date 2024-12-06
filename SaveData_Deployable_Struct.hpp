#ifndef UE4SS_SDK_SaveData_Deployable_Struct_HPP
#define UE4SS_SDK_SaveData_Deployable_Struct_HPP

struct FSaveData_Deployable_Struct
{
    TSoftClassPtr<AAbioticDeployed_ParentBP_C> Class_77_84FAE6234D772064CD9B659BA5046B1C; // 0x0000 (size: 0x28)
    FSoftObjectPath ActorPath_164_90AA6DAB481E5DC2E125A3A94475F44D;                   // 0x0028 (size: 0x20)
    FAbiotic_InventoryChangeableDataStruct ChangableData_37_6153F4A94F01A776C108038B7F38E256; // 0x0048 (size: 0x118)
    bool DeployableDestroyed_56_80BF5DDE46C5F8C6E6CD9EBF6A695E5E;                     // 0x0160 (size: 0x1)
    bool BrokeWhenPackaged_63_852033BB4713434A14C0D5B5792BA116;                       // 0x0161 (size: 0x1)
    bool HasBeenPackaged_59_9C1C3E4D4D61B7BC4E7D13A1B993E1B0;                         // 0x0162 (size: 0x1)
    FTransform Transform_50_85E8B13D40141C9B1308F4BB943BD753;                         // 0x0170 (size: 0x60)
    bool DeployedByPlayer_71_EA4E6F5C4DBE9C472BC1D1B3ADEE0205;                        // 0x01D0 (size: 0x1)
    bool ConstructionMode_82_B226CF9D4E57045A9835B39D8D7AF98D;                        // 0x01D1 (size: 0x1)
    double ConstructionLevel_85_460528D64DD6D1712C19198BC316254B;                     // 0x01D8 (size: 0x8)
    TArray<FSaveData_Inventories_Struct> ContainerInventories_110_3A680B7244ACB095D963B786D9BB6ECB; // 0x01E0 (size: 0x10)
    TArray<bool> ActiveSeats_135_E030A01B4CB15C1F95700EA3945F2A85;                    // 0x01F0 (size: 0x10)
    TArray<FSaveData_ItemProxy_Struct> ItemProxies_149_E2E145CE4015C4EDFA89E2B0CE3F579A; // 0x0200 (size: 0x10)
    FString CustomTextDisplay_152_B59A50C74001B5D2234D9E9B0D7CAB7F;                   // 0x0210 (size: 0x10)
    bool FoundByPlayer_154_B3A0D3F6458C7DAD36E130B39DAEDBE3;                          // 0x0220 (size: 0x1)
    TArray<FVector> Supports_158_FE0D33184131D1E1C73782B44057EB5C;                    // 0x0228 (size: 0x10)
    bool NoResetVignette_161_C76AFFC84B04AA28B73A65836D6BB265;                        // 0x0238 (size: 0x1)

}; // Size: 0x239

#endif
