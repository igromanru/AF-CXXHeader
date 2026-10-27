#ifndef UE4SS_SDK_Modio_HPP
#define UE4SS_SDK_Modio_HPP

#include "Modio_enums.hpp"

struct FEntitlementConsumptionStatus
{
    FString TransactionId;                                                            // 0x0000 (size: 0x10)
    EModioEntitlementConsumptionState TransactionState;                               // 0x0010 (size: 0x1)
    FString SkuId;                                                                    // 0x0018 (size: 0x10)
    bool EntitlementConsumed;                                                         // 0x0028 (size: 0x1)
    EModioEntitlementType EntitlementType;                                            // 0x0029 (size: 0x1)
    FModioEntitlementConsumptionVirtualCurrencyDetails VirtualCurrencyDetails;        // 0x002C (size: 0x4)

}; // Size: 0x30

struct FModioApiKey
{
    FString ApiKey;                                                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioAuthenticationParams
{
    FString AuthToken;                                                                // 0x0000 (size: 0x10)
    FString UserEmail;                                                                // 0x0010 (size: 0x10)
    bool bUserHasAcceptedTerms;                                                       // 0x0020 (size: 0x1)
    TMap<FString, FString> ExtendedParameters;                                        // 0x0028 (size: 0x50)

}; // Size: 0x78

struct FModioCreateModFileParams
{
    FString PathToModRootDirectory;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x78

struct FModioCreateModParams
{
    FString PathToLogoFile;                                                           // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString Summary;                                                                  // 0x0020 (size: 0x10)

}; // Size: 0xE0

struct FModioCreateSourceFileParams
{
    FString PathToModRootDirectory;                                                   // 0x0000 (size: 0x10)

}; // Size: 0x70

struct FModioEditModParams
{
}; // Size: 0xD0

struct FModioEmailAddress
{
}; // Size: 0x10

struct FModioEmailAuthCode
{
}; // Size: 0x10

struct FModioEntitlementConsumptionStatusList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FEntitlementConsumptionStatus> InternalList;                               // 0x0018 (size: 0x10)
    FModioOptionalEntitlementWalletBalance WalletBalance;                             // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FModioEntitlementConsumptionVirtualCurrencyDetails
{
    int32 TokensAllocated;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FModioEntitlementParams
{
    TMap<FString, FString> ExtendedParameters;                                        // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FModioEntitlementWalletBalance
{
    FModioUnsigned64 Balance;                                                         // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FModioErrorCode
{
}; // Size: 0x8

struct FModioFileMetadata
{
    FModioFileMetadataID MetadataId;                                                  // 0x0000 (size: 0x8)
    FModioModID ModId;                                                                // 0x0008 (size: 0x8)
    FDateTime DateAdded;                                                              // 0x0010 (size: 0x8)
    EModioVirusScanStatus CurrentVirusScanStatus;                                     // 0x0018 (size: 0x1)
    EModioVirusStatus CurrentVirusStatus;                                             // 0x0019 (size: 0x1)
    FModioUnsigned64 FileSize;                                                        // 0x0020 (size: 0x8)
    FModioUnsigned64 FileSizeUncompressed;                                            // 0x0028 (size: 0x8)
    FString Filename;                                                                 // 0x0030 (size: 0x10)
    FString Version;                                                                  // 0x0040 (size: 0x10)
    FString Changelog;                                                                // 0x0050 (size: 0x10)
    FString MetadataBlob;                                                             // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FModioFileMetadataID
{
}; // Size: 0x8

struct FModioFilterParams
{
}; // Size: 0xB8

struct FModioGameID
{
    int64 GameId;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FModioGameInfo
{
    FModioGameID GameId;                                                              // 0x0000 (size: 0x8)
    FDateTime DateAdded;                                                              // 0x0008 (size: 0x8)
    FDateTime DateUpdated;                                                            // 0x0010 (size: 0x8)
    FDateTime DateLive;                                                               // 0x0018 (size: 0x8)
    FString UgcName;                                                                  // 0x0020 (size: 0x10)
    FModioIcon Icon;                                                                  // 0x0030 (size: 0x50)
    FModioLogo Logo;                                                                  // 0x0080 (size: 0x50)
    FModioHeaderImage HeaderImage;                                                    // 0x00D0 (size: 0x20)
    FString Name;                                                                     // 0x00F0 (size: 0x10)
    FString Summary;                                                                  // 0x0100 (size: 0x10)
    FString Instructions;                                                             // 0x0110 (size: 0x10)
    FString InstructionsUrl;                                                          // 0x0120 (size: 0x10)
    FString ProfileUrl;                                                               // 0x0130 (size: 0x10)
    FModioTheme Theme;                                                                // 0x0140 (size: 0x60)
    FModioGameStats Stats;                                                            // 0x01A0 (size: 0x38)
    TArray<FModioOtherUrl> OtherUrls;                                                 // 0x01D8 (size: 0x10)
    TArray<EModioModfilePlatform> Platforms;                                          // 0x01E8 (size: 0x10)
    bool bAllowNegativeRatings;                                                       // 0x01F8 (size: 0x1)
    EGameMonetizationFlags GameMonetizationOptions;                                   // 0x01F9 (size: 0x1)
    EGameMaturityFlags GameMaturityOptions;                                           // 0x01FA (size: 0x1)
    FString VirtualTokenName;                                                         // 0x0200 (size: 0x10)
    TArray<FModioGamePlatform> PlatformSupport;                                       // 0x0210 (size: 0x10)
    TArray<FModioModTagInfo> TagOptions;                                              // 0x0220 (size: 0x10)
    EModioGameCloudCookingStatus CloudCookingStatus;                                  // 0x0230 (size: 0x1)

}; // Size: 0x238

struct FModioGameInfoList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioGameInfo> InternalList;                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioGamePlatform
{
    EModioModfilePlatform Platform;                                                   // 0x0000 (size: 0x1)
    bool Locked;                                                                      // 0x0001 (size: 0x1)
    bool Moderated;                                                                   // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FModioGameStats
{
    FModioGameID GameId;                                                              // 0x0000 (size: 0x8)
    int64 ModCountTotal;                                                              // 0x0008 (size: 0x8)
    int64 ModDownloadsToday;                                                          // 0x0010 (size: 0x8)
    int64 ModDownloadsTotal;                                                          // 0x0018 (size: 0x8)
    int64 ModDownloadsDailyAverage;                                                   // 0x0020 (size: 0x8)
    int64 ModSubscribersTotal;                                                        // 0x0028 (size: 0x8)
    int64 DateExpires;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FModioGuid
{
    FString InternalGuid;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioHeaderImage
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FString Original;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioIcon
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FString Original;                                                                 // 0x0010 (size: 0x10)
    FString Thumb64x64;                                                               // 0x0020 (size: 0x10)
    FString Thumb128x128;                                                             // 0x0030 (size: 0x10)
    FString Thumb256x256;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FModioImageWrapper
{
    FString ImagePath;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FModioInitializeOptions
{
    FModioGameID GameId;                                                              // 0x0000 (size: 0x8)
    FModioApiKey ApiKey;                                                              // 0x0008 (size: 0x10)
    EModioEnvironment GameEnvironment;                                                // 0x0018 (size: 0x1)
    EModioPortal PortalInUse;                                                         // 0x0019 (size: 0x1)
    TMap<FString, FString> ExtendedInitializationParameters;                          // 0x0020 (size: 0x50)
    bool bUseBackgroundThread;                                                        // 0x0070 (size: 0x1)

}; // Size: 0x90

struct FModioLink
{
    FString Text;                                                                     // 0x0000 (size: 0x10)
    FString URL;                                                                      // 0x0010 (size: 0x10)
    bool bRequired;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FModioLocalizedTagCategory
{
    FString GroupName;                                                                // 0x0000 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioLogo
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    FString Original;                                                                 // 0x0010 (size: 0x10)
    FString Thumb320x180;                                                             // 0x0020 (size: 0x10)
    FString Thumb640x360;                                                             // 0x0030 (size: 0x10)
    FString Thumb1280x720;                                                            // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FModioMetadata
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioMetricsSessionParams
{
    TArray<FModioModID> ModIds;                                                       // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioModChangeMap
{
    TMap<FModioModID, EModioModChangeType> Changes;                                   // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FModioModCollectionEntry
{
}; // Size: 0x220

struct FModioModCollectionID
{
}; // Size: 0x8

struct FModioModCollectionInfo
{
    FModioModCollectionID ID;                                                         // 0x0000 (size: 0x8)
    FModioGameID GameId;                                                              // 0x0008 (size: 0x8)
    FString GameName;                                                                 // 0x0010 (size: 0x10)
    EModioModServerSideStatus CollectionStatus;                                       // 0x0020 (size: 0x1)
    EModioObjectVisibilityFlags Visibility;                                           // 0x0021 (size: 0x1)
    FModioUser ProfileSubmittedBy;                                                    // 0x0028 (size: 0x40)
    FString Category;                                                                 // 0x0068 (size: 0x10)
    FDateTime ProfileDateAdded;                                                       // 0x0078 (size: 0x8)
    FDateTime ProfileDateUpdated;                                                     // 0x0080 (size: 0x8)
    FDateTime ProfileDateLive;                                                        // 0x0088 (size: 0x8)
    bool Incomplete;                                                                  // 0x0090 (size: 0x1)
    EModioMaturityFlags ProfileMaturityOption;                                        // 0x0091 (size: 0x1)
    FModioUnsigned64 FileSize;                                                        // 0x0098 (size: 0x8)
    FModioUnsigned64 FileSizeUncompressed;                                            // 0x00A0 (size: 0x8)
    TArray<EModioModfilePlatform> Platforms;                                          // 0x00A8 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x00B8 (size: 0x10)
    FModioModCollectionStats Stats;                                                   // 0x00C8 (size: 0x60)
    FModioLogo Logo;                                                                  // 0x0128 (size: 0x50)
    FString ProfileName;                                                              // 0x0178 (size: 0x10)
    FString ProfileNameId;                                                            // 0x0188 (size: 0x10)
    FString ProfileSummary;                                                           // 0x0198 (size: 0x10)
    FString ProfileDescription;                                                       // 0x01A8 (size: 0x10)
    FString ProfileDescriptionPlaintext;                                              // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FModioModCollectionInfoList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioModCollectionInfo> InternalList;                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioModCollectionStats
{
    int64 DownloadsToday;                                                             // 0x0000 (size: 0x8)
    int64 DownloadsTotal;                                                             // 0x0008 (size: 0x8)
    int64 DownloadsUnique;                                                            // 0x0010 (size: 0x8)
    int64 RatingTotal30Days;                                                          // 0x0018 (size: 0x8)
    int64 RatingPositive30Days;                                                       // 0x0020 (size: 0x8)
    int64 RatingNegative30Days;                                                       // 0x0028 (size: 0x8)
    int64 RatingTotal;                                                                // 0x0030 (size: 0x8)
    int64 RatingPositive;                                                             // 0x0038 (size: 0x8)
    int64 RatingNegative;                                                             // 0x0040 (size: 0x8)
    int64 NumberOfComments;                                                           // 0x0048 (size: 0x8)
    int64 NumberOfFollowers;                                                          // 0x0050 (size: 0x8)
    int64 NumberOfMods;                                                               // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FModioModCreationHandle
{
}; // Size: 0x8

struct FModioModDependency
{
    FModioModID ModId;                                                                // 0x0000 (size: 0x8)
    FString ModName;                                                                  // 0x0008 (size: 0x10)
    FDateTime DateAdded;                                                              // 0x0018 (size: 0x8)
    FDateTime DateUpdated;                                                            // 0x0020 (size: 0x8)
    uint8 DependencyDepth;                                                            // 0x0028 (size: 0x1)
    FModioLogo Logo;                                                                  // 0x0030 (size: 0x50)
    FModioFileMetadata FileInfo;                                                      // 0x0080 (size: 0x70)
    EModioModServerSideStatus Status;                                                 // 0x00F0 (size: 0x1)
    EModioObjectVisibilityFlags Visibility;                                           // 0x00F1 (size: 0x1)

}; // Size: 0xF8

struct FModioModDependencyList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioModDependency> InternalList;                                         // 0x0018 (size: 0x10)
    FModioUnsigned64 TotalFilesize;                                                   // 0x0028 (size: 0x8)
    FModioUnsigned64 TotalFilesizeUncompressed;                                       // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FModioModID
{
}; // Size: 0x8

struct FModioModInfo
{
    FModioModID ModId;                                                                // 0x0000 (size: 0x8)
    FString ProfileName;                                                              // 0x0008 (size: 0x10)
    FString ProfileSummary;                                                           // 0x0018 (size: 0x10)
    FString ProfileDescription;                                                       // 0x0028 (size: 0x10)
    FString ProfileDescriptionPlaintext;                                              // 0x0038 (size: 0x10)
    FString ProfileUrl;                                                               // 0x0048 (size: 0x10)
    FModioUser ProfileSubmittedBy;                                                    // 0x0058 (size: 0x40)
    FDateTime ProfileDateAdded;                                                       // 0x0098 (size: 0x8)
    FDateTime ProfileDateUpdated;                                                     // 0x00A0 (size: 0x8)
    FDateTime ProfileDateLive;                                                        // 0x00A8 (size: 0x8)
    EModioMaturityFlags ProfileMaturityOption;                                        // 0x00B0 (size: 0x1)
    EModioModCommunityOptionsFlags CommunityOptions;                                  // 0x00B1 (size: 0x1)
    bool bVisible;                                                                    // 0x00B2 (size: 0x1)
    EModioObjectVisibilityFlags Visibility;                                           // 0x00B3 (size: 0x1)
    bool Dependencies;                                                                // 0x00B4 (size: 0x1)
    FString MetadataBlob;                                                             // 0x00B8 (size: 0x10)
    FModioFileMetadata FileInfo;                                                      // 0x00C8 (size: 0x70)
    TArray<FModioMetadata> MetadataKvp;                                               // 0x0138 (size: 0x10)
    TArray<FModioModTag> Tags;                                                        // 0x0148 (size: 0x10)
    int32 NumGalleryImages;                                                           // 0x0158 (size: 0x4)
    FModioYoutubeURLList YoutubeURLs;                                                 // 0x0160 (size: 0x1)
    FModioSketchfabURLList SketchfabURLs;                                             // 0x0170 (size: 0x1)
    FModioModStats Stats;                                                             // 0x0180 (size: 0x58)
    EModioModServerSideStatus ModStatus;                                              // 0x01D8 (size: 0x1)
    FModioUnsigned64 Price;                                                           // 0x01E0 (size: 0x8)

}; // Size: 0x1E8

struct FModioModInfoList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioModInfo> InternalList;                                               // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioModManagementEvent
{
    FModioModID ID;                                                                   // 0x0000 (size: 0x8)
    EModioModManagementEventType Event;                                               // 0x0008 (size: 0x1)
    FModioErrorCode Status;                                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FModioModProgressInfo
{
    FModioModID ID;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x50

struct FModioModStats
{
    int64 PopularityRankPosition;                                                     // 0x0000 (size: 0x8)
    int64 PopularityRankTotalMods;                                                    // 0x0008 (size: 0x8)
    int64 DownloadsTotal;                                                             // 0x0010 (size: 0x8)
    int64 SubscribersTotal;                                                           // 0x0018 (size: 0x8)
    int64 RatingTotal;                                                                // 0x0020 (size: 0x8)
    int64 RatingPositive;                                                             // 0x0028 (size: 0x8)
    int64 RatingNegative;                                                             // 0x0030 (size: 0x8)
    int64 RatingPercentagePositive;                                                   // 0x0038 (size: 0x8)
    float RatingWeightedAggregate;                                                    // 0x0040 (size: 0x4)
    FString RatingDisplayText;                                                        // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FModioModTag
{
    FString Tag;                                                                      // 0x0000 (size: 0x10)
    FText TagLocalized;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioModTagInfo
{
    FString TagGroupName;                                                             // 0x0000 (size: 0x10)
    TArray<FString> TagGroupValues;                                                   // 0x0010 (size: 0x10)
    TMap<FString, FText> TagGroupNameLocalizationData;                                // 0x0020 (size: 0x50)
    TArray<FModioModTagLocalizationData> TagGroupValueLocalizationData;               // 0x0070 (size: 0x10)
    bool bAllowMultipleSelection;                                                     // 0x0080 (size: 0x1)
    bool bHidden;                                                                     // 0x0081 (size: 0x1)
    bool bLocked;                                                                     // 0x0082 (size: 0x1)
    FString Locale;                                                                   // 0x0088 (size: 0x10)
    FModioLocalizedTagCategory LocalizedTagCategoryDataCurrentLocale;                 // 0x0098 (size: 0x20)

}; // Size: 0xB8

struct FModioModTagLocalizationData
{
    FString Tag;                                                                      // 0x0000 (size: 0x10)
    TMap<FString, FText> Translations;                                                // 0x0010 (size: 0x50)

}; // Size: 0x60

struct FModioModTagOptions
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioModTagInfo> InternalList;                                            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioOptionalEntitlementConsumptionStatusList
{
}; // Size: 0x40

struct FModioOptionalEntitlementWalletBalance
{
}; // Size: 0x10

struct FModioOptionalGameInfo
{
}; // Size: 0x240

struct FModioOptionalGameInfoList
{
}; // Size: 0x30

struct FModioOptionalGuid
{
}; // Size: 0x18

struct FModioOptionalImage
{
}; // Size: 0x18

struct FModioOptionalModChangeMap
{
}; // Size: 0x58

struct FModioOptionalModCollectionInfo
{
}; // Size: 0x1D0

struct FModioOptionalModCollectionInfoList
{
}; // Size: 0x30

struct FModioOptionalModDependencyList
{
}; // Size: 0x40

struct FModioOptionalModID
{
}; // Size: 0x10

struct FModioOptionalModInfo
{
}; // Size: 0x1F0

struct FModioOptionalModInfoList
{
}; // Size: 0x30

struct FModioOptionalModProgressInfo
{
}; // Size: 0x58

struct FModioOptionalModTagOptions
{
}; // Size: 0x30

struct FModioOptionalTerms
{
}; // Size: 0x128

struct FModioOptionalTokenPack
{
}; // Size: 0xF8

struct FModioOptionalTokenPackList
{
}; // Size: 0x30

struct FModioOptionalTransactionRecord
{
}; // Size: 0x20

struct FModioOptionalUInt64
{
}; // Size: 0x10

struct FModioOptionalUser
{
}; // Size: 0x48

struct FModioOptionalUserList
{
}; // Size: 0x30

struct FModioOptionalUserModRatingList
{
}; // Size: 0x30

struct FModioOtherUrl
{
    FString Label;                                                                    // 0x0000 (size: 0x10)
    FString URL;                                                                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioPagedResult
{
    int32 PageIndex;                                                                  // 0x0000 (size: 0x4)
    int32 PageSize;                                                                   // 0x0004 (size: 0x4)
    int32 PageCount;                                                                  // 0x0008 (size: 0x4)
    int32 TotalResultCount;                                                           // 0x000C (size: 0x4)
    int32 ResultCount;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FModioPresetFilterParams
{
    FText PresetName;                                                                 // 0x0000 (size: 0x10)
    TArray<FString> Tags;                                                             // 0x0010 (size: 0x10)
    TArray<FString> ExcludedTags;                                                     // 0x0020 (size: 0x10)
    EModioSortDirection Direction;                                                    // 0x0030 (size: 0x1)
    EModioSortFieldType SortField;                                                    // 0x0031 (size: 0x1)
    EModioRevenueFilterType RevenueField;                                             // 0x0032 (size: 0x1)
    TSoftClassPtr<UWidget> TileWidgetClass;                                           // 0x0038 (size: 0x28)
    int64 Count;                                                                      // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FModioReportParams
{
}; // Size: 0x58

struct FModioServerInitializeOptions
{
    FModioInitializeOptions BaseOptions;                                              // 0x0000 (size: 0x90)
    FString ModsDirectory;                                                            // 0x0090 (size: 0x10)
    FString Token;                                                                    // 0x00A0 (size: 0x10)
    TArray<FModioModID> Mods;                                                         // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FModioSketchfabURLList
{
}; // Size: 0x1

struct FModioStorageInfo
{
}; // Size: 0x50

struct FModioTerms
{
    FString AgreeButtonText;                                                          // 0x0000 (size: 0x10)
    FString DisagreeButtonText;                                                       // 0x0010 (size: 0x10)
    FModioLink WebsiteLink;                                                           // 0x0020 (size: 0x28)
    FModioLink TermsLink;                                                             // 0x0048 (size: 0x28)
    FModioLink PrivacyLink;                                                           // 0x0070 (size: 0x28)
    FModioLink RefundLink;                                                            // 0x0098 (size: 0x28)
    FModioLink ManageLink;                                                            // 0x00C0 (size: 0x28)
    FModioLink MonetizationLink;                                                      // 0x00E8 (size: 0x28)
    FString TermsText;                                                                // 0x0110 (size: 0x10)

}; // Size: 0x120

struct FModioTheme
{
    FString Primary;                                                                  // 0x0000 (size: 0x10)
    FString Dark;                                                                     // 0x0010 (size: 0x10)
    FString Light;                                                                    // 0x0020 (size: 0x10)
    FString Success;                                                                  // 0x0030 (size: 0x10)
    FString Warning;                                                                  // 0x0040 (size: 0x10)
    FString Danger;                                                                   // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FModioTokenPack
{
}; // Size: 0xF0

struct FModioTokenPackID
{
}; // Size: 0x10

struct FModioTokenPackList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioTokenPack> InternalList;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioTransactionRecord
{
    FModioModID AssociatedModID;                                                      // 0x0000 (size: 0x8)
    FModioUnsigned64 Price;                                                           // 0x0008 (size: 0x8)
    FModioUnsigned64 UpdatedUserWalletBalance;                                        // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FModioUnsigned64
{
}; // Size: 0x8

struct FModioUser
{
    FModioUserID UserId;                                                              // 0x0000 (size: 0x8)
    FString Username;                                                                 // 0x0008 (size: 0x10)
    FDateTime DateOnline;                                                             // 0x0018 (size: 0x8)
    FString ProfileUrl;                                                               // 0x0020 (size: 0x10)
    FString DisplayNamePortal;                                                        // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FModioUserID
{
}; // Size: 0x8

struct FModioUserList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioUser> InternalList;                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioUserModRating
{
    FModioGameID GameId;                                                              // 0x0000 (size: 0x8)
    FModioModID ModId;                                                                // 0x0008 (size: 0x8)
    EModioRating Rating;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FModioUserModRatingList
{
    FModioPagedResult PagedResult;                                                    // 0x0000 (size: 0x14)
    TArray<FModioUserModRating> InternalList;                                         // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FModioValidationError
{
    FString FieldName;                                                                // 0x0000 (size: 0x10)
    FString ValidationFailureDescription;                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FModioYoutubeURLList
{
}; // Size: 0x1

struct FStorageInfoKey
{
    EModioStorageLocation Location;                                                   // 0x0000 (size: 0x1)
    EModioStorageUsage Usage;                                                         // 0x0001 (size: 0x1)

}; // Size: 0x2

class IModioPortalInterface : public IInterface
{

    void SanitizeFilePath(FString& FilePath);
    void RequestEntitlementParams(const TMap<FString, FString>& Params, const FRequestEntitlementParamsCallback& Callback);
    void RequestAuthToken(const TMap<FString, FString>& Params, const FRequestAuthTokenCallback& Callback);
    void PrepareFilesystemToUsePath(FString UgcPath);
    void InitializePlatform();
    void GetExtendedInitializationParams();
    void GetExtendedAuthParams();
    void GetAuthKey();
}; // Size: 0x28

class UModioCommonTypesLibrary : public UBlueprintFunctionLibrary
{

    void SetSessionIdentifier(const FModioInitializeOptions& Options, FString SessionIdentifier);
    void SetSessionId(const FModioMetricsSessionParams& Params, const FModioGuid& ID);
    void SetPortal(const FModioInitializeOptions& Options, EModioPortal PortalToUse);
    void SetGameId(const FModioInitializeOptions& Options, int64 GameId);
    void SetGameEnvironment(const FModioInitializeOptions& Options, EModioEnvironment GameEnvironment);
    void SetExtendedInitializationParameters(const FModioInitializeOptions& Options, const TMap<FString, FString>& ExtendedParameters);
    void SetBackgroundThread(const FModioInitializeOptions& Options, bool bUseBackgroundThread);
    void SetAPIKey(const FModioInitializeOptions& Options, FString ApiKey);
    void NotEqualTo(const FModioModID& A, const FModioModID& B);
    void MakeServerInitializeOptions(const FModioInitializeOptions& BaseOptions, FString ModsDirectory, FString Token, const TArray<FModioModID>& Mods);
    void MakeMetricsSessionParams(const TArray<FModioModID>& IDs);
    void MakeInitializeOptions(int64 GameId, FString ApiKey, EModioEnvironment GameEnvironment, EModioPortal PortalInUse, bool bUseBackgroundThread);
    void MakeGuid(const FString Guid);
    void MakeGameId(int64 GameId);
    void MakeEntitlementParams(const TMap<FString, FString>& ExtendedParameters);
    void MakeAuthParams(const FString AuthToken, const FString EmailAddress, const bool bHasAcceptedTOS);
    void MakeApiKey(const FString ApiKey);
    void GetRawValueFromModID(const FModioModID& In);
    void GetRawValueFromModCollectionID(const FModioModCollectionID& In);
    void EqualToModCollectionID(const FModioModCollectionID& A, const FModioModCollectionID& B);
    void EqualTo(const FModioModID& A, const FModioModID& B);
    void Conv_UserIDToString(FModioUserID UserId);
    void Conv_StringToEmailAuthCode(FString AuthCode);
    void Conv_StringToEmailAddress(FString Email);
    void Conv_ModIDToString(FModioModID ModId);
    void Conv_GameIDToString(FModioGameID GameId);
    void Conv_FileMetadataIDToString(FModioFileMetadataID FileMetadataID);
    void Conv_EmailAuthCodeToString(FModioEmailAuthCode EmailAuthCode);
    void Conv_EmailAddressToString(FModioEmailAddress EmailAddress);
    void Conv_ApiKeyToString(FModioApiKey ApiKey);
}; // Size: 0x28

class UModioCreateModLibrary : public UBlueprintFunctionLibrary
{

    void SetVersionString(FModioCreateModFileParams& In, FString Version);
    void SetTags(FModioCreateModParams& In, TArray<FString>& Tags);
    void SetSourceFileVersionString(FModioCreateSourceFileParams& In, FString Version);
    void SetSourceFilePlatforms(FModioCreateSourceFileParams& In, TArray<EModioModfilePlatform>& Platforms);
    void SetSourceFileMetadataBlob(FModioCreateSourceFileParams& In, FString MetadataBlob);
    void SetSourceFileChangelogString(FModioCreateSourceFileParams& In, FString Changelog);
    void SetModfilePlatforms(FModioCreateModFileParams& In, TArray<EModioModfilePlatform>& Platforms);
    void SetModFileMetadataBlob(FModioCreateModFileParams& In, FString MetadataBlob);
    void SetMetadataBlob(FModioCreateModParams& In, FString MetadataBlob);
    void SetMaturityFlags(FModioCreateModParams& In, EModioMaturityFlags MaturityFlags);
    void SetMarkAsActiveRelease(FModioCreateModFileParams& In, bool bMarkAsActiveRelease);
    void SetInitialVisibility_DEPRECATED(FModioCreateModParams& In, bool InitialVisibility);
    void SetInitialVisibility(FModioCreateModParams& In, EModioObjectVisibilityFlags InitialVisibility);
    void SetHomepageURL(FModioCreateModParams& In, FString HomepageURL);
    void SetDescription(FModioCreateModParams& In, FString Description);
    void SetCommunityOptionsFlags(FModioCreateModParams& In, EModioModCommunityOptionsFlags CommunityOptionsFlags);
    void SetChangelogString(FModioCreateModFileParams& In, FString Changelog);
}; // Size: 0x28

class UModioEditModLibrary : public UBlueprintFunctionLibrary
{

    void SetVisibility_DEPRECATED(FModioEditModParams& In, bool Visibility);
    void SetVisibility(FModioEditModParams& In, EModioObjectVisibilityFlags Visibility);
    void SetTags(FModioEditModParams& In, TArray<FString>& Tags);
    void SetSummary(FModioEditModParams& In, FString Summary);
    void SetNamePath(FModioEditModParams& In, FString NamePath);
    void SetName(FModioEditModParams& In, FString Name);
    void SetMetadataBlob(FModioEditModParams& In, FString MetadataBlob);
    void SetMaturityFlags(FModioEditModParams& In, EModioMaturityFlags MaturityFlags);
    void SetLogoPath(FModioEditModParams& In, FString LogoPath);
    void SetHomepageURL(FModioEditModParams& In, FString HomepageURL);
    void SetDescription(FModioEditModParams& In, FString Description);
    void SetCommunityOptionsFlags(FModioEditModParams& In, EModioModCommunityOptionsFlags CommunityOptionsFlags);
}; // Size: 0x28

class UModioErrorCodeLibrary : public UBlueprintFunctionLibrary
{

    void ReconstructError(int32 Value, int32 Category);
    void IsErrorAsExec(const FModioErrorCode& Error);
    void IsError(const FModioErrorCode& Error);
    void GetValue(const FModioErrorCode& Error);
    void GetMessage(const FModioErrorCode& Error);
}; // Size: 0x28

class UModioErrorConditionLibrary : public UBlueprintFunctionLibrary
{

    void ErrorCodeMatches(FModioErrorCode ErrorCode, EModioErrorCondition Condition);
}; // Size: 0x28

class UModioExampleLibrary : public UBlueprintFunctionLibrary
{

    void ListUserSubscriptionAsync(const FModioFilterParams& FilterParams, FListUserSubscriptionAsyncCallback Callback);
    void GetLogoThumbnailSize();
    void GetLogoFullSize();
    void GetAvatarThumbnailSize();
}; // Size: 0x28

class UModioFilterParamsLibrary : public UBlueprintFunctionLibrary
{

    void WithTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    void WithTag(FModioFilterParams& Filter, FString Tag);
    void WithoutTags(FModioFilterParams& Filter, const TArray<FString>& NewTags);
    void WithoutTag(FModioFilterParams& Filter, FString Tag);
    void WithMatureContentFlags(FModioFilterParams& Filter, int32 ByMaturity);
    void SortBy(FModioFilterParams& Filter, EModioSortFieldType ByField, EModioSortDirection ByDirection);
    void RevenueType(FModioFilterParams& Filter, EModioRevenueFilterType RevenueType);
    void PagedResults(FModioFilterParams& Filter, int64 PageNumber, int64 PageSize);
    void NotEqualTo(const FModioFilterParams& A, const FModioFilterParams& B);
    void NameContainsStrings(FModioFilterParams& Filter, const TArray<FString>& SearchStrings);
    void NameContains(FModioFilterParams& Filter, FString SearchString);
    void MetadataLike(FModioFilterParams& Filter, FString SearchString);
    void MatchingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    void MatchingAuthors(FModioFilterParams& Filter, const TArray<FModioUserID>& IDs);
    void MatchingAuthor(FModioFilterParams& Filter, const FModioUserID& ID);
    void MarkedLiveBefore(FModioFilterParams& Filter, FDateTime LiveBefore);
    void MarkedLiveAfter(FModioFilterParams& Filter, FDateTime LiveAfter);
    void IndexedResults(FModioFilterParams& Filter, int64 StartIndex, int64 ResultCount);
    void ExcludingIDs(FModioFilterParams& Filter, const TArray<FModioModID>& IDs);
    void EqualTo(const FModioFilterParams& A, const FModioFilterParams& B);
    void DisallowMatureContent(FModioFilterParams& Filter);
}; // Size: 0x28

class UModioGameInfoListLibrary : public UBlueprintFunctionLibrary
{

    void GetPagedResult(const FModioGameInfoList& GameInfoList);
    void GetGames(const FModioGameInfoList& GameInfoList);
}; // Size: 0x28

class UModioImageLibrary : public UBlueprintFunctionLibrary
{

    void LoadAsync(const FModioImageWrapper& Image, FLoadAsyncOnImageLoaded OnImageLoaded);
    void GetTexture(const FModioImageWrapper& Image);
    void GetState(const FModioImageWrapper& Image);
    void GetLogoSize(class UTexture* Logo, EModioLogoSize LogoSize);
    void GetGallerySize(class UTexture* GalleryImage, EModioGallerySize GallerySize);
    void GetAvatarSize(class UTexture* Avatar, EModioAvatarSize AvatarSize);
}; // Size: 0x28

class UModioModCollectionInfoListLibrary : public UBlueprintFunctionLibrary
{

    void GetPagedResult(const FModioModCollectionInfoList& ModCollectionInfoList);
    void GetCollections(const FModioModCollectionInfoList& ModCollectionInfoList);
}; // Size: 0x28

class UModioModCollectionLibrary : public UBlueprintFunctionLibrary
{

    void GetPath(const FModioModCollectionEntry& Entry);
    void GetModState(const FModioModCollectionEntry& Entry);
    void GetModProfile(const FModioModCollectionEntry& Entry);
    void GetId(const FModioModCollectionEntry& Entry);
}; // Size: 0x28

class UModioModDependenciesLibrary : public UBlueprintFunctionLibrary
{

    void GetTotalFilesizeUncompressed(const FModioModDependencyList& DependencyList);
    void GetTotalFilesize(const FModioModDependencyList& DependencyList);
    void GetPagedResult(const FModioModDependencyList& DependencyList);
    void GetDependencies(const FModioModDependencyList& DependencyList);
}; // Size: 0x28

class UModioModInfoListLibrary : public UBlueprintFunctionLibrary
{

    void GetPagedResult(const FModioModInfoList& ModInfoList);
    void GetMods(const FModioModInfoList& ModInfoList);
}; // Size: 0x28

class UModioModProgressInfoLibrary : public UBlueprintFunctionLibrary
{

    void GetTotalProgress(const FModioModProgressInfo& Info, EModioModProgressState State);
    void GetCurrentState(const FModioModProgressInfo& Info);
    void GetCurrentProgress(const FModioModProgressInfo& Info, EModioModProgressState State);
}; // Size: 0x28

class UModioModTagOptionsLibrary : public UBlueprintFunctionLibrary
{

    void GetTags(const FModioModTagOptions& ModTags);
    void GetPagedResult(const FModioModTagOptions& ModTags);
}; // Size: 0x28

class UModioMultiplayerSubsystem : public UEngineSubsystem
{

    void K2_RegisterClientModsWithServerAsync(TArray<FModioModID> ModIds, FK2_RegisterClientModsWithServerAsyncCallback Callback);
    void K2_InstallOrUpdateServerModsAsync(TArray<FModioModID> Mods, FK2_InstallOrUpdateServerModsAsyncCallback Callback);
    void K2_InitializeServerAsync(const FModioServerInitializeOptions& ServerOptions, FK2_InitializeServerAsyncOnInitComplete OnInitComplete);
    void K2_GetRegisteredClientMods();
    void K2_ClearRegisteredClientMods();
}; // Size: 0xF0

class UModioOptionalLibrary : public UBlueprintFunctionLibrary
{

    void IsSet_ModioOptionalUserModRatingList(const FModioOptionalUserModRatingList& OptionalUserModRatingList);
    void IsSet_ModioOptionalUser(const FModioOptionalUser& OptionalUser);
    void IsSet_ModioOptionalUInt64(const FModioOptionalUInt64& OptionalInt);
    void IsSet_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms);
    void IsSet_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions);
    void IsSet_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo);
    void IsSet_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList);
    void IsSet_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo);
    void IsSet_ModioOptionalModID(const FModioOptionalModID& OptionalID);
    void IsSet_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList);
    void IsSet_ModioOptionalModCollectionInfoList(const FModioOptionalModCollectionInfoList& OptionalModCollectionInfoList);
    void IsSet_ModioOptionalModCollectionInfo(const FModioOptionalModCollectionInfo& OptionalModCollectionInfo);
    void IsSet_ModioOptionalModChangeMap(const FModioOptionalModChangeMap& OptionalModChangeMap);
    void IsSet_ModioOptionalImage(const FModioOptionalImage& OptionalImage);
    void IsSet_ModioOptionalGameInfoList(const FModioOptionalGameInfoList& OptionalGameInfoList);
    void IsSet_ModioOptionalGameInfo(const FModioOptionalGameInfo& OptionalGameInfo);
    void GetValue_ModioOptionalUserModRatingList(const FModioOptionalUserModRatingList& OptionalUserModRatingList, FModioUserModRatingList& UserModRatingList);
    void GetValue_ModioOptionalUserList(const FModioOptionalUserList& OptionalUserList, FModioUserList& UserList);
    void GetValue_ModioOptionalUser(const FModioOptionalUser& OptionalUser, FModioUser& User);
    void GetValue_ModioOptionalUInt64(const FModioOptionalUInt64& OptionalInt, FModioUnsigned64& UnderlyingInt);
    void GetValue_ModioOptionalTerms(const FModioOptionalTerms& OptionalTerms, FModioTerms& Terms);
    void GetValue_ModioOptionalModTagOptions(const FModioOptionalModTagOptions& OptionalModTagOptions, FModioModTagOptions& ModTagOptions);
    void GetValue_ModioOptionalModProgressInfo(const FModioOptionalModProgressInfo& OptionalModProgressInfo, FModioModProgressInfo& ModProgressInfo);
    void GetValue_ModioOptionalModInfoList(const FModioOptionalModInfoList& OptionalModInfoList, FModioModInfoList& ModInfoList);
    void GetValue_ModioOptionalModInfo(const FModioOptionalModInfo& OptionalModInfo, FModioModInfo& ModInfo);
    void GetValue_ModioOptionalModID(const FModioOptionalModID& OptionalID, FModioModID& ID);
    void GetValue_ModioOptionalModDependencyList(const FModioOptionalModDependencyList& OptionalDependencyList, FModioModDependencyList& DependencyList);
    void GetValue_ModioOptionalModCollectionInfoList(const FModioOptionalModCollectionInfoList& OptionalModCollectionInfoList, FModioModCollectionInfoList& ModCollectionInfoList);
    void GetValue_ModioOptionalModCollectionInfo(const FModioOptionalModCollectionInfo& OptionalModCollectionInfo, FModioModCollectionInfo& ModCollectionInfo);
    void GetValue_ModioOptionalModChangeMap(const FModioOptionalModChangeMap& OptionalModChangeMap, FModioModChangeMap& ModChangeMap);
    void GetValue_ModioOptionalImage(const FModioOptionalImage& OptionalImage, FModioImageWrapper& Image);
    void GetValue_ModioOptionalGameInfoList(const FModioOptionalGameInfoList& OptionalGameInfoList, FModioGameInfoList& GameInfoList);
    void GetValue_ModioOptionalGameInfo(const FModioOptionalGameInfo& OptionalGameInfo, FModioGameInfo& GameInfo);
}; // Size: 0x28

class UModioPlatformHelpersLibrary : public UBlueprintFunctionLibrary
{

    void GetDefaultPortalForCurrentPlatform();
    void GetDefaultAuthProviderForCurrentPlatform();
    void GetCurrentPlatform();
}; // Size: 0x28

class UModioPresetFilterParamsLibrary : public UBlueprintFunctionLibrary
{

    void ToFilterParams(const FModioPresetFilterParams& Preset);
}; // Size: 0x28

class UModioReportLibrary : public UBlueprintFunctionLibrary
{

    void MakeReportForUser(FModioUserID User, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    void MakeReportForMod(FModioModID Mod, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
    void MakeReportForGame(FModioGameID Game, EModioReportType Type, FString ReportDescription, FString ReporterName, FString ReporterContact);
}; // Size: 0x28

class UModioSDKLibrary : public UBlueprintFunctionLibrary
{

    void RoundNumberString(FText inputText);
    void Pct_Int64Int64(int64 Dividend, int64 Divisor);
    void IsValidSecurityCodeFormat(FString String);
    void IsValidEmailAddressFormat(FString String);
    void GetTimeSpanAsString(FString PastDateString);
    void GetShortenedNumberAsString(int64 Number);
    void GetProjectInitializeOptionsForSessionId(const FString SessionId);
    void GetProjectInitializeOptions();
    void GetProjectGameId();
    void GetProjectEnvironment();
    void GetProjectApiKey();
    void GetMonetizationPurchaseCategory(EModioPortal Portal);
    void GetLanguageCodeString(EModioLanguage Language);
    void GetLanguageCodeFromString(FString LanguageCode);
    void GetDesiredFileSizeUnit_Unsigned64(FModioUnsigned64 FileSize);
    void GetDesiredFileSizeUnit(int64 FileSize);
    void GetDefaultSessionIdWindows();
    void Filesize_ToString_Unsigned64(FModioUnsigned64 FileSize, int32 MinDecimals, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit, bool bIncludeUnitName);
    void Filesize_ToString(int64 FileSize, int32 MinDecimals, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit, bool bIncludeUnitName);
    void Conv_Int64ToText(int64 Value, bool bAlwaysSign, bool bUseGrouping, int32 MinimumIntegralDigits, int32 MaximumIntegralDigits);
    void Conv_Int64ToString(int64 inInt);
}; // Size: 0x28

class UModioSettings : public UObject
{
    int64 GameId;                                                                     // 0x0028 (size: 0x8)
    FString ApiKey;                                                                   // 0x0030 (size: 0x10)
    EModioEnvironment Environment;                                                    // 0x0040 (size: 0x1)
    EModioLogLevel LogLevel;                                                          // 0x0041 (size: 0x1)
    EModioPortal DefaultPortal;                                                       // 0x0042 (size: 0x1)
    bool bUseBackgroundThread;                                                        // 0x0043 (size: 0x1)
    int32 GlobalRetryLimit;                                                           // 0x0044 (size: 0x4)
    FSoftObjectPath LocalizationStringTable;                                          // 0x0048 (size: 0x20)
    bool bEnableMonetizationFeature;                                                  // 0x0068 (size: 0x1)
    bool bEnableModEnableDisableFeature;                                              // 0x0069 (size: 0x1)
    bool bEnableModDownvoteFeature;                                                   // 0x006A (size: 0x1)
    bool bEnableModCollectionsFeature;                                                // 0x006B (size: 0x1)
    TMap<EModioPortal, FString> PlatformIdentifiers;                                  // 0x0070 (size: 0x50)

}; // Size: 0x140

class UModioStorageInfoLibrary : public UBlueprintFunctionLibrary
{

    void GetSpaceByKey(const FModioStorageInfo& Info, FStorageInfoKey StorageKey);
    void GetSpace(const FModioStorageInfo& Info, EModioStorageLocation Location, EModioStorageUsage Usage);
}; // Size: 0x28

class UModioSubsystem : public UEngineSubsystem
{
    TScriptInterface<class IModioPortalInterface> CachedPortalInterface;              // 0x00F0 (size: 0x10)
    TMap<FModioModID, FModioModCollectionEntry> UserSubscriptionsDefaultValue;        // 0x03C0 (size: 0x50)
    TMap<FModioModID, FModioModCollectionEntry> QueryUserInstallationsDefaultValue;   // 0x0410 (size: 0x50)

    void SetLogLevel(EModioLogLevel UnrealLogLevel);
    void RunPendingHandlers();
    void QueryUserSubscriptions();
    void QueryUserPurchasedMods();
    void QueryUserInstallations(bool bIncludeOutdatedMods);
    void QuerySystemInstallations();
    void PrioritizeTransferForMod(FModioModID ModToPrioritize);
    void KillBackgroundThread();
    void K2_VerifyUserAuthenticationAsync(FK2_VerifyUserAuthenticationAsyncCallback Callback);
    void K2_UnsubscribeFromModCollectionAsync(FModioModCollectionID ModCollectionToUnsubscribeFrom, FK2_UnsubscribeFromModCollectionAsyncCallback Callback);
    void K2_UnsubscribeFromModAsync(FModioModID ModToUnsubscribeFrom, FK2_UnsubscribeFromModAsyncOnUnsubscribeComplete OnUnsubscribeComplete);
    void K2_UnmuteUserAsync(FModioUserID UserId, FK2_UnmuteUserAsyncCallback Callback);
    void K2_UnfollowUserAsync(FModioUserID UserId, FK2_UnfollowUserAsyncCallback Callback);
    void K2_UnfollowModCollectionAsync(FModioModCollectionID ModCollectionToUnfollow, FK2_UnfollowModCollectionAsyncCallback Callback);
    void K2_SubscribeToModCollectionAsync(FModioModCollectionID ModCollectionToSubscribeTo, FK2_SubscribeToModCollectionAsyncCallback Callback);
    void K2_SubscribeToModAsync(FModioModID ModToSubscribeTo, bool IncludeDependencies, FK2_SubscribeToModAsyncOnSubscribeComplete OnSubscribeComplete);
    void K2_SubmitNewSourceFileForMod(FModioModID Mod, FModioCreateSourceFileParams Params);
    void K2_SubmitNewModFileForMod(FModioModID Mod, FModioCreateModFileParams Params);
    void K2_SubmitNewModAsync(FModioModCreationHandle Handle, FModioCreateModParams Params, FK2_SubmitNewModAsyncCallback Callback);
    void K2_SubmitModRatingAsync(FModioModID Mod, EModioRating Rating, FK2_SubmitModRatingAsyncCallback Callback);
    void K2_SubmitModCollectionRatingAsync(FModioModCollectionID ModCollectionId, EModioRating Rating, FK2_SubmitModCollectionRatingAsyncCallback Callback);
    void K2_SubmitModChangesAsync(FModioModID Mod, FModioEditModParams Params, FK2_SubmitModChangesAsyncCallback Callback);
    void K2_ShutdownAsync(FK2_ShutdownAsyncOnShutdownComplete OnShutdownComplete);
    void K2_SetLanguage(EModioLanguage Locale);
    void K2_RequestEmailAuthCodeAsync(const FModioEmailAddress& EmailAddress, FK2_RequestEmailAuthCodeAsyncCallback Callback);
    void K2_ReportContentAsync(FModioReportParams Report, FK2_ReportContentAsyncCallback Callback);
    void K2_RemoveFromTempModSet(TArray<FModioModID> ModIds);
    void K2_RefreshUserEntitlementsAsync(const FModioEntitlementParams& Params, FK2_RefreshUserEntitlementsAsyncCallback Callback);
    void K2_QueryUserProfile();
    void K2_QueryTempModSet();
    void K2_QueryStorageInfo();
    void K2_QueryCurrentModUpdate();
    void K2_PurchaseModAsync(FModioModID ModId, FModioUnsigned64 ExpectedPrice, FK2_PurchaseModAsyncCallback Callback);
    void K2_PreviewExternalUpdatesAsync(FK2_PreviewExternalUpdatesAsyncOnPreviewDone OnPreviewDone);
    void K2_MuteUserAsync(FModioUserID UserId, FK2_MuteUserAsyncCallback Callback);
    void K2_MetricsSessionStartAsync(const FModioMetricsSessionParams& Params, FK2_MetricsSessionStartAsyncCallback Callback);
    void K2_MetricsSessionSendHeartbeatOnceAsync(FK2_MetricsSessionSendHeartbeatOnceAsyncCallback Callback);
    void K2_MetricsSessionSendHeartbeatAtIntervalAsync(FModioUnsigned64 IntervalSeconds, FK2_MetricsSessionSendHeartbeatAtIntervalAsyncCallback Callback);
    void K2_MetricsSessionEndAsync(FK2_MetricsSessionEndAsyncCallback Callback);
    void K2_ListUserGamesAsync(const FModioFilterParams& Filter, FK2_ListUserGamesAsyncCallback Callback);
    void K2_ListUserFollowedModCollectionsAsync(const FModioFilterParams& Filter, FK2_ListUserFollowedModCollectionsAsyncCallback Callback);
    void K2_ListUserCreatedModsAsync(const FModioFilterParams& Filter, FK2_ListUserCreatedModsAsyncCallback Callback);
    void K2_ListModCollectionsAsync(const FModioFilterParams& Filter, FK2_ListModCollectionsAsyncCallback Callback);
    void K2_ListAllModsAsync(const FModioFilterParams& Filter, FK2_ListAllModsAsyncCallback Callback);
    void K2_InitTempModSet(TArray<FModioModID> ModIds);
    void K2_InitializeAsync(const FModioInitializeOptions& InitializeOptions, FK2_InitializeAsyncOnInitComplete OnInitComplete);
    void K2_GetUserWalletBalanceAsync(FK2_GetUserWalletBalanceAsyncCallback Callback);
    void K2_GetUserRatingsAsync(FK2_GetUserRatingsAsyncCallback Callback);
    void K2_GetUserMediaAvatarAsync(EModioAvatarSize AvatarSize, FK2_GetUserMediaAvatarAsyncCallback Callback);
    void K2_GetUserFollowingAsync(FModioUserID UserId, FK2_GetUserFollowingAsyncCallback Callback);
    void K2_GetUserFollowersAsync(FModioUserID UserId, FK2_GetUserFollowersAsyncCallback Callback);
    void K2_GetUserDelegationTokenAsync(FK2_GetUserDelegationTokenAsyncCallback Callback);
    void K2_GetTermsOfUseAsync(FK2_GetTermsOfUseAsyncCallback Callback);
    void K2_GetMutedUsersAsync(FK2_GetMutedUsersAsyncCallback Callback);
    void K2_GetModTagOptionsAsync(FK2_GetModTagOptionsAsyncCallback Callback);
    void K2_GetModMediaLogoAsync(FModioModID ModId, EModioLogoSize LogoSize, FK2_GetModMediaLogoAsyncCallback Callback);
    void K2_GetModMediaGalleryImageAsync(FModioModID ModId, EModioGallerySize GallerySize, int32 Index, FK2_GetModMediaGalleryImageAsyncCallback Callback);
    void K2_GetModMediaAvatarAsync(FModioModID ModId, EModioAvatarSize AvatarSize, FK2_GetModMediaAvatarAsyncCallback Callback);
    void K2_GetModInfoAsync(FModioModID ModId, FK2_GetModInfoAsyncCallback Callback);
    void K2_GetModDependenciesAsync(FModioModID ModId, bool Recursive, FK2_GetModDependenciesAsyncCallback Callback);
    void K2_GetModCreationHandle();
    void K2_GetModCollectionModsAsync(FModioModCollectionID ModCollectionId, FK2_GetModCollectionModsAsyncCallback Callback);
    void K2_GetModCollectionLogoAsync(FModioModCollectionID ModCollectionId, EModioLogoSize LogoSize, FK2_GetModCollectionLogoAsyncCallback Callback);
    void K2_GetModCollectionInfoAsync(FModioModCollectionID ModCollectionId, FK2_GetModCollectionInfoAsyncCallback Callback);
    void K2_GetModCollectionAvatarAsync(FModioModCollectionID ModCollectionId, EModioAvatarSize AvatarSize, FK2_GetModCollectionAvatarAsyncCallback Callback);
    void K2_GetLanguage();
    void K2_GetGameInfoAsync(FModioGameID GameId, FK2_GetGameInfoAsyncCallback Callback);
    void K2_GetDefaultModInstallationDirectory(FModioGameID GameId);
    void K2_ForceUninstallModAsync(FModioModID ModToRemove, FK2_ForceUninstallModAsyncCallback Callback);
    void K2_FollowUserAsync(FModioUserID UserId, FK2_FollowUserAsyncCallback Callback);
    void K2_FollowModCollectionAsync(FModioModCollectionID ModCollectionToFollow, FK2_FollowModCollectionAsyncCallback Callback);
    void K2_FetchUserPurchasesAsync(FK2_FetchUserPurchasesAsyncCallback Callback);
    void K2_FetchExternalUpdatesAsync(FK2_FetchExternalUpdatesAsyncOnFetchDone OnFetchDone);
    void K2_EnableModManagement(FK2_EnableModManagementCallback Callback);
    void K2_DeleteModDependenciesAsync(FModioModID ModId, const TArray<FModioModID>& Dependencies, FK2_DeleteModDependenciesAsyncCallback Callback);
    void K2_CloseTempModSet();
    void K2_ClearUserDataAsync(FK2_ClearUserDataAsyncCallback Callback);
    void K2_AuthenticateUserExternalAsync(const FModioAuthenticationParams& User, EModioAuthenticationProvider Provider, FK2_AuthenticateUserExternalAsyncCallback Callback);
    void K2_AuthenticateUserEmailAsync(const FModioEmailAuthCode& AuthenticationCode, FK2_AuthenticateUserEmailAsyncCallback Callback);
    void K2_ArchiveModAsync(FModioModID Mod, FK2_ArchiveModAsyncCallback Callback);
    void K2_AddToTempModSet(TArray<FModioModID> ModIds);
    void K2_AddModDependenciesAsync(FModioModID ModId, const TArray<FModioModID>& Dependencies, FK2_AddModDependenciesAsyncCallback Callback);
    void IsUsingBackgroundThread();
    void IsUserAuthenticated();
    void IsSDKInitialized();
    void IsReadyForModManagement();
    void IsModManagementEnabled();
    void IsModManagementBusy();
    void GetStorageQuota(EModioStorageLocation Location);
    void GetPortalInterfaceObject();
    void GetPortalInterface();
    void GetLastValidationError();
    void DisableModManagement();
}; // Size: 0x508

class UModioTokenPackLibrary : public UBlueprintFunctionLibrary
{

    void IsPurchasable(const FModioTokenPack& In);
    void GetTitle(const FModioTokenPack& In);
    void GetRegularPrice(const FModioTokenPack& In);
    void GetNumericPrice(const FModioTokenPack& In);
    void GetModioId(const FModioTokenPack& In);
    void GetLongDescription(const FModioTokenPack& In);
    void GetId(const FModioTokenPack& In);
    void GetFields(const FModioTokenPack& In);
    void GetDisplayPrice(const FModioTokenPack& In);
    void GetDescription(const FModioTokenPack& In);
}; // Size: 0x28

class UModioUIEnumLocalizationLibrary : public UBlueprintFunctionLibrary
{

    void GetLocalizedTextForEnumByName(const FName& EnumName);
    void FileSizeUnsigned64_ToText(FModioUnsigned64 FileSize, int32 MinDecimals, int32 MaxDecimals, TEnumAsByte<EFileSizeUnit> Unit, bool bIncludeUnitName);
}; // Size: 0x28

class UModioUILocalizationLibrary : public UBlueprintFunctionLibrary
{

    void GetLocalizedTextFromDefaultTableByKey(FString StringKey);
}; // Size: 0x28

class UModioUnsigned64Library : public UBlueprintFunctionLibrary
{

    void Subtract(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void Percentage_Unsigned64(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void NotEqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void MakeFromComponents(const int32& High, const int32& Low);
    void LessThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void GreaterThanZero(const FModioUnsigned64& In);
    void GreaterThan(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void EqualTo(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void DivideToFloat(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void DivideFloat(const FModioUnsigned64& LHS, const float RHS);
    void Divide(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
    void Conv_FModioUnsigned64ToText(const FModioUnsigned64& In);
    void Conv_FModioUnsigned64ToInt64(const FModioUnsigned64& In);
    void Conv_FModioUnsigned64ToFloat(const FModioUnsigned64& In);
    void BreakToComponents(const FModioUnsigned64& In, int32& High, int32& Low);
    void Add(const FModioUnsigned64& LHS, const FModioUnsigned64& RHS);
}; // Size: 0x28

class UModioUserListLibrary : public UBlueprintFunctionLibrary
{

    void GetUsers(const FModioUserList& UserList);
    void GetPagedResult(const FModioUserList& UserList);
}; // Size: 0x28

#endif
