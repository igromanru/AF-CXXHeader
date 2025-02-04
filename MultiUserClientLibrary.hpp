#ifndef UE4SS_SDK_MultiUserClientLibrary_HPP
#define UE4SS_SDK_MultiUserClientLibrary_HPP

#include "MultiUserClientLibrary_enums.hpp"

struct FChangeClientStreamFrequencyResponse
{
    TMap<class FSoftObjectPath, class EMultiUserChangeFrequencyErrorCode> ObjectErrors; // 0x0000 (size: 0x50)
    TOptional<EMultiUserChangeFrequencyErrorCode> DefaultChangeErrorCode;             // 0x0050 (size: 0x2)

}; // Size: 0x58

struct FConcertBlueprintEvent
{
    FConcertSessionSerializedPayload Data;                                            // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FMultiUserBlueprintEventData
{
}; // Size: 0x10

struct FMultiUserChangeAuthorityRequest
{
    TSet<FSoftObjectPath> ObjectsToStartReplicating;                                  // 0x0000 (size: 0x50)
    TSet<FSoftObjectPath> ObjectToStopReplicating;                                    // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FMultiUserChangeClientAuthorityResponse
{
    EMultiUserChangeAuthorityOperationResult ErrorCode;                               // 0x0000 (size: 0x1)
    TSet<FSoftObjectPath> RejectedObjects;                                            // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FMultiUserChangeClientReplicationRequest
{
    FMultiUserChangeStreamRequest StreamChangeRequest;                                // 0x0000 (size: 0x148)
    FMultiUserChangeAuthorityRequest AuthorityChangeRequest;                          // 0x0148 (size: 0xA0)

}; // Size: 0x1E8

struct FMultiUserChangeClientReplicationResult
{
    FMultiUserChangeClientStreamResponse StreamResponse;                              // 0x0000 (size: 0x108)
    FMultiUserChangeClientAuthorityResponse AuthorityResponse;                        // 0x0108 (size: 0x58)

}; // Size: 0x160

struct FMultiUserChangeClientStreamResponse
{
    EMultiUserChangeStreamOperationResult ErrorCode;                                  // 0x0000 (size: 0x1)
    TMap<class FSoftObjectPath, class FGuid> AuthorityConflicts;                      // 0x0008 (size: 0x50)
    TMap<class FSoftObjectPath, class EMultiUserPutObjectErrorCode> SemanticErrors;   // 0x0058 (size: 0x50)
    FChangeClientStreamFrequencyResponse FrequencyErrors;                             // 0x00A8 (size: 0x58)
    bool bFailedStreamCreation;                                                       // 0x0100 (size: 0x1)

}; // Size: 0x108

struct FMultiUserChangeStreamRequest
{
    TMap<class UObject*, class FMultiUserPropertyChange> PropertyChanges;             // 0x0000 (size: 0x50)
    TSet<FSoftObjectPath> ObjectsToRemove;                                            // 0x0050 (size: 0x50)
    FMultiUserFrequencyChangeRequest FrequencyChanges;                                // 0x00A0 (size: 0xA8)

}; // Size: 0x148

struct FMultiUserClientConfig
{
    FString DefaultServerURL;                                                         // 0x0000 (size: 0x10)
    FString DefaultSessionName;                                                       // 0x0010 (size: 0x10)
    FString DefaultSessionToRestore;                                                  // 0x0020 (size: 0x10)
    EMultiUserSourceValidationMode ValidationMode;                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FMultiUserClientInfo
{
    FGuid ClientEndpointId;                                                           // 0x0000 (size: 0x10)
    FString DisplayName;                                                              // 0x0010 (size: 0x10)
    FLinearColor AvatarColor;                                                         // 0x0020 (size: 0x10)
    TArray<FName> Tags;                                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMultiUserConnectionError
{
    EMultiUserConnectionError ErrorCode;                                              // 0x0000 (size: 0x4)
    FText ErrorMessage;                                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMultiUserFrequencyChangeRequest
{
    TSet<FSoftObjectPath> OverridesToRemove;                                          // 0x0000 (size: 0x50)
    TMap<class FSoftObjectPath, class FMultiUserObjectReplicationSettings> OverridesToAdd; // 0x0050 (size: 0x50)
    FMultiUserObjectReplicationSettings NewDefaults;                                  // 0x00A0 (size: 0x2)
    bool bChangeDefaults;                                                             // 0x00A2 (size: 0x1)

}; // Size: 0xA8

struct FMultiUserObjectReplicationSettings
{
    EMultiUserObjectReplicationMode Mode;                                             // 0x0000 (size: 0x1)
    uint8 ReplicationRate;                                                            // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMultiUserPropertyChange
{
    TArray<FConcertPropertyChainWrapper> Properties;                                  // 0x0000 (size: 0x10)
    EMultiUserPropertyChangeType ChangeType;                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FMultiUserReplicationRegistrationParams
{
    FGuid ClientEndpointId;                                                           // 0x0000 (size: 0x10)
    TScriptInterface<class IMultiUserReplicationRegistrationContext> Context;         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMultiUserSessionInfo
{
    FGuid ServerEndpointId;                                                           // 0x0000 (size: 0x10)
    FString SessionName;                                                              // 0x0010 (size: 0x10)
    FString ServerName;                                                               // 0x0020 (size: 0x10)
    FString EndpointName;                                                             // 0x0030 (size: 0x10)
    bool bValid;                                                                      // 0x0040 (size: 0x1)

}; // Size: 0x48

class IMultiUserReplicationRegistration : public IInterface
{

    void DiscoverReplicationSettings(const FMultiUserReplicationRegistrationParams& Params);
}; // Size: 0x28

class IMultiUserReplicationRegistrationContext : public IInterface
{

    void AddPropertiesToObject(class UObject* Object, const TArray<FConcertPropertyChainWrapper>& PropertiesToAdd);
    void AddAdditionalObject(class UObject* Object);
}; // Size: 0x28

class UChangeClientAsyncAction : public UBlueprintAsyncActionBase
{
    FChangeClientAsyncActionOnCompleted OnCompleted;                                  // 0x0030 (size: 0x10)
    void OnChangeOperationCompleted(const FMultiUserChangeClientReplicationResult& Response);
    FGuid ClientId;                                                                   // 0x0040 (size: 0x10)
    FMultiUserChangeClientReplicationRequest ReplicationRequest;                      // 0x0050 (size: 0x1E8)

    void OnChangeOperationCompleted__DelegateSignature(const FMultiUserChangeClientReplicationResult& Response);
    class UChangeClientAsyncAction* ChangeClient(const FGuid& ClientId, FMultiUserChangeClientReplicationRequest Request);
}; // Size: 0x238

class UMultiUserClientStatics : public UBlueprintFunctionLibrary
{

    void UpdateWorkspaceModifiedPackages();
    bool StartMultiUserDefaultConnection();
    void SetMultiUserPresenceVisibilityById(const FGuid& ClientEndpointId, bool Visibility, bool PropagateToAll);
    void SetMultiUserPresenceVisibility(FString Name, bool Visibility, bool PropagateToAll);
    void SetMultiUserPresenceEnabled(const bool IsEnabled);
    void PersistSpecifiedPackages(const TArray<FName>& PackagesToPersist);
    void PersistMultiUserSessionChanges();
    void JumpToMultiUserPresence(FString OtherUserName, FTransform TransformOffset);
    bool GetRemoteMultiUserClientInfos(TArray<FMultiUserClientInfo>& ClientInfos);
    FMultiUserSessionInfo GetMultiUserSessionInfo();
    FTransform GetMultiUserPresenceTransform(const FGuid& ClientEndpointId);
    EMultiUserConnectionStatus GetMultiUserConnectionStatusDetail();
    bool GetMultiUserConnectionStatus();
    bool GetMultiUserClientInfoByName(FString ClientName, FMultiUserClientInfo& ClientInfo);
    FMultiUserClientInfo GetLocalMultiUserClientInfo();
    FMultiUserConnectionError GetLastMultiUserConnectionError();
    class UMultiUserClientSyncDatabase* GetConcertSyncDatabase();
    TArray<FName> GatherSessionChanges(bool IgnorePersisted);
    bool ConfigureMultiUserClient(const FMultiUserClientConfig& ClientConfig);
}; // Size: 0x28

class UMultiUserClientSyncDatabase : public UObject
{
    FMultiUserClientSyncDatabaseOnPackageSaved OnPackageSaved;                        // 0x0028 (size: 0x10)
    void OnPackageSavedSignature(FName PackageName);

}; // Size: 0x38

class UMultiUserReplicationRegistrationContextImpl : public UObject
{

    void AddPropertiesToObject(class UObject* Object, const TArray<FConcertPropertyChainWrapper>& PropertiesToAdd);
    void AddAdditionalObject(class UObject* Object);
}; // Size: 0x38

class UMultiUserReplicationSubsystem : public UEngineSubsystem
{
    FMultiUserReplicationSubsystemOnClientStreamServerStateChanged OnClientStreamServerStateChanged; // 0x0030 (size: 0x10)
    void OnServerStateChanged(const FGuid& EndpointId);
    FMultiUserReplicationSubsystemOnClientAuthorityServerStateChanged OnClientAuthorityServerStateChanged; // 0x0040 (size: 0x10)
    void OnServerStateChanged(const FGuid& EndpointId);

    void OnServerStateChanged__DelegateSignature(const FGuid& EndpointId);
    bool IsReplicatingObject(const FGuid& ClientId, const FSoftObjectPath& ObjectPath);
    TArray<FSoftObjectPath> GetReplicatedObjects(const FGuid& ClientId);
    TArray<FSoftObjectPath> GetRegisteredObjects(const FGuid& ClientId);
    TArray<FConcertPropertyChainWrapper> GetPropertiesRegisteredToObject(const FGuid& ClientId, const FSoftObjectPath& ObjectPath);
    bool GetObjectReplicationFrequency(const FGuid& ClientId, const FSoftObjectPath& ObjectPath, FMultiUserObjectReplicationSettings& OutFrequency);
}; // Size: 0x60

class UMultiUserSubsystem : public UEngineSubsystem
{
    FMultiUserSubsystemOnSessionConnected OnSessionConnected;                         // 0x0030 (size: 0x10)
    void OnSessionConnected();
    FMultiUserSubsystemOnSessionDisconnected OnSessionDisconnected;                   // 0x0040 (size: 0x10)
    void OnSessionDisconnected();
    FMultiUserSubsystemOnSessionClientChanged OnSessionClientChanged;                 // 0x0050 (size: 0x10)
    void OnSessionClientChanged(EMultiUserClientStatus Status, const FMultiUserClientInfo& ClientInfo);

    bool UnregisterCustomEventHandler(const class UStruct* EventType);
    bool RegisterCustomEventHandler(const class UStruct* EventType, FRegisterCustomEventHandlerInEventHandler InEventHandler);
    void K2_SendCustomEvent(const int32& EventData);
    void K2_ExtractEventData(FMultiUserBlueprintEventData& EventData, int32& StructOut);
    bool IsConnectedToSession();
    bool GetRemoteClientIds(TArray<FGuid>& OutRemoteClientIds);
    bool GetLocalClientId(FGuid& OutClientId);
}; // Size: 0xB0

#endif
