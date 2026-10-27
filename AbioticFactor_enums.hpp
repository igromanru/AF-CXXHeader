enum EABFGamepadType {
    ABFGT_Default = 0,
    ABFGT_Xbox = 1,
    ABFGT_DS4 = 2,
    ABFGT_DS5 = 3,
    ABFGT_Steam = 4,
    ABFGT_MAX = 5,
};

namespace EAbioticAllowModsSetting {
    enum Type {
        Initial = 0,
        NoMods = 1,
        AllowMods = 2,
        EAbioticAllowModsSetting_MAX = 3,
    };
}

namespace EAbioticCrossplaySetting {
    enum Type {
        Initial = 0,
        NoCrossplay = 1,
        PartialCrossplay = 2,
        EAbioticCrossplaySetting_MAX = 3,
    };
}

enum class EAbioticItemType {
    Generic = 0,
    Weapon = 1,
    Equippable = 2,
    Consumable = 3,
    Deployable = 4,
    EAbioticItemType_MAX = 5,
};

enum class EAbioticModKickReason {
    None = 0,
    ModsNotAllowed = 1,
    MissingMods = 2,
    ExtraMods = 3,
    ExtraAndMissingMods = 4,
    OrderMismatch = 5,
    LocalOnlyModsNotAllowed = 6,
    EAbioticModKickReason_MAX = 7,
};

enum class EAbioticModListIssue {
    None = 0,
    NotEnabled = 1,
    NotInstalled = 2,
    Refused = 3,
    FailedToLoad = 4,
    EAbioticModListIssue_MAX = 5,
};

enum class EAbioticModOrderIssue {
    MissingDependency = 0,
    CircularDependency = 1,
    EAbioticModOrderIssue_MAX = 2,
};

enum EAbioticPlatform {
    Platform_Unknown = 0,
    Platform_EOS = 1,
    Platform_GOG = 2,
    Platform_Playstation = 3,
    Platform_Steam = 4,
    Platform_Xbox = 5,
    Platform_MAX = 6,
};

enum EActivityState {
    EAS_Inactive = 0,
    EAS_Active = 1,
    EAS_Complete = 2,
    EAS_MAX = 3,
};

enum class EAnalyticTraitType {
    PhD = 0,
    Positive = 1,
    Negative = 2,
    EAnalyticTraitType_MAX = 3,
};

enum class EAnnouncementType {
    Morning = 0,
    Evening = 1,
    PortalWorldReset = 2,
    AssaultBiological = 3,
    AssaultEntities = 4,
    AssaultTrespassers = 5,
    AssaultCompromised = 6,
    CustomOverride = 7,
    EAnnouncementType_MAX = 8,
};

enum class EAnyCustomizationTable {
    CustomizationBeard = 0,
    CustomizationBelt = 1,
    CustomizationFannyPack = 2,
    CustomizationHairColor = 3,
    CustomizationHairStyle = 4,
    CustomizationHead = 5,
    CustomizationHeadAccessory = 6,
    CustomizationIDCard = 7,
    CustomizationLabcoat = 8,
    CustomizationLowerBody = 9,
    CustomizationMakeup = 10,
    CustomizationShirtColor = 11,
    CustomizationShoes = 12,
    CustomizationTie = 13,
    CustomizationUpperBody = 14,
    CustomizationWatch = 15,
    EAnyCustomizationTable_MAX = 16,
};

enum class EAnyItemTable {
    GlobalItem = 0,
    RecipeSubstitute = 1,
    EAnyItemTable_MAX = 2,
};

enum class EAnyRecipeTable {
    Recipe = 0,
    SoupRecipe = 1,
    ChemistryRecipe = 2,
    EAnyRecipeTable_MAX = 3,
};

enum class EAssaultSpawnMethod {
    Undefined = 0,
    PortalStormRandom = 1,
    GroupPatrolToTarget = 2,
    ComeFromEveryDirection = 3,
    EAssaultSpawnMethod_MAX = 4,
};

enum class EBPLogVerbosity {
    Error = 0,
    Warning = 1,
    Display = 2,
    Log = 3,
    Verbose = 4,
    VeryVerbose = 5,
    EBPLogVerbosity_MAX = 6,
};

enum class EBodyLimbs {
    AllBones = 0,
    RandomBone = 1,
    RandomBoneExceptHead = 2,
    Head = 3,
    Torso = 4,
    LeftArm = 5,
    RightArm = 6,
    LeftLeg = 7,
    RightLeg = 8,
    EBodyLimbs_MAX = 9,
};

