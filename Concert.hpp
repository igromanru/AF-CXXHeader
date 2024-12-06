#ifndef UE4SS_SDK_Concert_HPP
#define UE4SS_SDK_Concert_HPP

#include "Concert_enums.hpp"

struct FConcertAdmin_ArchiveSessionRequest : public FConcertRequestData
{
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)
    FString ArchiveNameOverride;                                                      // 0x0040 (size: 0x10)
    FString Username;                                                                 // 0x0050 (size: 0x10)
    FString DeviceName;                                                               // 0x0060 (size: 0x10)
    FConcertSessionFilter SessionFilter;                                              // 0x0070 (size: 0x38)

}; // Size: 0xA8

struct FConcertAdmin_ArchiveSessionResponse : public FConcertResponseData
{
    FGuid SessionId;                                                                  // 0x0058 (size: 0x10)
    FString SessionName;                                                              // 0x0068 (size: 0x10)
    FGuid ArchiveId;                                                                  // 0x0078 (size: 0x10)
    FString ArchiveName;                                                              // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FConcertAdmin_BatchDeleteSessionRequest : public FConcertRequestData
{
    TSet<FGuid> SessionIds;                                                           // 0x0030 (size: 0x50)
    EBatchSessionDeletionFlags Flags;                                                 // 0x0080 (size: 0x4)
    FString Username;                                                                 // 0x0088 (size: 0x10)
    FString DeviceName;                                                               // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FConcertAdmin_BatchDeleteSessionResponse : public FConcertResponseData
{
    TArray<FDeletedSessionInfo> DeletedItems;                                         // 0x0058 (size: 0x10)
    TArray<FDeletedSessionInfo> NotOwnedByClient;                                     // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FConcertAdmin_CopySessionRequest : public FConcertRequestData
{
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)
    FString SessionName;                                                              // 0x0040 (size: 0x10)
    FConcertClientInfo OwnerClientInfo;                                               // 0x0050 (size: 0xB8)
    FConcertSessionSettings SessionSettings;                                          // 0x0108 (size: 0x28)
    FConcertSessionVersionInfo VersionInfo;                                           // 0x0130 (size: 0x28)
    FConcertSessionFilter SessionFilter;                                              // 0x0158 (size: 0x38)

}; // Size: 0x198

struct FConcertAdmin_CreateSessionRequest : public FConcertRequestData
{
    FString SessionName;                                                              // 0x0030 (size: 0x10)
    FConcertClientInfo OwnerClientInfo;                                               // 0x0040 (size: 0xB8)
    FConcertSessionSettings SessionSettings;                                          // 0x00F8 (size: 0x28)
    FConcertSessionVersionInfo VersionInfo;                                           // 0x0120 (size: 0x28)

}; // Size: 0x148

struct FConcertAdmin_DeleteSessionRequest : public FConcertRequestData
{
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)
    FString Username;                                                                 // 0x0040 (size: 0x10)
    FString DeviceName;                                                               // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FConcertAdmin_DeleteSessionResponse : public FConcertResponseData
{
    FGuid SessionId;                                                                  // 0x0058 (size: 0x10)
    FString SessionName;                                                              // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FConcertAdmin_DiscoverServersEvent : public FConcertEndpointDiscoveryEvent
{
    FString RequiredRole;                                                             // 0x0038 (size: 0x10)
    FString RequiredVersion;                                                          // 0x0048 (size: 0x10)
    FString ClientAuthenticationKey;                                                  // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FConcertAdmin_DropSessionRepositoriesRequest : public FConcertRequestData
{
    TArray<FGuid> RepositoryIds;                                                      // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FConcertAdmin_DropSessionRepositoriesResponse : public FConcertResponseData
{
    TArray<FGuid> DroppedRepositoryIds;                                               // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FConcertAdmin_FindSessionRequest : public FConcertRequestData
{
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)
    FConcertClientInfo OwnerClientInfo;                                               // 0x0040 (size: 0xB8)
    FConcertSessionSettings SessionSettings;                                          // 0x00F8 (size: 0x28)
    FConcertSessionVersionInfo VersionInfo;                                           // 0x0120 (size: 0x28)

}; // Size: 0x148

struct FConcertAdmin_GetAllSessionsRequest : public FConcertRequestData
{
}; // Size: 0x30

struct FConcertAdmin_GetAllSessionsResponse : public FConcertResponseData
{
    TArray<FConcertSessionInfo> LiveSessions;                                         // 0x0058 (size: 0x10)
    TArray<FConcertSessionInfo> ArchivedSessions;                                     // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FConcertAdmin_GetArchivedSessionsRequest : public FConcertRequestData
{
}; // Size: 0x30

struct FConcertAdmin_GetLiveSessionsRequest : public FConcertRequestData
{
}; // Size: 0x30

struct FConcertAdmin_GetSessionActivitiesRequest : public FConcertRequestData
{
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)
    int64 FromActivityId;                                                             // 0x0040 (size: 0x8)
    int64 ActivityCount;                                                              // 0x0048 (size: 0x8)
    bool bIncludeDetails;                                                             // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FConcertAdmin_GetSessionActivitiesResponse : public FConcertResponseData
{
    TArray<FConcertSessionSerializedPayload> Activities;                              // 0x0058 (size: 0x10)
    TMap<class FGuid, class FConcertClientInfo> EndpointClientInfoMap;                // 0x0068 (size: 0x50)

}; // Size: 0xB8

struct FConcertAdmin_GetSessionClientsRequest : public FConcertRequestData
{
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FConcertAdmin_GetSessionClientsResponse : public FConcertResponseData
{
    TArray<FConcertSessionClientInfo> SessionClients;                                 // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FConcertAdmin_GetSessionRepositoriesRequest : public FConcertRequestData
{
}; // Size: 0x30

struct FConcertAdmin_GetSessionRepositoriesResponse : public FConcertResponseData
{
    TArray<FConcertSessionRepositoryInfo> SessionRepositories;                        // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FConcertAdmin_GetSessionsResponse : public FConcertResponseData
{
    TArray<FConcertSessionInfo> Sessions;                                             // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FConcertAdmin_MountSessionRepositoryRequest : public FConcertRequestData
{
    FGuid RepositoryId;                                                               // 0x0030 (size: 0x10)
    FString RepositoryRootDir;                                                        // 0x0040 (size: 0x10)
    bool bAsServerDefault;                                                            // 0x0050 (size: 0x1)
    bool bCreateIfNotExist;                                                           // 0x0051 (size: 0x1)

}; // Size: 0x58

struct FConcertAdmin_MountSessionRepositoryResponse : public FConcertResponseData
{
    EConcertSessionRepositoryMountResponseCode MountStatus;                           // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FConcertAdmin_RenameSessionRequest : public FConcertRequestData
{
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)
    FString NewName;                                                                  // 0x0040 (size: 0x10)
    FString Username;                                                                 // 0x0050 (size: 0x10)
    FString DeviceName;                                                               // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FConcertAdmin_RenameSessionResponse : public FConcertResponseData
{
    FGuid SessionId;                                                                  // 0x0058 (size: 0x10)
    FString OldName;                                                                  // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FConcertAdmin_ServerDiscoveredEvent : public FConcertEndpointDiscoveryEvent
{
    FString ServerName;                                                               // 0x0038 (size: 0x10)
    FConcertInstanceInfo InstanceInfo;                                                // 0x0048 (size: 0x30)
    EConcertServerFlags ServerFlags;                                                  // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FConcertAdmin_SessionInfoResponse : public FConcertResponseData
{
    FConcertSessionInfo SessionInfo;                                                  // 0x0058 (size: 0xB8)

}; // Size: 0x110

struct FConcertByteArray
{
    TArray<uint8> Bytes;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertClientInfo
{
    FConcertInstanceInfo InstanceInfo;                                                // 0x0000 (size: 0x30)
    FString DeviceName;                                                               // 0x0030 (size: 0x10)
    FString PlatformName;                                                             // 0x0040 (size: 0x10)
    FString Username;                                                                 // 0x0050 (size: 0x10)
    FString DisplayName;                                                              // 0x0060 (size: 0x10)
    FLinearColor AvatarColor;                                                         // 0x0070 (size: 0x10)
    FString DesktopAvatarActorClass;                                                  // 0x0080 (size: 0x10)
    FString VRAvatarActorClass;                                                       // 0x0090 (size: 0x10)
    TArray<FName> Tags;                                                               // 0x00A0 (size: 0x10)
    bool bHasEditorData;                                                              // 0x00B0 (size: 0x1)
    bool bRequiresCookedData;                                                         // 0x00B1 (size: 0x1)

}; // Size: 0xB8

struct FConcertCustomVersionInfo
{
    FName FriendlyName;                                                               // 0x0000 (size: 0x8)
    FGuid Key;                                                                        // 0x0008 (size: 0x10)
    int32 Version;                                                                    // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FConcertEngineVersionInfo
{
    uint16 Major;                                                                     // 0x0000 (size: 0x2)
    uint16 Minor;                                                                     // 0x0002 (size: 0x2)
    uint16 Patch;                                                                     // 0x0004 (size: 0x2)
    uint32 Changelist;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FConcertFileVersionInfo
{
    int32 FileVersion;                                                                // 0x0000 (size: 0x4)
    int32 FileVersionUE5;                                                             // 0x0004 (size: 0x4)
    int32 FileVersionLicensee;                                                        // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FConcertInstanceInfo
{
    FGuid InstanceId;                                                                 // 0x0000 (size: 0x10)
    FString InstanceName;                                                             // 0x0010 (size: 0x10)
    FString InstanceType;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FConcertLog
{
    uint64 Frame;                                                                     // 0x0000 (size: 0x8)
    FGuid MessageId;                                                                  // 0x0008 (size: 0x10)
    uint16 MessageOrderIndex;                                                         // 0x0018 (size: 0x2)
    uint16 ChannelId;                                                                 // 0x001A (size: 0x2)
    FDateTime Timestamp;                                                              // 0x0020 (size: 0x8)
    EConcertLogMessageAction MessageAction;                                           // 0x0028 (size: 0x1)
    FName MessageTypeName;                                                            // 0x002C (size: 0x8)
    FGuid OriginEndpointId;                                                           // 0x0034 (size: 0x10)
    FGuid DestinationEndpointId;                                                      // 0x0044 (size: 0x10)
    FName CustomPayloadTypename;                                                      // 0x0054 (size: 0x8)
    int32 CustomPayloadUncompressedByteSize;                                          // 0x005C (size: 0x4)
    FString StringPayload;                                                            // 0x0060 (size: 0x10)
    FConcertSessionSerializedPayload SerializedPayload;                               // 0x0070 (size: 0x20)

}; // Size: 0x90

struct FConcertServerInfo
{
    FGuid AdminEndpointId;                                                            // 0x0000 (size: 0x10)
    FString ServerName;                                                               // 0x0010 (size: 0x10)
    FConcertInstanceInfo InstanceInfo;                                                // 0x0020 (size: 0x30)
    EConcertServerFlags ServerFlags;                                                  // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FConcertSessionClientInfo
{
    FGuid ClientEndpointId;                                                           // 0x0000 (size: 0x10)
    FConcertClientInfo ClientInfo;                                                    // 0x0010 (size: 0xB8)

}; // Size: 0xC8

struct FConcertSessionFilter
{
    int64 ActivityIdLowerBound;                                                       // 0x0000 (size: 0x8)
    int64 ActivityIdUpperBound;                                                       // 0x0008 (size: 0x8)
    TArray<int64> ActivityIdsToExclude;                                               // 0x0010 (size: 0x10)
    TArray<int64> ActivityIdsToInclude;                                               // 0x0020 (size: 0x10)
    bool bOnlyLiveData;                                                               // 0x0030 (size: 0x1)
    bool bMetaDataOnly;                                                               // 0x0031 (size: 0x1)
    bool bIncludeIgnoredActivities;                                                   // 0x0032 (size: 0x1)

}; // Size: 0x38

struct FConcertSessionInfo
{
    FGuid ServerInstanceId;                                                           // 0x0000 (size: 0x10)
    FGuid ServerEndpointId;                                                           // 0x0010 (size: 0x10)
    FGuid OwnerInstanceId;                                                            // 0x0020 (size: 0x10)
    FGuid SessionId;                                                                  // 0x0030 (size: 0x10)
    FString SessionName;                                                              // 0x0040 (size: 0x10)
    FString OwnerUserName;                                                            // 0x0050 (size: 0x10)
    FString OwnerDeviceName;                                                          // 0x0060 (size: 0x10)
    FConcertSessionSettings Settings;                                                 // 0x0070 (size: 0x28)
    TArray<FConcertSessionVersionInfo> VersionInfos;                                  // 0x0098 (size: 0x10)
    EConcertSessionState State;                                                       // 0x00A8 (size: 0x1)
    int64 LastModifiedTicks;                                                          // 0x00B0 (size: 0x8)

}; // Size: 0xB8

struct FConcertSessionRepositoryInfo
{
    FGuid RepositoryId;                                                               // 0x0000 (size: 0x10)
    bool bMounted;                                                                    // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FConcertSessionSerializedPayload
{
    FName PayloadTypeName;                                                            // 0x0000 (size: 0x8)
    EConcertPayloadSerializationMethod SerializationMethod;                           // 0x0008 (size: 0x1)
    EConcertCompressionDetails PayloadCompressionDetails;                             // 0x0009 (size: 0x1)
    int32 PayloadSize;                                                                // 0x000C (size: 0x4)
    FConcertByteArray PayloadBytes;                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FConcertSessionSettings
{
    FString ProjectName;                                                              // 0x0000 (size: 0x10)
    uint32 BaseRevision;                                                              // 0x0010 (size: 0x4)
    FString ArchiveNameOverride;                                                      // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FConcertSessionVersionInfo
{
    FConcertFileVersionInfo FileVersion;                                              // 0x0000 (size: 0xC)
    FConcertEngineVersionInfo EngineVersion;                                          // 0x000C (size: 0xC)
    TArray<FConcertCustomVersionInfo> CustomVersions;                                 // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FConcertSession_ClientListUpdatedEvent : public FConcertEventData
{
    TArray<FConcertSessionClientInfo> SessionClients;                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FConcertSession_CustomEvent : public FConcertEventData
{
    FGuid SourceEndpointId;                                                           // 0x0030 (size: 0x10)
    TArray<FGuid> DestinationEndpointIds;                                             // 0x0040 (size: 0x10)
    FConcertSessionSerializedPayload SerializedPayload;                               // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FConcertSession_CustomRequest : public FConcertRequestData
{
    FGuid SourceEndpointId;                                                           // 0x0030 (size: 0x10)
    FGuid DestinationEndpointId;                                                      // 0x0040 (size: 0x10)
    FConcertSessionSerializedPayload SerializedPayload;                               // 0x0050 (size: 0x20)

}; // Size: 0x70

struct FConcertSession_CustomResponse : public FConcertResponseData
{
    FConcertSessionSerializedPayload SerializedPayload;                               // 0x0058 (size: 0x20)

}; // Size: 0x78

struct FConcertSession_DiscoverAndJoinSessionEvent : public FConcertEndpointDiscoveryEvent
{
    FGuid SessionServerEndpointId;                                                    // 0x0038 (size: 0x10)
    FConcertClientInfo ClientInfo;                                                    // 0x0048 (size: 0xB8)

}; // Size: 0x100

struct FConcertSession_JoinSessionResultEvent : public FConcertEndpointDiscoveryEvent
{
    FGuid SessionServerEndpointId;                                                    // 0x0038 (size: 0x10)
    EConcertConnectionResult ConnectionResult;                                        // 0x0048 (size: 0x1)
    TArray<FConcertSessionClientInfo> SessionClients;                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FConcertSession_LeaveSessionEvent : public FConcertEventData
{
    FGuid SessionServerEndpointId;                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FConcertSession_SessionRenamedEvent : public FConcertEventData
{
    FString NewName;                                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FConcertSession_UpdateClientInfoEvent : public FConcertEventData
{
    FConcertSessionClientInfo SessionClient;                                          // 0x0030 (size: 0xC8)

}; // Size: 0xF8

struct FDeletedSessionInfo
{
    FGuid SessionId;                                                                  // 0x0000 (size: 0x10)
    FString SessionName;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

#endif
