#ifndef UE4SS_SDK_Abiotic_CustomizationSave_HPP
#define UE4SS_SDK_Abiotic_CustomizationSave_HPP

class UAbiotic_CustomizationSave_C : public UAbiotic_SaveGame_C
{
    FName Customization_Head;                                                         // 0x0028 (size: 0x8)
    FName Customization_HeadAccessory;                                                // 0x0030 (size: 0x8)
    FName Customization_Wristwatch;                                                   // 0x0038 (size: 0x8)
    FName Customization_Tie;                                                          // 0x0040 (size: 0x8)
    FName Customization_UpperBody;                                                    // 0x0048 (size: 0x8)
    FName Customization_LowerBody;                                                    // 0x0050 (size: 0x8)
    FName Customization_HairStyle;                                                    // 0x0058 (size: 0x8)
    FName Customization_HairColor;                                                    // 0x0060 (size: 0x8)
    FName Customization_ShirtColor;                                                   // 0x0068 (size: 0x8)
    FName Customization_Shoes;                                                        // 0x0070 (size: 0x8)
    FName Customization_Belt;                                                         // 0x0078 (size: 0x8)
    FName Customization_Beard;                                                        // 0x0080 (size: 0x8)
    TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice;               // 0x0088 (size: 0x28)
    FName Customization_SkinColor;                                                    // 0x00B0 (size: 0x8)
    FName Customization_IDCard;                                                       // 0x00B8 (size: 0x8)

    void FillNewSaveData(FName Head, FName HeadAccessory, FName Wristwatch, FName Tie, FName UpperBody, FName LowerBody, FName Hair, FName HairColor, FName ShirtColor, FName Shoes, FName Belt, FName Beard, TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Voice, FName IDCard);
}; // Size: 0xC0

#endif
