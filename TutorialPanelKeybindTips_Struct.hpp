#ifndef UE4SS_SDK_TutorialPanelKeybindTips_Struct_HPP
#define UE4SS_SDK_TutorialPanelKeybindTips_Struct_HPP

struct FTutorialPanelKeybindTips_Struct
{
    FText Title_6_79EC77EE438EC33843F146860CE79384;                                   // 0x0000 (size: 0x10)
    FText Description_8_732FB10344A0CCC499B80386E9749D49;                             // 0x0010 (size: 0x10)
    TSoftObjectPtr<UTexture2D> PlaceholderImage_13_A28577394D769CBFE01EBAADF51207AD;  // 0x0020 (size: 0x28)
    bool DoNotSave_15_EE860A79436559E47C1DFD806281C3D1;                               // 0x0048 (size: 0x1)
    TMap<class FKeybindSettingRowHandle, class FText> KBM_Binds_20_2599A5BA4390D7807D585AA6E2E907A0; // 0x0050 (size: 0x50)
    TMap<class FKeybindSettingRowHandle, class FText> Gamepad_Binds_22_CD3B24B643A33A23B6950C8ED543A107; // 0x00A0 (size: 0x50)

}; // Size: 0xF0

#endif
