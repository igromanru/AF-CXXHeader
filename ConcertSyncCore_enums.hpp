enum class EConcertChangeObjectFrequencyErrorCode {
    NotRegistered = 0,
    InvalidReplicationRate = 1,
    Count = 2,
    EConcertChangeObjectFrequencyErrorCode_MAX = 3,
};

enum class EConcertChangeStreamFrequencyErrorCode {
    UnknownStream = 0,
    InvalidReplicationRate = 1,
    Count = 2,
    EConcertChangeStreamFrequencyErrorCode_MAX = 3,
};

enum class EConcertDataStoreResultCode {
    Added = 0,
    Fetched = 1,
    Exchanged = 2,
    NotFound = 3,
    TypeMismatch = 4,
    UnexpectedError = 5,
    EConcertDataStoreResultCode_MAX = 6,
};

enum class EConcertMovieScenePlayerStatus {
    Stopped = 0,
    Playing = 1,
    Scrubbing = 2,
    Jumping = 3,
    Stepping = 4,
    Paused = 5,
    MAX = 6,
};

enum class EConcertObjectReplicationMode {
    SpecifiedRate = 0,
    Realtime = 1,
    Count = 2,
    EConcertObjectReplicationMode_MAX = 3,
};

enum class EConcertPackageUpdateType {
    Dummy = 0,
    Added = 1,
    Saved = 2,
    Renamed = 3,
    Deleted = 4,
    Count = 5,
    EConcertPackageUpdateType_MAX = 6,
};

enum class EConcertPlaySessionEventType {
    None = 0,
    BeginPlay = 1,
    SwitchPlay = 2,
    EndPlay = 3,
    EConcertPlaySessionEventType_MAX = 4,
};

enum class EConcertPutObjectErrorCode {
    UnresolvedStream = 0,
    MissingData = 1,
    Count = 2,
    EConcertPutObjectErrorCode_MAX = 3,
};

enum class EConcertQueryClientStreamFlags {
    None = 0,
    SkipStreamInfo = 1,
    SkipProperties = 2,
    SkipAuthority = 4,
    SkipFrequency = 8,
    EConcertQueryClientStreamFlags_MAX = 9,
};

enum class EConcertReplicationChangeFrequencyFlags {
    None = 0,
    SetDefaults = 1,
    EConcertReplicationChangeFrequencyFlags_MAX = 2,
};

enum class EConcertResourceLockType {
    None = 0,
    Lock = 1,
    Unlock = 2,
    EConcertResourceLockType_MAX = 3,
};

enum class EConcertSequencerPreloadStatus {
    Pending = 0,
    Succeeded = 1,
    Failed = 2,
    EConcertSequencerPreloadStatus_MAX = 3,
};

enum class EConcertSyncActivityEventType {
    None = 0,
    Connection = 1,
    Lock = 2,
    Transaction = 3,
    Package = 4,
    EConcertSyncActivityEventType_MAX = 5,
};

enum class EConcertSyncActivityFlags {
    None = 0,
    Muted = 1,
    EConcertSyncActivityFlags_MAX = 2,
};

enum class EConcertSyncConnectionEventType {
    Connected = 0,
    Disconnected = 1,
    EConcertSyncConnectionEventType_MAX = 2,
};

enum class EConcertSyncLockEventType {
    Locked = 0,
    Unlocked = 1,
    EConcertSyncLockEventType_MAX = 2,
};

enum class EConcertSyncTransactionActivitySummaryType {
    Added = 0,
    Updated = 1,
    Renamed = 2,
    Deleted = 3,
    EConcertSyncTransactionActivitySummaryType_MAX = 4,
};

enum class EJoinReplicationErrorCode {
    Success = 0,
    NetworkError = 1,
    Cancelled = 2,
    AlreadyInProgress = 3,
    NotInAnyConcertSession = 4,
    AlreadyInSession = 5,
    InvalidClass = 6,
    DuplicateProperty = 7,
    DuplicateStreamId = 8,
    FailedToUnpackStream = 9,
    MaxPlusOne = 10,
    Max = 9,
};

enum class EPresenceModeType {
    Desktop = 0,
    VRMode = 1,
    EPresenceModeType_MAX = 2,
};

enum class EReplicationResponseErrorCode {
    Timeout = 0,
    Handled = 1,
    EReplicationResponseErrorCode_MAX = 2,
};

enum class ETransactionFilterResult {
    IncludeObject = 0,
    ExcludeObject = 1,
    ExcludeTransaction = 2,
    UseDefault = 3,
    ETransactionFilterResult_MAX = 4,
};

