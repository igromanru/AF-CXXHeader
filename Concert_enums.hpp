enum class EBatchSessionDeletionFlags {
    Strict = 0,
    SkipForbiddenSessions = 1,
    EBatchSessionDeletionFlags_MAX = 2,
};

enum class EConcertClientStatus {
    Connected = 0,
    Disconnected = 1,
    Updated = 2,
    Count = 3,
    EConcertClientStatus_MAX = 4,
};

enum class EConcertCompressionDetails {
    Uncompressed = 0,
    Compressed = 1,
    CompressWithOodle = 2,
    CompressForSpeed = 4,
    CompressForSize = 8,
    EConcertCompressionDetails_MAX = 9,
};

enum class EConcertConnectionResult {
    None = 0,
    ConnectionAccepted = 1,
    ConnectionRefused = 2,
    AlreadyConnected = 3,
    EConcertConnectionResult_MAX = 4,
};

enum class EConcertConnectionStatus {
    Connecting = 0,
    Connected = 1,
    Disconnecting = 2,
    Disconnected = 3,
    EConcertConnectionStatus_MAX = 4,
};

enum class EConcertLogMessageAction {
    None = 0,
    Send = 1,
    Publish = 2,
    Receive = 3,
    Queue = 4,
    Discard = 5,
    Duplicate = 6,
    TimeOut = 7,
    Process = 8,
    EndpointDiscovery = 9,
    EndpointTimeOut = 10,
    EndpointClosure = 11,
    EConcertLogMessageAction_MAX = 12,
};

enum class EConcertPayloadCompressionType {
    None = 0,
    Heuristic = 1,
    Always = 2,
    EConcertPayloadCompressionType_MAX = 3,
};

enum class EConcertPayloadSerializationMethod {
    Standard = 0,
    Cbor = 1,
    EConcertPayloadSerializationMethod_MAX = 2,
};

enum class EConcertSendReceiveState {
    Default = 0,
    SendOnly = 1,
    ReceiveOnly = 2,
    EConcertSendReceiveState_MAX = 3,
};

enum class EConcertServerFlags {
    None = 0,
    IgnoreSessionRequirement = 1,
    EConcertServerFlags_MAX = 2,
};

enum class EConcertSessionRepositoryMountResponseCode {
    None = 0,
    Mounted = 1,
    AlreadyMounted = 2,
    NotFound = 3,
    EConcertSessionRepositoryMountResponseCode_MAX = 4,
};

enum class EConcertSessionResponseCode {
    Success = 0,
    Failed = 1,
    InvalidRequest = 2,
    EConcertSessionResponseCode_MAX = 3,
};

enum class EConcertSessionState {
    Normal = 0,
    Transient = 1,
    EConcertSessionState_MAX = 2,
};

