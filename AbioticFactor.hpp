#ifndef UE4SS_SDK_AbioticFactor_HPP
#define UE4SS_SDK_AbioticFactor_HPP

#include "AbioticFactor_enums.hpp"

struct FAIDebugState
{
    FString ControllerName;                                                           // 0x0000 (size: 0x10)
    FString PawnName;                                                                 // 0x0010 (size: 0x10)
    FString MovementBaseInfo;                                                         // 0x0020 (size: 0x10)
    FString MovementModeInfo;                                                         // 0x0030 (size: 0x10)
    FString PathFollowingInfo;                                                        // 0x0040 (size: 0x10)
    int32 NextPathPointIndex;                                                         // 0x0050 (size: 0x4)
    FVector PathGoalLocation;                                                         // 0x0058 (size: 0x18)
    FString CurrentAITask;                                                            // 0x0070 (size: 0x10)
    FString CurrentAIState;                                                           // 0x0080 (size: 0x10)
    FString CurrentAIAssets;                                                          // 0x0090 (size: 0x10)
    FString NavDataInfo;                                                              // 0x00A0 (size: 0x10)
    FString MontageInfo;                                                              // 0x00B0 (size: 0x10)
    FString TaskQueueInfo;                                                            // 0x00C0 (size: 0x10)
    FString TickingTaskInfo;                                                          // 0x00D0 (size: 0x10)
    int32 NumTasksInQueue;                                                            // 0x00E0 (size: 0x4)
    int32 NumTickingTasks;                                                            // 0x00E4 (size: 0x4)
    bool bHasController;                                                              // 0x00E8 (size: 0x1)
    bool bPathHasGoalActor;                                                           // 0x00E9 (size: 0x1)
    bool bIsUsingPathFollowing;                                                       // 0x00EA (size: 0x1)
    bool bIsUsingCharacter;                                                           // 0x00EB (size: 0x1)
    bool bIsUsingBehaviorTree;                                                        // 0x00EC (size: 0x1)
    bool bIsUsingGameplayTasks;                                                       // 0x00ED (size: 0x1)

}; // Size: 0xF0

struct FAISpawnerData
{
    TArray<class AAbioticCharacter*> SpawnedAI;                                       // 0x0000 (size: 0x10)
    TArray<class AActor*> NearbyPlayersOnDeath;                                       // 0x0010 (size: 0x10)
    float LastTotalCooldown;                                                          // 0x0020 (size: 0x4)
    float TimeLastCooldownStarted;                                                    // 0x0024 (size: 0x4)
    int32 LastDayOnCooldown;                                                          // 0x0028 (size: 0x4)
    bool bShouldOnlySpawnOnce;                                                        // 0x002C (size: 0x1)

}; // Size: 0x30

