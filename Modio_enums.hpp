enum EFileSizeUnit {
    Largest = 0,
    B = 1,
    KB = 1024,
    MB = 1048576,
    GB = 1073741824,
    EFileSizeUnit_MAX = 1073741825,
};

enum class EGameMaturityFlags {
    None = 0,
    MatureModsAllowed = 1,
    MatureAudiencesOnly = 2,
    EGameMaturityFlags_MAX = 3,
};

enum class EGameMonetizationFlags {
    None = 0,
    Monetization = 1,
    Marketplace = 2,
    PartnerProgram = 4,
    EGameMonetizationFlags_MAX = 5,
};

enum class EModioAuthenticationProvider {
    XboxLive = 0,
    Steam = 1,
    GoG = 2,
    Itch = 3,
    Switch = 4,
    Switch2 = 5,
    Discord = 6,
    PSN = 7,
    Epic = 8,
    Oculus = 9,
    OpenID = 10,
    GoogleIDToken = 11,
    GoogleServerSideToken = 12,
    EModioAuthenticationProvider_MAX = 13,
};

enum class EModioAvatarSize {
    Original = 0,
    Thumb50 = 1,
    Thumb100 = 2,
    EModioAvatarSize_MAX = 3,
};

enum class EModioEntitlementConsumptionState {
    Failed = 0,
    Pending = 1,
    Fulfilled = 2,
    ConsumeLimitExceeded = 3,
    EModioEntitlementConsumptionState_MAX = 4,
};

enum class EModioEntitlementType {
    VirtualCurrency = 0,
    EModioEntitlementType_MAX = 1,
};

enum class EModioEnvironment {
    Test = 0,
    Live = 1,
    EModioEnvironment_MAX = 2,
};

enum class EModioErrorCondition {
    NoError = 0,
    NetworkError = 2,
    ConfigurationError = 3,
    InvalidArgsError = 4,
    FilesystemError = 5,
    InternalError = 6,
    ApiErrorRefSuccess = 7,
    EntityNotFoundError = 12,
    UserTermsOfUseError = 13,
    SubmitReportError = 14,
    UserNotAuthenticatedError = 15,
    SDKNotInitialized = 16,
    UserAlreadyAuthenticatedError = 17,
    SystemError = 18,
    OperationCanceled = 19,
    ModManagementDisabled = 20,
    RateLimited = 21,
    ModBeingProcessed = 22,
    InsufficientSpace = 23,
    SDKAlreadyInitialized = 24,
    ModManagementAlreadyEnabled = 25,
    InsufficientPermissions = 26,
    EmailLoginCodeInvalid = 27,
    AlreadySubscribed = 28,
    InstallOrUpdateCancelled = 29,
    UploadCancelled = 30,
    TempModSetNotInitialized = 31,
    MonetizationOperationError = 32,
    PaymentTransactionFailed = 33,
    IncorrectPrice = 34,
    ItemAlreadyOwned = 35,
    ParentalControlRestrictions = 36,
    MetricsSessionNotInitialized = 37,
    MetricsSessionAlreadyInitialized = 38,
    MetricsSessionIsActive = 39,
    MetricsSessionIsNotActive = 40,
    MetricsSessionHasNoMods = 41,
    PremiumFeatureNotAvailable = 42,
    EmailExchangeCodeAlreadyRedeemed = 43,
    ModDependenciesNotAllowed = 44,
    ModCannotAddDependencyMonetized = 45,
    ModIsDependency = 46,
    ModCannotAllowDependencyMonetized = 47,
    ModCannotDeleteDependency = 48,
    RequestInProgress = 49,
    InvalidZipFile = 50,
    CloudCookingDisabled = 51,
    AlreadySubscribedToUser = 52,
    CannotSubscribeToSelf = 53,
    EModioErrorCondition_MAX = 54,
};

enum class EModioGallerySize {
    Original = 0,
    Thumb320 = 1,
    Thumb1280 = 2,
    EModioGallerySize_MAX = 3,
};

enum class EModioGameCloudCookingStatus {
    Disabled = 0,
    Initializing = 1,
    Initialized = 2,
    Finalizing = 3,
    Enabled = 4,
    ActionRequired = 5,
    TearingDown = 6,
    EModioGameCloudCookingStatus_MAX = 7,
};

enum class EModioImageState {
    OnDisc = 0,
    LoadingIntoMemory = 1,
    InMemory = 2,
    Corrupted = 3,
    EModioImageState_MAX = 4,
};

enum class EModioLanguage {
    English = 0,
    Bulgarian = 1,
    French = 2,
    German = 3,
    Italian = 4,
    Polish = 5,
    Portuguese = 6,
    PortugueseBrazilian = 7,
    Hungarian = 8,
    Japanese = 9,
    Korean = 10,
    Russian = 11,
    Spanish = 12,
    Thai = 13,
    ChineseSimplified = 14,
    ChineseTraditional = 15,
    Turkish = 16,
    Ukrainian = 17,
    Arabic = 18,
    Czech = 19,
    Count = 20,
    EModioLanguage_MAX = 21,
};

enum class EModioLogLevel {
    Trace = 0,
    Detailed = 1,
    Info = 2,
    Warning = 3,
    Error = 4,
    EModioLogLevel_MAX = 5,
};