enum class EBuffApplyStyle {
    Stack = 0,
    ReplaceExisting = 1,
    BlockedByExisting = 2,
    EBuffApplyStyle_MAX = 3,
};

enum class EBuffSeverity {
    Positive = 0,
    Minor = 1,
    Moderate = 2,
    Severe = 3,
    EBuffSeverity_MAX = 4,
};

enum class EBuffType {
    Any = 0,
    Buff = 1,
    Trait = 2,
    EBuffType_MAX = 3,
};

enum class EBuffVisibility {
    FullVisibility = 0,
    Hidden = 1,
    HealthScreen = 2,
    EBuffVisibility_MAX = 3,
};

enum class ECVarType {
    Bool = 0,
    Float = 1,
    Int = 2,
    String = 3,
    ECVarType_MAX = 4,
};

enum class ECharacterSkills {
    NoSkill = 0,
    Sprinting = 1,
    Accuracy = 2,
    Reloading = 3,
    Sneaking = 4,
    SharpMelee = 5,
    BluntMelee = 6,
    Repair = 7,
    Crafting = 8,
    Construction = 9,
    FirstAid = 10,
    Agriculture = 11,
    Cooking = 12,
    Engineering = 13,
    Fortitude = 14,
    Strength = 15,
    Throwing = 16,
    Resilience = 17,
    ECharacterSkills_MAX = 18,
};

enum class EClassRepNodeMapping {
    NotRouted = 0,
    RelevantAllConnections = 1,
    Spatialize_Static = 2,
    Spatialize_Dynamic = 3,
    Spatialize_Dormancy = 4,
    EClassRepNodeMapping_MAX = 5,
};

enum class ECompendiumUnlockType {
    Exploration = 0,
    Email = 1,
    NarrativeNPC = 2,
    KilLRequirement = 3,
    ECompendiumUnlockType_MAX = 4,
};

enum class ECookingState {
    Raw = 0,
    Cooked = 1,
    CarefullyCooked = 2,
    WellCooked = 3,
    BeautifullyCooked = 4,
    ExpertlyCooked = 5,
    Burned = 6,
    Flaming = 7,
    ECookingState_MAX = 8,
};

enum class ECriticalityLevels {
    Good = 0,
    Moderate = 1,
    Warning = 2,
    Severe = 3,
    Custom = 4,
    ECriticalityLevels_MAX = 5,
};

enum class EDamageFeedbackType {
    YellOrGruntRandom = 0,
    AlwaysYell = 1,
    AlwaysGrunt = 2,
    PlaceholderTypeTBA = 3,
    NoAudbilePain = 4,
    EDamageFeedbackType_MAX = 5,
};

enum class EDayOfTheWeek {
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,
    Saturday = 5,
    Sunday = 6,
    EDayOfTheWeek_MAX = 7,
};

enum class EDayOfWeekFlags {
    Monday = 1,
    Tuesday = 2,
    Wednesday = 4,
    Thursday = 8,
    Friday = 16,
    Saturday = 32,
    Sunday = 64,
    EDayOfWeekFlags_MAX = 65,
};

enum class EDeathYellType {
    RegularDeath = 0,
    SoftSighExpiration = 1,
    ExplosiveDeathScream = 2,
    FallPitDeathScream = 3,
    NoAudbilePain = 4,
    FireDeathScream = 5,
    DrowningDeath = 6,
    EDeathYellType_MAX = 7,
};

enum class EDeployableOrientations {
    GroundOnly = 0,
    WallAllowed = 1,
    WallOnly = 2,
    AnyOrientation = 3,
    EDeployableOrientations_MAX = 4,
};

enum class EDoorState {
    Closed = 0,
    OpenInwards = 1,
    OpenOutwards = 2,
    Destroyed = 3,
    SmashInwards = 4,
    SmashOutwards = 5,
    SlammedClosed = 6,
    EDoorState_MAX = 7,
};

enum class EDynamicProperty {
    CurrentAmmo = 0,
    TimerState = 1,
    GrowthStage = 2,
    GrowthProgress = 3,
    CurrentFixState = 4,
    TeleporterFrequency = 5,
    PaintColor = 6,
    Generic1 = 7,
    Generic2 = 8,
    Generic3 = 9,
    Generic4 = 10,
    Generic5 = 11,
    Generic6 = 12,
    Generic7 = 13,
    Generic8 = 14,
    Generic9 = 15,
    Generic10 = 16,
    AmmoType = 17,
    CookingState = 18,
    Portions = 21,
    StovewareType = 22,
    WeaponCoating = 23,
    CoatingDurability = 27,
    PetMutation = 25,
    MutationProgress = 26,
    XP = 24,
    EDynamicProperty_MAX = 28,
};

