#ifndef UE4SS_SDK_AdvancedSessions_HPP
#define UE4SS_SDK_AdvancedSessions_HPP

#include "AdvancedSessions_enums.hpp"

struct FBPFriendInfo
{
    FString DisplayName;                                                              // 0x0000 (size: 0x10)
    FString RealName;                                                                 // 0x0010 (size: 0x10)
    EBPOnlinePresenceState OnlineState;                                               // 0x0020 (size: 0x1)
    FBPUniqueNetId UniqueNetId;                                                       // 0x0028 (size: 0x20)
    bool bIsPlayingSameGame;                                                          // 0x0048 (size: 0x1)
    FBPFriendPresenceInfo PresenceInfo;                                               // 0x0050 (size: 0x18)

}; // Size: 0x68

struct FBPFriendPresenceInfo
{
    bool bIsOnline;                                                                   // 0x0000 (size: 0x1)
    bool bIsPlaying;                                                                  // 0x0001 (size: 0x1)
    bool bIsPlayingThisGame;                                                          // 0x0002 (size: 0x1)
    bool bIsJoinable;                                                                 // 0x0003 (size: 0x1)
    bool bHasVoiceSupport;                                                            // 0x0004 (size: 0x1)
    EBPOnlinePresenceState PresenceState;                                             // 0x0005 (size: 0x1)
    FString StatusString;                                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBPOnlineRecentPlayer : public FBPOnlineUser
{
    FString LastSeen;                                                                 // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FBPOnlineUser
{
    FBPUniqueNetId UniqueNetId;                                                       // 0x0000 (size: 0x20)
    FString DisplayName;                                                              // 0x0020 (size: 0x10)
    FString RealName;                                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FBPUniqueNetId
{
}; // Size: 0x20

struct FBPUserOnlineAccount
{
}; // Size: 0x10

struct FSessionPropertyKeyPair
{
}; // Size: 0x28

struct FSessionSearchSettingMulti
{
    FSessionsSearchSetting AndSetting;                                                // 0x0000 (size: 0x30)
    TArray<FSessionsSearchSetting> OrSettings;                                        // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FSessionsSearchSetting
{
}; // Size: 0x30

class AAdvancedGameSession : public AGameSession
{
    TMap<FUniqueNetIdRepl, FText> BanList;                                            // 0x02C0 (size: 0x50)

}; // Size: 0x310

class IAdvancedFriendsInterface : public IInterface
{

    void OnSessionInviteReceived(FBPUniqueNetId PersonInviting, const FBlueprintSessionResult& SearchResult);
    void OnSessionInviteAccepted(FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SearchResult);
    void OnPlayerVoiceStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    void OnPlayerLoginStatusChanged(EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId PlayerUniqueNetID);
    void OnPlayerLoginChanged(int32 PlayerNum);
}; // Size: 0x28

class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary
{

    void ShowWebURLUI(class UObject* WorldContextObject, FString URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY);
    void ShowProfileUI(class UObject* WorldContextObject, const FBPUniqueNetId PlayerViewingProfile, const FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result);
    void ShowLeaderBoardUI(class UObject* WorldContextObject, FString LeaderboardName, EBlueprintResultSwitch& Result);
    void ShowInviteUI(class UObject* WorldContextObject, class APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    void ShowFriendsUI(class UObject* WorldContextObject, class APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    void ShowAccountUpgradeUI(class UObject* WorldContextObject, const FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result);
    void CloseWebURLUI(class UObject* WorldContextObject);
}; // Size: 0x28

class UAdvancedFriendsGameInstance : public UGameInstance
{
    bool bCallFriendInterfaceEventsOnPlayerControllers;                               // 0x01C0 (size: 0x1)
    bool bCallIdentityInterfaceEventsOnPlayerControllers;                             // 0x01C1 (size: 0x1)
    bool bCallVoiceInterfaceEventsOnPlayerControllers;                                // 0x01C2 (size: 0x1)
    bool bEnableTalkingStatusDelegate;                                                // 0x01C3 (size: 0x1)

    void OnSessionInviteReceived(int32 LocalPlayerNum, FBPUniqueNetId PersonInviting, FString AppID, const FBlueprintSessionResult& SessionToJoin);
    void OnSessionInviteAcceptedFailed();
    void OnSessionInviteAccepted(int32 LocalPlayerNum, FBPUniqueNetId PersonInvited, const FBlueprintSessionResult& SessionToJoin);
    void OnPlayerTalkingStateChanged(FBPUniqueNetId PlayerId, bool bIsTalking);
    void OnPlayerLoginStatusChanged(int32 PlayerNum, EBPLoginStatus PreviousStatus, EBPLoginStatus NewStatus, FBPUniqueNetId NewPlayerUniqueNetID);
    void OnPlayerLoginChanged(int32 PlayerNum);
}; // Size: 0x240

class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{

    void SendSessionInviteToFriends(class APlayerController* PlayerController, const TArray<FBPUniqueNetId>& Friends, EBlueprintResultSwitch& Result);
    void SendSessionInviteToFriend(class APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch& Result);
    void IsAFriend(class APlayerController* PlayerController, const FBPUniqueNetId UniqueNetId, bool& IsFriend);
    void GetStoredRecentPlayersList(FBPUniqueNetId UniqueNetId, TArray<FBPOnlineRecentPlayer>& PlayersList);
    void GetStoredFriendsList(class APlayerController* PlayerController, TArray<FBPFriendInfo>& FriendsList);
    void GetFriend(class APlayerController* PlayerController, const FBPUniqueNetId FriendUniqueNetId, FBPFriendInfo& Friend);
}; // Size: 0x28

class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary
{

    void SetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString NewAttributeValue, EBlueprintResultSwitch& Result);
    void GetUserID(const FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetId);
    void GetUserAccountRealName(const FBPUserOnlineAccount& AccountInfo, FString& Username);
    void GetUserAccountDisplayName(const FBPUserOnlineAccount& AccountInfo, FString& DisplayName);
    void GetUserAccountAuthAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result);
    void GetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, FString AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result);
    void GetUserAccountAccessToken(const FBPUserOnlineAccount& AccountInfo, FString& AccessToken);
    void GetUserAccount(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result);
    void GetPlayerNickname(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId, FString& PlayerNickname);
    void GetPlayerAuthToken(class UObject* WorldContextObject, class APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result);
    void GetLoginStatus(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result);
    void GetAllUserAccounts(class UObject* WorldContextObject, TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result);
}; // Size: 0x28

class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
{

    void UniqueNetIdToString(const FBPUniqueNetId& UniqueNetId, FString& String);
    void SplitServerNameForSearch(class UObject* WorldContextObject, FString InServerName);
    void SetPlayerName(class APlayerController* PlayerController, FString playerName);
    void ServerTravel(class UObject* WorldContextObject, FString InURL, bool bAbsolute, bool bShouldSkipGameNotify);
    void MakeLiteralSessionSearchProperty(FSessionPropertyKeyPair SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
    void MakeLiteralSessionPropertyString(FName Key, FString Value);
    void MakeLiteralSessionPropertyInt(FName Key, int32 Value);
    void MakeLiteralSessionPropertyFloat(FName Key, float Value);
    void MakeLiteralSessionPropertyByte(FName Key, uint8 Value);
    void MakeLiteralSessionPropertyBool(FName Key, bool Value);
    void KickPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToKick, FText KickReason);
    void IsValidUniqueNetID(const FBPUniqueNetId& UniqueNetId);
    void IsValidSession(const FBlueprintSessionResult& SessionResult);
    void IsPlayerInSession(class UObject* WorldContextObject, const FBPUniqueNetId& PlayerToCheck, bool& bIsInSession);
    void HasOnlineSubsystem(FName SubSystemName);
    void GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, FBPUniqueNetId& UniqueNetId);
    void GetUniqueNetID(class APlayerController* PlayerController, FBPUniqueNetId& UniqueNetId);
    void GetUniqueBuildID(FBlueprintSessionResult SessionResult, int32& UniqueBuildId);
    void GetSessionState(class UObject* WorldContextObject, EBPOnlineSessionState& SessionState);
    void GetSessionSettings(class UObject* WorldContextObject, int32& NumConnections, int32& NumPrivateConnections, bool& bIsLAN, bool& bIsDedicated, bool& bAllowInvites, bool& bAllowJoinInProgress, bool& bIsAnticheatEnabled, int32& BuildUniqueID, TArray<FSessionPropertyKeyPair>& ExtraSettings, EBlueprintResultSwitch& Result);
    void GetSessionPropertyString(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, FString& SettingValue);
    void GetSessionPropertyKey(const FSessionPropertyKeyPair& SessionProperty);
    void GetSessionPropertyInt(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, int32& SettingValue);
    void GetSessionPropertyFloat(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, float& SettingValue);
    void GetSessionPropertyByte(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, uint8& SettingValue);
    void GetSessionPropertyBool(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, ESessionSettingSearchResult& SearchResult, bool& SettingValue);
    void GetSessionID_AsString(const FBlueprintSessionResult& SessionResult, FString& SessionId);
    void GetPlayerName(class APlayerController* PlayerController, FString& playerName);
    void GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32& NumNetPlayers);
    void GetNetPlayerIndex(class APlayerController* PlayerController, int32& NetPlayerIndex);
    void GetExtraSettings(FBlueprintSessionResult SessionResult, TArray<FSessionPropertyKeyPair>& ExtraSettings);
    void GetCurrentUniqueBuildID(int32& UniqueBuildId);
    void GetCurrentSessionID_AsString(class UObject* WorldContextObject, FString& SessionId);
    void FindSessionPropertyIndexByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingName, EBlueprintResultSwitch& Result, int32& OutIndex);
    void FindSessionPropertyByName(const TArray<FSessionPropertyKeyPair>& ExtraSettings, FName SettingsName, EBlueprintResultSwitch& Result, FSessionPropertyKeyPair& OutProperty);
    void EqualEqual_UNetIDUnetID(const FBPUniqueNetId& A, const FBPUniqueNetId& B);
    void Conv_BPUniqueIDToUniqueNetIDRepl(const FBPUniqueNetId& InUniqueID);
    void BuildSessionSearchForServerName(class UObject* WorldContextObject, FString InServerName);
    void BanPlayer(class UObject* WorldContextObject, class APlayerController* PlayerToBan, FText BanReason);
    void AddOrModifyExtraSettings(TArray<FSessionPropertyKeyPair>& SettingsArray, TArray<FSessionPropertyKeyPair>& NewOrChangedSettings, TArray<FSessionPropertyKeyPair>& ModifiedSettingsArray);
}; // Size: 0x28

