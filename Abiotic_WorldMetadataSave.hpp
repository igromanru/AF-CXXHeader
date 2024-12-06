#ifndef UE4SS_SDK_Abiotic_WorldMetadataSave_HPP
#define UE4SS_SDK_Abiotic_WorldMetadataSave_HPP

class UAbiotic_WorldMetadataSave_C : public UAbioticSave
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00E0 (size: 0x8)
    int32 WorldVersion;                                                               // 0x00E8 (size: 0x4)
    int32 MinutesPassed;                                                              // 0x00EC (size: 0x4)
    FDateTime LastPlayed;                                                             // 0x00F0 (size: 0x8)
    FSaveData_GlobalUnlocks_Struct GlobalUnlocks;                                     // 0x00F8 (size: 0x110)
    FName CustomLevelOverride;                                                        // 0x0208 (size: 0x8)

    void ExecuteUbergraph_Abiotic_WorldMetadataSave(int32 EntryPoint);
}; // Size: 0x210

#endif
