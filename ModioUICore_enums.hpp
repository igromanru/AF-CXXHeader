enum class EModioModBrowserState {
    ModsView = 0,
    LibraryView = 1,
    CollectionsView = 2,
    EModioModBrowserState_MAX = 3,
};

enum class EModioModCollectionState {
    NotFollowed = 0,
    IncompleteSubscriptions = 1,
    Followed = 2,
    Subscribed = 3,
    EModioModCollectionState_MAX = 4,
};

enum class EModioModInstallationStatus {
    NotInstalled = 0,
    Error = 1,
    Enabled = 2,
    Disabled = 3,
    SystemInstall = 4,
    Queued = 5,
    Initializing = 6,
    Downloading = 7,
    Extracting = 8,
    Uploading = 9,
    Uploaded = 10,
    Compressing = 11,
    EModioModInstallationStatus_MAX = 12,
};

enum class EModioTextValidationRule {
    ETVR_ValidateEmailAddress = 0,
    ETVR_ValidateAllLetters = 1,
    ETVR_ValidateAllNumeric = 2,
    ETVR_ValidateAlphanumeric = 3,
    ETVR_ValidateLength = 4,
    ETVR_ValidateNotEmpty = 5,
    ETVR_ValidateNoWhitespace = 6,
    ETVR_ValidateNotBlank = 7,
    ETVR_MAX = 8,
};

enum class EModioUIDialogType {
    ModDetails = 0,
    ModCollectionDetails = 1,
    ModCollectionContributors = 2,
    ReportMod = 3,
    EnableDisableManagement = 4,
    ConfirmDependencyDownload = 5,
    EModioUIDialogType_MAX = 6,
};

enum class EModioUIFeatureFlags {
    ModEnableDisable = 0,
    ModDownvote = 1,
    ModCollections = 2,
    EModioUIFeatureFlags_MAX = 3,
};

enum class EModioUILoadState {
    NotLoaded = 0,
    Loading = 1,
    Loaded = 2,
    Errored = 3,
    EModioUILoadState_MAX = 4,
};

enum class EModioUIMediaDownloadEventType {
    ModGalleryImages = 1,
    ModCreatorAvatarImage = 2,
    ModLogo = 4,
    ModCollectionLogo = 8,
    ModCollectionCuratorAvatarImage = 16,
    EModioUIMediaDownloadEventType_MAX = 17,
};

enum class EModioUIModCollectionInfoEventType {
    ListAllModCollections = 1,
    GetModCollectionInfo = 2,
    GetModCollectionMods = 4,
    EModioUIModCollectionInfoEventType_MAX = 5,
};

enum class EModioUIModInfoEventType {
    ListAllMods = 1,
    GetModInfo = 2,
    EModioUIModInfoEventType_MAX = 3,
};