class UAdvancedVoiceLibrary : public UBlueprintFunctionLibrary
{

    void UnRegisterRemoteTalker(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);
    void UnRegisterLocalTalker(class UObject* WorldContextObject, uint8 LocalPlayerNum);
    void UnRegisterAllLocalTalkers(class UObject* WorldContextObject);
    void UnMuteRemoteTalker(class UObject* WorldContextObject, uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    void StopNetworkedVoice(class UObject* WorldContextObject, uint8 LocalPlayerNum);
    void StartNetworkedVoice(class UObject* WorldContextObject, uint8 LocalPlayerNum);
    void RemoveAllRemoteTalkers(class UObject* WorldContextObject);
    void RegisterRemoteTalker(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);
    void RegisterLocalTalker(class UObject* WorldContextObject, uint8 LocalPlayerNum);
    void RegisterAllLocalTalkers(class UObject* WorldContextObject);
    void MuteRemoteTalker(class UObject* WorldContextObject, uint8 LocalUserNum, const FBPUniqueNetId& UniqueNetId, bool bIsSystemWide);
    void IsRemotePlayerTalking(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);
    void IsPlayerMuted(class UObject* WorldContextObject, uint8 LocalUserNumChecking, const FBPUniqueNetId& UniqueNetId);
    void IsLocalPlayerTalking(class UObject* WorldContextObject, uint8 LocalPlayerNum);
    void IsHeadsetPresent(class UObject* WorldContextObject, bool& bHasHeadset, uint8 LocalPlayerNum);
    void GetNumLocalTalkers(class UObject* WorldContextObject, int32& NumLocalTalkers);
}; // Size: 0x28

class UAutoLoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAutoLoginUserCallbackProxyOnSuccess OnSuccess;                                   // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FAutoLoginUserCallbackProxyOnFailure OnFailure;                                   // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void AutoLoginUser(class UObject* WorldContextObject, int32 LocalUserNum);
}; // Size: 0x78

class UCancelFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FCancelFindSessionsCallbackProxyOnSuccess OnSuccess;                              // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FCancelFindSessionsCallbackProxyOnFailure OnFailure;                              // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void CancelFindSessions(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x78

class UCreateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
    FCreateSessionCallbackProxyAdvancedOnSuccess OnSuccess;                           // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FCreateSessionCallbackProxyAdvancedOnFailure OnFailure;                           // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void CreateAdvancedSession(class UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, class APlayerController* PlayerController, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bUseLobbiesIfAvailable, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise, bool bUseLobbiesVoiceChatIfAvailable, bool bStartAfterCreate);
}; // Size: 0xB8

class UEndSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FEndSessionCallbackProxyOnSuccess OnSuccess;                                      // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FEndSessionCallbackProxyOnFailure OnFailure;                                      // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void EndSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x78

class UFindFriendSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FFindFriendSessionCallbackProxyOnSuccess OnSuccess;                               // 0x0030 (size: 0x10)
    void BlueprintFindFriendSessionDelegate(const TArray<FBlueprintSessionResult>& SessionInfo);
    FFindFriendSessionCallbackProxyOnFailure OnFailure;                               // 0x0040 (size: 0x10)
    void BlueprintFindFriendSessionDelegate(const TArray<FBlueprintSessionResult>& SessionInfo);

    void FindFriendSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId);
}; // Size: 0x98