enum class EFPAnimState {
    Idle = 0,
    CrouchIdle = 1,
    Walk = 2,
    CrouchWalk = 3,
    Sprint = 4,
    EFPAnimState_MAX = 5,
};

enum class EFactions {
    HostileToAllExceptSameType = 0,
    HostileToAll = 1,
    Scientists = 2,
    Military = 3,
    EvilScientists = 4,
    PlanetX = 5,
    Keystone = 6,
    WeirdScientists = 7,
    MadScientists = 8,
    Undead = 9,
    Puppeteer = 10,
    Pillager = 11,
    Maggots = 12,
    FleshFauna = 13,
    Mother = 14,
    HostileVogoth = 15,
    Sangur = 16,
    EFactions_MAX = 17,
};

enum class EFilterState {
    Show = 0,
    Hide = 1,
    OnlyShow = 2,
    EFilterState_MAX = 3,
};

enum class EGameCommandNetMode {
    ServerOnly = 0,
    LocalOnly = 1,
    ServerAndLocal = 2,
    EGameCommandNetMode_MAX = 3,
};

enum class EGameCommandType {
    Exec = 0,
    Toggle = 1,
    Option = 2,
    Value = 3,
    OptionValue = 4,
    TwoOption = 6,
    OptionToggle = 7,
    EGameCommandType_MAX = 8,
};

enum EGameSettingPlatformType {
    EGSPT_Default = 0,
    EGSPT_PS5 = 1,
    EGSPT_XSX = 2,
    EGSPT_WinGDK = 3,
    EGSPT_SteamDeck = 4,
    EGSPT_Windows = 5,
    EGSPT_MAX = 6,
};

enum class EGameSettingType {
    Checkbox = 0,
    Slider = 1,
    Radio = 2,
    Combo = 3,
    EGameSettingType_MAX = 4,
};

enum class EGravityCameraBehavior {
    Default = 0,
    GravityLocal = 1,
    WorldGlobal = 2,
    EGravityCameraBehavior_MAX = 3,
};

enum class EInternalTemperature {
    Hot = 0,
    Regular = 1,
    Cold = 2,
    VeryCold = 3,
    EInternalTemperature_MAX = 4,
};

enum class EInventoryMode {
    Default = 0,
    ContainerView = 1,
    RepairBenchView = 2,
    ChemistryBenchView = 3,
    Journal = 4,
    HealthPanel = 5,
    SkillPanel = 6,
    Crafting = 7,
    ArmorStand = 8,
    Transmog = 9,
    Custom = 10,
    Butchering = 11,
    Trading = 12,
    UpgradeView = 13,
    EInventoryMode_MAX = 14,
};

enum class EInventorySlotType {
    Hotbar = 0,
    InventoryBackpack = 1,
    EquipmentSlots_All = 2,
    EquipmentSlot_Torso = 3,
    EquipmentSlot_Head = 4,
    EquipmentSlot_Legs = 5,
    EquipmentSlot_Backpack = 6,
    EquipmentSlot_Arms = 7,
    EquipmentSlot_Suit = 8,
    EquipmentSlot_Headlamp = 9,
    EquipmentSlot_Trinket = 10,
    EquipmentSlot_Wristwatch = 11,
    EquipmentSlot_Hacker = 12,
    EquipmentSlot_Shield = 13,
    EquipmentSlot_Trinket2 = 14,
    EquipmentSlot_Companion = 15,
    EInventorySlotType_MAX = 16,
};

enum class EItemRewardTable {
    GlobalItem = 0,
    Salvage = 1,
    EItemRewardTable_MAX = 2,
};

enum class EItemSortMethod {
    Weight = 0,
    Name = 1,
    Type = 2,
    EItemSortMethod_MAX = 3,
};

enum class EJournalEntryCategories {
    unknown = 0,
    office = 1,
    mf = 2,
    labs = 3,
    security = 4,
    dam = 5,
    reactors = 6,
    home = 7,
    fog = 8,
    train = 9,
    boston = 10,
    anteverse_a = 11,
    anteverse_b = 12,
    anteverse_c = 13,
    intro = 14,
    alps = 15,
    mirror = 16,
    wall = 17,
    island = 18,
    shore = 19,
    suomi = 20,
    theatre = 21,
    salem = 22,
    motherboard = 23,
    ladderworld = 24,
    sleepdimension = 25,
    syn_labs = 26,
    ordo_storage = 27,
    tile = 28,
    arcade = 29,
    rise = 30,
    nightrealm = 31,
    inquisition = 32,
    protein = 33,
    luca = 34,
    signal = 35,
    EJournalEntryCategories_MAX = 36,
};

