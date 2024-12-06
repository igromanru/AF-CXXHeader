#ifndef UE4SS_SDK_Abiotic_Cooking_Struct_HPP
#define UE4SS_SDK_Abiotic_Cooking_Struct_HPP

struct FAbiotic_Cooking_Struct
{
    TArray<FAbioticItemCount_Struct> Ingredient_26_75A231F54D4ED926835029AE13B322A3;  // 0x0000 (size: 0x10)
    TEnumAsByte<EFoodCookStates::Type> CookingState_32_568AB66645F40DCFF9789698F2B13EA0; // 0x0010 (size: 0x1)
    double CookedProgress_34_F73379824243A5DFBCABCEB136769B43;                        // 0x0018 (size: 0x8)
    double CookDuration_37_228EDAD3449116421DDD5D9463A67B6A;                          // 0x0020 (size: 0x8)
    int32 Portions_40_C56BA4F04C09F80070394080F5A7345D;                               // 0x0028 (size: 0x4)
    int32 StovewareType_43_E5BC5B244CA4D90B0302288209F7D0C8;                          // 0x002C (size: 0x4)

}; // Size: 0x30

#endif
