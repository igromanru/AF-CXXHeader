#ifndef UE4SS_SDK_Trait_Struct_HPP
#define UE4SS_SDK_Trait_Struct_HPP

struct FTrait_Struct
{
    FText TraitName_7_E2887506467F3946582B49A4AD6F3CE7;                               // 0x0000 (size: 0x10)
    FText TraitDescription_8_53B3D8DA4A2E41A6FF24038C38E5F06D;                        // 0x0010 (size: 0x10)
    TSoftObjectPtr<UTexture2D> TraitIcon_13_2E2B28794E5E2F1A4B5C528553F8F370;         // 0x0020 (size: 0x28)
    FName TraitBuffRowName_15_91FA5AE14A292BFA5F4596BB904131F4;                       // 0x0048 (size: 0x8)
    TMap<TEnumAsByte<E_CharacterSkills::Type>, int32> TraitSkillModification_19_7236F11E47E6F09FCB5262ACEFA265D1; // 0x0050 (size: 0x50)
    TArray<FName> TraitsForcedByThisTrait_22_418981AF4F41ED829D77448C0CFB6D8A;        // 0x00A0 (size: 0x10)
    TArray<FName> MutuallyExclusiveTraits_24_12A0A042497C87B6B095879FEEFB6366;        // 0x00B0 (size: 0x10)
    int32 PointCost_27_1F822A4E48D40334AD58858A1AB4F9F3;                              // 0x00C0 (size: 0x4)
    bool AvailableOnStart_29_0F08A1FE46A73B1BF6358DADDEC1E5D1;                        // 0x00C4 (size: 0x1)

}; // Size: 0xC5

#endif
