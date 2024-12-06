enum class EConcertMessageFlags {
    None = 0,
    ReliableOrdered = 1,
    UniqueId = 2,
    EConcertMessageFlags_MAX = 3,
};

enum class EConcertMessageVersion {
    BeforeVersioning = 0,
    Initial = 1,
    VersionPlusOne = 2,
    LatestVersion = 1,
    EConcertMessageVersion_MAX = 3,
};

enum class EConcertReliableHandshakeState {
    None = 0,
    Negotiate = 1,
    Success = 2,
    EConcertReliableHandshakeState_MAX = 3,
};

enum class EConcertResponseCode {
    Pending = 0,
    Success = 1,
    Failed = 2,
    InvalidRequest = 3,
    UnknownRequest = 4,
    TimedOut = 5,
    EConcertResponseCode_MAX = 6,
};

