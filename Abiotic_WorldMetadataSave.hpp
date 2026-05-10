#ifndef UE4SS_SDK_Abiotic_WorldMetadataSave_HPP
#define UE4SS_SDK_Abiotic_WorldMetadataSave_HPP

class UAbiotic_WorldMetadataSave_C : public UAbioticSave
{
    int32 WorldVersion;                                                               // 0x00E0 (size: 0x4)
    int32 MinutesPassed;                                                              // 0x00E4 (size: 0x4)
    FDateTime LastPlayed;                                                             // 0x00E8 (size: 0x8)
    FSaveData_GlobalUnlocks_Struct GlobalUnlocks;                                     // 0x00F0 (size: 0x120)
    FName CustomLevelOverride;                                                        // 0x0210 (size: 0x8)
    TMap<class FName, class FString> LeyakContainmentIDs;                             // 0x0218 (size: 0x50)
    TMap<class FString, class FUserEntitlements> ServerEntitlements;                  // 0x0268 (size: 0x50)
    FName StoryProgressionRow;                                                        // 0x02B8 (size: 0x8)

}; // Size: 0x2C0

#endif
