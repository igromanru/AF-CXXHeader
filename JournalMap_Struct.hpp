#ifndef UE4SS_SDK_JournalMap_Struct_HPP
#define UE4SS_SDK_JournalMap_Struct_HPP

struct FJournalMap_Struct
{
    TEnumAsByte<E_JournalEntryCategories::Type> Sector_11_040C34A7476E6E91EA6065B88B30DB0E; // 0x0000 (size: 0x1)
    FDataTableRowHandle AssociatedLevel_8_4450337F4BA0CBA93B64D18B4117DE52;           // 0x0008 (size: 0x10)
    TSoftObjectPtr<UTexture2D> MapImage_4_550DA9DD4B09B9CCBFBDB5A525A1EC00;           // 0x0018 (size: 0x28)
    bool StrippedFromBuild_13_59C1258742AD84ED017397AF18DECDDC;                       // 0x0040 (size: 0x1)

}; // Size: 0x41

#endif
