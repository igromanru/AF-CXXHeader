#ifndef UE4SS_SDK_JournalEntry_Struct_HPP
#define UE4SS_SDK_JournalEntry_Struct_HPP

struct FJournalEntry_Struct
{
    EReleaseGroup ReleaseGroup_16_870101FA4DCFBB40A22003A53CA9446B;                   // 0x0000 (size: 0x1)
    FText Title_8_A834512E460561836BE675A6B4D19BEB;                                   // 0x0008 (size: 0x10)
    FText Note_2_59AA188F4FA769E89C7426A5CDD79B50;                                    // 0x0018 (size: 0x10)
    TEnumAsByte<E_JournalEntryCategories::Type> Category_5_50A4810F4C0C75AE0B5FB9AD53AE0C56; // 0x0028 (size: 0x1)
    bool AutoPinToHUD_11_0028B50C46FE8A9D6559A395F3512D0D;                            // 0x0029 (size: 0x1)

}; // Size: 0x2A

#endif
