enum EABFGamepadType {
    ABFGT_Default = 0,
    ABFGT_Xbox = 1,
    ABFGT_DS4 = 2,
    ABFGT_DS5 = 3,
    ABFGT_Steam = 4,
    ABFGT_MAX = 5,
};

namespace EAbioticCrossplaySetting {
    enum Type {
        Initial = 0,
        NoCrossplay = 1,
        PartialCrossplay = 2,
        EAbioticCrossplaySetting_MAX = 3,
    };
}

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
    EDynamicProperty_MAX = 23,
};

enum class EFPAnimState {
    Idle = 0,
    CrouchIdle = 1,
    Walk = 2,
    CrouchWalk = 3,
    Sprint = 4,
    EFPAnimState_MAX = 5,
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

enum class EItemSortMethod {
    Weight = 0,
    Name = 1,
    Type = 2,
    EItemSortMethod_MAX = 3,
};

enum class EKeybindType {
    Action = 0,
    Axis = 1,
    EKeybindType_MAX = 2,
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

enum class EProjectileHomingType {
    Default = 0,
    MaintainForwardMomentum = 1,
    EProjectileHomingType_MAX = 2,
};

enum class EReleaseGroup {
    Core = 0,
    DarkEnergy = 1,
    Residence = 2,
    CRUX = 3,
    LUCA = 4,
    Future = 5,
    Development = 6,
    EReleaseGroup_MAX = 7,
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

