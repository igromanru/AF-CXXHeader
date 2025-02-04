#ifndef UE4SS_SDK_Abiotic_EmailStruct_HPP
#define UE4SS_SDK_Abiotic_EmailStruct_HPP

struct FAbiotic_EmailStruct
{
    EReleaseGroup ReleaseGroup_37_A7A82CBF491CA3C24F4A099A4C24A7D6;                   // 0x0000 (size: 0x1)
    FText SubjectLineText_11_5457633E4CCC50C1C68CA2B44AB6BB99;                        // 0x0008 (size: 0x10)
    TArray<FEmailSection_Struct> EmailSections_32_63A39EF94B2439586461FD8CA4697AE5;   // 0x0018 (size: 0x10)
    FText FromText-Deprecated_33_58945F4C493D371548AFFE85E9213699;                    // 0x0028 (size: 0x10)
    FText EmailText-Deprecated_34_CCB03AE743D4692E2D5BF19667F2D0FB;                   // 0x0038 (size: 0x10)
    TArray<FEmailAttachment_Struct> Attachments_21_AD27BA75441A69896A9A0A9129918099;  // 0x0048 (size: 0x10)
    TArray<FDataTableRowHandle> JournalEntriesToUnlock_25_B36EB8C14FA259E8DC64D0AFA4756CDB; // 0x0058 (size: 0x10)

}; // Size: 0x68

#endif
