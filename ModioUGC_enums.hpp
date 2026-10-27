enum class EUGCPackageMountState {
    EUPMS_Unmounted = 0,
    EUPMS_Mounted = 1,
    EUPMS_MAX = 2,
};

enum class EUGCRejectionReason {
    None = 0,
    Unreadable = 1,
    BadDescriptor = 2,
    NoEngineVersion = 3,
    UnparsableEngineVersion = 4,
    IncompatibleEngineVersion = 5,
    MountFailed = 6,
    NameTaken = 7,
    SkippedByGame = 8,
    EUGCRejectionReason_MAX = 9,
};

enum class EUGCSubsystemFeature {
    EUSF_ModEnableDisable = 0,
    EUSF_Monetization = 1,
    EUSF_ModDownvote = 2,
    EUSF_MAX = 3,
};

