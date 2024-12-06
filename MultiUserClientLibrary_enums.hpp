enum class EMultiUserChangeAuthorityOperationResult {
    Success = 0,
    NoChanges = 1,
    RejectedFullyOrPartially = 2,
    Timeout = 3,
    CancelledDueToStreamUpdate = 4,
    Cancelled = 5,
    FailedToSendRequest = 6,
    NotInSession = 7,
    UnknownClient = 8,
    NotOnGameThread = 9,
    NotAvailable = 10,
    EMultiUserChangeAuthorityOperationResult_MAX = 11,
};

enum class EMultiUserChangeFrequencyErrorCode {
    UnregisteredStream = 0,
    InvalidReplicationRate = 1,
    Count = 2,
    EMultiUserChangeFrequencyErrorCode_MAX = 3,
};

enum class EMultiUserChangeStreamOperationResult {
    Success = 0,
    NoChanges = 1,
    Rejected = 2,
    Timeout = 3,
    Cancelled = 4,
    FailedToSendRequest = 5,
    NotInSession = 6,
    UnknownClient = 7,
    NotOnGameThread = 8,
    NotAvailable = 9,
    EMultiUserChangeStreamOperationResult_MAX = 10,
};

enum class EMultiUserClientStatus {
    Connected = 0,
    Disconnected = 1,
    Updated = 2,
    EMultiUserClientStatus_MAX = 3,
};

enum class EMultiUserConnectionError {
    None = 0,
    Canceled = 1,
    ConnectionAttemptAborted = 2,
    ServerNotResponding = 3,
    ServerError = 4,
    WorkspaceValidationUnknown = 100,
    SourceControlValidationUnknown = 110,
    SourceControlValidationCanceled = 111,
    SourceControlValidationError = 112,
    DirtyPackageValidationError = 113,
    EMultiUserConnectionError_MAX = 114,
};

enum class EMultiUserConnectionStatus {
    Connecting = 0,
    Connected = 1,
    Disconnecting = 2,
    Disconnected = 3,
    EMultiUserConnectionStatus_MAX = 4,
};

enum class EMultiUserObjectReplicationMode {
    SpecifiedRate = 0,
    Realtime = 1,
    EMultiUserObjectReplicationMode_MAX = 2,
};

enum class EMultiUserPropertyChangeType {
    Put = 0,
    Add = 1,
    Remove = 2,
    EMultiUserPropertyChangeType_MAX = 3,
};

enum class EMultiUserPutObjectErrorCode {
    UnresolvedStream = 0,
    MissingData = 1,
    Count = 2,
    EMultiUserPutObjectErrorCode_MAX = 3,
};

enum class EMultiUserSourceValidationMode {
    Hard = 0,
    Soft = 1,
    SoftAutoProceed = 2,
    EMultiUserSourceValidationMode_MAX = 3,
};

