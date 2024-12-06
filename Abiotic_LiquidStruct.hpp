#ifndef UE4SS_SDK_Abiotic_LiquidStruct_HPP
#define UE4SS_SDK_Abiotic_LiquidStruct_HPP

struct FAbiotic_LiquidStruct
{
    int32 MaxLiquid_16_80D4968B4CACEDD3D4018E87DA67E8B4;                              // 0x0000 (size: 0x4)
    TArray<TEnumAsByte<E_LiquidType::Type>> AllowedLiquids_7_1DF3EB8C43F49DA3A1E4A2AF908148D3; // 0x0008 (size: 0x10)
    double PercentageLiquidToStartWith_11_835A4C4F440C319874D3EFA75CAFA4C5;           // 0x0018 (size: 0x8)
    TArray<TEnumAsByte<E_LiquidType::Type>> LiquidToStartWith_15_F7D753A24D2130B92AF312AB9192AD9C; // 0x0020 (size: 0x10)

}; // Size: 0x30

#endif