enum class EModioLogoSize {
    Thumb320 = 0,
    Thumb640 = 1,
    Thumb1280 = 2,
    Original = 3,
    EModioLogoSize_MAX = 4,
};

enum class EModioMaturityFlags {
    None = 0,
    Alcohol = 1,
    Drugs = 2,
    Violence = 4,
    Explicit = 8,
    EModioMaturityFlags_MAX = 9,
};

enum class EModioModChangeType {
    Added = 0,
    Removed = 1,
    Updated = 2,
    EModioModChangeType_MAX = 3,
};

enum class EModioModCommunityOptionsFlags {
    None = 0,
    EnableComments = 1,
    EnablePreviews = 2,
    EnablePreviewURLs = 4,
    AllowDependencies = 8,
    EnableCollections = 16,
    EModioModCommunityOptionsFlags_MAX = 17,
};

enum class EModioModManagementEventType {
    Installed = 0,
    Uninstalled = 1,
    Updated = 2,
    Uploaded = 3,
    BeginInstall = 4,
    BeginUninstall = 5,
    BeginUpdate = 6,
    BeginUpload = 7,
    EModioModManagementEventType_MAX = 8,
};

enum class EModioModProgressState {
    Initializing = 0,
    Downloading = 1,
    Extracting = 2,
    Compressing = 3,
    Uploading = 4,
    EModioModProgressState_MAX = 5,
};

enum class EModioModServerSideStatus {
    NotAccepted = 0,
    Accepted = 1,
    Deleted = 3,
    EModioModServerSideStatus_MAX = 4,
};

enum class EModioModState {
    InstallationPending = 0,
    Installed = 1,
    UpdatePending = 2,
    Downloading = 3,
    Extracting = 4,
    UninstallPending = 5,
    EModioModState_MAX = 6,
};

enum class EModioModfilePlatform {
    Windows = 0,
    Mac = 1,
    Linux = 2,
    Android = 3,
    iOS = 4,
    XboxOne = 5,
    XboxSeriesX = 6,
    PS4 = 7,
    PS5 = 8,
    Switch = 9,
    Switch2 = 10,
    Oculus = 11,
    Source = 12,
    WindowsServer = 13,
    LinuxServer = 14,
    Count = 15,
    EModioModfilePlatform_MAX = 16,
};

enum class EModioObjectVisibilityFlags {
    Hidden = 0,
    Public = 1,
    EModioObjectVisibilityFlags_MAX = 2,
};

enum class EModioOpenStoreResult {
    Success = 0,
    FailedInactive = 1,
    FailedUnsupportedPlatform = 2,
    FailedUnknown = 3,
    EModioOpenStoreResult_MAX = 4,
};

enum class EModioPlatformName {
    Windows = 0,
    Mac = 1,
    Linux = 2,
    PS4 = 3,
    PS5 = 4,
    XBoxOne = 5,
    XSX = 6,
    Switch = 7,
    Switch2 = 8,
    Unknown = 9,
    Android = 10,
    iOS = 11,
    EModioPlatformName_MAX = 12,
};

enum class EModioPortal {
    None = 0,
    Apple = 1,
    EpicGamesStore = 2,
    GOG = 3,
    Google = 4,
    Itchio = 5,
    Nintendo = 6,
    PSN = 7,
    Steam = 8,
    XboxLive = 9,
    EModioPortal_MAX = 10,
};

enum class EModioRating {
    Neutral = 0,
    Positive = 1,
    Negative = 2,
    EModioRating_MAX = 3,
};

enum class EModioReportType {
    Generic = 0,
    DMCA = 1,
    NotWorking = 2,
    RudeContent = 3,
    IllegalContent = 4,
    StolenContent = 5,
    FalseInformation = 6,
    Other = 7,
    EModioReportType_MAX = 8,
};

enum class EModioRevenueFilterType {
    Free = 0,
    Paid = 1,
    FreeAndPaid = 2,
    EModioRevenueFilterType_MAX = 3,
};

enum class EModioSortDirection {
    Ascending = 0,
    Descending = 1,
    EModioSortDirection_MAX = 2,
};

enum class EModioSortFieldType {
    ID = 0,
    DownloadsToday = 1,
    SubscriberCount = 2,
    Rating = 3,
    DateMarkedLive = 4,
    DateUpdated = 5,
    DownloadsTotal = 6,
    Alphabetical = 7,
    EModioSortFieldType_MAX = 8,
};

enum class EModioStorageLocation {
    Local = 0,
    Cache = 1,
    Count = 2,
    EModioStorageLocation_MAX = 3,
};

enum class EModioStorageUsage {
    Consumed = 0,
    Available = 1,
    Count = 2,
    EModioStorageUsage_MAX = 3,
};

enum class EModioVirusScanStatus {
    NotScanned = 0,
    ScanComplete = 1,
    InProgress = 2,
    TooLargeToScan = 3,
    FileNotFound = 4,
    ErrorScanning = 5,
    EModioVirusScanStatus_MAX = 6,
};

enum class EModioVirusStatus {
    NoThreat = 0,
    Malicious = 1,
    PotentiallyHarmful = 2,
    EModioVirusStatus_MAX = 3,
};