enum class EKeybindType {
    Action = 0,
    Axis = 1,
    EKeybindType_MAX = 2,
};

enum class ELiquidType {
    Empty = 0,
    Water = 1,
    Feces = 2,
    RadioactiveWaste = 3,
    MoltenMaterial = 4,
    Fuel = 5,
    Vomit = 6,
    Battery = 7,
    Blood = 8,
    Antejuice = 9,
    TaintedWater = 10,
    Soup = 11,
    Laser = 12,
    Ink = 13,
    ELiquidType_MAX = 14,
};

enum class EMapResourceTable {
    Resource = 0,
    NPCTraderItem = 1,
    EMapResourceTable_MAX = 2,
};

enum class EMinigameDifficulty {
    Easy = 0,
    Medium = 1,
    Hard = 2,
    EMinigameDifficulty_MAX = 3,
};

enum class EModifiedRuleset {
    Normal = 0,
    NonStandard = 1,
    ExtremelyModified = 2,
    Modded = 3,
    EModifiedRuleset_MAX = 4,
};

enum class EMonthOfTheYear {
    January = 0,
    February = 1,
    March = 2,
    April = 3,
    May = 4,
    June = 5,
    July = 6,
    August = 7,
    September = 8,
    October = 9,
    November = 10,
    December = 11,
    EMonthOfTheYear_MAX = 12,
};

enum class ENarrativeNPCState {
    NoContactYet = 0,
    SpottedPlayer = 1,
    FirstContactMade = 2,
    ReturnMessagesOnly = 3,
    CompletionMessage = 4,
    Farewell = 5,
    ENarrativeNPCState_MAX = 6,
};

enum class EOSThemes {
    GATE_OS = 0,
    Order_OS = 1,
    Signal_OS = 2,
    NONE_DONOTDELETE = 3,
    EOSThemes_MAX = 4,
};

enum class EPaintColor {
    White = 0,
    Blue = 1,
    Red = 2,
    Green = 3,
    Orange = 4,
    Purple = 5,
    Yellow = 6,
    Black = 7,
    Cyan = 8,
    Lime = 9,
    Pink = 10,
    Brown = 11,
    None = 12,
    Glitch = 13,
    EPaintColor_MAX = 14,
};

enum class EPlantGrowthStage {
    Sprout = 0,
    Budding = 1,
    Juvenile = 2,
    Flowering = 3,
    Grown = 4,
    Harvested = 5,
    Regrowing = 6,
    Dead = 7,
    EPlantGrowthStage_MAX = 8,
};

enum class EPowerTimerMode {
    AlwaysOn = 0,
    DayOnly = 1,
    NightOnly = 2,
    FiveSeconds = 3,
    TenSeconds = 4,
    ThirtySeconds = 5,
    SixtySeconds = 6,
    FiveMinutes = 7,
    AlwaysOff = 8,
    EPowerTimerMode_MAX = 9,
};

enum class EProjectileHomingType {
    Default = 0,
    MaintainForwardMomentum = 1,
    EProjectileHomingType_MAX = 2,
};

enum class ERecipeCategory {
    Uncategorized = 0,
    Resource = 1,
    Health = 2,
    Food = 3,
    Weapon = 4,
    Gear = 5,
    Electricity = 6,
    Construction = 7,
    Farming = 8,
    Travel = 9,
    Defense = 10,
    Tools = 11,
    ERecipeCategory_MAX = 12,
};

enum class EReleaseGroup {
    Core = 0,
    MOXY = 1,
    CAKE = 2,
    RENO = 3,
    XMAS26 = 4,
    LUCA = 5,
    AXON = 6,
    Future = 7,
    Development = 8,
    Tool = 9,
    GameOnly = 10,
    EReleaseGroup_MAX = 11,
};

enum class ERowValid {
    Valid = 0,
    NotValid = 1,
    ERowValid_MAX = 2,
};

enum class ESaveIntegrityState {
    Playable = 0,
    UpgradeRequired = 1,
    LaterVersion = 2,
    Incompatible = 3,
    Corrupt = 4,
    RequiresCompress = 5,
    ESaveIntegrityState_MAX = 6,
};

enum ESaveType {
    EST_World = 0,
    EST_WorldBackup = 1,
    EST_Keybinds = 2,
    EST_Settings = 3,
    EST_UserSettings = 4,
    EST_Customization = 5,
    EST_Unlocks = 6,
    EST_UserSettingsBP = 7,
    EST_PlayerStats = 8,
    EST_MAX = 9,
};

