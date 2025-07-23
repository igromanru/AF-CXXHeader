#ifndef UE4SS_SDK_Abiotic_WorldMetadataSave_HPP
#define UE4SS_SDK_Abiotic_WorldMetadataSave_HPP

class UAbiotic_WorldMetadataSave_C : public UAbioticSave
{
    int32 WorldVersion;                                                               // 0x00E0 (size: 0x4)
    int32 MinutesPassed;                                                              // 0x00E4 (size: 0x4)
    FDateTime LastPlayed;                                                             // 0x00E8 (size: 0x8)
    FSaveData_GlobalUnlocks_Struct GlobalUnlocks;                                     // 0x00F0 (size: 0x110)
    FName CustomLevelOverride;                                                        // 0x0200 (size: 0x8)
    TMap<class FName, class FString> LeyakContainmentIDs;                             // 0x0208 (size: 0x50)
    TMap<class FString, class FUserEntitlements> ServerEntitlements;                  // 0x0258 (size: 0x50)
    FName StoryProgressionRow;                                                        // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

#endif