struct FAbioticBlockedPlayer
{
    FString playerName;                                                               // 0x0000 (size: 0x10)
    FString PlayerId;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAbioticTargetingManagerTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FAccessibilitySettingRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FAchievement : public FTableRowBase
{
    FAchievementStatRowHandle ProgressStat;                                           // 0x0008 (size: 0x20)
    int32 ProgressMinValue;                                                           // 0x0028 (size: 0x4)
    int32 ProgressMaxValue;                                                           // 0x002C (size: 0x4)

}; // Size: 0x30

struct FAchievementRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FAchievementStat : public FTableRowBase
{
    bool bIsFloatStat;                                                                // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FAchievementStatListener
{
    TMap<FAchievementRowHandle, int32> LinkedAchievements;                            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FAchievementStatRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FAnalyticEnemyKilled
{
    TMap<FString, int32> DamageTypeMap;                                               // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FAnalyticWorldFlag
{
    int32 PlayerCount;                                                                // 0x0000 (size: 0x4)
    int32 TimePlayed;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FAnalyticsData
{
    int32 VersionNumber;                                                              // 0x0000 (size: 0x4)
    TMap<FString, int32> CraftedItems;                                                // 0x0008 (size: 0x50)
    TMap<FString, int32> PlayerDeaths;                                                // 0x0058 (size: 0x50)
    TMap<class FString, class FAnalyticWorldFlag> WorldFlags;                         // 0x00A8 (size: 0x50)
    TMap<class FString, class FAnalyticEnemyKilled> EnemiesKilled;                    // 0x00F8 (size: 0x50)
    TMap<FString, int32> MoneySpent;                                                  // 0x0148 (size: 0x50)
    TMap<FString, int32> BenchUpgrades;                                               // 0x0198 (size: 0x50)
    TMap<FString, int32> TraitsChosen;                                                // 0x01E8 (size: 0x50)
    TMap<FString, int32> TutorialStates;                                              // 0x0238 (size: 0x50)
    TMap<FString, int32> GenericEvents;                                               // 0x0288 (size: 0x50)

}; // Size: 0x2D8

struct FAudioSettingRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FBaseCompendiumSection
{
    FText SectionText;                                                                // 0x0000 (size: 0x10)
    TSoftObjectPtr<UTexture2D> OptionalSectionImage;                                  // 0x0010 (size: 0x28)
    TArray<FDataTableRowHandle> RecipesToUnlock;                                      // 0x0038 (size: 0x10)
    bool bDebugUnlock;                                                                // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FBenchUpgrade : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0028 (size: 0x28)
    TMap<ECharacterSkills, int32> RequiredSkills;                                     // 0x0050 (size: 0x50)
    TArray<FItemCount> RequiredItems;                                                 // 0x00A0 (size: 0x10)
    FGameplayTag GameplayTag;                                                         // 0x00B0 (size: 0x8)
    TSoftClassPtr<ABenchUpgradeActor> UpgradeActor;                                   // 0x00B8 (size: 0x28)

}; // Size: 0xE0

struct FBenchUpgradeRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FBlackboardName
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBuffDebuff : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0020 (size: 0x10)
    FText TooltipText_Remove;                                                         // 0x0030 (size: 0x10)
    FText TooltipText_Apply;                                                          // 0x0040 (size: 0x10)
    FGameplayTagContainer BuffTags;                                                   // 0x0050 (size: 0x20)
    EBuffType BuffType;                                                               // 0x0070 (size: 0x1)
    TSoftClassPtr<UBuffDebuffObject> BuffLogic_Object;                                // 0x0078 (size: 0x28)
    TSoftClassPtr<ABuffActor> BuffLogic_Actor;                                        // 0x00A0 (size: 0x28)
    FGameplayTagContainer TagsAppliedOnPlayer;                                        // 0x00C8 (size: 0x20)
    TMap<FStatModifierRowHandle, int32> StatModifierMap;                              // 0x00E8 (size: 0x50)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0138 (size: 0x28)
    float DefaultDuration;                                                            // 0x0160 (size: 0x4)
    bool bNoExpiration;                                                               // 0x0164 (size: 0x1)
    EBuffApplyStyle ApplyStyle;                                                       // 0x0165 (size: 0x1)
    float BuffTickRate;                                                               // 0x0168 (size: 0x4)
    EBuffSeverity Severity;                                                           // 0x016C (size: 0x1)
    TArray<FBuffDebuffRowHandle> BuffsToRemoveWhenApplied;                            // 0x0170 (size: 0x10)
    FGameplayTagQuery TaggedBuffsToRemoveWhenApplied;                                 // 0x0180 (size: 0x48)
    EBuffVisibility BuffVisibility;                                                   // 0x01C8 (size: 0x1)
    bool bRunTickOnApply;                                                             // 0x01C9 (size: 0x1)
    TArray<EBodyLimbs> LimbWhitelist;                                                 // 0x01D0 (size: 0x10)
    bool bRemoveOnMaxLimbHP;                                                          // 0x01E0 (size: 0x1)
    TSoftObjectPtr<UNiagaraSystem> BodyParticleEffect;                                // 0x01E8 (size: 0x28)
    FName BodyParticleSocket;                                                         // 0x0210 (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> MaterialEffect;                                // 0x0218 (size: 0x28)
    EVoiceLineType PlayerVoiceLine;                                                   // 0x0240 (size: 0x1)
    float PlayerDialogLineDelay;                                                      // 0x0244 (size: 0x4)

}; // Size: 0x248

struct FBuffDebuffEntry
{
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0000 (size: 0x20)
    EBodyLimbs ParentLimb;                                                            // 0x0020 (size: 0x1)
    float BuffExpireTime;                                                             // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FBuffDebuffRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FCachedInputData
{
    float DeltaTime;                                                                  // 0x0000 (size: 0x4)
    float FrameTime;                                                                  // 0x0004 (size: 0x4)
    float AccelerationTime;                                                           // 0x0008 (size: 0x4)
    FVector2D RadialLeft;                                                             // 0x0010 (size: 0x10)
    FVector2D RawLeft;                                                                // 0x0020 (size: 0x10)
    float GamepadLeftX;                                                               // 0x0030 (size: 0x4)
    float GamepadLeftY;                                                               // 0x0034 (size: 0x4)
    FVector2D RadialRight;                                                            // 0x0038 (size: 0x10)
    FVector2D RawRight;                                                               // 0x0048 (size: 0x10)
    float GamepadRightX;                                                              // 0x0058 (size: 0x4)
    float GamepadRightY;                                                              // 0x005C (size: 0x4)

}; // Size: 0x60

struct FCompendiumEntry : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText Title;                                                                      // 0x0010 (size: 0x10)
    FText Subtitle;                                                                   // 0x0020 (size: 0x10)
    FGameplayTagContainer Tags;                                                       // 0x0030 (size: 0x20)
    FGameEntitlementRowHandle RequiredDLC;                                            // 0x0050 (size: 0x20)
    FDataTableRowHandle NPCRow;                                                       // 0x0070 (size: 0x10)
    TArray<FCompendiumSection> Sections;                                              // 0x0080 (size: 0x10)
    bool bHasKillRequirementSection;                                                  // 0x0090 (size: 0x1)
    FKillCompendiumSection KillRequirementSection;                                    // 0x0098 (size: 0x58)

}; // Size: 0xF0

struct FCompendiumEntryRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FCompendiumKillCount
{
    FCompendiumEntryRowHandle CompendiumRow;                                          // 0x0000 (size: 0x20)
    int32 Count;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FCompendiumSection : public FBaseCompendiumSection
{
    ECompendiumUnlockType UnlockRequirement;                                          // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FControlSettingRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FDamageDefinition : public FTableRowBase
{
    FGameplayTag GameplayTag;                                                         // 0x0008 (size: 0x8)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FDamageDefinitionRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FDynamicProperty
{
    EDynamicProperty Key;                                                             // 0x0000 (size: 0x1)
    int32 Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FErrorMessage : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    FString ErrorCode;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FErrorMessageRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FFishData : public FTableRowBase
{
    FText FishName;                                                                   // 0x0008 (size: 0x10)
    FDataTableRowHandle NormalItemRow;                                                // 0x0018 (size: 0x10)
    FDataTableRowHandle TextureVariantRow;                                            // 0x0028 (size: 0x10)
    FGameplayTagContainer ChangeableDataTags;                                         // 0x0038 (size: 0x20)
    FDataTableRowHandle RecipeToUnlock;                                               // 0x0058 (size: 0x10)
    int32 XPGain;                                                                     // 0x0068 (size: 0x4)
    FGameplayTagQuery CatchRequirement;                                               // 0x0070 (size: 0x48)
    FWorldFlagRowHandle WorldFlagRequirement;                                         // 0x00B8 (size: 0x20)
    FTimeOfDayMultiplier TimeOfDayCatchChance;                                        // 0x00D8 (size: 0x10)
    TMap<FGameplayTag, float> TagChanceModifiers;                                     // 0x00E8 (size: 0x50)
    TSoftObjectPtr<UNiagaraSystem> DirectionalParticle;                               // 0x0138 (size: 0x28)
    FGameEntitlementRowHandle RequiredDLC;                                            // 0x0160 (size: 0x20)

}; // Size: 0x180

struct FFishReward
{
    FFishRowHandle FishRow;                                                           // 0x0000 (size: 0x20)
    float WeightedChance;                                                             // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FFishRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FFishingZone : public FTableRowBase
{
    FText ZoneName;                                                                   // 0x0008 (size: 0x10)
    TArray<FFishReward> PossibleFish;                                                 // 0x0018 (size: 0x10)
    FDataTableRowHandle JunkSalvageRow;                                               // 0x0028 (size: 0x10)
    float JunkSalvageChance;                                                          // 0x0038 (size: 0x4)
    TSoftObjectPtr<UNiagaraSystem> DirectionalParticle;                               // 0x0040 (size: 0x28)

}; // Size: 0x68

struct FFishingZoneRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FGameActivity : public FTableRowBase
{
    FString ActivityName;                                                             // 0x0008 (size: 0x10)
    FWorldFlagRowHandle StartingTask;                                                 // 0x0018 (size: 0x20)
    TMap<class FString, class FWorldFlagRowHandle> AssociatedWorldFlags;              // 0x0038 (size: 0x50)

}; // Size: 0x88

struct FGameActivityRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FGameCommand : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FString CommandName;                                                              // 0x0010 (size: 0x10)
    FText Description;                                                                // 0x0020 (size: 0x10)
    EGameCommandNetMode NetMode;                                                      // 0x0030 (size: 0x1)
    EGameCommandType CommandType;                                                     // 0x0031 (size: 0x1)
    TArray<FGameCommandInput> Inputs;                                                 // 0x0038 (size: 0x10)
    TSubclassOf<class UGameCommandObject> GameCommandObject;                          // 0x0048 (size: 0x8)

}; // Size: 0x50

struct FGameCommandEntry
{
    FGameCommandRowHandle RowHandle;                                                  // 0x0000 (size: 0x20)
    FString CommandName;                                                              // 0x0020 (size: 0x10)
    FString HelperText;                                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FGameCommandInput
{
    FText Description;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameCommandRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FGameCredit : public FTableRowBase
{
    FString Subject;                                                                  // 0x0008 (size: 0x10)
    FString Title;                                                                    // 0x0018 (size: 0x10)
    bool bIsCategoryHeader;                                                           // 0x0028 (size: 0x1)
    TSoftObjectPtr<UTexture2D> OptionalImage;                                         // 0x0030 (size: 0x28)

}; // Size: 0x58

struct FGameCreditRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FGameEntitlement : public FTableRowBase
{
    FString ID_PS5;                                                                   // 0x0008 (size: 0x10)
    FString ID_GDK;                                                                   // 0x0018 (size: 0x10)
    FString ID_STEAM;                                                                 // 0x0028 (size: 0x10)
    FString ID_EOS;                                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FGameEntitlementRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FGameSetting : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    TSoftObjectPtr<UTexture2D> DisplayImage;                                          // 0x0028 (size: 0x28)
    FText SubCategory;                                                                // 0x0050 (size: 0x10)
    bool bUnimplemented;                                                              // 0x0060 (size: 0x1)
    EGameSettingType SettingType;                                                     // 0x0061 (size: 0x1)
    FName CVarName;                                                                   // 0x0064 (size: 0x8)
    FName CVarVisibilityName;                                                         // 0x006C (size: 0x8)
    FName FeatureName;                                                                // 0x0074 (size: 0x8)
    bool bCustomCVar;                                                                 // 0x007C (size: 0x1)
    bool bOverrideEngineDefault;                                                      // 0x007D (size: 0x1)
    bool bOverrideNativeDefault;                                                      // 0x007E (size: 0x1)
    ECVarType CVarType;                                                               // 0x007F (size: 0x1)
    FString CVarDefaultValue;                                                         // 0x0080 (size: 0x10)
    TMap<TEnumAsByte<EGameSettingPlatformType>, FString> CVarPlatformDefaultOverrides; // 0x0090 (size: 0x50)
    TArray<TEnumAsByte<EGameSettingPlatformType>> RestrictToPlatforms;                // 0x00E0 (size: 0x10)
    TSubclassOf<class USettingValueMask> ValueMask;                                   // 0x00F0 (size: 0x8)
    TArray<FSettingOption> Options;                                                   // 0x00F8 (size: 0x10)
    TSubclassOf<class USettingOptionFactory> OptionFactory;                           // 0x0108 (size: 0x8)
    FGameSliderSettings SliderSettings;                                               // 0x0110 (size: 0x1C)

}; // Size: 0x130

struct FGameSliderSettings
{
    float MinSliderValue;                                                             // 0x0000 (size: 0x4)
    float MaxSliderValue;                                                             // 0x0004 (size: 0x4)
    float DefaultSliderValue;                                                         // 0x0008 (size: 0x4)
    float SliderDelta;                                                                // 0x000C (size: 0x4)
    int32 SliderFractionalDigits;                                                     // 0x0010 (size: 0x4)
    float SliderMultiplier;                                                           // 0x0014 (size: 0x4)
    float SliderSlideScalar;                                                          // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FGameplaySettingRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FGeneratedMeshCacheEntry
{
    class USkeletalMesh* Mesh;                                                        // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FHitData
{
    class AActor* Actor;                                                              // 0x0000 (size: 0x8)
    TArray<int32> HitIndexes;                                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FItemAction : public FTableRowBase
{
    FKeybindSettingRowHandle KeyBind;                                                 // 0x0008 (size: 0x20)
    FText DisplayName;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FItemActionRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FItemCount
{
    FDataTableRowHandle Item;                                                         // 0x0000 (size: 0x10)
    int32 Count;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FItemUpgrade : public FTableRowBase
{
    TArray<FItemUpgradeEntry> Upgrades;                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FItemUpgradeEntry
{
    TArray<FItemCount> RequiredItems;                                                 // 0x0000 (size: 0x10)
    FDataTableRowHandle OutputItem;                                                   // 0x0010 (size: 0x10)
    TSoftObjectPtr<UObject> SoundEffect;                                              // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FItemUpgradeRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FKeybindActionArray
{
    TArray<FUIKeybindActionRowHandle> KeybindActions;                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FKeybindSetting : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    FText SubCategory;                                                                // 0x0028 (size: 0x10)
    FName KeybindName;                                                                // 0x0038 (size: 0x8)
    EKeybindType KeybindType;                                                         // 0x0040 (size: 0x1)
    float AxisValue;                                                                  // 0x0044 (size: 0x4)
    FUIKeybindActionRowHandle UIAction;                                               // 0x0048 (size: 0x20)
    FKeybindSettingRowHandle GamepadRedirect;                                         // 0x0068 (size: 0x20)
    bool bHiddenKeybind;                                                              // 0x0088 (size: 0x1)
    bool bDevelopmentOnly;                                                            // 0x0089 (size: 0x1)
    TArray<TEnumAsByte<EGameSettingPlatformType>> RestrictToPlatforms;                // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FKeybindSettingRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FKillCompendiumSection : public FBaseCompendiumSection
{
    int32 RequiredCount;                                                              // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FMainMenuBackground : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FName LevelName;                                                                  // 0x0018 (size: 0x8)
    FString UnlockCriteria;                                                           // 0x0020 (size: 0x10)
    TSoftObjectPtr<UTexture2D> DisplayImage;                                          // 0x0030 (size: 0x28)
    FName LevelFX;                                                                    // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FManagedTickObject
{
    class AActor* Actor;                                                              // 0x0000 (size: 0x8)
    class UActorComponent* Component;                                                 // 0x0008 (size: 0x8)
    float TickInterval;                                                               // 0x0010 (size: 0x4)
    float ElapsedTick;                                                                // 0x0014 (size: 0x4)
    bool bTickEnabled;                                                                // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FNPCConversation : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText NPCName;                                                                    // 0x0010 (size: 0x10)
    TArray<FNPCConversationLine> BeckoningLines;                                      // 0x0020 (size: 0x10)
    TArray<FNPCConversationLine> IdleLines;                                           // 0x0030 (size: 0x10)
    TArray<FNPCConversationLine> InitalContactMessages;                               // 0x0040 (size: 0x10)
    TArray<FNPCConversationLine> ReturnMessages;                                      // 0x0050 (size: 0x10)
    FWorldFlagRowHandle WorldFlagToComplete;                                          // 0x0060 (size: 0x20)
    TArray<FNPCConversationLine> VendorInteraction_Positive;                          // 0x0080 (size: 0x10)
    TArray<FNPCConversationLine> VendorInteraction_Negative;                          // 0x0090 (size: 0x10)
    TSoftObjectPtr<UDialogueWave> DeathSound;                                         // 0x00A0 (size: 0x28)
    TSoftClassPtr<UUserWidget> SubtitleClass;                                         // 0x00C8 (size: 0x28)

}; // Size: 0xF0

struct FNPCConversationLine
{
    TSoftObjectPtr<UDialogueWave> DialogToSpeak;                                      // 0x0000 (size: 0x28)
    TArray<FDataTableRowHandle> RecipesToUnlock;                                      // 0x0028 (size: 0x10)
    TArray<FDataTableRowHandle> JournalEntriesToAdd;                                  // 0x0038 (size: 0x10)
    TArray<FWorldFlagRowHandle> WorldFlagsToTrigger;                                  // 0x0048 (size: 0x10)
    TArray<FCompendiumEntryRowHandle> CompendiumEntriesToUnlock;                      // 0x0058 (size: 0x10)
    TSoftObjectPtr<UAnimMontage> DialogMontage;                                       // 0x0068 (size: 0x28)
    float MontageDelay;                                                               // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FNPCConversationRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FNPCTrader : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TSoftClassPtr<AAbioticCharacter> NPCClass;                                        // 0x0010 (size: 0x28)
    FDataTableRowHandle NPCConversation;                                              // 0x0038 (size: 0x10)
    FDataTableRowHandle NPCTradeInventory;                                            // 0x0048 (size: 0x10)
    int32 DaysOfTheWeek;                                                              // 0x0058 (size: 0x4)
    float ChanceToSpawn;                                                              // 0x005C (size: 0x4)
    TArray<FWorldFlagRowHandle> RequiredWorldFlags;                                   // 0x0060 (size: 0x10)
    TSoftObjectPtr<UTexture2D> NPCImage;                                              // 0x0070 (size: 0x28)

}; // Size: 0x98

struct FNPCVoice : public FTableRowBase
{
    TArray<TSoftObjectPtr<UDialogueWave>> Idle;                                       // 0x0008 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> LostSightOfTarget;                          // 0x0018 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> SearchingForTarget;                         // 0x0028 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> CombatTaunt;                                // 0x0038 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> AttackingTarget;                            // 0x0048 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> MeleeAttackGrunt;                           // 0x0058 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> Aggro;                                      // 0x0068 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> AggroNPCTarget;                             // 0x0078 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> PainStagger;                                // 0x0088 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> StartingReload;                             // 0x0098 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> Startle;                                    // 0x00A8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DeathNormal;                                // 0x00B8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DeathExplosive;                             // 0x00C8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> NeedCover;                                  // 0x00D8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> SeekingCover;                               // 0x00E8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> Flanking;                                   // 0x00F8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> KilledNPCTarget;                            // 0x0108 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> KilledPlayerTarget;                         // 0x0118 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> AllyDeath;                                  // 0x0128 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> LastAlive;                                  // 0x0138 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> StartHealingFriend;                         // 0x0148 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ThrowingGrenade;                            // 0x0158 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ExitCombat;                                 // 0x0168 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> FinishedHealingFriend;                      // 0x0178 (size: 0x10)

}; // Size: 0x188

struct FNPCVoiceRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FPaintedDeployable : public FTableRowBase
{
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Default;                     // 0x0008 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_White;                       // 0x0018 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Blue;                        // 0x0028 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Red;                         // 0x0038 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Green;                       // 0x0048 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Orange;                      // 0x0058 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Purple;                      // 0x0068 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Yellow;                      // 0x0078 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Black;                       // 0x0088 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Cyan;                        // 0x0098 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Lime;                        // 0x00A8 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Pink;                        // 0x00B8 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Brown;                       // 0x00C8 (size: 0x10)
    TArray<TSoftObjectPtr<UMaterialInterface>> Materials_Glitch;                      // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FPaintedDeployableRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FPlantData : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    TSoftClassPtr<AActor> ProxyBP;                                                    // 0x0018 (size: 0x28)
    FDataTableRowHandle PlantItem;                                                    // 0x0040 (size: 0x10)
    FDataTableRowHandle HarvestedItem;                                                // 0x0050 (size: 0x10)
    TMap<class EPlantGrowthStage, class FPlantMeshData> GrowthStages;                 // 0x0060 (size: 0x50)
    TSoftObjectPtr<UStaticMesh> FruitMesh;                                            // 0x00B0 (size: 0x28)
    int32 FruitMeshCount;                                                             // 0x00D8 (size: 0x4)

}; // Size: 0xE0

struct FPlantMeshData
{
    TSoftObjectPtr<UStaticMesh> GrowthStageMesh;                                      // 0x0000 (size: 0x28)
    TArray<TSoftObjectPtr<UMaterialInterface>> GrowthStageTexture;                    // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FPlantRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FPlayerBaseData
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    TArray<class AActor*> SignificantFurniture;                                       // 0x0010 (size: 0x10)
    TArray<class AActor*> AllFurniture;                                               // 0x0020 (size: 0x10)
    FVector BaseCenter;                                                               // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FQuestData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText QuestText;                                                                  // 0x0010 (size: 0x10)
    FText QuestDescription;                                                           // 0x0020 (size: 0x10)
    FWorldFlagRowHandle StartWorldFlag;                                               // 0x0030 (size: 0x20)
    FWorldFlagRowHandle CompletionWorldFlag;                                          // 0x0050 (size: 0x20)
    TArray<FQuestRowHandle> SubQuests;                                                // 0x0070 (size: 0x10)
    FName WaypointActorTag;                                                           // 0x0080 (size: 0x8)

}; // Size: 0x88

struct FQuestRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FRepGraphActorClassSettings
{
    FSoftClassPath ActorClass;                                                        // 0x0000 (size: 0x20)
    bool bAddClassRepInfoToMap;                                                       // 0x0020 (size: 0x1)
    EClassRepNodeMapping ClassNodeMapping;                                            // 0x0024 (size: 0x4)
    bool bAddToRPC_Multicast_OpenChannelForClassMap;                                  // 0x0028 (size: 0x1)
    bool bRPC_Multicast_OpenChannelForClass;                                          // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FRowHandle
{
    FName RowName;                                                                    // 0x0008 (size: 0x8)
    FString DataTablePath;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSandboxData
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSandboxOption : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    FText SubCategory;                                                                // 0x0028 (size: 0x10)
    bool bUnimplemented;                                                              // 0x0038 (size: 0x1)
    EModifiedRuleset ModifiedRuleset;                                                 // 0x0039 (size: 0x1)
    EGameSettingType OptionType;                                                      // 0x003A (size: 0x1)
    ECVarType DataType;                                                               // 0x003B (size: 0x1)
    FString DefaultValue;                                                             // 0x0040 (size: 0x10)
    FString MinimumValue;                                                             // 0x0050 (size: 0x10)
    FString MaximumValue;                                                             // 0x0060 (size: 0x10)
    TArray<FSettingOption> Options;                                                   // 0x0070 (size: 0x10)
    TSubclassOf<class USettingOptionFactory> OptionFactory;                           // 0x0080 (size: 0x8)
    FGameSliderSettings SliderSettings;                                               // 0x0088 (size: 0x1C)

}; // Size: 0xA8

struct FSandboxOptionRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FScoringWeights
{
    float VisibilityWeight;                                                           // 0x0000 (size: 0x4)
    float AngleWeight;                                                                // 0x0004 (size: 0x4)
    float DistanceWeight;                                                             // 0x0008 (size: 0x4)
    class UCurveFloat* LineOfSightWeightCurve;                                        // 0x0010 (size: 0x8)
    float NonPawnPenalty;                                                             // 0x0018 (size: 0x4)
    float MaxTraceDistance;                                                           // 0x001C (size: 0x4)
    float AngleRestriction;                                                           // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FSetBonus : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText Description;                                                                // 0x0018 (size: 0x10)
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0028 (size: 0x20)
    int32 RequiredEquipmentCount;                                                     // 0x0048 (size: 0x4)
    TArray<FSetBonusEntry> Buffs;                                                     // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FSetBonusEntry
{
    int32 RequiredEquipmentCount;                                                     // 0x0000 (size: 0x4)
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FSetBonusRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FSkillData : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0028 (size: 0x28)
    ECharacterSkills SkillType;                                                       // 0x0050 (size: 0x1)
    TMap<FStatModifierRowHandle, int32> StatModifierMap;                              // 0x0058 (size: 0x50)
    TArray<FSkillPerkRowHandle> Perks;                                                // 0x00A8 (size: 0x10)

}; // Size: 0xB8

struct FSkillPerk : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    int32 RequiredLevel;                                                              // 0x0028 (size: 0x4)
    FBuffDebuffRowHandle BuffDebuff;                                                  // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FSkillPerkRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FSkillRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FSortedItem
{
    FName RowName;                                                                    // 0x0000 (size: 0x8)
    int32 SourceIndex;                                                                // 0x0008 (size: 0x4)
    FText ItemName;                                                                   // 0x0010 (size: 0x10)
    int32 StackCount;                                                                 // 0x0020 (size: 0x4)
    int32 MaxStackCount;                                                              // 0x0024 (size: 0x4)
    float TotalWeight;                                                                // 0x0028 (size: 0x4)
    ESortedItemType ItemType;                                                         // 0x002C (size: 0x1)

}; // Size: 0x30

struct FSortedItemResult
{
    int32 SourceIndex;                                                                // 0x0000 (size: 0x4)
    int32 TargetIndex;                                                                // 0x0004 (size: 0x4)
    int32 StackSize;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FStatModifier : public FTableRowBase
{
    FString DisplayText;                                                              // 0x0008 (size: 0x10)
    EStatModifierApplyType ApplyType;                                                 // 0x0018 (size: 0x1)
    float FloatMultiplier;                                                            // 0x001C (size: 0x4)

}; // Size: 0x20

struct FStatModifierEntry
{
    FStatModifierRowHandle Type;                                                      // 0x0000 (size: 0x20)
    int32 Value;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FStatModifierRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FTargetingInfo
{
    TWeakObjectPtr<class UAbioticTargetingComponent> Component;                       // 0x0000 (size: 0x8)
    TMap<TEnumAsByte<ETargetingCategory>, float> WeightedScoreByCategory;             // 0x0008 (size: 0x50)
    float VisibilityScore;                                                            // 0x0058 (size: 0x4)
    bool bIsVisible;                                                                  // 0x005C (size: 0x1)
    float AngleScore;                                                                 // 0x0060 (size: 0x4)
    float Angle;                                                                      // 0x0064 (size: 0x4)
    float DistanceScore;                                                              // 0x0068 (size: 0x4)
    float Distance;                                                                   // 0x006C (size: 0x4)
    float TimeInLOS;                                                                  // 0x0070 (size: 0x4)
    bool bInLineOfSight;                                                              // 0x0074 (size: 0x1)
    float LineOfSightStartTime;                                                       // 0x0078 (size: 0x4)

}; // Size: 0x80

struct FTickManagerTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FTimeOfDayMultiplier
{
    float MidnightMultiplier;                                                         // 0x0000 (size: 0x4)
    float DawnMultiplier;                                                             // 0x0004 (size: 0x4)
    float NoonMultiplier;                                                             // 0x0008 (size: 0x4)
    float DuskMultiplier;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FTraceTimeCache
{
    FVector OwnerLocation;                                                            // 0x0000 (size: 0x18)
    FVector EyeLocation;                                                              // 0x0018 (size: 0x18)
    FVector EyeForward;                                                               // 0x0030 (size: 0x18)
    float TraceTime;                                                                  // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FUIKeybindAction : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    TArray<TSoftClassPtr<UAbioticWidget>> SupportedWidgets;                           // 0x0018 (size: 0x10)
    TSoftClassPtr<UKeybindAction> KeybindAction;                                      // 0x0028 (size: 0x28)
    int32 Priority;                                                                   // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FUIKeybindActionRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FUIPopup : public FTableRowBase
{
    TSoftClassPtr<UAbioticWidget> WidgetClass;                                        // 0x0008 (size: 0x28)
    bool bInventoryBound;                                                             // 0x0030 (size: 0x1)
    EInventoryMode InventoryMode;                                                     // 0x0031 (size: 0x1)
    bool bInverseInventoryMode;                                                       // 0x0032 (size: 0x1)
    FVector2D CanvasAlignment;                                                        // 0x0038 (size: 0x10)
    FVector2D CanvasPosition;                                                         // 0x0048 (size: 0x10)
    FVector2D CanvasSize;                                                             // 0x0058 (size: 0x10)
    FText PopupText;                                                                  // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FUIPopupRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FUserEntitlements
{
    TArray<FString> Entitlements;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FVideoSettingRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FWeatherEvent : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText WeatherName;                                                                // 0x0010 (size: 0x10)
    FText ChatWarningMessage;                                                         // 0x0020 (size: 0x10)
    FDataTableRowHandle AnnouncementRow;                                              // 0x0030 (size: 0x10)
    TSoftClassPtr<AWeatherDirector> WeatherDirector;                                  // 0x0040 (size: 0x28)
    FWorldFlagRowHandle RequiredWorldFlag;                                            // 0x0068 (size: 0x20)
    FDataTableRowHandle LevelFXRow;                                                   // 0x0088 (size: 0x10)
    FWorldFlagRowHandle TriggeredBeforeWorldFlag;                                     // 0x0098 (size: 0x20)

}; // Size: 0xB8

struct FWeatherEventRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FWorldCache
{
    TMap<class FString, class UAbioticSave*> FileToSaveMap;                           // 0x0010 (size: 0x50)

}; // Size: 0xB0

struct FWorldFlag : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FString DebugText;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWorldFlagRowHandle : public FRowHandle
{
}; // Size: 0x20

struct FWorldFlagTrigger : public FTableRowBase
{
    TArray<FWorldFlagRowHandle> RequiredWorldFlags;                                   // 0x0008 (size: 0x10)
    FWorldFlagRowHandle WorldFlagToGrant;                                             // 0x0018 (size: 0x20)

}; // Size: 0x38

struct FWorldFlagTriggerRowHandle : public FRowHandle
{
}; // Size: 0x20

class AAbioticAIController : public AAIController
{

    FAIDebugState CollectDebugAIData();
}; // Size: 0x3C0

class AAbioticCharacter : public ACharacter
{
    bool bHasBeenRagdolling;                                                          // 0x0688 (size: 0x1)
    class AActor* TetheredBy;                                                         // 0x0690 (size: 0x8)
    FGameplayTagContainer GameplayTags;                                               // 0x0698 (size: 0x20)
    TArray<class AAbioticCharacter*> NearbyCharacters;                                // 0x06B8 (size: 0x10)
    FAbioticCharacterOnNearbyCharacterTagsUpdated OnNearbyCharacterTagsUpdated;       // 0x06C8 (size: 0x10)
    void NearbyCharacterTagsRefreshed();
    class UCharacterBuffComponent* BuffComponent;                                     // 0x06D8 (size: 0x8)
    TArray<FStatModifierEntry> StatModifiers;                                         // 0x06E0 (size: 0x10)
    TMap<FStatModifierRowHandle, float> StatModifierMap;                              // 0x06F0 (size: 0x50)
    TMap<FStatModifierRowHandle, int32> CheatStatModifierMap;                         // 0x0740 (size: 0x50)
    TMap<FSkillRowHandle, int32> SkillLevelMap;                                       // 0x0790 (size: 0x50)
    FAbioticCharacterOnStatModifiersRefreshed OnStatModifiersRefreshed;               // 0x07E0 (size: 0x10)
    void OnStatModifiersRefreshed();
    bool bStatsLocked;                                                                // 0x07F0 (size: 0x1)
    FStatModifierRowHandle MaxHealthModifier;                                         // 0x07F8 (size: 0x20)
    FStatModifierRowHandle MaxHeadHealthModifier;                                     // 0x0818 (size: 0x20)
    FStatModifierRowHandle MaxTorsoHealthModifier;                                    // 0x0838 (size: 0x20)
    TMap<EBodyLimbs, float> DefaultMax_LimbHealthMap;                                 // 0x0858 (size: 0x50)
    float CurrentHealth_Head;                                                         // 0x08A8 (size: 0x4)
    float CurrentHealth_Torso;                                                        // 0x08AC (size: 0x4)
    float CurrentHealth_LeftArm;                                                      // 0x08B0 (size: 0x4)
    float CurrentHealth_RightArm;                                                     // 0x08B4 (size: 0x4)
    float CurrentHealth_LeftLeg;                                                      // 0x08B8 (size: 0x4)
    float CurrentHealth_RightLeg;                                                     // 0x08BC (size: 0x4)
    FAbioticCharacterOnHealthChanged OnHealthChanged;                                 // 0x08C0 (size: 0x10)
    void HealthChangedDelegate();
    float CurrentStamina;                                                             // 0x08D0 (size: 0x4)
    float MaxStamina;                                                                 // 0x08D4 (size: 0x4)
    float StaminaRequiredToSprint;                                                    // 0x08D8 (size: 0x4)
    FAbioticCharacterOnStaminaChanged OnStaminaChanged;                               // 0x08E0 (size: 0x10)
    void StaminaChangedDelegate();
    float BaseWalkSpeed;                                                              // 0x08F0 (size: 0x4)
    float BaseSprintSpeed;                                                            // 0x08F4 (size: 0x4)
    float MinimumMovementSpeed;                                                       // 0x08F8 (size: 0x4)
    float GlobalSpeedModifier;                                                        // 0x08FC (size: 0x4)
    float GlobalSprintSpeedModifier;                                                  // 0x0900 (size: 0x4)
    float GlobalSwimSpeedModifier;                                                    // 0x0904 (size: 0x4)
    float GlobalCrouchSpeedModifier;                                                  // 0x0908 (size: 0x4)
    uint8 bIsSprinting;                                                               // 0x090C (size: 0x1)
    uint8 bIsAiming;                                                                  // 0x090C (size: 0x1)
    float JetpackTimestamp;                                                           // 0x0910 (size: 0x4)
    bool bHasStaminaToSprint;                                                         // 0x0914 (size: 0x1)
    float ToggleSprintEnabledTimestamp;                                               // 0x0918 (size: 0x4)
    bool GhostMode;                                                                   // 0x091C (size: 0x1)

    void UpdateSkillStatLevel(FSkillRowHandle Skill, int32 Level);
    void ToggleSprint();
    void ToggleCrouch();
    void ToggleAim();
    void StopSprint(bool bClientSimulation);
    void StopAim(bool bClientSimulation);
    void Sprint(bool bClientSimulation);
    void SetStatUpdateLock(bool bLocked);
    void SetMaxStamina(float NewMaxStamina);
    void SetLimbHealth(EBodyLimbs Limb, float Health);
    void SetInternalStates(bool bDBNO, bool bDead, bool bSitting);
    void SetCurrentStamina(float NewCurrentStamina);
    void ScaledLaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void RemoveNearbyCharacter(class AAbioticCharacter* Character, class UPrimitiveComponent* OverlapPrimitive);
    void RejectDLCTeleport();
    void OnStatModifiersUpdated();
    void OnSprintUpdated();
    void OnRep_StatModifiers();
    void OnRep_MaxStamina();
    void OnRep_IsSprinting();
    void OnRep_IsAiming();
    void OnRep_GhostMode();
    void OnRep_CurrentStamina();
    void OnRep_CurrentHealth();
    void OnLevelVolumeExit(class AAbioticLevelStreamingVolume* Volume);
    void OnLevelVolumeEnter(class AAbioticLevelStreamingVolume* Volume);
    void OnBaseChange(const class UPrimitiveComponent* NewBase);
    void OnAimUpdated();
    void NearbyCharacterTagsUpdated();
    bool IsSprinting();
    bool IsLocalAbioticCharacter();
    bool IsAlive();
    bool IsAiming();
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck);
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    void GhostModeChanged(bool IsGhost);
    float GetTotalHealth();
    float GetStatModifierValue(float BaseValue, FStatModifierRowHandle Modifier);
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);
    void GetNPCAwarenessData(TMap<AActor*, float>& LastSeenPotential, TMap<AActor*, float>& ListOfPerceptionTargets, TMap<AActor*, float>& AttackerList);
    float GetMaxTotalHealth();
    float GetMaxLimbHealth(EBodyLimbs Limb);
    void GetMaxHealthMap(TMap<EBodyLimbs, float>& MaxHealthMap);
    float GetLimbPercentage(EBodyLimbs Limb);
    float GetLimbHealth(EBodyLimbs Limb);
    FVector GetJetpackVelocity(const FVector& InitialVelocity, const FVector& FallingVelocity, const float JetpackStartTime, const float DeltaTime);
    class UInputComponent* GetInputComponent();
    void GetCurrentHealthMap(TMap<EBodyLimbs, float>& CurrentHealthMap);
    bool DoesNearbyCharacterMatchTagQuery(FGameplayTagQuery TagQuery);
    bool DoesNearbyCharacterHaveTag(FGameplayTag Tag);
    void ClearCheatStatModifiers();
    void CheckForStaminaEvents();
    bool CanLaunchOutOfWater();
    void Aim(bool bClientSimulation);
    void AddNearbyCharacter(class AAbioticCharacter* Character, class UPrimitiveComponent* OverlapPrimitive);
    void AddCheatStatModifier(FStatModifierRowHandle Modifier, int32 Value);
}; // Size: 0x920

class AAbioticGameMode : public AGameMode
{

    bool SaveModeratorList(const TArray<FString>& InModeratorList);
    bool SaveBannedPlayerList(const TArray<FString>& InBannedPlayerList);
    void OnPlayerBanned(class APlayerController* BannedPlayer, const FText& BanReason);
    bool LoadModeratorList(TArray<FString>& OutModeratorList);
    bool LoadBannedPlayerList(TArray<FString>& OutBannedPlayerList);
}; // Size: 0x378

class AAbioticGameSession : public AGameSession
{
}; // Size: 0x2C8

class AAbioticGameState : public AGameState
{
    int32 SavedElapsedMinutes;                                                        // 0x0340 (size: 0x4)
    TMap<class AActor*, class FString> TeleporterLocationMap;                         // 0x0348 (size: 0x50)
    TMap<class AActor*, class bool> TeleporterPoweredMap;                             // 0x0398 (size: 0x50)
    TMap<class FString, class bool> TeleporterLocationActiveMap;                      // 0x03E8 (size: 0x50)
    class ULevelManagerComponent* LevelManager;                                       // 0x0438 (size: 0x8)
    TArray<FWorldFlagRowHandle> WorldFlags;                                           // 0x0440 (size: 0x10)
    FString SessionShortCode;                                                         // 0x0450 (size: 0x10)
    FUniqueNetIdRepl SessionId;                                                       // 0x0460 (size: 0x30)
    TArray<FString> ServerEntitlements;                                               // 0x0490 (size: 0x10)
    bool bHomeWorldsEnabled;                                                          // 0x04A0 (size: 0x1)
    FAbioticGameStateOnServerEntitlementsUpdated OnServerEntitlementsUpdated;         // 0x04A8 (size: 0x10)
    void ServerEntitlementsUpdated();

    void SetTeleporterPowered(class AActor* Teleporter, bool bIsPowered);
    void SetTeleporterLocation(class AActor* Teleporter, FString LocationName);
    void SetServerEntitlements(const TMap<class FString, class FUserEntitlements>& InServerEntitlements);
    void RemoveTeleporterLocation(class AActor* Teleporter);
    void OnRep_WorldFlags();
    void OnRep_SessionId();
    void OnRep_ServerEntitlements();
    bool HasServerGameEntitlement(FGameEntitlementRowHandle Entitlement);
    int32 GetElapsedMinutes();
    bool DoesLocationHaveMatchingTeleporter(FString LocationName, class AActor* Teleporter);
}; // Size: 0x4B8

class AAbioticLevelStreamingVolume : public AVolume
{
    TSoftObjectPtr<UWorld> LevelToLoad;                                               // 0x02D0 (size: 0x28)
    TSoftObjectPtr<UWorld> RequiredParentLevel;                                       // 0x02F8 (size: 0x28)
    FGameEntitlementRowHandle RequiredEntitlement;                                    // 0x0320 (size: 0x20)
    bool bDisabledForDemo;                                                            // 0x0340 (size: 0x1)
    float X;                                                                          // 0x0344 (size: 0x4)
    float Y;                                                                          // 0x0348 (size: 0x4)
    float Z;                                                                          // 0x034C (size: 0x4)

}; // Size: 0x350

class AAbioticPlayerController : public APlayerController
{
    class AAbioticCharacter* PlayerCharacter;                                         // 0x0860 (size: 0x8)
    TSubclassOf<class UAbioticTargetingManager> TargetingManagerClass;                // 0x0868 (size: 0x8)
    class UAbioticTargetingManager* TargetingManager;                                 // 0x0870 (size: 0x8)
    bool bAllowKeyUINavigation;                                                       // 0x0878 (size: 0x1)
    bool bAllowTabUINavigation;                                                       // 0x0879 (size: 0x1)
    bool bAllowAnalogUINavigation;                                                    // 0x087A (size: 0x1)

    void ToggleLoadingScreen(bool bShow);
    void SetUseSoftwareCursor(bool bEnabled);
    void ServerPlayerVoiceIsBlocked(class AAbioticPlayerState* OtherPlayer);
    void Request_ExecuteGameCommand(FGameCommandRowHandle RowHandle, FString FirstParam, FString SecondParam);
    void OnDetectAnyInput(const FKey& InKey);
    void BumpCursor();
}; // Size: 0x880

class AAbioticPlayerState : public APlayerState
{
    bool bIsPlayerMuted;                                                              // 0x0350 (size: 0x1)
    TEnumAsByte<EAbioticPlatform> PlayerPlatform;                                     // 0x0352 (size: 0x1)
    TArray<class APlayerState*> VoiceBlockedPlayers;                                  // 0x0358 (size: 0x10)

    void OnRep_PlayerPlatform();
    void OnBlockedPlayerConnected();
}; // Size: 0x368

class AAbioticSpectatorPawn : public ASpectatorPawn
{
    float SensitivityX;                                                               // 0x0348 (size: 0x4)
    float SensitivityY;                                                               // 0x034C (size: 0x4)

}; // Size: 0x350

class AAbioticWheeledVehiclePawn : public AWheeledVehiclePawn
{
    bool bUseClientAuth;                                                              // 0x0330 (size: 0x1)
    float ClientAuthFrequency;                                                        // 0x0334 (size: 0x4)

    void ReplicatePhysicsToServer(FRepMovement Physics);
    void CheckClientVehiclePosition();
}; // Size: 0x340

class AAbioticWorldSettings : public AWorldSettings
{
    TArray<FSandboxData> SandboxValues;                                               // 0x04B8 (size: 0x10)
    EModifiedRuleset ModifiedRuleset;                                                 // 0x04C8 (size: 0x1)
    TMap<class FName, class bool> SandboxValues_Bool;                                 // 0x04D0 (size: 0x50)
    TMap<FName, float> SandboxValues_Float;                                           // 0x0520 (size: 0x50)
    TMap<FName, int32> SandboxValues_Int;                                             // 0x0570 (size: 0x50)

    void OnRep_SandboxValues();
    TMap<class FName, class FString> GetSandboxValues();
}; // Size: 0x5C0

class ABenchUpgradeActor : public AActor
{
}; // Size: 0x298

class ABuffActor : public AActor
{
    FBuffDebuffRowHandle Buff;                                                        // 0x0298 (size: 0x20)
    bool bBuffPendingRemoval;                                                         // 0x02B8 (size: 0x1)

    void Server_OnBuffEndPlay(FBuffDebuffRowHandle BuffRow);
    void Server_OnBuffBeginPlay(FBuffDebuffRowHandle BuffRow);
    void Local_OnBuffEndPlay(FBuffDebuffRowHandle BuffRow);
    void Local_OnBuffBeginPlay(FBuffDebuffRowHandle BuffRow);
    bool DoesSameBuffActorExist();
    void Broadcast_OnBuffEndPlay(FBuffDebuffRowHandle BuffRow);
    void Broadcast_OnBuffBeginPlay(FBuffDebuffRowHandle BuffRow);
}; // Size: 0x2C0

class AWeatherDirector : public AActor
{
}; // Size: 0x298

class ICraftedTeleporter : public IInterface
{

    void UpdateTeleporterActiveState(bool NewActiveState);
}; // Size: 0x28

class IThermal : public IInterface
{

    void ThermalEmitterActiveUpdated(bool bActive);
    void GetThermalOverlapPrimitives(TArray<class UPrimitiveComponent*>& OutPrimitives);
    float GetAmbientTemperature();
    void ApplyNewTemperature(float NewTemperature);
}; // Size: 0x28

class UABFCombinedSaveSubsystem : public UEngineSubsystem
{
    TMap<class FString, class FWorldCache> WorldNameToCacheMap;                       // 0x0030 (size: 0x50)

}; // Size: 0xA8

class UABFMeshMergeManager : public UEngineSubsystem
{
    TMap<class FName, class FGeneratedMeshCacheEntry> GeneratedMeshes;                // 0x0030 (size: 0x50)

    class USkeletalMesh* GenerateCombinedMesh(class AActor* ParentActor, class USkeletalMeshComponent* ParentComponent, TArray<class USkeletalMeshComponent*> ComponentsToMerge, FName OverrideCacheName);
}; // Size: 0xD0

class UAIDirectorSubsystem : public UWorldSubsystem
{
    TMap<class TSoftObjectPtr<AActor>, class FAISpawnerData> AISpawnMap;              // 0x0030 (size: 0x50)
    FAIDirectorSubsystemOnSpawnerCooldownUpdated OnSpawnerCooldownUpdated;            // 0x0080 (size: 0x10)
    void SpawnerCooldownUpdated(TSoftObjectPtr<AActor> Spawner);

    void UpdateCurrentDay(int32 Day);
    void SetCooldownForSpawner(const class UObject* WorldContextObject, class AActor* Spawner, float TimeRemaining, int32 InCurrentDay, bool bOnlySpawnOnce);
    void RemoveVignetteAISpawnData(const TArray<FString>& VignetteNames);
    bool RefreshCooldownOnOwningSpawner(const class UObject* WorldContextObject, class AAbioticCharacter* AI, TArray<class AActor*> NearbyPlayers);
    bool NPCSpawnDebug();
    int32 GetSpawnedAIFromSpawnerPtr(TSoftObjectPtr<AActor> Spawner, TArray<class AAbioticCharacter*>& SpawnedAI);
    int32 GetSpawnedAIFromSpawner(class AActor* Spawner, TArray<class AAbioticCharacter*>& SpawnedAI);
    TArray<class AActor*> GetNearbyPlayersOnDeathFromSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    float GetLastTotalCooldownFromSpawner(class AActor* Spawner);
    int32 GetLastCooldownDayForSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    float GetCurrentCooldownRemainingFromSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    int32 GetCooldownDaysRemainingFromSpawner(const class UObject* WorldContextObject, class AActor* Spawner, int32 DaysRequired);
    bool FastNPCDormancy();
    bool DoesSpawnerDataExist(class AActor* Spawner);
    void ClearNearbyPlayersOnSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    bool ClearCooldownOnOwningSpawner(const class UObject* WorldContextObject, class AAbioticCharacter* AI);
    bool ClearCooldownOnAllCachedSpawns();
    void AddSpawnedAIToSpawnList(class AActor* Spawner, class AAbioticCharacter* AI);
}; // Size: 0x98

class UAIFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetValueAsVector(class UBlackboardComponent* Blackboard, FBlackboardName Key, FVector VectorValue);
    void SetValueAsString(class UBlackboardComponent* Blackboard, FBlackboardName Key, FString StringValue);
    void SetValueAsRotator(class UBlackboardComponent* Blackboard, FBlackboardName Key, FRotator VectorValue);
    void SetValueAsObject(class UBlackboardComponent* Blackboard, FBlackboardName Key, class UObject* ObjectValue);
    void SetValueAsName(class UBlackboardComponent* Blackboard, FBlackboardName Key, FName NameValue);
    void SetValueAsInt(class UBlackboardComponent* Blackboard, FBlackboardName Key, int32 IntValue);
    void SetValueAsFloat(class UBlackboardComponent* Blackboard, FBlackboardName Key, float FloatValue);
    void SetValueAsEnum(class UBlackboardComponent* Blackboard, FBlackboardName Key, uint8 EnumValue);
    void SetValueAsClass(class UBlackboardComponent* Blackboard, FBlackboardName Key, UClass* ClassValue);
    void SetValueAsBool(class UBlackboardComponent* Blackboard, FBlackboardName Key, bool BoolValue);
    FVector GetValueAsVector(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    FString GetValueAsString(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    FRotator GetValueAsRotator(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    class UObject* GetValueAsObject(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    FName GetValueAsName(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    int32 GetValueAsInt(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    float GetValueAsFloat(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    uint8 GetValueAsEnum(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    UClass* GetValueAsClass(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    bool GetValueAsBool(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
}; // Size: 0x28

class UAbioticAutomationLibrary : public UBlueprintFunctionLibrary
{

    void SimulateUIMouseClick();
    void SetMousePositionRelative(float OffsetX, float OffsetY);
    void SetMousePosition(float X, float Y);
    void SetAxisByRow(const FKeybindSettingRowHandle KeybindRow, float Value, int32 MappingIndex);
    void SetAxisByName(const FName AxisName, float Value, int32 MappingIndex);
    void ReleaseActionByRow(const FKeybindSettingRowHandle KeybindRow, int32 MappingIndex);
    void ReleaseActionByName(const FName ActionName, int32 MappingIndex);
    void PressActionByRow(const FKeybindSettingRowHandle KeybindRow, int32 MappingIndex);
    void PressActionByName(const FName ActionName, int32 MappingIndex);
}; // Size: 0x28

class UAbioticBaseObject : public UObject
{
}; // Size: 0x28

class UAbioticCharacterAnimInstance : public UAnimInstance
{
    bool IsFrozen;                                                                    // 0x0368 (size: 0x1)
    bool bIsDead;                                                                     // 0x0369 (size: 0x1)
    bool bIsRagdolling;                                                               // 0x036A (size: 0x1)
    bool bHasBeenRagdolling;                                                          // 0x036B (size: 0x1)

}; // Size: 0x370

class UAbioticCharacterMovementComponent : public UCharacterMovementComponent
{
    uint8 bWantsToSprint;                                                             // 0x0F8C (size: 0x1)
    uint8 bWantsToAim;                                                                // 0x0F8C (size: 0x1)
    bool bIsFrozen;                                                                   // 0x0F8D (size: 0x1)
    float MaxTetherDistance;                                                          // 0x0F90 (size: 0x4)
    float TetherDistanceToAdjustMovement;                                             // 0x0F94 (size: 0x4)
    float JetpackAirControlMultiplier;                                                // 0x0F98 (size: 0x4)
    float ExternalForceMulitplier;                                                    // 0x0F9C (size: 0x4)
    float BrakingDecelerationFrozen;                                                  // 0x0FA0 (size: 0x4)
    float BrakingFrictionFactorFrozen;                                                // 0x0FA4 (size: 0x4)
    float GroundFrictionFrozen;                                                       // 0x0FA8 (size: 0x4)
    bool bCanEverSprint;                                                              // 0x0FB4 (size: 0x1)
    bool bCanEverAim;                                                                 // 0x0FB5 (size: 0x1)
    bool bAllowMovementDuringRootMotion;                                              // 0x0FB6 (size: 0x1)

    void UpdateGravityScaleModifier(float NewScale);
    void UpdateFrictionScaleModifier(float NewScale);
    void RevertToFallingSwimming();
    bool IsSprinting();
    bool IsAiming();
    float GetWaddingImmersionDepth();
    float GetScaledGravity();
    float GetScaledFriction();
    float GetImmersionDepth();
}; // Size: 0xFC0

class UAbioticCheatManager : public UCheatManager
{

    void InvalidateCombinedWorldCache(FString& WorldName);
}; // Size: 0x88

class UAbioticFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ValidateDamageResults(class UObject* WorldContextObject, TArray<FHitResult>& HitResults, TArray<FHitData>& HitData, TArray<class AActor*>& HitPawns, TEnumAsByte<ETraceTypeQuery> TraceChannel, TMap<class AActor*, class FHitResult>& OutHitActors);
    void UpdateWidgetInteractionKeyboardFocus(class UWidgetInteractionComponent* WidgetInteractionComponent);
    void SortSavesByDate(TMap<class UObject*, class FDateTime>& SaveMap, bool bSortByNewest);
    void SortLocationsByDistanceToLocation(TArray<FVector>& Locations, const FVector& Target);
    void SortLocationsByDistanceToClosestLocation(TArray<FVector>& Locations, const TArray<FVector>& Targets);
    void SortLocationsByDistanceToClosestActor(TArray<FVector>& Locations, const TArray<class AActor*>& Actors);
    TArray<FSortedItemResult> SortInventoryArray(TArray<FSortedItem> InventoryArray, TArray<int32>& OutIndexesToClear);
    bool ShouldUseRCON();
    void SetPrimitiveCanEverAffectNavigation(class UPrimitiveComponent* Primitive, bool bCanEverAffectNavigation);
    void SetMouseSmoothing(bool bEnabled);
    void SetActorCanEverAffectNavigation(class AActor* Actor, bool bCanEverAffectNavigation);
    FString SanitizeSaveFolderName(FString FolderName);
    void ProcessDamageResults(TArray<FHitResult>& HitResults, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitData>& OutHitData, TArray<class AActor*>& OutHitPawns);
    void OpenFolderDirectory(FString FolderPath);
    void ModifyPhysicsLocks(class UPrimitiveComponent* Primitive, bool bLockXRotation, bool bLockYRotation, bool bLockZRotation);
    void MarkObjectDirty(class UObject* Object);
    FSoftObjectPath MakeSavedObjectPath(const class AActor* Actor);
    bool LessThan_String(FString LHS, FString RHS);
    bool KeyIsSpaceBar(const FKey& Key);
    bool KeyIsLeftMouse(const FKey& Key);
    bool KeyIsFaceButtonTop(const FKey& Key);
    bool KeyIsEnter(const FKey& Key);
    bool IsWorldTearingDown(const class UObject* WorldContextObject);
    void IsWindowsTimezoneAutomatic(bool& bTimezoneAutomatic, bool& bTimeAutomatic);
    bool IsUsingAnimBlueprint(const class USkeletalMeshComponent* SkeletalMeshComponent);
    bool IsTRMode();
    bool IsSubscribedApp(int32 AppID);
    bool IsSteamSocketsInitialized();
    bool IsSteamdeck();
    bool IsReleaseMode();
    bool IsReleaseGroupActive(EReleaseGroup ReleaseGroup);
    bool IsPIERunning();
    bool IsFilmMode();
    bool IsFeatureEnabled(FName FeatureName);
    bool IsEditor();
    bool IsDemoMode();
    bool IsConsoleBuild();
    bool IsBuildType(TEnumAsByte<EGameSettingPlatformType> BuildType);
    void InitSteamDeck();
    bool HasValidOnlineSubsystem();
    bool HasActorRecentlyLoaded(class UObject* WorldContextObject, class AActor* Actor, float Tolerance);
    bool GreaterThan_String(FString LHS, FString RHS);
    TArray<FString> GetWorldSaveFileList(FString WorldFolder);
    FString GetWorldSandboxSettingsFilePath(FString WorldSaveName);
    int32 GetWorldCountLimit();
    TSoftObjectPtr<UWorld> GetWorldAssetFromLevelStreaming(class ULevelStreaming* LevelStreaming);
    class UDialogueVoice* GetVoiceFromDialogue(const class UDialogueWave* DialogueWave);
    FString GetVideoSetting_String(FVideoSettingRowHandle VideoSetting);
    int32 GetVideoSetting_Int(FVideoSettingRowHandle VideoSetting);
    float GetVideoSetting_Float(FVideoSettingRowHandle VideoSetting);
    bool GetVideoSetting_Bool(FVideoSettingRowHandle VideoSetting);
    FString GetSystemLanguage();
    bool GetSubtitlesFromDialogue(const class UDialogueWave* DialogueWave, bool bUseSourceText, TArray<FString>& OutSubtitleLines, TArray<float>& OutSubtitleTimes);
    FString GetSteamIDFromPlayerState(const class APlayerState* PlayerState);
    FString GetSourceTextFromDialogueWave(const class UDialogueWave* DialogueWave);
    class USoundWave* GetSoundWaveFromDialogue(const class UDialogueWave* DialogueWave);
    int32 GetServerMaxPlayers();
    FString GetSaveSubfolderName();
    void GetSavedObjectPath(const FSoftObjectPath& InSavePath, FSoftObjectPath& OutSavePath);
    int32 GetRCONPort();
    FString GetPlayerSaveID(const class APlayerState* PlayerState);
    TSoftObjectPtr<UWorld> GetPersistentWorld(const class UObject* WorldContextObject, bool bRemovePIEPrefix);
    class UObject* GetPersistentLevel(const class UObject* WorldContextObject);
    bool GetPaintedMaterials(FPaintedDeployableRowHandle PaintedRow, EPaintColor PaintColor, TArray<TSoftObjectPtr<UMaterialInterface>>& OutMaterials);
    int32 GetNumShaderCompilesRemaining();
    FText GetLocalizedTextFromDialogueWave(const class UDialogueWave* DialogueWave);
    FString GetLevelNameFromWorldAsset(const TSoftObjectPtr<UWorld>& WorldAsset);
    class UObject* GetLevelFromStreamingLevel(class ULevelStreaming* LevelStreaming);
    float GetHitPenetration(const FHitResult& Hit);
    void GetGameplayTagsFromQuery(const FGameplayTagQuery& Query, TArray<FGameplayTag>& OutTags);
    FString GetGameplaySetting_String(FGameplaySettingRowHandle VideoSetting);
    int32 GetGameplaySetting_Int(FGameplaySettingRowHandle GameplaySetting);
    float GetGameplaySetting_Float(FGameplaySettingRowHandle GameplaySetting);
    bool GetGameplaySetting_Bool(FGameplaySettingRowHandle GameplaySetting);
    TEnumAsByte<EABFGamepadType> GetGamepadIdentifierEnum();
    FString GetGamepadIdentifier();
    TEnumAsByte<EABFGamepadType> GetGamepadEnumID(class UObject* WorldContextObject);
    class UWidget* GetFocusedWidget();
    TArray<FDamageDefinitionRowHandle> GetDamageDefinitionsFromQuery(const FGameplayTagQuery& TagQuery);
    void GetCurrectFacilityDate(const int32 DaysPassed, EDayOfTheWeek& CurrentWeekday, int32& CurrentDay, EMonthOfTheYear& CurrentMonth, int32& CurrentYear);
    FString GetControlSetting_String(FControlSettingRowHandle VideoSetting);
    int32 GetControlSetting_Int(FControlSettingRowHandle ControlSetting);
    float GetControlSetting_Float(FControlSettingRowHandle ControlSetting);
    bool GetControlSetting_Bool(FControlSettingRowHandle ControlSetting);
    TArray<FName> GetCompendiumRecipesToUnlock(const TArray<FName>& UnlockedExplorationArray, const TArray<FName>& UnlockedEmailArray, const TArray<FName> UnlockedNPCArray, const TArray<FName> UnlockedKillArray, const TSet<FName>& AlreadyUnlockedRecipes, TSet<FName>& OutActiveKillRequirements);
    void GetCompendiumKillCount(const TArray<FCompendiumKillCount>& KillCounts, const FCompendiumEntryRowHandle CompendiumRow, int32& OutCount, int32& OutRequiredCount, bool& bOutCompleted);
    FString GetAudioSetting_String(FAudioSettingRowHandle VideoSetting);
    int32 GetAudioSetting_Int(FAudioSettingRowHandle AudioSetting);
    float GetAudioSetting_Float(FAudioSettingRowHandle AudioSetting);
    bool GetAudioSetting_Bool(FAudioSettingRowHandle AudioSetting);
    void GetAllLevelStreaming(class UObject* WorldContextObject, TArray<class ULevelStreaming*>& OutLevelStreaming);
    void GetAllActorsOfClassFromLevel(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const class UObject* LevelObject, TArray<class AActor*>& OutActors);
    FString GetAdminIniPath();
    FString GetAccessibilitySetting_String(FAccessibilitySettingRowHandle VideoSetting);
    int32 GetAccessibilitySetting_Int(FAccessibilitySettingRowHandle AccessibilitySetting);
    float GetAccessibilitySetting_Float(FAccessibilitySettingRowHandle AccessibilitySetting);
    bool GetAccessibilitySetting_Bool(FAccessibilitySettingRowHandle AccessibilitySetting);
    class AAbioticCharacter* GetAbioticPlayerCharacter(const class UObject* WorldContextObject, int32 PlayerIndex);
    TArray<FString> FuzzySearchV2(const TArray<FString>& NameArray, FString SearchInput);
    TArray<FName> FuzzySearch(const TArray<FName>& NameArray, FString SearchInput);
    void ForceDestroyComponent(class UActorComponent* Component);
    void FilterMatchingTags(const FGameplayTagContainer& InTags, const FGameplayTagContainer& FilterTags, FGameplayTagContainer& OutTags);
    void EnableLumenOptimizations(const class UObject* WorldContextObject);
    TArray<int32> DistributeValueRandomlyToArray(int32 ValueToBeDistributed, int32 ArraySize);
    void DeleteDirectory(FString WorldName);
    int32 DayOfTheWeekToFlag(const EDayOfTheWeek DayOfWeek);
    void CopyToClipboard(FString Text);
    FString ConvertStringToSearchable(FString InString);
    FString ConvertStringToSave(FString String);
    FSoftObjectPath ConvertSoftObjectToSave(const TSoftObjectPtr<UObject> SoftObject);
    float CharacterItemWeightModifiers(class AAbioticCharacter* Character, float InItemWeight, float ItemRadioactivity, const FGameplayTagContainer& ItemTags);
    bool CanReleaseGroupBeStripped(EReleaseGroup ReleaseGroup);
    bool CalculateFishingReward(FFishingZoneRowHandle FishingZone, int32 TimeOfDayHour, const FGameplayTagContainer& RodTags, const FGameplayTagContainer& BaitTags, const FGameplayTagContainer& PlayerTags, const FGameplayTagContainer& WeatherTags, bool bHotspot, bool bNoRares, const TArray<FWorldFlagRowHandle>& WorldFlags, bool bDebug, bool& bWasJunkCatch, FDataTableRowHandle& OutJunkSalvage, FFishRowHandle& OutFishReward);
    FVector AdjustAimForAimCorrection(class UObject* WorldContextObject, const FVector& AimStartLocation, const FVector& AimVector, float MaxAdjustmentAngle, int32 PlayerIndex);
    void AddVideoSettingCallback_String(FVideoSettingRowHandle VideoSetting, FAddVideoSettingCallback_StringChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddVideoSettingCallback_Int(FVideoSettingRowHandle VideoSetting, FAddVideoSettingCallback_IntChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddVideoSettingCallback_Float(FVideoSettingRowHandle VideoSetting, FAddVideoSettingCallback_FloatChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddVideoSettingCallback_Bool(FVideoSettingRowHandle VideoSetting, FAddVideoSettingCallback_BoolChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddGameplaySettingCallback_String(FGameplaySettingRowHandle GameplaySetting, FAddGameplaySettingCallback_StringChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddGameplaySettingCallback_Int(FGameplaySettingRowHandle GameplaySetting, FAddGameplaySettingCallback_IntChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddGameplaySettingCallback_Float(FGameplaySettingRowHandle GameplaySetting, FAddGameplaySettingCallback_FloatChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddGameplaySettingCallback_Bool(FGameplaySettingRowHandle GameplaySetting, FAddGameplaySettingCallback_BoolChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddControlSettingCallback_String(FControlSettingRowHandle ControlSetting, FAddControlSettingCallback_StringChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddControlSettingCallback_Int(FControlSettingRowHandle ControlSetting, FAddControlSettingCallback_IntChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddControlSettingCallback_Float(FControlSettingRowHandle ControlSetting, FAddControlSettingCallback_FloatChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddControlSettingCallback_Bool(FControlSettingRowHandle ControlSetting, FAddControlSettingCallback_BoolChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddCompendiumKill(TArray<FCompendiumKillCount>& KillCounts, const FCompendiumEntryRowHandle CompendiumRow);
    void AddAudioSettingCallback_String(FAudioSettingRowHandle AudioSetting, FAddAudioSettingCallback_StringChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddAudioSettingCallback_Int(FAudioSettingRowHandle AudioSetting, FAddAudioSettingCallback_IntChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddAudioSettingCallback_Float(FAudioSettingRowHandle AudioSetting, FAddAudioSettingCallback_FloatChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddAudioSettingCallback_Bool(FAudioSettingRowHandle AudioSetting, FAddAudioSettingCallback_BoolChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddAccessibilitySettingCallback_String(FAccessibilitySettingRowHandle AccessibilitySetting, FAddAccessibilitySettingCallback_StringChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddAccessibilitySettingCallback_Int(FAccessibilitySettingRowHandle AccessibilitySetting, FAddAccessibilitySettingCallback_IntChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddAccessibilitySettingCallback_Float(FAccessibilitySettingRowHandle AccessibilitySetting, FAddAccessibilitySettingCallback_FloatChangedCallback ChangedCallback, bool CallbackImmediately);
    void AddAccessibilitySettingCallback_Bool(FAccessibilitySettingRowHandle AccessibilitySetting, FAddAccessibilitySettingCallback_BoolChangedCallback ChangedCallback, bool CallbackImmediately);
    void AbioticLog(FString LogMessage, EBPLogVerbosity LogVerbosity);
}; // Size: 0x28

class UAbioticGameEngine : public UGameEngine
{
}; // Size: 0x10F8

class UAbioticGameInstance : public UAdvancedFriendsGameInstance
{
    FString PlayerVersionString;                                                      // 0x0240 (size: 0x10)
    FString LastErrorMessage;                                                         // 0x0250 (size: 0x10)
    FString CurrentSessionPassword;                                                   // 0x0260 (size: 0x10)
    FString CurrentAdminPassword;                                                     // 0x0270 (size: 0x10)
    FString PendingJoinPassword;                                                      // 0x0280 (size: 0x10)
    TArray<FString> CurrentBannedPlayers;                                             // 0x0290 (size: 0x10)
    uint8 bShowedPrivilegeLimitations;                                                // 0x02A8 (size: 0x1)
    uint8 bCanPlayOnline;                                                             // 0x02A8 (size: 0x1)
    uint8 bCanCrossplay;                                                              // 0x02A8 (size: 0x1)
    uint8 bCanCommunicate;                                                            // 0x02A8 (size: 0x1)
    uint8 bIsSoloOrLanPlayOnly;                                                       // 0x02A8 (size: 0x1)
    uint8 bNeedsPrivilgesCheck;                                                       // 0x02A8 (size: 0x1)
    FString ActiveWorldSaveName;                                                      // 0x02B0 (size: 0x10)
    TArray<class UAbioticSave*> PendingWorldSaves;                                    // 0x02C0 (size: 0x10)
    TArray<class UAbioticSave*> PendingPlayerSaves;                                   // 0x02D0 (size: 0x10)
    bool bIsSaving;                                                                   // 0x02E0 (size: 0x1)
    TMap<class FString, class UAbioticSave*> PlayerSaveMap;                           // 0x02E8 (size: 0x50)
    TMap<class FString, class UAbioticSave*> WorldSaveMap;                            // 0x0338 (size: 0x50)
    TSubclassOf<class UAbioticSave> WorldSaveClass;                                   // 0x0388 (size: 0x8)
    TSubclassOf<class UAbioticSave> MetaDataSaveClass;                                // 0x0390 (size: 0x8)
    TSubclassOf<class UAbioticSave> PlayerSaveClass;                                  // 0x0398 (size: 0x8)

    void ToggleStatUnit(bool bEnabled);
    void ToggleStatFPS(bool bEnabled);
    void ShowStorePurchaseUI(FString AbioticId);
    void SetUnfocusedVolumeMultiplier(float NewVolumeMultiplier);
    void OnSessionInviteAcceptedWhileOffline();
    bool OnRemoteConsoleCommand(FString Command, const TArray<FString>& Arguments);
    void OnOnlineStatusChanged(bool bIsOnline);
    void OnOnlinePrivilegesUpdated();
    void OnOnlinePrivilegesLimited();
    void OnOnlineLoginComplete(bool bWasSuccessful, FString ErrorMessage);
    void OnlineLogin();
    void OfflineLoginComplete();
    void MappingsChanged(class APlayerController* Player);
    bool IsLoggedIn();
    bool HasPendingSessionInvites();
    bool HasPendingSaves();
    bool HasGameEntitlement(FGameEntitlementRowHandle Entitlement);
    class UAbioticSave* GetWorldSave(FString LevelSuffix, bool& bNewSave);
    TArray<FString> GetUnlockedEntitlements();
    FString GetSessionShortCode();
    int32 GetSessionMaxPlayers();
    class UAbioticSave* GetPlayerSave(FString PlayerId, bool bCreateIfNotFound);
    class UAbioticSave* GetMetaDataSave(bool& bNewSave);
    TArray<FSessionPropertyKeyPair> GetBaseSessionSettings();
    FString GenerateSessionShortCode();
    FString FixupPlayerSuffix(FString PlayerSuffix);
    FString FixupLevelSuffix(FString LevelSuffix);
    class APlayerState* FindPlayerStateForUniqueId(FString InUniqueID);
    bool DoesWorldSaveExist(FString LevelSuffix);
    bool DoesPlayerSaveExist(FString PlayerId);
    bool DoesActiveWorldExist();
    class UAbioticSave* CreatePlayerResetSave(FString PlayerId);
    void ClientWasKicked(const FText& KickReason);
    void ClearPendingSessionInvites();
    void CheckForPendingSessionInvites();
    void AddWorldSaveToQueue(class UAbioticSave* SaveGame);
    void AddPlayerSaveToQueue(class UAbioticSave* SaveGame);
}; // Size: 0x410

class UAbioticGameUserSettings : public UGameUserSettings
{
    TEnumAsByte<EAbioticCrossplaySetting::Type> CrossplaySetting;                     // 0x0150 (size: 0x1)
    bool bUseVRR;                                                                     // 0x0151 (size: 0x1)
    uint8 CustomVersion;                                                              // 0x0152 (size: 0x1)
    TArray<FAbioticBlockedPlayer> BlockedPlayers;                                     // 0x0158 (size: 0x10)
    TArray<FAbioticBlockedPlayer> PlatformBlockedPlayers;                             // 0x0168 (size: 0x10)
    TArray<FAbioticBlockedPlayer> MutedPlayers;                                       // 0x0178 (size: 0x10)

    void SetVRRSetting(bool NewUseVRR, bool bFromCvar);
    void SetCrossplaySetting(TEnumAsByte<EAbioticCrossplaySetting::Type> InCrossplay, bool bFromCvar);
    void RemoveMutedPlayer(const FAbioticBlockedPlayer& InMutedPlayer);
    void RemoveBlockedPlayer(const FAbioticBlockedPlayer& InBlockedPlayer);
    TEnumAsByte<EAbioticCrossplaySetting::Type> GetCrossplaySetting();
    void AddMutedPlayer(const FAbioticBlockedPlayer& InMutedPlayer);
    void AddBlockedPlayer(const FAbioticBlockedPlayer& InBlockedPlayer);
}; // Size: 0x188

class UAbioticGameViewportClient : public UGameViewportClient
{
    FAbioticGameViewportClientOnUsingGamepadChanged OnUsingGamepadChanged;            // 0x03B0 (size: 0x10)
    void OnUsingGamepadChanged(bool bUsingGamepad);
    FAbioticGameViewportClientOnInputKey OnInputKey;                                  // 0x03C0 (size: 0x10)
    void OnInputKey(const FKey& InKey);

}; // Size: 0x3E0

class UAbioticLocalPlayer : public ULocalPlayer
{
}; // Size: 0x2B0

class UAbioticMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
    FAbioticMultiLineEditableTextBoxOnCursorMoved OnCursorMoved;                      // 0x1088 (size: 0x10)
    void OnCaretMoved(int32 InLineIndex, int32 InOffset);

    void SetCursorPosition(const int32 LineIndex, const int32 LineOffset);
    void InsertTextAtCursor(FString InText);
    bool GetCursorPosition(int32& LineIndex, int32& LineOffset);
}; // Size: 0x10A0

class UAbioticPhysicalMaterial : public UPhysicalMaterial
{
    float DamageAmount;                                                               // 0x0098 (size: 0x4)
    TSubclassOf<class UDamageType> DamageType;                                        // 0x00A0 (size: 0x8)
    float DamageTickRate;                                                             // 0x00A8 (size: 0x4)

}; // Size: 0xB0

class UAbioticPlayerInputComponent : public UInputComponent
{
    FAbioticPlayerInputComponentOnMoveForwardGamepad OnMoveForwardGamepad;            // 0x0130 (size: 0x10)
    void OnMoveForwardGamepad(float Val);
    FAbioticPlayerInputComponentOnMoveRightGamepad OnMoveRightGamepad;                // 0x0140 (size: 0x10)
    void OnMoveRightGamepad(float Val);
    FAbioticPlayerInputComponentOnYawGamepad OnYawGamepad;                            // 0x0150 (size: 0x10)
    void OnYawGamepad(float Val);
    FAbioticPlayerInputComponentOnPitchGamepad OnPitchGamepad;                        // 0x0160 (size: 0x10)
    void OnPitchGamepad(float Val);
    FCachedInputData CachedPreviousFrame;                                             // 0x01D0 (size: 0x60)
    bool bGamepadActive;                                                              // 0x0230 (size: 0x1)
    float BaseYawRate;                                                                // 0x0234 (size: 0x4)
    float BasePitchRate;                                                              // 0x0238 (size: 0x4)
    float AccelerationThreshold;                                                      // 0x0268 (size: 0x4)
    class UCurveFloat* AccelerationCurve;                                             // 0x0270 (size: 0x8)
    float FrictionLeaveAdjustment;                                                    // 0x0278 (size: 0x4)
    class UCurveFloat* FrictionAngleCurve;                                            // 0x0280 (size: 0x8)
    class UCurveFloat* FrictionInputCurve;                                            // 0x0288 (size: 0x8)
    class UCurveFloat* AdhesionPowerCurve;                                            // 0x0290 (size: 0x8)
    class UCurveFloat* AdhesionMaxAngleCurve;                                         // 0x0298 (size: 0x8)
    float UserRadialCloseInputCancelDelay;                                            // 0x02A0 (size: 0x4)

    void SetGamepadActive(bool bActive);
    void ResumePostRadialInput();
    void RadialClosed();
    void OnRadialDeadzoneChanged(float NewValue);
    void OnMotionSensitivityYChanged(float NewValue);
    void OnMotionSensitivityXChanged(float NewValue);
    void OnLeftRadialDeadzoneChanged(float NewValue);
    void OnLeftAxialDeadzoneYChanged(float NewValue);
    void OnLeftAxialDeadzoneXChanged(float NewValue);
    void OnInvertYAxisChanged(bool NewValue);
    void OnGamepadYSensitivityChanged(float NewValue);
    void OnGamepadXSensitivityChanged(float NewValue);
    void OnGamepadRadialCloseCameraDelayChanged(float NewValue);
    void OnAxialDeadzoneYChanged(float NewValue);
    void OnAxialDeadzoneXChanged(float NewValue);
    void OnAimAssistMotionChanged(bool NewValue);
    void OnAimAssistFrictionChanged(bool NewValue);
    void OnAimAssistAdhesionChanged(bool NewValue);
}; // Size: 0x2A8

class UAbioticPlayerReportWidget : public UAbioticWidget
{

    void SubmitPlayerReport(FString Report, FUniqueNetIdRepl PlayerId);
}; // Size: 0x2E0

class UAbioticProjectileComponent : public UProjectileMovementComponent
{
    EProjectileHomingType HomingType;                                                 // 0x0258 (size: 0x1)
    bool UseHomingTargetBoundsCenter;                                                 // 0x0259 (size: 0x1)
    bool KeepVelocityMagnitude;                                                       // 0x025A (size: 0x1)
    bool bUseHomingTargetLocation;                                                    // 0x025B (size: 0x1)
    FVector HomingTargetLocation;                                                     // 0x0260 (size: 0x18)
    FAbioticProjectileComponentOnOverrideImpactHit OnOverrideImpactHit;               // 0x0278 (size: 0x10)
    bool OnOverrideImpactHit(const FHitResult& Hit);

    void SetImpactOverride(const FSetImpactOverrideNewOverride NewOverride);
}; // Size: 0x290

class UAbioticReplicationGraph : public UReplicationGraph
{
    TArray<class UClass*> AlwaysRelevantClasses;                                      // 0x0570 (size: 0x10)
    class UReplicationGraphNode_GridSpatialization2D* GridNode;                       // 0x0580 (size: 0x8)
    class UReplicationGraphNode_ActorList* AlwaysRelevantNode;                        // 0x0588 (size: 0x8)

}; // Size: 0x680

class UAbioticReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_AlwaysRelevant_ForConnection
{
}; // Size: 0x358

class UAbioticReplicationGraphNode_PlayerStateFrequencyLimiter : public UReplicationGraphNode
{
}; // Size: 0x78

class UAbioticReplicationGraphSettings : public UDeveloperSettingsBackedByCVars
{
    bool bDisableReplicationGraph;                                                    // 0x0038 (size: 0x1)
    FSoftClassPath DefaultReplicationGraphClass;                                      // 0x0040 (size: 0x20)
    bool bEnableFastSharedPath;                                                       // 0x0060 (size: 0x1)
    int32 TargetKBytesSecFastSharedPath;                                              // 0x0064 (size: 0x4)
    float FastSharedPathCullDistPct;                                                  // 0x0068 (size: 0x4)
    float DestructionInfoMaxDist;                                                     // 0x006C (size: 0x4)
    float SpatialGridCellSize;                                                        // 0x0070 (size: 0x4)
    float SpatialBiasX;                                                               // 0x0074 (size: 0x4)
    float SpatialBiasY;                                                               // 0x0078 (size: 0x4)
    bool bDisableSpatialRebuilds;                                                     // 0x007C (size: 0x1)
    int32 DynamicActorFrequencyBuckets;                                               // 0x0080 (size: 0x4)
    TArray<FRepGraphActorClassSettings> ClassSettings;                                // 0x0088 (size: 0x10)

}; // Size: 0x98

class UAbioticSave : public USaveGame
{
    FString SaveIdentifier;                                                           // 0x0028 (size: 0x10)
    int32 SaveVersion;                                                                // 0x0038 (size: 0x4)
    bool bHasBeenCompressed;                                                          // 0x003C (size: 0x1)
    TMap<FString, int32> PlayerMap;                                                   // 0x0040 (size: 0x50)
    TMap<FString, int32> LevelMap;                                                    // 0x0090 (size: 0x50)

    bool ApplyVersionUpgrade(int32 OldVersion, int32 NewVersion, FString Identifier);
    bool ApplyVersion2Upgrade();
}; // Size: 0xE0

class UAbioticSaveStatics : public UObject
{
}; // Size: 0x28

class UAbioticTargetingComponent : public UCapsuleComponent
{
    bool bDefaultEnabled;                                                             // 0x0550 (size: 0x1)
    bool bEnabled;                                                                    // 0x0551 (size: 0x1)
    bool bValidForAimAssist;                                                          // 0x0552 (size: 0x1)
    bool bValidForCrosshairAccuracy;                                                  // 0x0553 (size: 0x1)
    bool bIsInteractableType;                                                         // 0x0554 (size: 0x1)

    void SetEnabled(bool bNewState);
    bool IsValidForCrosshairAccuracy();
    bool IsEnabled();
    TArray<FVector> GetTargetingHotspots();
    int32 GetTargetingHotspotCount();
}; // Size: 0x560

class UAbioticTargetingComponent_Offsets : public UAbioticTargetingComponent
{
    TArray<FVector> Offsets;                                                          // 0x0558 (size: 0x10)

}; // Size: 0x570

class UAbioticTargetingComponent_Sockets : public UAbioticTargetingComponent
{
    TArray<FName> Sockets;                                                            // 0x0558 (size: 0x10)

}; // Size: 0x570

class UAbioticTargetingManager : public UObject
{
    TMap<TEnumAsByte<ETargetingCategory>, FScoringWeights> WeightsByCategory;         // 0x0028 (size: 0x50)
    float LOSTraceDistance;                                                           // 0x0078 (size: 0x4)
    FTraceTimeCache TraceCache;                                                       // 0x0080 (size: 0x50)
    TEnumAsByte<ECollisionChannel> LineOfSightCheckChannel;                           // 0x00D0 (size: 0x1)
    TEnumAsByte<ECollisionChannel> VisibilityChannel;                                 // 0x00F8 (size: 0x1)
    TMap<TEnumAsByte<ETargetingCategory>, FTargetingInfo> BestTargetByCategory;       // 0x01B8 (size: 0x50)
    int32 PreviousFrameInteractableIndex;                                             // 0x02A8 (size: 0x4)

    void OnAimAssistCorrectionChanged(bool NewValue);
    FTargetingInfo GetBestTarget(TEnumAsByte<ETargetingCategory> TargetingCategory);
}; // Size: 0x2E0

class UAbioticTargetingSubsystem : public UWorldSubsystem
{
    TArray<TWeakObjectPtr<UAbioticTargetingComponent>> Targetables;                   // 0x0030 (size: 0x10)
    TArray<TWeakObjectPtr<UAbioticTargetingComponent>> OnlyInteractables;             // 0x0040 (size: 0x10)

}; // Size: 0x50

class UAbioticUIActionRouter : public ULocalPlayerSubsystem
{
    FAbioticUIActionRouterOnInputTypeChanged OnInputTypeChanged;                      // 0x0040 (size: 0x10)
    void OnInputTypeChanged(bool bUsingGamepad);

    void ViewportOnInputTypeChanged(bool bUsingGamepad);
    void TriggerBindCaptureActive(bool bActive);
    bool IsUsingGamepad();
    FVector2D GetAnalogCursorPosition();
}; // Size: 0x60

class UAbioticVehicleMovementComponent : public UChaosWheeledVehicleMovementComponent
{
    bool bHasDriver;                                                                  // 0x0C60 (size: 0x1)

}; // Size: 0xC70

class UAbioticVisibilityWidget : public UBorder
{
    TMap<class FName, class bool> VisibilityControls;                                 // 0x0338 (size: 0x50)
    FName CVarVisibilityName;                                                         // 0x0388 (size: 0x8)
    ESlateVisibility VisibleType;                                                     // 0x0390 (size: 0x1)
    ESlateVisibility HiddenType;                                                      // 0x0391 (size: 0x1)

    void UpdateVisibility();
    TArray<FName> GetRegisteredPlatforms();
}; // Size: 0x3A0

class UAbioticWidget : public UUserWidget
{

    FEventReply ProcessKeybindOnKeyUp(const FKeyEvent& Key, bool& bHandled);
    FEventReply ProcessKeybindOnKeyDown(const FKeyEvent& Key, bool& bHandled);
}; // Size: 0x2E0

class UAccessibilitySettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FAccessibilitySettingRowHandle MakeLiteralAccessibilitySettingRowHandle(FAccessibilitySettingRowHandle RowHandle);
    FAccessibilitySettingRowHandle MakeAccessibilitySettingRowHandle(const FName RowName);
    void GetAllAccessibilitySettingRowNames(TArray<FName>& OutRowNames);
    void GetAllAccessibilitySettingRowHandles(TArray<FAccessibilitySettingRowHandle>& OutRowHandles);
    void GetAccessibilitySettingRow(FAccessibilitySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    bool Equal_AccessibilitySettingRowHandle(FAccessibilitySettingRowHandle A, FAccessibilitySettingRowHandle B);
    bool DoesAccessibilitySettingRowExist(FName RowName);
    FName BreakAccessibilitySettingRowHandle(const FAccessibilitySettingRowHandle RowHandle);
}; // Size: 0x28

class UAchievementHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FAchievementRowHandle MakeLiteralAchievementRowHandle(FAchievementRowHandle RowHandle);
    FAchievementRowHandle MakeAchievementRowHandle(const FName RowName);
    void GetAllAchievementRowNames(TArray<FName>& OutRowNames);
    void GetAllAchievementRowHandles(TArray<FAchievementRowHandle>& OutRowHandles);
    void GetAchievementRow(FAchievementRowHandle RowHandle, FAchievement& Data, ERowValid& ReturnPath);
    bool Equal_AchievementRowHandle(FAchievementRowHandle A, FAchievementRowHandle B);
    bool DoesAchievementRowExist(FName RowName);
    FName BreakAchievementRowHandle(const FAchievementRowHandle RowHandle);
}; // Size: 0x28

class UAchievementHandler : public UObject
{
    class UPlayerStatsSave* PlayerStatsSave;                                          // 0x0028 (size: 0x8)
    TMap<class FAchievementStatRowHandle, class FAchievementStatListener> StatListeners; // 0x0030 (size: 0x50)

}; // Size: 0x90

class UAchievementHandler_Editor : public UAchievementHandler
{
}; // Size: 0x90

class UAchievementHandler_GDK : public UAchievementHandler
{
}; // Size: 0x90

class UAchievementHandler_PS5 : public UAchievementHandler
{
}; // Size: 0x90

class UAchievementHandler_Steam : public UAchievementHandler
{
}; // Size: 0xB0

class UAchievementStatHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FAchievementStatRowHandle MakeLiteralAchievementStatRowHandle(FAchievementStatRowHandle RowHandle);
    FAchievementStatRowHandle MakeAchievementStatRowHandle(const FName RowName);
    void GetAllAchievementStatRowNames(TArray<FName>& OutRowNames);
    void GetAllAchievementStatRowHandles(TArray<FAchievementStatRowHandle>& OutRowHandles);
    void GetAchievementStatRow(FAchievementStatRowHandle RowHandle, FAchievementStat& Data, ERowValid& ReturnPath);
    bool Equal_AchievementStatRowHandle(FAchievementStatRowHandle A, FAchievementStatRowHandle B);
    bool DoesAchievementStatRowExist(FName RowName);
    FName BreakAchievementStatRowHandle(const FAchievementStatRowHandle RowHandle);
}; // Size: 0x28

class UAchievementsSubsystem : public UGameInstanceSubsystem
{
    FSoftClassPath AchievementHandlerClass;                                           // 0x0048 (size: 0x20)
    class UAchievementHandler* AchievementHandler;                                    // 0x0068 (size: 0x8)
    bool bHasLoadedStats;                                                             // 0x0070 (size: 0x1)
    bool bPendingStats;                                                               // 0x0071 (size: 0x1)
    FAchievementsSubsystemOnAchievementUnlocked OnAchievementUnlocked;                // 0x0078 (size: 0x10)
    void AchievementUnlocked(FAchievementRowHandle Achievement);

    void UserOfflineLogin();
    bool UploadAchievementData();
    void TriggerAchievement(FAchievementRowHandle Achievement, bool bSkipStore);
    void IncrementAchievementStat_Int(FAchievementStatRowHandle Stat, int32 Value);
    void IncrementAchievementStat_Float(FAchievementStatRowHandle Stat, float Value);
    bool HasUnlockedAchievement(FAchievementRowHandle Achievement);
    int32 GetAchievementStat_Int(FAchievementStatRowHandle Stat);
    float GetAchievementStat_Float(FAchievementStatRowHandle Stat);
    bool ClearStatsAndAchievements();
}; // Size: 0x88

class UAnalyticsSubsystem : public UGameInstanceSubsystem
{
    bool bAllowAnalytics;                                                             // 0x0030 (size: 0x1)
    FAnalyticsData AnalyticsData;                                                     // 0x0038 (size: 0x2D8)

    void TriggerTutorialState(FString State, int32 Minutes, bool bFirstPlaythrough, bool bPlayerQuit);
    void TriggerTraitChosenEvent(const FName& TraitName, EAnalyticTraitType TraitType);
    void TriggerPlayerDeathEvent(TSubclassOf<class UDamageType> DamageType);
    void TriggerMoneySpentEvent(const FName& ItemName, int32 MoneySpent);
    void TriggerGenericEvent(FString Event, int32 Amount);
    void TriggerEnemyKilled(const FName& NPCRow, TSubclassOf<class UDamageType> DamageType, class UObject* DamageCauser);
    void TriggerCraftingEvent(const FName& ItemName, int32 Amount);
    void TriggerBenchUpgradeEvent(const FName& UpgradeName, int32 Amount);
    void SendAnalyticsDataToProvider();
    bool InitializeAnalytics();
}; // Size: 0x318

class UAsyncFindPlayerBases : public UBlueprintAsyncActionBase
{
    FAsyncFindPlayerBasesComplete Complete;                                           // 0x0030 (size: 0x10)
    void AsyncFindPlayerBasesOutputPin(bool bSuccess, const TArray<FPlayerBaseData>& Bases);
    class UWorld* World;                                                              // 0x0040 (size: 0x8)
    TArray<FPlayerBaseData> Results;                                                  // 0x0048 (size: 0x10)
    float Distance;                                                                   // 0x0058 (size: 0x4)
    FName PlayerBaseTag;                                                              // 0x005C (size: 0x8)
    bool bRemoveUnloaded;                                                             // 0x0064 (size: 0x1)
    TSubclassOf<class AActor> SearchStartClass;                                       // 0x0068 (size: 0x8)
    bool bDebugDraw;                                                                  // 0x0070 (size: 0x1)
    FLinearColor DebugColor;                                                          // 0x0074 (size: 0x10)
    float DebugTime;                                                                  // 0x0084 (size: 0x4)
    bool bDebugBranch;                                                                // 0x0088 (size: 0x1)

    class UAsyncFindPlayerBases* AsyncFindPlayerBases(const class UObject* WorldContextObject, const float Distance, const FName PlayerBaseTag, bool bRemoveUnloaded, TSubclassOf<class AActor> SearchStartClass, bool bDebugDraw, const FLinearColor DebugColor, const float DebugTime, bool bDebugBranch);
}; // Size: 0x90

class UAudioDeviceOptionFactory : public USettingOptionFactory
{
}; // Size: 0x28

class UAudioSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FAudioSettingRowHandle MakeLiteralAudioSettingRowHandle(FAudioSettingRowHandle RowHandle);
    FAudioSettingRowHandle MakeAudioSettingRowHandle(const FName RowName);
    void GetAudioSettingRow(FAudioSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllAudioSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllAudioSettingRowHandles(TArray<FAudioSettingRowHandle>& OutRowHandles);
    bool Equal_AudioSettingRowHandle(FAudioSettingRowHandle A, FAudioSettingRowHandle B);
    bool DoesAudioSettingRowExist(FName RowName);
    FName BreakAudioSettingRowHandle(const FAudioSettingRowHandle RowHandle);
}; // Size: 0x28

class UBTComposite_SelectPseudoRandom : public UBTCompositeNode
{
    bool bAlreadyRan;                                                                 // 0x0080 (size: 0x1)
    TArray<int32> PossibleChildren;                                                   // 0x0088 (size: 0x10)
    int32 LastChild;                                                                  // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UBTComposite_SelectRandom : public UBTCompositeNode
{
    bool bAlreadyRan;                                                                 // 0x0080 (size: 0x1)

}; // Size: 0x88

class UBTComposite_SequenceLoop : public UBTComposite_Sequence
{
    int32 LoopCount;                                                                  // 0x0080 (size: 0x4)
    int32 LoopDeviation;                                                              // 0x0084 (size: 0x4)
    int32 CurrentLoopCount;                                                           // 0x0088 (size: 0x4)
    int32 ActiveLoopCount;                                                            // 0x008C (size: 0x4)

}; // Size: 0x90

class UBTDecorator_AbioticIsAtLocation : public UBTDecorator_BlackboardBase
{
    FBlackboardKeySelector AcceptableRadiusKey;                                       // 0x0090 (size: 0x28)
    float AcceptableRadiusOffset;                                                     // 0x00B8 (size: 0x4)
    FAIDistanceType GeometricDistanceType;                                            // 0x00BC (size: 0x1)
    uint8 bUseNavAgentGoalLocation;                                                   // 0x00C0 (size: 0x1)
    uint8 bPathFindingBasedTest;                                                      // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UBTTask_AbioticMoveDirectlyToward : public UBTTask_MoveDirectlyToward
{
    bool bUseBlackboardDefinedAcceptanceRadius;                                       // 0x00B8 (size: 0x1)
    bool bIgnoreInvalidRadiusValues;                                                  // 0x00B9 (size: 0x1)
    FBlackboardKeySelector AcceptableRadiusKey;                                       // 0x00C0 (size: 0x28)

}; // Size: 0xE8

class UBTTask_AbioticMoveTo : public UBTTask_MoveTo
{
    bool bUseBlackboardDefinedAcceptanceRadius;                                       // 0x00B0 (size: 0x1)
    bool bIgnoreInvalidRadiusValues;                                                  // 0x00B1 (size: 0x1)
    FBlackboardKeySelector AcceptableRadiusKey;                                       // 0x00B8 (size: 0x28)

}; // Size: 0xE0

class UBackgroundEntryItem : public UObject
{
    FDataTableRowHandle BackgroundRowHandle;                                          // 0x0028 (size: 0x10)
    bool bUnlocked;                                                                   // 0x0038 (size: 0x1)

    void UpdateBackgroundEntryStates(class UAchievementsSubsystem*& AchievementSubsystem);
    TArray<class UBackgroundEntryItem*> SetupBackgroundEntries(class UObject* WorldContext, class UDataTable* BackgroundDataTable);
    FDataTableRowHandle GetDataRowHandleFromAchievement(FAchievementRowHandle RowHandle, class UDataTable* BackgroundDataTable);
    FMainMenuBackground GetBackgroundData(FDataTableRowHandle BackgroundEntry);
}; // Size: 0x40

class UBenchUpgradeActorComponent : public UChildActorComponent
{
    FBenchUpgradeRowHandle BenchUpgrade;                                              // 0x0288 (size: 0x20)

    void RefreshUpgradeState(const FGameplayTagContainer& TagContainer);
}; // Size: 0x2B0

class UBenchUpgradeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FBenchUpgradeRowHandle MakeLiteralBenchUpgradeRowHandle(FBenchUpgradeRowHandle RowHandle);
    FBenchUpgradeRowHandle MakeBenchUpgradeRowHandle(const FName RowName);
    void GetBenchUpgradeRow(FBenchUpgradeRowHandle RowHandle, FBenchUpgrade& Data, ERowValid& ReturnPath);
    void GetAllBenchUpgradeRowNames(TArray<FName>& OutRowNames);
    void GetAllBenchUpgradeRowHandles(TArray<FBenchUpgradeRowHandle>& OutRowHandles);
    bool Equal_BenchUpgradeRowHandle(FBenchUpgradeRowHandle A, FBenchUpgradeRowHandle B);
    bool DoesBenchUpgradeRowExist(FName RowName);
    FName BreakBenchUpgradeRowHandle(const FBenchUpgradeRowHandle RowHandle);
}; // Size: 0x28

class UBuffDebuffDataAsset : public UDataAsset
{
}; // Size: 0x30

class UBuffDebuffHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FBuffDebuffRowHandle MakeLiteralBuffDebuffRowHandle(FBuffDebuffRowHandle RowHandle);
    FBuffDebuffRowHandle MakeBuffDebuffRowHandle(const FName RowName);
    void GetBuffDebuffRow(FBuffDebuffRowHandle RowHandle, FBuffDebuff& Data, ERowValid& ReturnPath);
    void GetAllBuffDebuffRowNames(TArray<FName>& OutRowNames);
    void GetAllBuffDebuffRowHandles(TArray<FBuffDebuffRowHandle>& OutRowHandles);
    bool Equal_BuffDebuffRowHandle(FBuffDebuffRowHandle A, FBuffDebuffRowHandle B);
    bool DoesBuffDebuffRowExist(FName RowName);
    FName BreakBuffDebuffRowHandle(const FBuffDebuffRowHandle RowHandle);
}; // Size: 0x28

class UBuffDebuffObject : public UObject
{
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0028 (size: 0x20)
    float BuffDuration;                                                               // 0x0048 (size: 0x4)
    float tickRate;                                                                   // 0x004C (size: 0x4)
    TWeakObjectPtr<class AActor> LinkedActor;                                         // 0x0050 (size: 0x8)

    void Server_UpdateRemainingTime(float NewRemainingTime, float& PreviousRemainingTime);
    void Server_OnBuffTick(class AAbioticCharacter* Character, int32 Stack);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_BeginBuffRemoval();
}; // Size: 0x60

class UBulkQueryAndUpdateUserNamesPlayerManagement : public UOnlineBlueprintCallProxyBase
{
    FBulkQueryAndUpdateUserNamesPlayerManagementOnCompleted OnCompleted;              // 0x0038 (size: 0x10)
    void UserInformationQueriedAndUpdated();
    class UObject* WorldContextObject;                                                // 0x0048 (size: 0x8)

    class UBulkQueryAndUpdateUserNamesPlayerManagement* QueryAndUpdateUserNamesForPlayerManagement(class UObject* WorldContextObject);
}; // Size: 0xA8

class UCharacterBuffComponent : public UActorComponent
{
    TArray<FBuffDebuffRowHandle> ImmuneToBuffs;                                       // 0x00A8 (size: 0x10)
    TArray<FBuffDebuffEntry> CurrentBuffs;                                            // 0x00B8 (size: 0x10)
    TArray<FBuffDebuffRowHandle> BuffParticles;                                       // 0x00C8 (size: 0x10)
    TArray<FBuffDebuffRowHandle> BuffMaterials;                                       // 0x00D8 (size: 0x10)
    TMap<class FBuffDebuffRowHandle, class UBuffDebuffObject*> BuffObjectMap;         // 0x00E8 (size: 0x50)
    TMap<class FBuffDebuffRowHandle, class ABuffActor*> BuffActorMap;                 // 0x0138 (size: 0x50)
    TArray<FBuffDebuffRowHandle> TraitBuffRows;                                       // 0x0188 (size: 0x10)
    TArray<class UBuffDebuffObject*> TraitBuffObjects;                                // 0x0198 (size: 0x10)
    FGameplayTagContainer BuffTagContainer;                                           // 0x01A8 (size: 0x20)
    FCharacterBuffComponentOnBuffTagContainerRefreshed OnBuffTagContainerRefreshed;   // 0x01C8 (size: 0x10)
    void OnBuffTagContainerRefreshed();
    FCharacterBuffComponentOnCurrentBuffsUpdated OnCurrentBuffsUpdated;               // 0x01D8 (size: 0x10)
    void OnCurrentBuffsUpdated(class UCharacterBuffComponent* BuffComponent);
    FCharacterBuffComponentOnBuffBlocked OnBuffBlocked;                               // 0x01E8 (size: 0x10)
    void OnBuffUpdated(FBuffDebuffRowHandle BuffRow);
    TMap<class FBuffDebuffRowHandle, class UActorComponent*> BuffParticleMap;         // 0x01F8 (size: 0x50)
    TMap<class FBuffDebuffRowHandle, class TSoftObjectPtr<UMaterialInterface>> BuffMaterialMap; // 0x0248 (size: 0x50)

    class UActorComponent* SpawnBuffParticle(FBuffDebuffRowHandle BuffRow);
    void Server_RemoveTraitBuff(FBuffDebuffRowHandle BuffRow);
    void Server_RemoveTaggedBuffs(FGameplayTagQuery TagQuery, bool bSpecificLimbs, TArray<EBodyLimbs> Limbs);
    void Server_RemoveSpecificBuffs(TArray<FBuffDebuffRowHandle> BuffRows, bool bSpecificLimbs, TArray<EBodyLimbs> Limbs);
    void Server_RemoveFullHealthBuffsOnLimb(EBodyLimbs Limb);
    bool Server_RemoveBuff(FBuffDebuffRowHandle BuffRow, bool bRemoveEntireStack, EBodyLimbs Limb, bool bExpiredByTime);
    bool Server_ApplyBuff(FBuffDebuffRowHandle BuffRow, bool bOverrideDefaultDuration, float NewDuration, EBodyLimbs Limb, class AActor* LinkedActor, bool bSkipDialog);
    void Server_AddTraitBuff(FBuffDebuffRowHandle BuffRow);
    void ResetBuffExpireTime(const FBuffDebuffRowHandle BuffRow, const bool bOnlyFirst);
    void RemoveBuffMaterial(FBuffDebuffRowHandle BuffRow);
    void PlayDialogLine(FBuffDebuffRowHandle BuffRow);
    void OnRep_CurrentBuffs();
    void OnRep_BuffTagContainer();
    void OnRep_BuffParticles();
    void OnRep_BuffMaterials();
    bool HasBuffTag(FGameplayTag Tag);
    TArray<EBodyLimbs> HasBuff(FBuffDebuffRowHandle BuffRow, bool bMustBeOnSameLimb, EBodyLimbs Limb);
    bool GetBuffExpireTime(FBuffDebuffRowHandle BuffRow, float& ExpireTime);
    void GetBuffCountMap(bool bIgnoreSilent, TMap<FBuffDebuffRowHandle, int32>& OutBuffCountMap);
    bool FindBuffInArray(TArray<FBuffDebuffEntry> BuffArray, FBuffDebuffEntry& OutBuffEntry);
    bool DoesBuffTagQueryMatch(FGameplayTagQuery TagQuery);
    void BuffRemoved(FBuffDebuffRowHandle BuffRow);
    void BuffReceived(FBuffDebuffRowHandle BuffRow);
    void ApplyBuffMaterial(FBuffDebuffRowHandle BuffRow);
}; // Size: 0x298

class UCompendiumEntryHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FCompendiumEntryRowHandle MakeLiteralCompendiumEntryRowHandle(FCompendiumEntryRowHandle RowHandle);
    FCompendiumEntryRowHandle MakeCompendiumEntryRowHandle(const FName RowName);
    void GetCompendiumEntryRow(FCompendiumEntryRowHandle RowHandle, FCompendiumEntry& Data, ERowValid& ReturnPath);
    void GetAllCompendiumEntryRowNames(TArray<FName>& OutRowNames);
    void GetAllCompendiumEntryRowHandles(TArray<FCompendiumEntryRowHandle>& OutRowHandles);
    bool Equal_CompendiumEntryRowHandle(FCompendiumEntryRowHandle A, FCompendiumEntryRowHandle B);
    bool DoesCompendiumEntryRowExist(FName RowName);
    FName BreakCompendiumEntryRowHandle(const FCompendiumEntryRowHandle RowHandle);
}; // Size: 0x28

class UCompendiumEntryItem : public UObject
{
    FCompendiumEntryRowHandle CompendiumEntry;                                        // 0x0028 (size: 0x20)
    FText Title;                                                                      // 0x0048 (size: 0x10)

    FText RedactText(const FText& SourceString, FString RedactSymbol);
    TArray<class UCompendiumEntryItem*> GetCompendiumEntries();
}; // Size: 0x58

class UControlSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FControlSettingRowHandle MakeLiteralControlSettingRowHandle(FControlSettingRowHandle RowHandle);
    FControlSettingRowHandle MakeControlSettingRowHandle(const FName RowName);
    void GetControlSettingRow(FControlSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllControlSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllControlSettingRowHandles(TArray<FControlSettingRowHandle>& OutRowHandles);
    bool Equal_ControlSettingRowHandle(FControlSettingRowHandle A, FControlSettingRowHandle B);
    bool DoesControlSettingRowExist(FName RowName);
    FName BreakControlSettingRowHandle(const FControlSettingRowHandle RowHandle);
}; // Size: 0x28

class UCraftingEntryItem : public UObject
{
    FDataTableRowHandle RecipeRow;                                                    // 0x0028 (size: 0x10)
    int32 CountToCreate;                                                              // 0x0038 (size: 0x4)
    FText RecipeItemName;                                                             // 0x0040 (size: 0x10)
    FDataTableRowHandle ItemToCreate;                                                 // 0x0050 (size: 0x10)
    TArray<FDataTableRowHandle> BenchesRequired;                                      // 0x0060 (size: 0x10)
    uint8 Category;                                                                   // 0x0070 (size: 0x1)
    TArray<FItemCount> RecipeItems;                                                   // 0x0078 (size: 0x10)
    TArray<FItemCount> SubstituteItems;                                               // 0x0088 (size: 0x10)
    FGameplayTagContainer RecipeTags;                                                 // 0x0098 (size: 0x20)
    bool bIsSoupRecipe;                                                               // 0x00B8 (size: 0x1)
    bool bUnlocked;                                                                   // 0x00B9 (size: 0x1)
    bool bResearched;                                                                 // 0x00BA (size: 0x1)
    bool bBenchAvailable;                                                             // 0x00BB (size: 0x1)
    bool bNewRecipeHighlight;                                                         // 0x00BC (size: 0x1)
    bool bNeverCrafted;                                                               // 0x00BD (size: 0x1)
    bool bFavorited;                                                                  // 0x00BE (size: 0x1)

    void UpdateCraftingEntryStates(TArray<class UCraftingEntryItem*>& CraftingEntries, const TArray<FName>& RecipesUnlocked, const TArray<FName>& RecipesRequiringResearch, bool bDebugFreeCrafting, bool bResearchEnabled, const TArray<FName>& NewestRecipes, const TArray<FName>& CraftedItems, const TArray<FName>& Favorites, const TArray<FDataTableRowHandle>& AvailableBenches);
    void GetCategoryFilterStates(TArray<class UCraftingEntryItem*>& CraftingEntries, TArray<uint8>& OutNewItemCategories, TArray<uint8>& OutNewResearchCategories);
    bool FindCraftingEntryForItem(TArray<class UCraftingEntryItem*>& CraftingEntries, FName ItemRowName, class UCraftingEntryItem*& OutCraftingEntry);
    void FilterCraftingEntries(const TArray<class UCraftingEntryItem*>& CraftingEntries, bool bOnlyUnlocked, bool bOnlyFavorites, bool bFilterBench, bool bUseCategory, uint8 FilterCategory, FGameplayTag FilterTag, FString SearchString, TArray<class UCraftingEntryItem*>& OutFilteredEntries, TArray<class UCraftingEntryItem*>& OutFilteredBenchEntries);
}; // Size: 0xC0

class UDamageDefinitionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FDamageDefinitionRowHandle MakeLiteralDamageDefinitionRowHandle(FDamageDefinitionRowHandle RowHandle);
    FDamageDefinitionRowHandle MakeDamageDefinitionRowHandle(const FName RowName);
    void GetDamageDefinitionRow(FDamageDefinitionRowHandle RowHandle, FDamageDefinition& Data, ERowValid& ReturnPath);
    void GetAllDamageDefinitionRowNames(TArray<FName>& OutRowNames);
    void GetAllDamageDefinitionRowHandles(TArray<FDamageDefinitionRowHandle>& OutRowHandles);
    bool Equal_DamageDefinitionRowHandle(FDamageDefinitionRowHandle A, FDamageDefinitionRowHandle B);
    bool DoesDamageDefinitionRowExist(FName RowName);
    FName BreakDamageDefinitionRowHandle(const FDamageDefinitionRowHandle RowHandle);
}; // Size: 0x28

class UDynamicPropertyFunctionLibrary : public UBlueprintFunctionLibrary
{

    TArray<FDynamicProperty> SetDynamicProperty(TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32 Value);
    int32 GetStovewareType(const TArray<FDynamicProperty>& DynamicProperties);
    int32 GetPortions(const TArray<FDynamicProperty>& DynamicProperties);
    bool GetDynamicProperty(const TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32& Value);
    ECookingState GetCookingState(const TArray<FDynamicProperty>& DynamicProperties);
    TArray<FDynamicProperty> CopyCookingDynamicProperties(const TArray<FDynamicProperty>& SourceDynamicProperties, TArray<FDynamicProperty>& DestinationDynamicProperties);
    TArray<FDynamicProperty> ClearCookingDynamicProperties(TArray<FDynamicProperty>& DynamicProperties);
}; // Size: 0x28

class UEQGenerator_CoverPoints : public UEnvQueryGenerator_ProjectedPoints
{
    TSubclassOf<class UEnvQueryContext> GenerateAround;                               // 0x0090 (size: 0x8)
    FAIDataProviderFloatValue Radius;                                                 // 0x0098 (size: 0x38)

}; // Size: 0xD0

class UEnvQueryTest_Tether : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> TetherContext;                                // 0x01F8 (size: 0x8)

}; // Size: 0x200

class UEnvQueryTest_TraceDistance : public UEnvQueryTest_Trace
{
    FAIDataProviderFloatValue TraceMaxDistance;                                       // 0x02E8 (size: 0x38)
    FAIDataProviderBoolValue TraceIgnoreZ;                                            // 0x0320 (size: 0x38)

}; // Size: 0x358

class UErrorMessageHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FErrorMessageRowHandle MakeLiteralErrorMessageRowHandle(FErrorMessageRowHandle RowHandle);
    FErrorMessageRowHandle MakeErrorMessageRowHandle(const FName RowName);
    void GetErrorMessageRow(FErrorMessageRowHandle RowHandle, FErrorMessage& Data, ERowValid& ReturnPath);
    void GetAllErrorMessageRowNames(TArray<FName>& OutRowNames);
    void GetAllErrorMessageRowHandles(TArray<FErrorMessageRowHandle>& OutRowHandles);
    bool Equal_ErrorMessageRowHandle(FErrorMessageRowHandle A, FErrorMessageRowHandle B);
    bool DoesErrorMessageRowExist(FName RowName);
    FName BreakErrorMessageRowHandle(const FErrorMessageRowHandle RowHandle);
}; // Size: 0x28

class UFPArmsAnimInstance : public UAnimInstance
{
    EFPAnimState CurrentAnimState;                                                    // 0x0368 (size: 0x1)

}; // Size: 0x370

class UFilterSessionResultEntries : public UOnlineBlueprintCallProxyBase
{
    FFilterSessionResultEntriesOnSuccess OnSuccess;                                   // 0x0030 (size: 0x10)
    void ProfanityFilterResult(bool bSuccess, const TArray<FBlueprintSessionResult>& OutSessionResults);
    FFilterSessionResultEntriesOnFailure OnFailure;                                   // 0x0040 (size: 0x10)
    void ProfanityFilterResult(bool bSuccess, const TArray<FBlueprintSessionResult>& OutSessionResults);
    class UObject* WorldContextObject;                                                // 0x0050 (size: 0x8)

    class UFilterSessionResultEntries* GetFilterSessionResultEntries(class UObject* WorldContextObject, const TArray<FBlueprintSessionResult>& InSessionResults);
}; // Size: 0x68

class UFindEnemyQueryContext : public UEnvQueryContext
{
}; // Size: 0x28

class UFishHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FFishRowHandle MakeLiteralFishRowHandle(FFishRowHandle RowHandle);
    FFishRowHandle MakeFishRowHandle(const FName RowName);
    void GetFishRow(FFishRowHandle RowHandle, FFishData& Data, ERowValid& ReturnPath);
    void GetAllFishRowNames(TArray<FName>& OutRowNames);
    void GetAllFishRowHandles(TArray<FFishRowHandle>& OutRowHandles);
    bool Equal_FishRowHandle(FFishRowHandle A, FFishRowHandle B);
    bool DoesFishRowExist(FName RowName);
    FName BreakFishRowHandle(const FFishRowHandle RowHandle);
}; // Size: 0x28

class UFishTankAnimInstance : public UAnimInstance
{
    float FishSpeed;                                                                  // 0x0368 (size: 0x4)
    float SplineLength;                                                               // 0x036C (size: 0x4)
    float SplineProgress;                                                             // 0x0370 (size: 0x4)
    float NormalizedFishSpeed;                                                        // 0x0374 (size: 0x4)
    class USplineComponent* SplineParent;                                             // 0x0378 (size: 0x8)
    FVector FishLocation;                                                             // 0x0380 (size: 0x18)
    FRotator FishRotation;                                                            // 0x0398 (size: 0x18)

}; // Size: 0x3B0

class UFishingZoneHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FFishingZoneRowHandle MakeLiteralFishingZoneRowHandle(FFishingZoneRowHandle RowHandle);
    FFishingZoneRowHandle MakeFishingZoneRowHandle(const FName RowName);
    void GetFishingZoneRow(FFishingZoneRowHandle RowHandle, FFishingZone& Data, ERowValid& ReturnPath);
    void GetAllFishingZoneRowNames(TArray<FName>& OutRowNames);
    void GetAllFishingZoneRowHandles(TArray<FFishingZoneRowHandle>& OutRowHandles);
    bool Equal_FishingZoneRowHandle(FFishingZoneRowHandle A, FFishingZoneRowHandle B);
    bool DoesFishingZoneRowExist(FName RowName);
    FName BreakFishingZoneRowHandle(const FFishingZoneRowHandle RowHandle);
}; // Size: 0x28

class UGameActivityHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FGameActivityRowHandle MakeLiteralGameActivityRowHandle(FGameActivityRowHandle RowHandle);
    FGameActivityRowHandle MakeGameActivityRowHandle(const FName RowName);
    void GetGameActivityRow(FGameActivityRowHandle RowHandle, FGameActivity& Data, ERowValid& ReturnPath);
    void GetAllGameActivityRowNames(TArray<FName>& OutRowNames);
    void GetAllGameActivityRowHandles(TArray<FGameActivityRowHandle>& OutRowHandles);
    bool Equal_GameActivityRowHandle(FGameActivityRowHandle A, FGameActivityRowHandle B);
    bool DoesGameActivityRowExist(FName RowName);
    FName BreakGameActivityRowHandle(const FGameActivityRowHandle RowHandle);
}; // Size: 0x28

class UGameActivitySubsystem : public UWorldSubsystem
{
    TMap<FString, TEnumAsByte<EActivityState>> CachedState;                           // 0x0030 (size: 0x50)

    void WorldFlagsChanged();
    void ResetActivities();
}; // Size: 0x80

class UGameCommandEntryWidget : public UUserWidget
{
    FGameCommandRowHandle RowHandle;                                                  // 0x02E0 (size: 0x20)

}; // Size: 0x300

class UGameCommandHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FGameCommandRowHandle MakeLiteralGameCommandRowHandle(FGameCommandRowHandle RowHandle);
    FGameCommandRowHandle MakeGameCommandRowHandle(const FName RowName);
    void GetGameCommandRow(FGameCommandRowHandle RowHandle, FGameCommand& Data, ERowValid& ReturnPath);
    void GetAllGameCommandRowNames(TArray<FName>& OutRowNames);
    void GetAllGameCommandRowHandles(TArray<FGameCommandRowHandle>& OutRowHandles);
    bool Equal_GameCommandRowHandle(FGameCommandRowHandle A, FGameCommandRowHandle B);
    bool DoesGameCommandRowExist(FName RowName);
    FName BreakGameCommandRowHandle(const FGameCommandRowHandle RowHandle);
}; // Size: 0x28

class UGameCommandObject : public UObject
{
    FGameCommandRowHandle RowHandle;                                                  // 0x0028 (size: 0x20)

    void OnCommandExecuted(class AAbioticPlayerController* Player, FString FirstParam, FString SecondParam);
    FGameSliderSettings GetSliderSettings(bool& bDynamicSettings);
    TArray<FName> GetSecondParamOptions(bool& bDynamicOptions);
    TArray<FName> GetFirstParamOptions(bool& bDynamicOptions);
    bool GetCurrentValue(float& OutValue);
    bool GetCurrentState(FString& OutState);
    FString ConvertParamToOriginal(FString InParam, bool bIsSecondParam);
}; // Size: 0x48

class UGameCommandSubsystem : public UGameInstanceSubsystem
{
    TMap<class FGameCommandRowHandle, class UGameCommandObject*> GameCommandInstances; // 0x0030 (size: 0x50)
    TArray<FGameCommandEntry> GameCommands;                                           // 0x0080 (size: 0x10)

    class UGameCommandObject* GetGameCommand(FGameCommandRowHandle RowHandle);
    TArray<FGameCommandRowHandle> GameCommandFuzzySearch(FString SearchInput);
    bool ExecuteGameCommand(class UObject* WorldContextObject, FGameCommandRowHandle RowHandle, FString FirstParam, FString SecondParam);
}; // Size: 0x90

class UGameCommandWidget : public UUserWidget
{
    FGameCommandRowHandle RowHandle;                                                  // 0x02E0 (size: 0x20)

    void FilterGameCommandWidgets(class UPanelWidget* PanelWidget, TArray<class UGameCommandWidget*> GameCommandWidgets, const TArray<FGameCommandRowHandle>& FilteredRowHandles);
}; // Size: 0x300

class UGameCreditHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FGameCreditRowHandle MakeLiteralGameCreditRowHandle(FGameCreditRowHandle RowHandle);
    FGameCreditRowHandle MakeGameCreditRowHandle(const FName RowName);
    void GetGameCreditRow(FGameCreditRowHandle RowHandle, FGameCredit& Data, ERowValid& ReturnPath);
    void GetAllGameCreditRowNames(TArray<FName>& OutRowNames);
    void GetAllGameCreditRowHandles(TArray<FGameCreditRowHandle>& OutRowHandles);
    bool Equal_GameCreditRowHandle(FGameCreditRowHandle A, FGameCreditRowHandle B);
    bool DoesGameCreditRowExist(FName RowName);
    FName BreakGameCreditRowHandle(const FGameCreditRowHandle RowHandle);
}; // Size: 0x28

class UGameEntitlementHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FGameEntitlementRowHandle MakeLiteralGameEntitlementRowHandle(FGameEntitlementRowHandle RowHandle);
    FGameEntitlementRowHandle MakeGameEntitlementRowHandle(const FName RowName);
    void GetGameEntitlementRow(FGameEntitlementRowHandle RowHandle, FGameEntitlement& Data, ERowValid& ReturnPath);
    void GetAllGameEntitlementRowNames(TArray<FName>& OutRowNames);
    void GetAllGameEntitlementRowHandles(TArray<FGameEntitlementRowHandle>& OutRowHandles);
    bool Equal_GameEntitlementRowHandle(FGameEntitlementRowHandle A, FGameEntitlementRowHandle B);
    bool DoesGameEntitlementRowExist(FName RowName);
    FName BreakGameEntitlementRowHandle(const FGameEntitlementRowHandle RowHandle);
}; // Size: 0x28

class UGameSettingFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool ShouldShowSetting(const FGameSetting& Setting, bool bCheckDynamicState);
    FString GetDefaultValueForSetting(const FGameSetting& Setting);
}; // Size: 0x28

class UGamepadCursorSettings : public UDeveloperSettings
{
    bool bUseDPIScale;                                                                // 0x0038 (size: 0x1)
    bool bAnalogCursorNoAcceleration;                                                 // 0x0039 (size: 0x1)
    FRuntimeFloatCurve AnalogCursorAccelerationCurve;                                 // 0x0040 (size: 0x88)
    float MaxAnalogCursorSpeed;                                                       // 0x00C8 (size: 0x4)
    float MaxAnalogCursorSpeedWhenHovered;                                            // 0x00CC (size: 0x4)
    float AnalogCursorDragCoefficient;                                                // 0x00D0 (size: 0x4)
    float AnalogCursorDragCoefficientWhenHovered;                                     // 0x00D4 (size: 0x4)
    float MinAnalogCursorSpeed;                                                       // 0x00D8 (size: 0x4)
    float AnalogCursorDeadZone;                                                       // 0x00DC (size: 0x4)
    float AnalogCursorDeadZoneAxial;                                                  // 0x00E0 (size: 0x4)
    float AnalogCursorAccelerationMultiplier;                                         // 0x00E4 (size: 0x4)
    float AnalogCursorSize;                                                           // 0x00E8 (size: 0x4)
    float ScrollDeadZone;                                                             // 0x00EC (size: 0x4)
    float ScrollMultiplier;                                                           // 0x00F0 (size: 0x4)

}; // Size: 0xF8

class UGameplayObserverSubsystem : public UWorldSubsystem
{
    FGameplayObserverSubsystemOnItemCrafted OnItemCrafted;                            // 0x0030 (size: 0x10)
    void ItemCrafted(class AAbioticCharacter* Player, FName ItemName, int32 Amount);
    FGameplayObserverSubsystemOnItemEquipped OnItemEquipped;                          // 0x0040 (size: 0x10)
    void ItemEquipped(class AAbioticCharacter* Player, FName ItemName, int32 Slot);
    FGameplayObserverSubsystemOnPlayerDeath OnPlayerDeath;                            // 0x0050 (size: 0x10)
    void PlayerDeath(class AAbioticCharacter* Player, TSubclassOf<class UDamageType> DamageType);
    FGameplayObserverSubsystemOnItemReceived OnItemReceived;                          // 0x0060 (size: 0x10)
    void ItemReceived(class AAbioticCharacter* Player, FName ItemName, int32 Amount);
    FGameplayObserverSubsystemOnBuffReceived OnBuffReceived;                          // 0x0070 (size: 0x10)
    void BuffReceived(class AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle);
    FGameplayObserverSubsystemOnBuffRemoved OnBuffRemoved;                            // 0x0080 (size: 0x10)
    void BuffRemoved(class AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle);
    FGameplayObserverSubsystemOnDeployablePlaced OnDeployablePlaced;                  // 0x0090 (size: 0x10)
    void DeployablePlaced(class AAbioticCharacter* Player, class AActor* Deployable);
    FGameplayObserverSubsystemOnDeployableConstructed OnDeployableConstructed;        // 0x00A0 (size: 0x10)
    void DeployableConstructed(class AAbioticCharacter* Player, class AActor* Deployable);
    FGameplayObserverSubsystemOnDeployablePluggedIn OnDeployablePluggedIn;            // 0x00B0 (size: 0x10)
    void DeployablePluggedIn(class AAbioticCharacter* Player, class AActor* Deployable);
    FGameplayObserverSubsystemOnCraftingBenchCreated OnCraftingBenchCreated;          // 0x00C0 (size: 0x10)
    void CraftingBenchCreated(class AActor* CraftingBench);
    FGameplayObserverSubsystemOnCraftingBenchDestroyed OnCraftingBenchDestroyed;      // 0x00D0 (size: 0x10)
    void CraftingBenchDestroyed(class AActor* CraftingBench);

    void TriggerPlayerDeath(class AAbioticCharacter* Player, TSubclassOf<class UDamageType> DamageType);
    void TriggerItemReceived(class AAbioticCharacter* Player, FName ItemName, int32 Amount);
    void TriggerItemEquipped(class AAbioticCharacter* Player, FName ItemName, int32 Slot);
    void TriggerItemCrafted(class AAbioticCharacter* Player, FName ItemName, int32 Amount);
    void TriggerDeployablePluggedIn(class AAbioticCharacter* Player, class AActor* Deployable);
    void TriggerDeployablePlaced(class AAbioticCharacter* Player, class AActor* Deployable);
    void TriggerDeployableConstructed(class AAbioticCharacter* Player, class AActor* Deployable);
    void TriggerCraftingBenchDestroyed(class AActor* CraftingBench);
    void TriggerCraftingBenchCreated(class AActor* CraftingBench);
    void TriggerBuffRemoved(class AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle);
    void TriggerBuffReceived(class AAbioticCharacter* Player, FBuffDebuffRowHandle RowHandle);
}; // Size: 0xE0

class UGameplaySettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FGameplaySettingRowHandle MakeLiteralGameplaySettingRowHandle(FGameplaySettingRowHandle RowHandle);
    FGameplaySettingRowHandle MakeGameplaySettingRowHandle(const FName RowName);
    void GetGameplaySettingRow(FGameplaySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllGameplaySettingRowNames(TArray<FName>& OutRowNames);
    void GetAllGameplaySettingRowHandles(TArray<FGameplaySettingRowHandle>& OutRowHandles);
    bool Equal_GameplaySettingRowHandle(FGameplaySettingRowHandle A, FGameplaySettingRowHandle B);
    bool DoesGameplaySettingRowExist(FName RowName);
    FName BreakGameplaySettingRowHandle(const FGameplaySettingRowHandle RowHandle);
}; // Size: 0x28

class UHeldItemAnimInstance : public UAnimInstance
{
    EFPAnimState CurrentAnimState;                                                    // 0x0368 (size: 0x1)
    class UAnimSequence* IdleAnim;                                                    // 0x0370 (size: 0x8)
    class UAnimSequence* CrouchIdleAnim;                                              // 0x0378 (size: 0x8)
    class UAnimSequence* WalkAnim;                                                    // 0x0380 (size: 0x8)
    class UAnimSequence* CrouchWalkAnim;                                              // 0x0388 (size: 0x8)
    class UAnimSequence* SprintAnim;                                                  // 0x0390 (size: 0x8)
    class USkeletalMeshComponent* FPArmsMeshComponent;                                // 0x0398 (size: 0x8)
    float SyncTime_Idle;                                                              // 0x03A0 (size: 0x4)
    float SyncTime_CrouchIdle;                                                        // 0x03A4 (size: 0x4)
    float SyncTime_Walk;                                                              // 0x03A8 (size: 0x4)
    float SyncTime_CrouchWalk;                                                        // 0x03AC (size: 0x4)
    float SyncTime_Sprint;                                                            // 0x03B0 (size: 0x4)

}; // Size: 0x3D0

class UItemActionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FItemActionRowHandle MakeLiteralItemActionRowHandle(FItemActionRowHandle RowHandle);
    FItemActionRowHandle MakeItemActionRowHandle(const FName RowName);
    void GetItemActionRow(FItemActionRowHandle RowHandle, FItemAction& Data, ERowValid& ReturnPath);
    void GetAllItemActionRowNames(TArray<FName>& OutRowNames);
    void GetAllItemActionRowHandles(TArray<FItemActionRowHandle>& OutRowHandles);
    bool Equal_ItemActionRowHandle(FItemActionRowHandle A, FItemActionRowHandle B);
    bool DoesItemActionRowExist(FName RowName);
    FName BreakItemActionRowHandle(const FItemActionRowHandle RowHandle);
}; // Size: 0x28

class UItemManagerListEntry : public UObject
{
    FName RowName;                                                                    // 0x0028 (size: 0x8)
    FText DisplayName;                                                                // 0x0030 (size: 0x10)
    int32 Amount;                                                                     // 0x0040 (size: 0x4)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0048 (size: 0x28)
    FGameplayTagContainer Tags;                                                       // 0x0070 (size: 0x20)
    TArray<class UItemManagerListEntry*> ChildListEntries;                            // 0x0090 (size: 0x10)

    void SortListEntries(TArray<class UItemManagerListEntry*>& ListEntries, const TEnumAsByte<ESortDatabaseTerminalList> SortBy, const bool bReverse);
    void FilterListEntries(TArray<class UItemManagerListEntry*>& ListEntries, FString FilterText, const FGameplayTagContainer& FilterTags);
}; // Size: 0xA0

class UItemUpgradeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FItemUpgradeRowHandle MakeLiteralItemUpgradeRowHandle(FItemUpgradeRowHandle RowHandle);
    FItemUpgradeRowHandle MakeItemUpgradeRowHandle(const FName RowName);
    void GetItemUpgradeRow(FItemUpgradeRowHandle RowHandle, FItemUpgrade& Data, ERowValid& ReturnPath);
    void GetAllItemUpgradeRowNames(TArray<FName>& OutRowNames);
    void GetAllItemUpgradeRowHandles(TArray<FItemUpgradeRowHandle>& OutRowHandles);
    bool Equal_ItemUpgradeRowHandle(FItemUpgradeRowHandle A, FItemUpgradeRowHandle B);
    bool DoesItemUpgradeRowExist(FName RowName);
    FName BreakItemUpgradeRowHandle(const FItemUpgradeRowHandle RowHandle);
}; // Size: 0x28

class UKeybindAction : public UObject
{

    bool OnKeyUp(class UAbioticWidget* Widget);
    bool OnKeyDown(class UAbioticWidget* Widget);
}; // Size: 0x28

class UKeybindSettingFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool ShouldShowKeybind(const FKeybindSetting& Setting);
}; // Size: 0x28

class UKeybindSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FKeybindSettingRowHandle MakeLiteralKeybindSettingRowHandle(FKeybindSettingRowHandle RowHandle);
    FKeybindSettingRowHandle MakeKeybindSettingRowHandle(const FName RowName);
    void GetKeybindSettingRow(FKeybindSettingRowHandle RowHandle, FKeybindSetting& Data, ERowValid& ReturnPath);
    void GetAllKeybindSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllKeybindSettingRowHandles(TArray<FKeybindSettingRowHandle>& OutRowHandles);
    bool Equal_KeybindSettingRowHandle(FKeybindSettingRowHandle A, FKeybindSettingRowHandle B);
    bool DoesKeybindSettingRowExist(FName RowName);
    FName BreakKeybindSettingRowHandle(const FKeybindSettingRowHandle RowHandle);
}; // Size: 0x28

class UKeybindSubsystem : public UGameInstanceSubsystem
{
    TMap<class FKey, class FKeybindActionArray> KeybindActionMap;                     // 0x0030 (size: 0x50)
    TMap<class TSoftClassPtr<UAbioticWidget>, class FKeybindActionArray> SupportedKeybindActions; // 0x0080 (size: 0x50)
    TMap<class FUIKeybindActionRowHandle, class UKeybindAction*> KeybindActionInstances; // 0x00D0 (size: 0x50)

    bool GetKeybindActionsForWidget(const FKey& Key, class UAbioticWidget* Widget, TArray<FUIKeybindActionRowHandle>& ActionArray);
    class UKeybindAction* GetKeybindAction(FUIKeybindActionRowHandle RowHandle);
}; // Size: 0x120

class ULanguageOptionFactory : public USettingOptionFactory
{
}; // Size: 0x28

class ULevelManagerComponent : public UActorComponent
{
    FTimerHandle UnloadTimerHandle;                                                   // 0x00A8 (size: 0x8)
    FTimerHandle LoadTimerHandle;                                                     // 0x00B0 (size: 0x8)
    TMap<class ULevelStreaming*, class ULevelManagerInstance*> LevelArray;            // 0x00C0 (size: 0x50)

    void CheckLevelsForUnload();
    void CheckLevelsForLoad();
}; // Size: 0x110

class ULevelManagerInstance : public UObject
{
    class ULevelStreaming* LevelStreaming;                                            // 0x0028 (size: 0x8)
    TArray<class AAbioticLevelStreamingVolume*> LevelStreamingVolumes;                // 0x0030 (size: 0x10)
    TSoftObjectPtr<UWorld> ParentWorldAsset;                                          // 0x0040 (size: 0x28)
    FGameEntitlementRowHandle RequiredEntitlement;                                    // 0x0068 (size: 0x20)

    void OnPlayerLeaveLevel(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnPlayerEnterLevel(class AActor* OverlappedActor, class AActor* OtherActor);
    void OnLevelUnloaded();
    void OnLevelLoaded();
}; // Size: 0x98

class ULevelManagerSubsystem : public UWorldSubsystem
{
    FLevelManagerSubsystemOnLevelLoaded OnLevelLoaded;                                // 0x0030 (size: 0x10)
    void LevelStreamingLoadStatus(class ULevelStreaming* Level);
    FLevelManagerSubsystemOnLevelUnloaded OnLevelUnloaded;                            // 0x0040 (size: 0x10)
    void LevelStreamingLoadStatus(class ULevelStreaming* Level);
    FLevelManagerSubsystemOnLevelVisibilityUpdated OnLevelVisibilityUpdated;          // 0x0050 (size: 0x10)
    void LevelStreamingVisibleStatus(class ULevelStreaming* Level, bool bVisible);
    FLevelManagerSubsystemOnLevelLoadingUpdated OnLevelLoadingUpdated;                // 0x0060 (size: 0x10)
    void LevelStreamingLoadingIndicator(bool bIsLoading);
    bool bDebugForceLevelLoad;                                                        // 0x0070 (size: 0x1)
    TMap<class FString, class TSoftObjectPtr<AActor>> DeployableIDMap;                // 0x0078 (size: 0x50)
    TMap<class AActor*, class bool> ActiveLightMap;                                   // 0x00C8 (size: 0x50)
    TArray<class AActor*> ActiveCharacters;                                           // 0x0118 (size: 0x10)
    TArray<class AActor*> PlayerDeployables;                                          // 0x0128 (size: 0x10)

    void UpdateCachedLight(class AActor* Light, bool bIsPowered);
    void SetDebugForceLevelLoad(bool bForceLoad);
    void RemovePlayerDeployable(class AActor* Deployable);
    void RemoveDeployableID(FString AssetID);
    void RemoveCachedLight(class AActor* Light);
    void RemoveCachedCharacter(class AActor* Character);
    void MarkLevelAsLoadedFromSave(const TSoftObjectPtr<UWorld>& Level);
    bool IsLocationLoaded(const FVector& Location);
    bool IsLevelVisible(const TSoftObjectPtr<UWorld>& Level);
    bool IsLevelLoaded(const TSoftObjectPtr<UWorld>& Level);
    bool IsAnyLevelLoading();
    bool HasOwningLevelFinishedLoadedFromSave(const class AActor*& ActorToCheck);
    TArray<class AActor*> GetPowerLeechPlayerFurnitureTargets(TArray<class TSubclassOf<AActor>> AllowedClasses, TArray<class TSubclassOf<AActor>> IgnoredClasses);
    TSoftObjectPtr<UWorld> GetOwningWorldFromActor(const class AActor* Actor);
    TArray<class AActor*> GetNearbyPlayerFurniture(FVector Location, float Distance, bool bIgnoreZ, const TArray<class AActor*>& ActorsToIgnore, TSubclassOf<class AActor> ClassFilter);
    TArray<class AActor*> GetNearbyLights(FVector Location, float Distance, bool bIgnoreZ, bool bOnlyPowered, const TArray<class AActor*>& ActorsToIgnore, TSubclassOf<class AActor> ClassFilter);
    TArray<class AActor*> GetNearbyCharacters(FVector Location, float Distance, bool bIgnoreZ, const TArray<class AActor*>& ActorsToIgnore, TSubclassOf<class AActor> ClassFilter);
    bool GetLoadedLevelState(const TSoftObjectPtr<UWorld>& Level, bool& bPendingUnload, FString& VisibleState, TArray<class AAbioticCharacter*>& PlayersInLevel, bool& bLocalPlayerInLevel);
    TSoftObjectPtr<UWorld> GetLevelAtLocation(const FVector& Location);
    void GetAllSublevels(TArray<TSoftObjectPtr<UWorld>>& Sublevels);
    float GetActorTimeSinceCreation(const class AActor* Actor);
    bool FindLatestLevelPlayerIsIn(class AAbioticCharacter* Player, TSoftObjectPtr<UWorld>& Level);
    bool FindDeployableID(FString AssetID, TSoftObjectPtr<AActor>& Deployable);
    bool AreLevelsLoaded(const TArray<class AAbioticLevelStreamingVolume*>& LevelVolumes, const TSoftObjectPtr<UWorld>& OwningLevel);
    void AddPlayerDeployable(class AActor* Deployable);
    void AddDeployableID(FString AssetID, TSoftObjectPtr<AActor> Deployable);
    void AddCachedCharacter(class AActor* Character);
}; // Size: 0x138

class ULevelStreamingCustom : public UBlueprintFunctionLibrary
{

    class ULevelStreaming* UnloadStreamLevel(const class UObject* WorldContextObject, FString LevelName, bool bShouldBlockOnUnload, bool& bSuccess, bool& bNotLoaded);
    void SetLoadlLevelStreamVisibility(const class UObject* WorldContextObject, FString LevelName, bool bShown, bool& bSuccess);
    class ULevelStreaming* LoadStreamLevel(const class UObject* WorldContextObject, FString LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool& bSuccess, bool& bAlreadyLoaded);
    bool IsLocationInsideAnyLoadedLevelStreamingVolume(const class UObject* WorldContextObject, FVector Location);
    void GetWorldLevels(const class UObject* WorldContextObject, TArray<class ULevelStreaming*>& NamesOfWorldLevels);
    class ULevelStreaming* GetStreamingLevel(const class UObject* WorldContextObject, FString LevelName);
    void GetNamesOfWorldLevels(const class UObject* WorldContextObject, TArray<FString>& NamesOfWorldLevels);
    void GetAllActorsOfClassInLevel(const class UObject* WorldContextObject, FString LevelName, TSubclassOf<class AActor> ActorClass, TArray<class AActor*>& OutActors);
    void GetAllActorsInLevel(const class UObject* WorldContextObject, FString LevelName, TArray<class AActor*>& OutActors);
    FString GetActorLevelName(const class UObject* WorldContextObject, class AActor* Actor);
}; // Size: 0x28

class UNPCConversationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FNPCConversationRowHandle MakeNPCConversationRowHandle(const FName RowName);
    FNPCConversationRowHandle MakeLiteralNPCConversationRowHandle(FNPCConversationRowHandle RowHandle);
    void GetNPCConversationRow(FNPCConversationRowHandle RowHandle, FNPCConversation& Data, ERowValid& ReturnPath);
    void GetAllNPCConversationRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCConversationRowHandles(TArray<FNPCConversationRowHandle>& OutRowHandles);
    bool Equal_NPCConversationRowHandle(FNPCConversationRowHandle A, FNPCConversationRowHandle B);
    bool DoesNPCConversationRowExist(FName RowName);
    FName BreakNPCConversationRowHandle(const FNPCConversationRowHandle RowHandle);
}; // Size: 0x28

class UNPCVoiceHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FNPCVoiceRowHandle MakeNPCVoiceRowHandle(const FName RowName);
    FNPCVoiceRowHandle MakeLiteralNPCVoiceRowHandle(FNPCVoiceRowHandle RowHandle);
    void GetNPCVoiceRow(FNPCVoiceRowHandle RowHandle, FNPCVoice& Data, ERowValid& ReturnPath);
    void GetAllNPCVoiceRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCVoiceRowHandles(TArray<FNPCVoiceRowHandle>& OutRowHandles);
    bool Equal_NPCVoiceRowHandle(FNPCVoiceRowHandle A, FNPCVoiceRowHandle B);
    bool DoesNPCVoiceRowExist(FName RowName);
    FName BreakNPCVoiceRowHandle(const FNPCVoiceRowHandle RowHandle);
}; // Size: 0x28

class UPaintedDeployableHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FPaintedDeployableRowHandle MakePaintedDeployableRowHandle(const FName RowName);
    FPaintedDeployableRowHandle MakeLiteralPaintedDeployableRowHandle(FPaintedDeployableRowHandle RowHandle);
    void GetPaintedDeployableRow(FPaintedDeployableRowHandle RowHandle, FPaintedDeployable& Data, ERowValid& ReturnPath);
    void GetAllPaintedDeployableRowNames(TArray<FName>& OutRowNames);
    void GetAllPaintedDeployableRowHandles(TArray<FPaintedDeployableRowHandle>& OutRowHandles);
    bool Equal_PaintedDeployableRowHandle(FPaintedDeployableRowHandle A, FPaintedDeployableRowHandle B);
    bool DoesPaintedDeployableRowExist(FName RowName);
    FName BreakPaintedDeployableRowHandle(const FPaintedDeployableRowHandle RowHandle);
}; // Size: 0x28

class UPlantHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FPlantRowHandle MakePlantRowHandle(const FName RowName);
    FPlantRowHandle MakeLiteralPlantRowHandle(FPlantRowHandle RowHandle);
    void GetPlantRow(FPlantRowHandle RowHandle, FPlantData& Data, ERowValid& ReturnPath);
    void GetAllPlantRowNames(TArray<FName>& OutRowNames);
    void GetAllPlantRowHandles(TArray<FPlantRowHandle>& OutRowHandles);
    bool Equal_PlantRowHandle(FPlantRowHandle A, FPlantRowHandle B);
    bool DoesPlantRowExist(FName RowName);
    FName BreakPlantRowHandle(const FPlantRowHandle RowHandle);
}; // Size: 0x28

class UPlayerCharacterVoiceDataAsset : public UPrimaryDataAsset
{
    FText DisplayName;                                                                // 0x0030 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0040 (size: 0x10)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0050 (size: 0x28)
    TArray<TSoftObjectPtr<UDialogueWave>> SitExhaleLines;                             // 0x0078 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> PainGruntLines;                             // 0x0088 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> PainYellLines;                              // 0x0098 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> PainYellStopLines;                          // 0x00A8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ScreamLines;                                // 0x00B8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DownedLines;                                // 0x00C8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DeathLines;                                 // 0x00D8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DeathFallingLines;                          // 0x00E8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> CallHelpLines;                              // 0x00F8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> RevivedLines;                               // 0x0108 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ReliefLines;                                // 0x0118 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> TiredLines;                                 // 0x0128 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> SleepyLines;                                // 0x0138 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ExhaustedLines;                             // 0x0148 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> SleepStartLines;                            // 0x0158 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> WakeUpBadLines;                             // 0x0168 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> WakeUpGoodLines;                            // 0x0178 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DryMouthLines;                              // 0x0188 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ThirstLines;                                // 0x0198 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ParchedLines;                               // 0x01A8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> BreathingLightLines;                        // 0x01B8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> BreathingMediumLines;                       // 0x01C8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> BreathingHeavyLines;                        // 0x01D8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> InsaneLines;                                // 0x01E8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> PeckishLines;                               // 0x01F8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> HungryLines;                                // 0x0208 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> StarvingLines;                              // 0x0218 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> EatingLines;                                // 0x0228 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ToiletSoonLines;                            // 0x0238 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ToiletUrgentLines;                          // 0x0248 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ToiletReliefLines;                          // 0x0258 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ChillyLines;                                // 0x0268 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ColdLines;                                  // 0x0278 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> HypothermiaLines;                           // 0x0288 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> WarmLines;                                  // 0x0298 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> HotLines;                                   // 0x02A8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> HeatstrokeLines;                            // 0x02B8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> SickLines;                                  // 0x02C8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> VomitLines;                                 // 0x02D8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> CuriousLines;                               // 0x02E8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> CraftingLines;                              // 0x02F8 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ProximityQuestionLines;                     // 0x0308 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ProximityAnswerLines;                       // 0x0318 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ToiletQuestionLines;                        // 0x0328 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ToiletAnswerLines;                          // 0x0338 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> ContinenceLines;                            // 0x0348 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> FumbleLines;                                // 0x0358 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> LootingOwnCorpseLines;                      // 0x0368 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> StunnedLines;                               // 0x0378 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DeathRattledLines;                          // 0x0388 (size: 0x10)
    TArray<TSoftObjectPtr<UDialogueWave>> DeathExplosionLines;                        // 0x0398 (size: 0x10)

    void GetVoiceLinesFromType(EVoiceLineType VoiceLineType, TArray<TSoftObjectPtr<UDialogueWave>>& VoiceLines);
    void GetRandomVoiceLineFromType(EVoiceLineType VoiceLineType, TSoftObjectPtr<UDialogueWave>& VoiceLine);
}; // Size: 0x3A8

class UPlayerStatsSave : public USaveGame
{
    TMap<FName, int32> Stats_Int;                                                     // 0x0028 (size: 0x50)
    TMap<FName, float> Stats_Float;                                                   // 0x0078 (size: 0x50)
    TArray<FName> Achievements;                                                       // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class UQuestHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FQuestRowHandle MakeQuestRowHandle(const FName RowName);
    FQuestRowHandle MakeLiteralQuestRowHandle(FQuestRowHandle RowHandle);
    void GetQuestRow(FQuestRowHandle RowHandle, FQuestData& Data, ERowValid& ReturnPath);
    void GetAllQuestRowNames(TArray<FName>& OutRowNames);
    void GetAllQuestRowHandles(TArray<FQuestRowHandle>& OutRowHandles);
    bool Equal_QuestRowHandle(FQuestRowHandle A, FQuestRowHandle B);
    bool DoesQuestRowExist(FName RowName);
    FName BreakQuestRowHandle(const FQuestRowHandle RowHandle);
}; // Size: 0x28

class URealtimeMultiplaySubsystem : public UGameInstanceSubsystem
{

    void SetPlayerAcivelyPlaying(bool bIsActive);
    void EvaluateMultiplayFeature();
}; // Size: 0x40

class URemoteConsoleSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x30

class URowHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool IsRowHandleValid(const FRowHandle& RowHandle);
    bool IsRowHandleNull(const FRowHandle& RowHandle);
}; // Size: 0x28

class USandboxOptionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FSandboxOptionRowHandle MakeSandboxOptionRowHandle(const FName RowName);
    FSandboxOptionRowHandle MakeLiteralSandboxOptionRowHandle(FSandboxOptionRowHandle RowHandle);
    void GetSandboxOptionRow(FSandboxOptionRowHandle RowHandle, FSandboxOption& Data, ERowValid& ReturnPath);
    void GetAllSandboxOptionRowNames(TArray<FName>& OutRowNames);
    void GetAllSandboxOptionRowHandles(TArray<FSandboxOptionRowHandle>& OutRowHandles);
    bool Equal_SandboxOptionRowHandle(FSandboxOptionRowHandle A, FSandboxOptionRowHandle B);
    bool DoesSandboxOptionRowExist(FName RowName);
    FName BreakSandboxOptionRowHandle(const FSandboxOptionRowHandle RowHandle);
}; // Size: 0x28

class USandboxOptionSubsystem : public UWorldSubsystem
{

    bool WriteSandboxSettingsToFile(FString FilePath, const TMap<class FName, class FString>& Settings);
    bool ReadSandboxSettingsFromFile(FString FilePath, TMap<class FName, class FString>& OutSettings);
    TMap<class FName, class FString> MergeLoadedSandboxSettingsWithDefault(const TMap<class FName, class FString>& InSettings, EModifiedRuleset& OutModifiedRuleset);
    bool HasSandboxOptionsInitialized(const class UObject* WorldContextObject);
    FString GetSandboxStringValue(FString InValue, const FSandboxOption& SandboxData);
    FString GetSandboxOption_String(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    int32 GetSandboxOption_Int(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    float GetSandboxOption_Float(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    bool GetSandboxOption_Bool(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    TMap<class FName, class FString> GetDefaultSandboxSettings();
}; // Size: 0x30

class USaveCurrentWorld : public UBlueprintAsyncActionBase
{
    FSaveCurrentWorldSaveWorld SaveWorld;                                             // 0x0030 (size: 0x10)
    void SaveCurrentWorldOutputPin(bool bSuccess);
    TArray<class UAbioticSave*> WorldSaveDuplicates;                                  // 0x0068 (size: 0x10)
    TArray<class UAbioticSave*> PlayerSaveDuplicates;                                 // 0x0078 (size: 0x10)

    class USaveCurrentWorld* SaveCurrentWorld(const class UObject* WorldContextObject);
}; // Size: 0x88

class USaveWorldBackup : public UBlueprintAsyncActionBase
{
    FSaveWorldBackupSaveWorld SaveWorld;                                              // 0x0030 (size: 0x10)
    void SaveWorldBackupOutputPin(bool bSuccess);

    class USaveWorldBackup* SaveWorldBackup(const class UObject* WorldContextObject, FString WorldSaveName);
}; // Size: 0x78

class USessionResultItem : public UObject
{
    FBlueprintSessionResult SessionResult;                                            // 0x0028 (size: 0x120)
    int32 Ping;                                                                       // 0x0148 (size: 0x4)
    bool bDedicated;                                                                  // 0x014C (size: 0x1)
    bool bLocked;                                                                     // 0x014D (size: 0x1)
    int32 PlayerCount;                                                                // 0x0150 (size: 0x4)
    int32 MaxPlayers;                                                                 // 0x0154 (size: 0x4)
    FName StoryProgressionRow;                                                        // 0x0158 (size: 0x8)
    int32 ModifiedRuleset;                                                            // 0x0160 (size: 0x4)
    FString ServerName;                                                               // 0x0168 (size: 0x10)

    TArray<class USessionResultItem*> GetSessionResultEntries(const TArray<FBlueprintSessionResult>& Results);
    TArray<class USessionResultItem*> FilterSessionResultEntries(const TArray<class USessionResultItem*>& Results, FString FilterString, EFilterState Dedicated, EFilterState Locked, EFilterState Empty, EModifiedRuleset Ruleset);
}; // Size: 0x178

class USetBonusHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FSetBonusRowHandle MakeSetBonusRowHandle(const FName RowName);
    FSetBonusRowHandle MakeLiteralSetBonusRowHandle(FSetBonusRowHandle RowHandle);
    void GetSetBonusRow(FSetBonusRowHandle RowHandle, FSetBonus& Data, ERowValid& ReturnPath);
    void GetAllSetBonusRowNames(TArray<FName>& OutRowNames);
    void GetAllSetBonusRowHandles(TArray<FSetBonusRowHandle>& OutRowHandles);
    bool Equal_SetBonusRowHandle(FSetBonusRowHandle A, FSetBonusRowHandle B);
    bool DoesSetBonusRowExist(FName RowName);
    FName BreakSetBonusRowHandle(const FSetBonusRowHandle RowHandle);
}; // Size: 0x28

class USkillHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FSkillRowHandle MakeSkillRowHandle(const FName RowName);
    FSkillRowHandle MakeLiteralSkillRowHandle(FSkillRowHandle RowHandle);
    void GetSkillRow(FSkillRowHandle RowHandle, FSkillData& Data, ERowValid& ReturnPath);
    void GetAllSkillRowNames(TArray<FName>& OutRowNames);
    void GetAllSkillRowHandles(TArray<FSkillRowHandle>& OutRowHandles);
    bool Equal_SkillRowHandle(FSkillRowHandle A, FSkillRowHandle B);
    bool DoesSkillRowExist(FName RowName);
    FName BreakSkillRowHandle(const FSkillRowHandle RowHandle);
}; // Size: 0x28

class USkillPerkHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FSkillPerkRowHandle MakeSkillPerkRowHandle(const FName RowName);
    FSkillPerkRowHandle MakeLiteralSkillPerkRowHandle(FSkillPerkRowHandle RowHandle);
    void GetSkillPerkRow(FSkillPerkRowHandle RowHandle, FSkillPerk& Data, ERowValid& ReturnPath);
    void GetAllSkillPerkRowNames(TArray<FName>& OutRowNames);
    void GetAllSkillPerkRowHandles(TArray<FSkillPerkRowHandle>& OutRowHandles);
    bool Equal_SkillPerkRowHandle(FSkillPerkRowHandle A, FSkillPerkRowHandle B);
    bool DoesSkillPerkRowExist(FName RowName);
    FName BreakSkillPerkRowHandle(const FSkillPerkRowHandle RowHandle);
}; // Size: 0x28

class USplineMovementComponent : public UActorComponent
{
    float Speed;                                                                      // 0x00A8 (size: 0x4)
    float CurrentDistance;                                                            // 0x00AC (size: 0x4)
    bool bIsTransitioning;                                                            // 0x00B0 (size: 0x1)
    TArray<class USplineComponent*> SplineComponents;                                 // 0x00B8 (size: 0x10)
    class USplineComponent* SplineComponent;                                          // 0x00C8 (size: 0x8)
    class USplineComponent* TempSplineComponent;                                      // 0x00D0 (size: 0x8)
    class UCharacterMovementComponent* CharacterMovementComponent;                    // 0x00D8 (size: 0x8)
    FVector TargetPosition;                                                           // 0x00E0 (size: 0x18)

    bool SetCurrentSpline(class USplineComponent* NewSpline);
    void SelectRandomSpline();
}; // Size: 0x150

class UStatModifierHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FStatModifierRowHandle MakeStatModifierRowHandle(const FName RowName);
    FStatModifierRowHandle MakeLiteralStatModifierRowHandle(FStatModifierRowHandle RowHandle);
    void GetStatModifierRow(FStatModifierRowHandle RowHandle, FStatModifier& Data, ERowValid& ReturnPath);
    void GetAllStatModifierRowNames(TArray<FName>& OutRowNames);
    void GetAllStatModifierRowHandles(TArray<FStatModifierRowHandle>& OutRowHandles);
    bool Equal_StatModifierRowHandle(FStatModifierRowHandle A, FStatModifierRowHandle B);
    bool DoesStatModifierRowExist(FName RowName);
    FName BreakStatModifierRowHandle(const FStatModifierRowHandle RowHandle);
}; // Size: 0x28

class UThermalEmitterComponent : public USceneComponent
{
    int32 ThermalTemperature;                                                         // 0x0238 (size: 0x4)
    bool bStartActive;                                                                // 0x023C (size: 0x1)
    bool bEmitterActive;                                                              // 0x023D (size: 0x1)
    TArray<class UPrimitiveComponent*> OverlapPrimitives;                             // 0x0240 (size: 0x10)

    void SetEmitterActive(bool bNewActive);
    void OnRep_EmitterActive();
    void OnOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void OnOverlapBegin(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
}; // Size: 0x250

class UThermalReceiverComponent : public UActorComponent
{
    bool bStartActive;                                                                // 0x00A8 (size: 0x1)
    float AmbientTemperature;                                                         // 0x00AC (size: 0x4)
    float AdditionalTemperature;                                                      // 0x00B0 (size: 0x4)
    float CurrentTemperature;                                                         // 0x00B4 (size: 0x4)
    float TargetTemperature;                                                          // 0x00B8 (size: 0x4)
    float TemperatureTickRate;                                                        // 0x00BC (size: 0x4)
    float TemperatureAdjustScale;                                                     // 0x00C0 (size: 0x4)
    float MinimumTempSpeed;                                                           // 0x00C4 (size: 0x4)
    TArray<class UThermalEmitterComponent*> OverlappingEmitters;                      // 0x00C8 (size: 0x10)
    FThermalReceiverComponentOnCurrentTemperatureUpdated OnCurrentTemperatureUpdated; // 0x00D8 (size: 0x10)
    void CurrentTemperatureUpdated(float NewTemperature);
    FTimerHandle OverlapTimerHandle;                                                  // 0x00E8 (size: 0x8)
    FTimerHandle TemperatureTimerHandle;                                              // 0x00F0 (size: 0x8)

    void UpdateTemperature();
    void SetReceiverActive(bool bNewActive);
    void SanitizeOverlappingEmitters();
    void OnRep_CurrentTemperature();
}; // Size: 0xF8

class UTickManagerSubsystem : public UWorldSubsystem
{
    TArray<FManagedTickObject> TrackedActors;                                         // 0x0060 (size: 0x10)
    TArray<FManagedTickObject> TrackedComponents;                                     // 0x0070 (size: 0x10)

    void UpdateManagedComponentTickState(class UActorComponent* TrackedComponent, bool bTickEnabled);
    void UpdateManagedActorTickState(class AActor* TrackedActor, bool bTickEnabled);
    void RemoveManagedComponent(class UActorComponent* TrackedComponent);
    void RemoveManagedActor(class AActor* TrackedActor);
    void AddManagedComponent(class UActorComponent* TrackedComponent);
    void AddManagedActor(class AActor* TrackedActor);
}; // Size: 0x80

class UTramMovementComponent : public UMovementComponent
{
    bool bStopped;                                                                    // 0x0110 (size: 0x1)

}; // Size: 0x118

class UUIKeybindActionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FUIKeybindActionRowHandle MakeUIKeybindActionRowHandle(const FName RowName);
    FUIKeybindActionRowHandle MakeLiteralUIKeybindActionRowHandle(FUIKeybindActionRowHandle RowHandle);
    void GetUIKeybindActionRow(FUIKeybindActionRowHandle RowHandle, FUIKeybindAction& Data, ERowValid& ReturnPath);
    void GetAllUIKeybindActionRowNames(TArray<FName>& OutRowNames);
    void GetAllUIKeybindActionRowHandles(TArray<FUIKeybindActionRowHandle>& OutRowHandles);
    bool Equal_UIKeybindActionRowHandle(FUIKeybindActionRowHandle A, FUIKeybindActionRowHandle B);
    bool DoesUIKeybindActionRowExist(FName RowName);
    FName BreakUIKeybindActionRowHandle(const FUIKeybindActionRowHandle RowHandle);
}; // Size: 0x28

class UUIPopupHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FUIPopupRowHandle MakeUIPopupRowHandle(const FName RowName);
    FUIPopupRowHandle MakeLiteralUIPopupRowHandle(FUIPopupRowHandle RowHandle);
    void GetUIPopupRow(FUIPopupRowHandle RowHandle, FUIPopup& Data, ERowValid& ReturnPath);
    void GetAllUIPopupRowNames(TArray<FName>& OutRowNames);
    void GetAllUIPopupRowHandles(TArray<FUIPopupRowHandle>& OutRowHandles);
    bool Equal_UIPopupRowHandle(FUIPopupRowHandle A, FUIPopupRowHandle B);
    bool DoesUIPopupRowExist(FName RowName);
    FName BreakUIPopupRowHandle(const FUIPopupRowHandle RowHandle);
}; // Size: 0x28

class UUnderwaterPostProcessComponent : public USceneComponent
{
    FPostProcessSettings Settings;                                                    // 0x0240 (size: 0x6F0)
    float Priority;                                                                   // 0x0930 (size: 0x4)
    float BlendWeight;                                                                // 0x0934 (size: 0x4)
    uint8 bEnabled;                                                                   // 0x0938 (size: 0x1)

    void AddOrUpdateBlendable(TScriptInterface<class IBlendableInterface> InBlendableObject, float InWeight);
}; // Size: 0x940

class UVideoSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FVideoSettingRowHandle MakeVideoSettingRowHandle(const FName RowName);
    FVideoSettingRowHandle MakeLiteralVideoSettingRowHandle(FVideoSettingRowHandle RowHandle);
    void GetVideoSettingRow(FVideoSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllVideoSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllVideoSettingRowHandles(TArray<FVideoSettingRowHandle>& OutRowHandles);
    bool Equal_VideoSettingRowHandle(FVideoSettingRowHandle A, FVideoSettingRowHandle B);
    bool DoesVideoSettingRowExist(FName RowName);
    FName BreakVideoSettingRowHandle(const FVideoSettingRowHandle RowHandle);
}; // Size: 0x28

class UWeatherEventHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FWeatherEventRowHandle MakeWeatherEventRowHandle(const FName RowName);
    FWeatherEventRowHandle MakeLiteralWeatherEventRowHandle(FWeatherEventRowHandle RowHandle);
    void GetWeatherEventRow(FWeatherEventRowHandle RowHandle, FWeatherEvent& Data, ERowValid& ReturnPath);
    void GetAllWeatherEventRowNames(TArray<FName>& OutRowNames);
    void GetAllWeatherEventRowHandles(TArray<FWeatherEventRowHandle>& OutRowHandles);
    bool Equal_WeatherEventRowHandle(FWeatherEventRowHandle A, FWeatherEventRowHandle B);
    bool DoesWeatherEventRowExist(FName RowName);
    FName BreakWeatherEventRowHandle(const FWeatherEventRowHandle RowHandle);
}; // Size: 0x28

class UWorldEntryItem : public UObject
{
    FString FolderName;                                                               // 0x0028 (size: 0x10)
    FString WorldFolder;                                                              // 0x0038 (size: 0x10)
    TArray<FString> SaveFilePaths;                                                    // 0x0048 (size: 0x10)
    FDateTime LastPlayed;                                                             // 0x0058 (size: 0x8)
    class UAbioticSave* MetaDataSave;                                                 // 0x0068 (size: 0x8)
    bool bIsBackup;                                                                   // 0x0070 (size: 0x1)
    int32 BackupIndex;                                                                // 0x0074 (size: 0x4)

    void ValidateFilesForCorruption();
    TArray<class UWorldEntryItem*> SortWorldEntries(const TArray<class UWorldEntryItem*> InWorldEntries);
    bool PerformVersionUpgrade();
    bool PerformCompressionUpgrade();
    int32 GetWorldEntriesCount(FString WorldFolder, FString LevelFolder, bool bSearchBackups);
    TArray<class UWorldEntryItem*> GetWorldEntries(FString WorldFolder, FString LevelFolder, bool bSearchBackups);
    ESaveIntegrityState GetSaveIntegrityState();
    class UAbioticSave* GetMetaDataSave();
}; // Size: 0x78

class UWorldFlagHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FWorldFlagRowHandle MakeWorldFlagRowHandle(const FName RowName);
    FWorldFlagRowHandle MakeLiteralWorldFlagRowHandle(FWorldFlagRowHandle RowHandle);
    void GetWorldFlagRow(FWorldFlagRowHandle RowHandle, FWorldFlag& Data, ERowValid& ReturnPath);
    void GetAllWorldFlagRowNames(TArray<FName>& OutRowNames);
    void GetAllWorldFlagRowHandles(TArray<FWorldFlagRowHandle>& OutRowHandles);
    bool Equal_WorldFlagRowHandle(FWorldFlagRowHandle A, FWorldFlagRowHandle B);
    bool DoesWorldFlagRowExist(FName RowName);
    FName BreakWorldFlagRowHandle(const FWorldFlagRowHandle RowHandle);
}; // Size: 0x28

class UWorldFlagSubsystem : public UWorldSubsystem
{
    FWorldFlagSubsystemOnWorldFlagUpdated OnWorldFlagUpdated;                         // 0x0030 (size: 0x10)
    void WorldFlagUpdated();
    FWorldFlagSubsystemOnWorldFlagsLoaded OnWorldFlagsLoaded;                         // 0x0040 (size: 0x10)
    void WorldFlagsLoaded();

    void SetWorldFlag(FWorldFlagRowHandle WorldFlag, bool bState, class UObject* Context);
    void LoadWorldFlags(TArray<FName> FlagArray, bool bForce);
    bool HasWorldFlagsLoaded();
    bool HasWorldFlag(const class UObject* WorldContextObject, FWorldFlagRowHandle WorldFlag);
    bool GetWorldFlags(TArray<FName>& FlagArray);
    bool GetWorldFlagRows(TArray<FWorldFlagRowHandle>& FlagArray);
    bool FindCurrentQuest(FQuestRowHandle& QuestRowHandle);
}; // Size: 0x58

class UWorldFlagTriggerHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    FWorldFlagTriggerRowHandle MakeWorldFlagTriggerRowHandle(const FName RowName);
    FWorldFlagTriggerRowHandle MakeLiteralWorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle RowHandle);
    void GetWorldFlagTriggerRow(FWorldFlagTriggerRowHandle RowHandle, FWorldFlagTrigger& Data, ERowValid& ReturnPath);
    void GetAllWorldFlagTriggerRowNames(TArray<FName>& OutRowNames);
    void GetAllWorldFlagTriggerRowHandles(TArray<FWorldFlagTriggerRowHandle>& OutRowHandles);
    bool Equal_WorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle A, FWorldFlagTriggerRowHandle B);
    bool DoesWorldFlagTriggerRowExist(FName RowName);
    FName BreakWorldFlagTriggerRowHandle(const FWorldFlagTriggerRowHandle RowHandle);
}; // Size: 0x28

class UWorldSaveFunctionLibrary : public UBlueprintFunctionLibrary
{

    void VerifySaveBackups(FString WorldSaveName, bool bDeleteCorrupt);
    bool RestoreSaveBackup(FString WorldSaveName, FString BackupFolderName, FString& ErrorString);
    bool GetNewestSaveBackup(FString WorldName, int32& OutIndex);
    bool GetMetaDataTimestampForSaveBackup(FString WorldName, int32 BackupIndex, class UAbioticSave*& OutSave, FDateTime& OutTimestamp);
    bool GetMetaDataTimestampForSave(FString WorldName, class UAbioticSave*& OutSave, FDateTime& OutTimestamp);
    bool DoesSaveBackupIndexExist(FString WorldSaveName, int32 Index);
    bool DoesAnySaveBackupExist(FString WorldSaveName);
}; // Size: 0x28

#endif
