#ifndef UE4SS_SDK_ConcertSyncCore_HPP
#define UE4SS_SDK_ConcertSyncCore_HPP

#include "ConcertSyncCore_enums.hpp"

struct FConcertAuthorityClientInfo
{
    FGuid StreamId;                                                                   // 0x0000 (size: 0x10)
    TArray<FSoftObjectPath> AuthoredObjects;                                          // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FConcertBaseStreamInfo
{
    FGuid Identifier;                                                                 // 0x0000 (size: 0x10)
    FConcertObjectReplicationMap ReplicationMap;                                      // 0x0010 (size: 0x50)
    FConcertStreamFrequencySettings FrequencySettings;                                // 0x0060 (size: 0x58)

}; // Size: 0xB8

struct FConcertClientDesktopPresenceUpdateEvent : public FConcertClientPresenceEventBase
{
    FVector TraceStart;                                                               // 0x0008 (size: 0x18)
    FVector TraceEnd;                                                                 // 0x0020 (size: 0x18)
    bool bMovingCamera;                                                               // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FConcertClientPresenceDataUpdateEvent : public FConcertClientPresenceEventBase
{
    FName WorldPath;                                                                  // 0x0004 (size: 0x8)
    FVector position;                                                                 // 0x0010 (size: 0x18)
    FQuat Orientation;                                                                // 0x0030 (size: 0x20)
    EPresenceModeType PresenceType;                                                   // 0x0050 (size: 0x4)

}; // Size: 0x60

struct FConcertClientPresenceEventBase
{
    uint32 TransactionUpdateIndex;                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FConcertClientPresenceInVREvent
{
    FName VRDevice;                                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FConcertClientPresenceVisibilityUpdateEvent
{
    FGuid ModifiedEndpointId;                                                         // 0x0000 (size: 0x10)
    bool bVisibility;                                                                 // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FConcertClientVRPresenceUpdateEvent : public FConcertClientPresenceEventBase
{
    FVector LeftMotionControllerPosition;                                             // 0x0008 (size: 0x18)
    FQuat LeftMotionControllerOrientation;                                            // 0x0020 (size: 0x20)
    FVector RightMotionControllerPosition;                                            // 0x0040 (size: 0x18)
    FQuat RightMotionControllerOrientation;                                           // 0x0060 (size: 0x20)
    FConcertLaserData Lasers;                                                         // 0x0080 (size: 0x60)

}; // Size: 0xE0

struct FConcertDataStore_CompareExchangeRequest : public FConcertDataStore_Request
{
    uint32 ExpectedVersion;                                                           // 0x0010 (size: 0x4)
    FConcertSessionSerializedPayload Expected;                                        // 0x0018 (size: 0x20)
    FConcertSessionSerializedPayload Desired;                                         // 0x0038 (size: 0x20)

}; // Size: 0x58

struct FConcertDataStore_Double
{
    double Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FConcertDataStore_FetchOrAddRequest : public FConcertDataStore_Request
{
    FConcertSessionSerializedPayload SerializedValue;                                 // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FConcertDataStore_Integer
{
    uint64 Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FConcertDataStore_KeyValuePair
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FConcertDataStore_StoreValue Value;                                               // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FConcertDataStore_ReplicateEvent
{
    TArray<FConcertDataStore_KeyValuePair> Values;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertDataStore_Request
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FName TypeName;                                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FConcertDataStore_Response
{
    EConcertDataStoreResultCode ResultCode;                                           // 0x0000 (size: 0x1)
    FConcertDataStore_StoreValue Value;                                               // 0x0008 (size: 0x30)

}; // Size: 0x38

struct FConcertDataStore_StoreValue
{
    FName TypeName;                                                                   // 0x0000 (size: 0x8)
    uint32 Version;                                                                   // 0x0008 (size: 0x4)
    FConcertSessionSerializedPayload SerializedValue;                                 // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FConcertDataStore_String
{
    FString Value;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertDataStore_Text
{
    FText Value;                                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertExportedObject
{
    FConcertObjectId ObjectId;                                                        // 0x0000 (size: 0x2C)
    int32 ObjectPathDepth;                                                            // 0x002C (size: 0x4)
    bool bHasLevelInstanceObject;                                                     // 0x0030 (size: 0x1)
    FConcertSerializedObjectData ObjectData;                                          // 0x0038 (size: 0x38)
    TArray<FConcertSerializedPropertyData> PropertyDatas;                             // 0x0070 (size: 0x10)
    TArray<uint8> SerializedAnnotationData;                                           // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FConcertIgnoreActivityStateChangedEvent
{
    FGuid EndpointId;                                                                 // 0x0000 (size: 0x10)
    bool bIgnore;                                                                     // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FConcertLaserData
{
    FVector LaserStart;                                                               // 0x0000 (size: 0x18)
    FVector LaserEnd;                                                                 // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FConcertObjectId
{
    FName ObjectClassPathName;                                                        // 0x0000 (size: 0x8)
    FName ObjectPackageName;                                                          // 0x0008 (size: 0x8)
    FName ObjectName;                                                                 // 0x0010 (size: 0x8)
    FName ObjectOuterPathName;                                                        // 0x0018 (size: 0x8)
    FName ObjectExternalPackageName;                                                  // 0x0020 (size: 0x8)
    uint32 ObjectPersistentFlags;                                                     // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FConcertObjectInStreamID
{
    FGuid StreamId;                                                                   // 0x0000 (size: 0x10)
    FSoftObjectPath Object;                                                           // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FConcertObjectReplicationMap
{
    TMap<class FSoftObjectPath, class FConcertReplicatedObjectInfo> ReplicatedObjects; // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FConcertObjectReplicationSettings
{
    EConcertObjectReplicationMode ReplicationMode;                                    // 0x0000 (size: 0x1)
    uint8 ReplicationRate;                                                            // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FConcertPackage
{
    FConcertPackageInfo Info;                                                         // 0x0000 (size: 0x48)
    FConcertByteArray PackageData;                                                    // 0x0048 (size: 0x10)
    FString FileId;                                                                   // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FConcertPackageInfo
{
    FName PackageName;                                                                // 0x0000 (size: 0x8)
    FName NewPackageName;                                                             // 0x0008 (size: 0x8)
    FString AssetClass;                                                               // 0x0010 (size: 0x10)
    FString PackageFileExtension;                                                     // 0x0020 (size: 0x10)
    EConcertPackageUpdateType PackageUpdateType;                                      // 0x0030 (size: 0x1)
    int64 TransactionEventIdAtSave;                                                   // 0x0038 (size: 0x8)
    bool bPreSave;                                                                    // 0x0040 (size: 0x1)
    bool bAutoSave;                                                                   // 0x0041 (size: 0x1)

}; // Size: 0x48

struct FConcertPackageRejectedEvent
{
    FName PackageName;                                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FConcertPackageTransmissionStartEvent
{
    FGuid TransmissionId;                                                             // 0x0000 (size: 0x10)
    FConcertPackageInfo PackageInfo;                                                  // 0x0010 (size: 0x48)
    uint64 PackageNumBytes;                                                           // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FConcertPackageUpdateEvent
{
    FGuid TransmissionId;                                                             // 0x0000 (size: 0x10)
    FConcertPackage Package;                                                          // 0x0010 (size: 0x68)

}; // Size: 0x78

struct FConcertPlaySessionEvent
{
    EConcertPlaySessionEventType EventType;                                           // 0x0000 (size: 0x1)
    FGuid PlayEndpointId;                                                             // 0x0004 (size: 0x10)
    FName PlayPackageName;                                                            // 0x0014 (size: 0x8)
    bool bIsSimulating;                                                               // 0x001C (size: 0x1)

}; // Size: 0x20

struct FConcertPropertyChain
{
    TArray<FName> PathToProperty;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertPropertySelection
{
    TArray<FConcertPropertyChain> ReplicatedProperties;                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertQueriedClientInfo
{
    TArray<FConcertBaseStreamInfo> Streams;                                           // 0x0000 (size: 0x10)
    TArray<FConcertAuthorityClientInfo> Authority;                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FConcertReplicatedObjectId : public FConcertObjectInStreamID
{
}; // Size: 0x40

struct FConcertReplicatedObjectInfo
{
    FSoftClassPath ClassPath;                                                         // 0x0000 (size: 0x20)
    FConcertPropertySelection PropertySelection;                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FConcertReplicationStream
{
    FConcertBaseStreamInfo BaseDescription;                                           // 0x0000 (size: 0xB8)

}; // Size: 0xB8

struct FConcertReplication_BatchReplicationEvent
{
    TArray<FConcertReplication_StreamReplicationEvent> Streams;                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertReplication_ChangeAuthority_Request
{
    TMap<class FSoftObjectPath, class FConcertStreamArray> TakeAuthority;             // 0x0000 (size: 0x50)
    TMap<class FSoftObjectPath, class FConcertStreamArray> ReleaseAuthority;          // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FConcertReplication_ChangeAuthority_Response
{
    EReplicationResponseErrorCode ErrorCode;                                          // 0x0000 (size: 0x1)
    TMap<class FSoftObjectPath, class FConcertStreamArray> RejectedObjects;           // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FConcertReplication_ChangeStream_Frequency
{
    TMap<class FSoftObjectPath, class FConcertObjectReplicationSettings> OverridesToPut; // 0x0000 (size: 0x50)
    TSet<FSoftObjectPath> OverridesToRemove;                                          // 0x0050 (size: 0x50)
    TMap<class FSoftObjectPath, class FConcertObjectReplicationSettings> OverridesToAdd; // 0x00A0 (size: 0x50)
    FConcertObjectReplicationSettings NewDefaults;                                    // 0x00F0 (size: 0x2)
    EConcertReplicationChangeFrequencyFlags Flags;                                    // 0x00F2 (size: 0x1)

}; // Size: 0xF8

struct FConcertReplication_ChangeStream_FrequencyResponse
{
    TMap<class FConcertObjectInStreamID, class EConcertChangeObjectFrequencyErrorCode> OverrideFailures; // 0x0000 (size: 0x50)
    TMap<class FGuid, class EConcertChangeStreamFrequencyErrorCode> DefaultFailures;  // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FConcertReplication_ChangeStream_PutObject
{
    FConcertPropertySelection Properties;                                             // 0x0000 (size: 0x10)
    FSoftClassPath ClassPath;                                                         // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FConcertReplication_ChangeStream_Request
{
    TSet<FConcertObjectInStreamID> ObjectsToRemove;                                   // 0x0000 (size: 0x50)
    TMap<class FConcertObjectInStreamID, class FConcertReplication_ChangeStream_PutObject> ObjectsToPut; // 0x0050 (size: 0x50)
    TMap<class FGuid, class FConcertReplication_ChangeStream_Frequency> FrequencyChanges; // 0x00A0 (size: 0x50)
    TArray<FConcertReplicationStream> StreamsToAdd;                                   // 0x00F0 (size: 0x10)
    TSet<FGuid> StreamsToRemove;                                                      // 0x0100 (size: 0x50)

}; // Size: 0x150

struct FConcertReplication_ChangeStream_Response
{
    EReplicationResponseErrorCode ErrorCode;                                          // 0x0000 (size: 0x1)
    TMap<class FConcertObjectInStreamID, class FConcertReplicatedObjectId> AuthorityConflicts; // 0x0008 (size: 0x50)
    TMap<class FConcertObjectInStreamID, class EConcertPutObjectErrorCode> ObjectsToPutSemanticErrors; // 0x0058 (size: 0x50)
    TSet<FGuid> FailedStreamCreation;                                                 // 0x00A8 (size: 0x50)
    FConcertReplication_ChangeStream_FrequencyResponse FrequencyErrors;               // 0x00F8 (size: 0xA0)

}; // Size: 0x198

struct FConcertReplication_Join_Request
{
    TArray<FConcertReplicationStream> Streams;                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertReplication_Join_Response
{
    EJoinReplicationErrorCode JoinErrorCode;                                          // 0x0000 (size: 0x1)
    FString DetailedErrorMessage;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FConcertReplication_LeaveEvent
{
}; // Size: 0x1

struct FConcertReplication_ObjectReplicationEvent
{
    FSoftObjectPath ReplicatedObject;                                                 // 0x0000 (size: 0x20)
    FConcertSessionSerializedPayload SerializedPayload;                               // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FConcertReplication_QueryReplicationInfo_Request
{
    TSet<FGuid> ClientEndpointIds;                                                    // 0x0000 (size: 0x50)
    EConcertQueryClientStreamFlags QueryFlags;                                        // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FConcertReplication_QueryReplicationInfo_Response
{
    EReplicationResponseErrorCode ErrorCode;                                          // 0x0000 (size: 0x1)
    TMap<class FGuid, class FConcertQueriedClientInfo> ClientInfo;                    // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FConcertReplication_StreamReplicationEvent
{
    FGuid StreamId;                                                                   // 0x0000 (size: 0x10)
    TArray<FConcertReplication_ObjectReplicationEvent> ReplicatedObjects;             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FConcertResourceLockEvent
{
    FGuid ClientId;                                                                   // 0x0000 (size: 0x10)
    TArray<FName> ResourceNames;                                                      // 0x0010 (size: 0x10)
    EConcertResourceLockType LockType;                                                // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FConcertResourceLockRequest
{
    FGuid ClientId;                                                                   // 0x0000 (size: 0x10)
    TArray<FName> ResourceNames;                                                      // 0x0010 (size: 0x10)
    EConcertResourceLockType LockType;                                                // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FConcertResourceLockResponse
{
    TMap<class FName, class FGuid> FailedResources;                                   // 0x0000 (size: 0x50)
    EConcertResourceLockType LockType;                                                // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FConcertSequencerCloseEvent
{
    FString SequenceObjectPath;                                                       // 0x0000 (size: 0x10)
    bool bControllerClose;                                                            // 0x0010 (size: 0x1)
    int32 EditorsWithSequencerOpened;                                                 // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FConcertSequencerOpenEvent
{
    FString SequenceObjectPath;                                                       // 0x0000 (size: 0x10)
    FConcertByteArray TakeData;                                                       // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FConcertSequencerPreloadAssetStatusMap
{
    TMap<class FTopLevelAssetPath, class EConcertSequencerPreloadStatus> Sequences;   // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FConcertSequencerPreloadClientStatusMap
{
    TMap<class FGuid, class FConcertSequencerPreloadAssetStatusMap> ClientEndpoints;  // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FConcertSequencerPreloadRequest
{
    TArray<FTopLevelAssetPath> SequenceObjectPaths;                                   // 0x0000 (size: 0x10)
    bool bShouldBePreloaded;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FConcertSequencerState
{
    FString SequenceObjectPath;                                                       // 0x0000 (size: 0x10)
    FQualifiedFrameTime Time;                                                         // 0x0010 (size: 0x10)
    EConcertMovieScenePlayerStatus PlayerStatus;                                      // 0x0020 (size: 0x1)
    FFrameNumberRange PlaybackRange;                                                  // 0x0024 (size: 0x10)
    float PlaybackSpeed;                                                              // 0x0034 (size: 0x4)
    bool bLoopMode;                                                                   // 0x0038 (size: 0x1)
    FConcertByteArray TakeData;                                                       // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FConcertSequencerStateEvent
{
    FConcertSequencerState State;                                                     // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FConcertSequencerStateSyncEvent
{
    TArray<FConcertSequencerState> SequencerStates;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertSequencerTimeAdjustmentEvent
{
    FFrameNumber PlaybackStartFrame;                                                  // 0x0000 (size: 0x4)
    FString SequenceObjectPath;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FConcertSerializedObjectData
{
    bool bAllowCreate;                                                                // 0x0000 (size: 0x1)
    bool bResetExisting;                                                              // 0x0001 (size: 0x1)
    bool bIsPendingKill;                                                              // 0x0002 (size: 0x1)
    FName NewPackageName;                                                             // 0x0004 (size: 0x8)
    FName NewName;                                                                    // 0x000C (size: 0x8)
    FName NewOuterPathName;                                                           // 0x0014 (size: 0x8)
    FName NewExternalPackageName;                                                     // 0x001C (size: 0x8)
    TArray<uint8> SerializedData;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FConcertSerializedPropertyData
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    TArray<uint8> SerializedData;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FConcertServerLogging
{
    bool bLoggingEnabled;                                                             // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FConcertStreamArray
{
    TArray<FGuid> StreamIds;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertStreamFrequencySettings
{
    FConcertObjectReplicationSettings Defaults;                                       // 0x0000 (size: 0x2)
    TMap<class FSoftObjectPath, class FConcertObjectReplicationSettings> ObjectOverrides; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FConcertSyncActivity
{
    int64 ActivityId;                                                                 // 0x0000 (size: 0x8)
    bool bIgnored;                                                                    // 0x0008 (size: 0x1)
    EConcertSyncActivityFlags Flags;                                                  // 0x0009 (size: 0x1)
    FGuid EndpointId;                                                                 // 0x000C (size: 0x10)
    FDateTime EventTime;                                                              // 0x0020 (size: 0x8)
    EConcertSyncActivityEventType EventType;                                          // 0x0028 (size: 0x1)
    int64 EventId;                                                                    // 0x0030 (size: 0x8)
    FConcertSessionSerializedPayload EventSummary;                                    // 0x0038 (size: 0x20)

}; // Size: 0x58

struct FConcertSyncActivitySummary
{
}; // Size: 0x8

struct FConcertSyncConnectionActivity : public FConcertSyncActivity
{
    FConcertSyncConnectionEvent EventData;                                            // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FConcertSyncConnectionActivitySummary : public FConcertSyncActivitySummary
{
    EConcertSyncConnectionEventType ConnectionEventType;                              // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FConcertSyncConnectionEvent
{
    EConcertSyncConnectionEventType ConnectionEventType;                              // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FConcertSyncEndpointData
{
    FConcertClientInfo ClientInfo;                                                    // 0x0000 (size: 0xB8)

}; // Size: 0xB8

struct FConcertSyncEndpointIdAndData
{
    FGuid EndpointId;                                                                 // 0x0000 (size: 0x10)
    FConcertSyncEndpointData EndpointData;                                            // 0x0010 (size: 0xB8)

}; // Size: 0xC8

struct FConcertSyncEventRequest
{
    EConcertSyncActivityEventType EventType;                                          // 0x0000 (size: 0x1)
    int64 EventId;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FConcertSyncEventResponse
{
    FConcertSessionSerializedPayload Event;                                           // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FConcertSyncLockActivity : public FConcertSyncActivity
{
    FConcertSyncLockEvent EventData;                                                  // 0x0058 (size: 0x18)

}; // Size: 0x70

struct FConcertSyncLockActivitySummary : public FConcertSyncActivitySummary
{
    EConcertSyncLockEventType LockEventType;                                          // 0x0008 (size: 0x1)
    FName PrimaryResourceName;                                                        // 0x000C (size: 0x8)
    FName PrimaryPackageName;                                                         // 0x0014 (size: 0x8)
    int32 NumResources;                                                               // 0x001C (size: 0x4)

}; // Size: 0x20

struct FConcertSyncLockEvent
{
    EConcertSyncLockEventType LockEventType;                                          // 0x0000 (size: 0x1)
    TArray<FName> ResourceNames;                                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FConcertSyncPackageActivity : public FConcertSyncActivity
{
    FConcertSyncPackageEvent EventData;                                               // 0x0058 (size: 0x70)

}; // Size: 0xC8

struct FConcertSyncPackageActivitySummary : public FConcertSyncActivitySummary
{
    FName PackageName;                                                                // 0x0008 (size: 0x8)
    FName NewPackageName;                                                             // 0x0010 (size: 0x8)
    EConcertPackageUpdateType PackageUpdateType;                                      // 0x0018 (size: 0x1)
    bool bAutoSave;                                                                   // 0x0019 (size: 0x1)
    bool bPreSave;                                                                    // 0x001A (size: 0x1)

}; // Size: 0x20

struct FConcertSyncPackageEvent
{
    int64 PackageRevision;                                                            // 0x0000 (size: 0x8)
    FConcertPackage Package;                                                          // 0x0008 (size: 0x68)

}; // Size: 0x70

struct FConcertSyncPackageEventMetaData
{
    int64 PackageRevision;                                                            // 0x0000 (size: 0x8)
    FConcertPackageInfo PackageInfo;                                                  // 0x0008 (size: 0x48)

}; // Size: 0x50

struct FConcertSyncTransactionActivity : public FConcertSyncActivity
{
    FConcertSyncTransactionEvent EventData;                                           // 0x0058 (size: 0xA8)

}; // Size: 0x100

struct FConcertSyncTransactionActivitySummary : public FConcertSyncActivitySummary
{
    EConcertSyncTransactionActivitySummaryType TransactionSummaryType;                // 0x0008 (size: 0x1)
    FText TransactionTitle;                                                           // 0x0010 (size: 0x10)
    FName PrimaryObjectName;                                                          // 0x0020 (size: 0x8)
    FName PrimaryPackageName;                                                         // 0x0028 (size: 0x8)
    FName NewObjectName;                                                              // 0x0030 (size: 0x8)
    int32 NumActions;                                                                 // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FConcertSyncTransactionEvent
{
    FConcertTransactionFinalizedEvent Transaction;                                    // 0x0000 (size: 0xA8)

}; // Size: 0xA8

struct FConcertTransactionEventBase
{
    FGuid TransactionId;                                                              // 0x0000 (size: 0x10)
    FGuid OperationId;                                                                // 0x0010 (size: 0x10)
    FGuid TransactionEndpointId;                                                      // 0x0020 (size: 0x10)
    uint8 TransactionUpdateIndex;                                                     // 0x0030 (size: 0x1)
    int32 VersionIndex;                                                               // 0x0034 (size: 0x4)
    TArray<FName> ModifiedPackages;                                                   // 0x0038 (size: 0x10)
    FConcertObjectId PrimaryObjectId;                                                 // 0x0048 (size: 0x2C)
    TArray<FConcertExportedObject> ExportedObjects;                                   // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FConcertTransactionFinalizedEvent : public FConcertTransactionEventBase
{
    FConcertLocalIdentifierState LocalIdentifierState;                                // 0x0088 (size: 0x10)
    FText Title;                                                                      // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FConcertTransactionRejectedEvent
{
    FGuid TransactionId;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertTransactionSnapshotEvent : public FConcertTransactionEventBase
{
}; // Size: 0x88

struct FConcertWorkspaceSyncActivityEvent : public FConcertWorkspaceSyncEventBase
{
    FConcertSessionSerializedPayload Activity;                                        // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FConcertWorkspaceSyncAndFinalizeCompletedEvent
{
}; // Size: 0x1

struct FConcertWorkspaceSyncCompletedEvent
{
}; // Size: 0x1

struct FConcertWorkspaceSyncEndpointEvent : public FConcertWorkspaceSyncEventBase
{
    FConcertSyncEndpointIdAndData Endpoint;                                           // 0x0008 (size: 0xC8)

}; // Size: 0xD0

struct FConcertWorkspaceSyncEventBase
{
    int32 NumRemainingSyncEvents;                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FConcertWorkspaceSyncLockEvent : public FConcertWorkspaceSyncEventBase
{
    TMap<class FName, class FGuid> LockedResources;                                   // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FConcertWorkspaceSyncRequestedEvent
{
    int64 FirstActivityIdToSync;                                                      // 0x0000 (size: 0x8)
    int64 LastActivityIdToSync;                                                       // 0x0008 (size: 0x8)
    bool bEnableLiveSync;                                                             // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FFullObjectReplicationData
{
    FConcertByteArray SerializedObjectData;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPackageClassFilter
{
    FSoftClassPath AssetClass;                                                        // 0x0000 (size: 0x20)
    TArray<FString> ContentPaths;                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FTransactionClassFilter
{
    FSoftClassPath ObjectOuterClass;                                                  // 0x0000 (size: 0x20)
    TArray<FSoftClassPath> ObjectClasses;                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

class UConcertSyncConfig : public UObject
{
    bool bInteractiveHotReload;                                                       // 0x0028 (size: 0x1)
    bool bShowPresenceInPIE;                                                          // 0x0029 (size: 0x1)
    bool bIncludeAnnotationObjectChanges;                                             // 0x002A (size: 0x1)
    float SnapshotTransactionsPerSecond;                                              // 0x002C (size: 0x4)
    TArray<FTransactionClassFilter> IncludeObjectClassFilters;                        // 0x0030 (size: 0x10)
    TArray<FTransactionClassFilter> ExcludeTransactionClassFilters;                   // 0x0040 (size: 0x10)
    TArray<TFieldPath<FProperty>> AllowedTransientProperties;                         // 0x0050 (size: 0x10)
    TArray<TFieldPath<FProperty>> ExcludedProperties;                                 // 0x0060 (size: 0x10)
    TArray<FName> ExcludedPropertyTypes;                                              // 0x0070 (size: 0x10)
    TArray<FPackageClassFilter> ExcludePackageClassFilters;                           // 0x0080 (size: 0x10)

}; // Size: 0x90

#endif