enum class ESecondaryAttackTypes {
    NoSecondaryAttack = 0,
    WindUpSwing = 1,
    Block = 2,
    AimDownSights = 3,
    OtherSecondaryAttack = 4,
    ThrowWeapon = 5,
    ESecondaryAttackTypes_MAX = 6,
};

enum class ESkinTones {
    Undefined = 0,
    Light = 1,
    Olive = 2,
    Brown = 3,
    Black = 4,
    ESkinTones_MAX = 5,
};

enum ESortDatabaseTerminalList {
    Name = 0,
    Amount = 1,
    ESortDatabaseTerminalList_MAX = 2,
};

enum class ESortedItemType {
    Generic = 0,
    Consumable = 1,
    Gear = 2,
    Weapon = 3,
    Deployable = 4,
    ESortedItemType_MAX = 5,
};

enum class EStatModifierApplyType {
    Add = 0,
    Multiply = 1,
    EStatModifierApplyType_MAX = 2,
};

enum class ESwingDirections {
    Horizontal_RightToLeft = 0,
    Horizontal_LeftToRight = 1,
    Vertical_BottomToTop = 2,
    Vertical_TopToBottom = 3,
    Diagonal_TopRightToBottomLeft = 4,
    Diagonal_TopLeftToBottomRight = 5,
    Forward_Thrust = 6,
    ESwingDirections_MAX = 7,
};

enum ETargetingCategory {
    ETC_Default = 0,
    ETC_AimAssist = 1,
    ETC_Accuracy = 2,
    ETC_Interactable = 3,
    ETC_MAX = 4,
};

enum class ETimeOfDay {
    Midnight = 0,
    Dawn = 1,
    Noon = 2,
    Dusk = 3,
    ETimeOfDay_MAX = 4,
};

enum class EUnderwaterUsage {
    Allowed = 0,
    Blocked = 1,
    Electrocution = 2,
    EUnderwaterUsage_MAX = 3,
};

enum class EVoiceLineType {
    None = 0,
    SitExhale = 1,
    PainGrunt = 2,
    PainYell = 3,
    PainYellStop = 4,
    Scream = 5,
    Downed = 6,
    Death = 7,
    DeathFalling = 8,
    CallHelp = 9,
    Revived = 10,
    Relief = 11,
    Tired = 12,
    Sleepy = 13,
    Exhausted = 14,
    SleepStart = 15,
    WakeUpBad = 16,
    WakeUpGood = 17,
    DryMouth = 18,
    Thirst = 19,
    Parched = 20,
    BreathingLight = 21,
    BreathingMedium = 22,
    BreathingHeavy = 23,
    Insane = 24,
    Peckish = 25,
    Hungry = 26,
    Starving = 27,
    Eating = 28,
    ToiletSoon = 29,
    ToiletUrgent = 30,
    ToiletRelief = 31,
    Chilly = 32,
    Cold = 33,
    Hypothermia = 34,
    Warm = 35,
    Hot = 36,
    Heatstroke = 37,
    Sick = 38,
    Vomit = 39,
    Curious = 40,
    Crafting = 41,
    ProximityQuestion = 42,
    ProximityAnswer = 43,
    ToiletQuestion = 44,
    ToiletAnswer = 45,
    Continence = 46,
    Fumble = 47,
    LootingOwnCorpse = 48,
    Stunned = 49,
    DeathRattled = 50,
    DeathExplosion = 51,
    EVoiceLineType_MAX = 52,
};

namespace E_DoorStates {
    enum Type {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        NewEnumerator6 = 6,
        E_MAX = 7,
    };
}

namespace E_LiquidType {
    enum Type {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator6 = 5,
        NewEnumerator7 = 6,
        NewEnumerator8 = 7,
        NewEnumerator9 = 8,
        NewEnumerator11 = 9,
        NewEnumerator13 = 10,
        NewEnumerator14 = 11,
        NewEnumerator15 = 12,
        NewEnumerator16 = 13,
        E_MAX = 14,
    };
}

namespace E_NarrativeNPCStates {
    enum Type {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        E_MAX = 6,
    };
}

namespace E_PowerTimerModes {
    enum Type {
        NewEnumerator0 = 0,
        NewEnumerator1 = 1,
        NewEnumerator2 = 2,
        NewEnumerator3 = 3,
        NewEnumerator4 = 4,
        NewEnumerator5 = 5,
        NewEnumerator7 = 6,
        NewEnumerator8 = 7,
        NewEnumerator6 = 8,
        E_MAX = 9,
    };
}

