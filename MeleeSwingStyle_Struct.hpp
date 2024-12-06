#ifndef UE4SS_SDK_MeleeSwingStyle_Struct_HPP
#define UE4SS_SDK_MeleeSwingStyle_Struct_HPP

struct FMeleeSwingStyle_Struct
{
    TSoftObjectPtr<UAnimMontage> FPMontage_8_885881B94FF999CF6D22D48F1020FD48;        // 0x0000 (size: 0x28)
    TSoftObjectPtr<UAnimMontage> TPMontage_9_2916A7784E2410691219C29628FE2A37;        // 0x0028 (size: 0x28)
    TEnumAsByte<E_SwingDirections::Type> SwingDirection_11_BA561D3144A8DF482CD8989964AD41D5; // 0x0050 (size: 0x1)
    double FPAnimPlayrate_16_F6A5D32344618DB875E15495EFFCC413;                        // 0x0058 (size: 0x8)
    double TPAnimPlayrate_17_111FAF1941871DDD083F329FAF621995;                        // 0x0060 (size: 0x8)
    double MeleeSwingDuration_24_F834BC2E48C213F598270BABE5E4218D;                    // 0x0068 (size: 0x8)
    double MeleeTraceRange_23_D8F8790C48858BBFC8B3D28B4F5ECE3C;                       // 0x0070 (size: 0x8)
    int32 MeleeTraceCount_27_E4E3B83A4CCFE13C6B43AA829256BABF;                        // 0x0078 (size: 0x4)

}; // Size: 0x7C

#endif
