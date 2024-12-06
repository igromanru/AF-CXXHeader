#ifndef UE4SS_SDK_Abiotic_Consumable_Struct_HPP
#define UE4SS_SDK_Abiotic_Consumable_Struct_HPP

struct FAbiotic_Consumable_Struct
{
    double TimeToConsume_32_8034526445B400D3948365AF202D7D0E;                         // 0x0000 (size: 0x8)
    double HungerFill_5_0F5B3F3B46E595BD90371AA8D9C70A99;                             // 0x0008 (size: 0x8)
    double ThirstFill_11_5F6F7BB94AF9FA42F990CF96FBE5B478;                            // 0x0010 (size: 0x8)
    double FatigueFill_12_E90E1C3846E743D359DFC29B6B932BBC;                           // 0x0018 (size: 0x8)
    double ContinenceFill_13_2B1EC44C41E46984971A9F95E6CFB3E7;                        // 0x0020 (size: 0x8)
    double SanityFill_15_EA5C94304AEC5881C4A2C5A262CE916A;                            // 0x0028 (size: 0x8)
    double TemperatureChange_14_9C12C233407D10A07EE1828308D28927;                     // 0x0030 (size: 0x8)
    double RadiationChange_28_A69AB0FF4F262573EB722E82ACC010CE;                       // 0x0038 (size: 0x8)
    double HealthChange_17_42D5968640F9B02C6414BDBDA2196B6B;                          // 0x0040 (size: 0x8)
    double ArmorChange_19_16C741BA4535E6F6100D07B69FC1A0EA;                           // 0x0048 (size: 0x8)
    TArray<FName> BuffsToAdd_23_0A2DBBC447537E9C754279951429DB87;                     // 0x0050 (size: 0x10)
    TArray<FName> BuffsToRemove_25_15B5DEA242CC72F8FE9C3C8CFD670842;                  // 0x0060 (size: 0x10)
    FGameplayTag ConsumableTag_37_FA7E5213470AE102881FF89660A5C58A;                   // 0x0070 (size: 0x8)
    FString ConsumedAction_40_42D12BB34169784F3396DAB8CEC3ACD9;                       // 0x0078 (size: 0x10)
    double Radioactivity_43_0EF079AA43B77C98214300AD0CFB2F74;                         // 0x0088 (size: 0x8)

}; // Size: 0x90

#endif