class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
    FFindSessionsCallbackProxyAdvancedOnSuccess OnSuccess;                            // 0x0030 (size: 0x10)
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);
    FFindSessionsCallbackProxyAdvancedOnFailure OnFailure;                            // 0x0040 (size: 0x10)
    void BlueprintFindSessionsResultDelegate(const TArray<FBlueprintSessionResult>& Results);

    void FindSessionsAdvanced(class UObject* WorldContextObject, class APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, const TArray<FSessionsSearchSetting>& Filters, const TArray<FSessionsSearchSetting>& ORFilters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable);
    void FilterSessionResults(const TArray<FBlueprintSessionResult>& SessionResults, const TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults);
}; // Size: 0x130

class UGetFriendsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetFriendsCallbackProxyOnSuccess OnSuccess;                                      // 0x0030 (size: 0x10)
    void BlueprintGetFriendsListDelegate(const TArray<FBPFriendInfo>& Results);
    FGetFriendsCallbackProxyOnFailure OnFailure;                                      // 0x0040 (size: 0x10)
    void BlueprintGetFriendsListDelegate(const TArray<FBPFriendInfo>& Results);

    void GetAndStoreFriendsList(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x70

class UGetRecentPlayersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetRecentPlayersCallbackProxyOnSuccess OnSuccess;                                // 0x0030 (size: 0x10)
    void BlueprintGetRecentPlayersDelegate(const TArray<FBPOnlineRecentPlayer>& Results);
    FGetRecentPlayersCallbackProxyOnFailure OnFailure;                                // 0x0040 (size: 0x10)
    void BlueprintGetRecentPlayersDelegate(const TArray<FBPOnlineRecentPlayer>& Results);

    void GetAndStoreRecentPlayersList(class UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId);
}; // Size: 0x90

class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FGetUserPrivilegeCallbackProxyOnSuccess OnSuccess;                                // 0x0030 (size: 0x10)
    void BlueprintGetUserPrivilegeDelegate(EBPUserPrivileges QueriedPrivilege, bool HadPrivilege);
    FGetUserPrivilegeCallbackProxyOnFailure OnFailure;                                // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void GetUserPrivilege(class UObject* WorldContextObject, const EBPUserPrivileges& PrivilegeToCheck, const FBPUniqueNetId& PlayerUniqueNetID);
}; // Size: 0x80

class ULoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FLoginUserCallbackProxyOnSuccess OnSuccess;                                       // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FLoginUserCallbackProxyOnFailure OnFailure;                                       // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void LoginUser(class UObject* WorldContextObject, class APlayerController* PlayerController, FString UserId, FString UserToken, FString AuthType);
}; // Size: 0xA8

class ULogoutUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FLogoutUserCallbackProxyOnSuccess OnSuccess;                                      // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FLogoutUserCallbackProxyOnFailure OnFailure;                                      // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void LogoutUser(class UObject* WorldContextObject, class APlayerController* PlayerController);
}; // Size: 0x78

class UProfanityFilterCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FProfanityFilterCallbackProxyOnSuccess OnSuccess;                                 // 0x0030 (size: 0x10)
    void ProfanityFilterResult(bool bSuccess, const TArray<FString>& SanitizedMessages);
    FProfanityFilterCallbackProxyOnFailure OnFailure;                                 // 0x0040 (size: 0x10)
    void ProfanityFilterResult(bool bSuccess, const TArray<FString>& SanitizedMessages);
    class UObject* WorldContextObject;                                                // 0x0050 (size: 0x8)

    void ProfanityFilterDisplayNames(class UObject* WorldContextObject, const TArray<FString>& ThingsToSanitize);
}; // Size: 0x68

class USendFriendInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FSendFriendInviteCallbackProxyOnSuccess OnSuccess;                                // 0x0030 (size: 0x10)
    void BlueprintSendFriendInviteDelegate();
    FSendFriendInviteCallbackProxyOnFailure OnFailure;                                // 0x0040 (size: 0x10)
    void BlueprintSendFriendInviteDelegate();

    void SendFriendInvite(class UObject* WorldContextObject, class APlayerController* PlayerController, const FBPUniqueNetId& UniqueNetIDInvited);
}; // Size: 0x90

class UStartSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
    FStartSessionCallbackProxyAdvancedOnSuccess OnSuccess;                            // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FStartSessionCallbackProxyAdvancedOnFailure OnFailure;                            // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void StartAdvancedSession(class UObject* WorldContextObject);
}; // Size: 0x70

class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
    FUpdateSessionCallbackProxyAdvancedOnSuccess OnSuccess;                           // 0x0030 (size: 0x10)
    void EmptyOnlineDelegate();
    FUpdateSessionCallbackProxyAdvancedOnFailure OnFailure;                           // 0x0040 (size: 0x10)
    void EmptyOnlineDelegate();

    void UpdateSession(class UObject* WorldContextObject, const TArray<FSessionPropertyKeyPair>& ExtraSettings, int32 PublicConnections, int32 PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer, bool bShouldAdvertise);
}; // Size: 0x98

#endif
