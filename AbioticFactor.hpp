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
    TArray<AAbioticCharacter*> SpawnedAI;                                             // 0x0000 (size: 0x10)
    TArray<AActor*> NearbyPlayersOnDeath;                                             // 0x0010 (size: 0x10)
    float LastTotalCooldown;                                                          // 0x0020 (size: 0x4)
    float TimeLastCooldownStarted;                                                    // 0x0024 (size: 0x4)
    int32 LastDayOnCooldown;                                                          // 0x0028 (size: 0x4)
    bool bShouldOnlySpawnOnce;                                                        // 0x002C (size: 0x1)
    bool bHasBeenEncounteredOnce;                                                     // 0x002D (size: 0x1)

}; // Size: 0x30

struct FAbioticBlockedPlayer
{
    FString playerName;                                                               // 0x0000 (size: 0x10)
    FString PlayerId;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAbioticButtonSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    FString ButtonID;                                                                 // 0x0020 (size: 0x10)
    bool bPressedOnce;                                                                // 0x0030 (size: 0x1)
    bool bEnabled;                                                                    // 0x0031 (size: 0x1)
    bool bActivated;                                                                  // 0x0032 (size: 0x1)
    bool bNoReset;                                                                    // 0x0033 (size: 0x1)

}; // Size: 0x38

struct FAbioticCharacterSaveData
{
    bool bCompletedIntro;                                                             // 0x0000 (size: 0x1)
    FVector LastSafeWorldLocation;                                                    // 0x0008 (size: 0x18)
    FString LastSafeWorldGUID;                                                        // 0x0020 (size: 0x10)
    FRotator LastControlRotation;                                                     // 0x0030 (size: 0x18)
    TArray<FAbioticInventoryItemSlot> EquipmentInventory;                             // 0x0048 (size: 0x10)
    TArray<FAbioticInventoryItemSlot> HotbarInventory;                                // 0x0058 (size: 0x10)
    TArray<FAbioticInventoryItemSlot> Inventory;                                      // 0x0068 (size: 0x10)
    TArray<FAbioticInventoryItemSlot> TransmogInventory;                              // 0x0078 (size: 0x10)
    TArray<bool> TransmogVisibility;                                                  // 0x0088 (size: 0x10)
    TArray<bool> TransmogDisabled;                                                    // 0x0098 (size: 0x10)
    TArray<bool> FavoritedSlots;                                                      // 0x00A8 (size: 0x10)
    TArray<FAnyTraitRowHandle> Traits;                                                // 0x00B8 (size: 0x10)
    FPhDRowHandle PhD;                                                                // 0x00C8 (size: 0x10)
    TArray<FAbioticCharacterSkill> Skills;                                            // 0x00D8 (size: 0x10)
    FBodyLimbHealth CharacterHealth;                                                  // 0x00E8 (size: 0x30)
    FAbioticCharacterStatsSave SurvivalStats;                                         // 0x0118 (size: 0x40)
    TArray<FBuffDebuffEntry> ActiveBuffs;                                             // 0x0158 (size: 0x10)
    TArray<FName> ItemsPickedUp;                                                      // 0x0168 (size: 0x10)
    TArray<FName> RecipesUnlocked;                                                    // 0x0178 (size: 0x10)
    TArray<FName> RecipesRequiringResearch;                                           // 0x0188 (size: 0x10)
    TArray<FName> CraftedItems;                                                       // 0x0198 (size: 0x10)
    TArray<FName> NewestRecipes;                                                      // 0x01A8 (size: 0x10)
    TArray<FName> ItemsDistilled;                                                     // 0x01B8 (size: 0x10)
    TArray<FName> MapsUnlocked;                                                       // 0x01C8 (size: 0x10)
    FAbioticCompendiumSave Compendium;                                                // 0x01D8 (size: 0xD0)
    TSoftObjectPtr<class AActor> CurrentBed;                                          // 0x02A8 (size: 0x28)
    bool bCrouching;                                                                  // 0x02D0 (size: 0x1)
    int32 LastHotbarSelection;                                                        // 0x02D4 (size: 0x4)
    int32 CurrentMoney;                                                               // 0x02D8 (size: 0x4)
    FName TerminalRespawnID;                                                          // 0x02DC (size: 0x8)

}; // Size: 0x2E8

struct FAbioticCharacterSkill
{
    FSkillRowHandle Skill;                                                            // 0x0000 (size: 0x10)
    float CurrentXP;                                                                  // 0x0010 (size: 0x4)
    float XPMultiplier;                                                               // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FAbioticCharacterStatsSave
{
    double Hunger;                                                                    // 0x0000 (size: 0x8)
    double Thirst;                                                                    // 0x0008 (size: 0x8)
    double Sanity;                                                                    // 0x0010 (size: 0x8)
    double Fatigue;                                                                   // 0x0018 (size: 0x8)
    double Continence;                                                                // 0x0020 (size: 0x8)
    double IncomingContinence;                                                        // 0x0028 (size: 0x8)
    double Radiation;                                                                 // 0x0030 (size: 0x8)
    double BodyTemperature;                                                           // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FAbioticCompendiumSave
{
    TArray<FName> EmailSections;                                                      // 0x0000 (size: 0x10)
    TArray<FName> NarrativeSections;                                                  // 0x0010 (size: 0x10)
    TArray<FName> ExplorationSections;                                                // 0x0020 (size: 0x10)
    TArray<FName> Fish;                                                               // 0x0030 (size: 0x10)
    TArray<FName> Kills;                                                              // 0x0040 (size: 0x10)
    TArray<FCompendiumKillCount> KillCounts;                                          // 0x0050 (size: 0x10)
    TArray<FName> Unread;                                                             // 0x0060 (size: 0x10)
    TArray<FName> FishUnread;                                                         // 0x0070 (size: 0x10)
    TArray<FName> JournalUnread;                                                      // 0x0080 (size: 0x10)
    TArray<FName> JournalEntries;                                                     // 0x0090 (size: 0x10)
    TArray<FName> EmailsRead;                                                         // 0x00A0 (size: 0x10)
    FQuestLineRowHandle TrackedQuestLine;                                             // 0x00B0 (size: 0x10)
    FQuestRowHandle ServerQuest;                                                      // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FAbioticConsumable
{
    double TimeToConsume;                                                             // 0x0000 (size: 0x8)
    double HungerFill;                                                                // 0x0008 (size: 0x8)
    double ThirstFill;                                                                // 0x0010 (size: 0x8)
    double FatigueFill;                                                               // 0x0018 (size: 0x8)
    double ContinenceFill;                                                            // 0x0020 (size: 0x8)
    double SanityFill;                                                                // 0x0028 (size: 0x8)
    double TemperatureChange;                                                         // 0x0030 (size: 0x8)
    double RadiationChange;                                                           // 0x0038 (size: 0x8)
    double HealthChange;                                                              // 0x0040 (size: 0x8)
    double ArmorChange;                                                               // 0x0048 (size: 0x8)
    TArray<FBuffDebuffRowHandle> BuffsToAdd;                                          // 0x0050 (size: 0x10)
    TArray<FBuffDebuffRowHandle> BuffsToRemove;                                       // 0x0060 (size: 0x10)
    FGameplayTag ConsumableTag;                                                       // 0x0070 (size: 0x8)
    FString ConsumedAction;                                                           // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FAbioticCookable
{
    bool IsCookware;                                                                  // 0x0000 (size: 0x1)
    bool CanBeCooked;                                                                 // 0x0001 (size: 0x1)
    FGlobalItemRowHandle CookedItem;                                                  // 0x0008 (size: 0x10)
    FGlobalItemRowHandle BurnedItem;                                                  // 0x0018 (size: 0x10)
    FItemRewardRowHandle PortionItem;                                                 // 0x0028 (size: 0x18)
    double TimeToCookBaseline;                                                        // 0x0040 (size: 0x8)
    double TimeToBurnBaseline;                                                        // 0x0048 (size: 0x8)
    FPlantRowHandle FarmableDataRow;                                                  // 0x0050 (size: 0x10)
    bool RequiresBaking;                                                              // 0x0060 (size: 0x1)
    int32 StartingPortions;                                                           // 0x0064 (size: 0x4)
    bool CanItemDecay;                                                                // 0x0068 (size: 0x1)
    EInternalTemperature ItemDecayTemperature;                                        // 0x0069 (size: 0x1)
    FGlobalItemRowHandle DecayToItem;                                                 // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FAbioticCookingSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    FGlobalItemRowHandle OriginalItem;                                                // 0x0020 (size: 0x10)
    FGlobalItemRowHandle CookwareItem;                                                // 0x0030 (size: 0x10)
    double TimeToCook;                                                                // 0x0040 (size: 0x8)
    double TimeToBurn;                                                                // 0x0048 (size: 0x8)
    double TimeToIgnite;                                                              // 0x0050 (size: 0x8)
    bool bShowPanMesh;                                                                // 0x0058 (size: 0x1)
    FString ChefID;                                                                   // 0x0060 (size: 0x10)
    bool bCookware;                                                                   // 0x0070 (size: 0x1)
    FGuid CookingDelayGUID;                                                           // 0x0074 (size: 0x10)
    bool bCanCookSoup;                                                                // 0x0084 (size: 0x1)
    bool bStartCookingSoup;                                                           // 0x0085 (size: 0x1)
    bool bNewIngredientAdded;                                                         // 0x0086 (size: 0x1)
    ECookingState CookState;                                                          // 0x0087 (size: 0x1)
    ECookingState ChefState;                                                          // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FAbioticCorpseSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    bool bGibbed;                                                                     // 0x0020 (size: 0x1)
    bool bLooted;                                                                     // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FAbioticCustomization : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FString DisplayName;                                                              // 0x0010 (size: 0x10)
    FString DisplayDescription;                                                       // 0x0020 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0030 (size: 0x28)
    TSoftObjectPtr<class UMaterialInterface> Material;                                // 0x0058 (size: 0x28)
    TSoftObjectPtr<class UStaticMesh> StaticMesh;                                     // 0x0080 (size: 0x28)
    TSoftObjectPtr<class USkeletalMesh> SkeletalMesh;                                 // 0x00A8 (size: 0x28)
    TMap<EInventorySlotType, TSoftObjectPtr<class USkeletalMesh>> EquipmentBasedSkeletalMeshes; // 0x00D0 (size: 0x50)
    FGameEntitlementRowHandle DLCRequirement;                                         // 0x0120 (size: 0x10)
    FAchievementRowHandle AchievementRequired;                                        // 0x0130 (size: 0x10)
    bool UnlockedByDefault;                                                           // 0x0140 (size: 0x1)
    FLinearColor ColorA;                                                              // 0x0144 (size: 0x10)
    FLinearColor ColorB;                                                              // 0x0154 (size: 0x10)
    FLinearColor ColorC;                                                              // 0x0164 (size: 0x10)
    ESkinTones SkinTone;                                                              // 0x0174 (size: 0x1)
    FGameplayTagContainer Tags;                                                       // 0x0178 (size: 0x20)

}; // Size: 0x198

struct FAbioticDecalSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    bool bRemoved;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FAbioticDeployableSave
{
    TSoftClassPtr<AActor> DeployableClass;                                            // 0x0000 (size: 0x28)
    FSoftObjectPath ActorPath;                                                        // 0x0028 (size: 0x20)
    FAbioticInventoryChangeableData ChangeableData;                                   // 0x0048 (size: 0x88)
    bool bDestroyed;                                                                  // 0x00D0 (size: 0x1)
    bool bBrokeWhenPackaged;                                                          // 0x00D1 (size: 0x1)
    bool bHasBeenPackaged;                                                            // 0x00D2 (size: 0x1)
    FTransform Transform;                                                             // 0x00E0 (size: 0x60)
    bool bDeployedByPlayer;                                                           // 0x0140 (size: 0x1)
    bool bConstructionMode;                                                           // 0x0141 (size: 0x1)
    double ConstructionLevel;                                                         // 0x0148 (size: 0x8)
    TArray<FAbioticInventorySave> ContainerInventories;                               // 0x0150 (size: 0x10)
    TArray<bool> ActiveSeats;                                                         // 0x0160 (size: 0x10)
    TArray<FAbioticItemProxySave> ItemProxies;                                        // 0x0170 (size: 0x10)
    FString CustomTextDisplay;                                                        // 0x0180 (size: 0x10)
    bool bFoundByPlayer;                                                              // 0x0190 (size: 0x1)
    TArray<FVector> Supports;                                                         // 0x0198 (size: 0x10)
    bool bNoResetVignette;                                                            // 0x01A8 (size: 0x1)
    double CustomSpawnedTime;                                                         // 0x01B0 (size: 0x8)

}; // Size: 0x1C0

struct FAbioticDestructibleSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    bool bBroken;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FAbioticDoorSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    EDoorState DoorState;                                                             // 0x0020 (size: 0x1)
    double DoorRotationRootYaw;                                                       // 0x0028 (size: 0x8)
    bool bOneWayDoorUnlocked;                                                         // 0x0030 (size: 0x1)
    bool bNoReset;                                                                    // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FAbioticDroppedItemSave
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FRotator Rotation;                                                                // 0x0018 (size: 0x18)
    FAbioticInventoryItemSlot Item;                                                   // 0x0030 (size: 0x98)
    bool bNoDespawn;                                                                  // 0x00C8 (size: 0x1)

}; // Size: 0xD0

struct FAbioticElevatorSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    bool bTopOpen;                                                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FAbioticEmail : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText SubjectLineText;                                                            // 0x0010 (size: 0x10)
    TArray<FEmailSection> EmailSections;                                              // 0x0020 (size: 0x10)
    FText FromText_Deprecated;                                                        // 0x0030 (size: 0x10)
    FText EmailText_Deprecated;                                                       // 0x0040 (size: 0x10)
    TArray<FEmailAttachment> Attachments;                                             // 0x0050 (size: 0x10)
    TArray<FJournalEntryRowHandle> JournalEntriesToUnlock;                            // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FAbioticEncounterDirectorSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    int32 LastEncounterDay;                                                           // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FAbioticEquipment
{
    EInventorySlotType EquipSlot;                                                     // 0x0000 (size: 0x1)
    bool CanAutoEquip;                                                                // 0x0001 (size: 0x1)
    int32 ArmorBonus;                                                                 // 0x0004 (size: 0x4)
    int32 HeatResist;                                                                 // 0x0008 (size: 0x4)
    int32 ColdResist;                                                                 // 0x000C (size: 0x4)
    TMap<TSubclassOf<UAbioticDamageType>, double> DamageMitigationType;               // 0x0010 (size: 0x50)
    bool IsContainer;                                                                 // 0x0060 (size: 0x1)
    int32 ContainerCapacity;                                                          // 0x0064 (size: 0x4)
    double ContainerWeightReduction;                                                  // 0x0068 (size: 0x8)
    TSoftObjectPtr<class USoundCue> InventoryPlaceSound;                              // 0x0070 (size: 0x28)
    FSetBonusRowHandle SetBonus;                                                      // 0x0098 (size: 0x10)
    TArray<FBuffDebuffRowHandle> BuffsWhileEquipped;                                  // 0x00A8 (size: 0x10)

}; // Size: 0xB8

struct FAbioticFPAnimation : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    class UAnimSequence* FPArms_Idle;                                                 // 0x0010 (size: 0x8)
    class UAnimSequence* FPArms_Walk;                                                 // 0x0018 (size: 0x8)
    class UAnimMontage* FPArms_UseItem;                                               // 0x0020 (size: 0x8)
    class UAnimMontage* FPArms_BadReload;                                             // 0x0028 (size: 0x8)
    class UAnimMontage* FPArms_Reload;                                                // 0x0030 (size: 0x8)
    class UAnimMontage* FPArms_ExpertReload;                                          // 0x0038 (size: 0x8)
    class UAnimMontage* FPArms_Equip;                                                 // 0x0040 (size: 0x8)
    class UAnimMontage* FPArms_Stow;                                                  // 0x0048 (size: 0x8)
    class UAnimSequence* FPArms_SprintLoop;                                           // 0x0050 (size: 0x8)
    class UAnimMontage* FPArms_EnterSprint;                                           // 0x0058 (size: 0x8)
    class UAnimMontage* FPArms_ExitSprint;                                            // 0x0060 (size: 0x8)
    class UAnimSequence* FPArms_CrouchIdle;                                           // 0x0068 (size: 0x8)
    class UAnimSequence* FPArms_CrouchWalk;                                           // 0x0070 (size: 0x8)
    class UAnimMontage* FPArms_CrouchUseItem;                                         // 0x0078 (size: 0x8)
    class UAnimMontage* FPArms_WindUp;                                                // 0x0080 (size: 0x8)
    class UAnimMontage* FPArms_SecondaryUse;                                          // 0x0088 (size: 0x8)
    class UAnimMontage* FPArms_AimDownSights;                                         // 0x0090 (size: 0x8)
    class UAnimSequence* FPArms_ADSFire;                                              // 0x0098 (size: 0x8)

}; // Size: 0xA0

struct FAbioticGib
{
    bool CanBeGibbed;                                                                 // 0x0000 (size: 0x1)
    float PostDeathDamageToGib;                                                       // 0x0004 (size: 0x4)
    FSalvageRowHandle GibSalvage;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAbioticGlobalUnlocksSave
{
    TSet<FName> GlobalRecipesUnlocked;                                                // 0x0000 (size: 0x50)
    TSet<FName> GlobalRecipesResearched;                                              // 0x0050 (size: 0x50)
    TArray<FName> GlobalItemsPickedUp;                                                // 0x00A0 (size: 0x10)
    TArray<FName> GlobalEmailsRead;                                                   // 0x00B0 (size: 0x10)
    TArray<FName> GlobalJournalEntries;                                               // 0x00C0 (size: 0x10)
    TArray<FName> GlobalCompendiumEmail;                                              // 0x00D0 (size: 0x10)
    TArray<FName> GlobalCompendiumNarrative;                                          // 0x00E0 (size: 0x10)
    TArray<FName> GlobalCompendiumExploration;                                        // 0x00F0 (size: 0x10)
    FString ActiveLeyakContainmentID;                                                 // 0x0100 (size: 0x10)
    TArray<FName> GlobalItemsDistilled;                                               // 0x0110 (size: 0x10)

}; // Size: 0x120

struct FAbioticInventoryChangeableData
{
    FString AssetID;                                                                  // 0x0000 (size: 0x10)
    double CurrentItemDurability;                                                     // 0x0010 (size: 0x8)
    double MaxItemDurability;                                                         // 0x0018 (size: 0x8)
    int32 CurrentStack;                                                               // 0x0020 (size: 0x4)
    int32 CurrentAmmoInMagazine;                                                      // 0x0024 (size: 0x4)
    int32 LiquidLevel;                                                                // 0x0028 (size: 0x4)
    ELiquidType CurrentLiquid;                                                        // 0x002C (size: 0x1)
    FTextureVariantRowHandle TextureVariantRow;                                       // 0x0030 (size: 0x10)
    bool DynamicState;                                                                // 0x0040 (size: 0x1)
    FString PlayerMadeString;                                                         // 0x0048 (size: 0x10)
    FGameplayTagContainer GameplayTags;                                               // 0x0058 (size: 0x20)
    TArray<FDynamicProperty> DynamicProperties;                                       // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FAbioticInventoryItem : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText ItemName;                                                                   // 0x0010 (size: 0x10)
    FText ItemDescription;                                                            // 0x0020 (size: 0x10)
    FText ItemFlavorText;                                                             // 0x0030 (size: 0x10)
    FText ToInteractWith_Text;                                                        // 0x0040 (size: 0x10)
    FText ToLongInteractWith_Text;                                                    // 0x0050 (size: 0x10)
    FText ToPackage_Text;                                                             // 0x0060 (size: 0x10)
    FText ToLongPackage_Text;                                                         // 0x0070 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> InventoryIcon;                                   // 0x0080 (size: 0x28)
    EAbioticItemType ItemType;                                                        // 0x00A8 (size: 0x1)
    TSoftClassPtr<AActor> ItemClass;                                                  // 0x00B0 (size: 0x28)
    TSoftObjectPtr<class UStaticMesh> WorldStaticMesh;                                // 0x00D8 (size: 0x28)
    double Scale_WorldMesh;                                                           // 0x0100 (size: 0x8)
    double Scale_FirstPersonMesh;                                                     // 0x0108 (size: 0x8)
    double Scale_TPHeldMesh;                                                          // 0x0110 (size: 0x8)
    double Scale_Cooking;                                                             // 0x0118 (size: 0x8)
    double Scale_Hologram;                                                            // 0x0120 (size: 0x8)
    TSoftObjectPtr<class USkeletalMesh> WorldSkeletalMesh;                            // 0x0128 (size: 0x28)
    TSoftObjectPtr<class UAnimSequence> WorldSkeletalMeshAnimation;                   // 0x0150 (size: 0x28)
    TSoftClassPtr<AActor> DeployedItemClass;                                          // 0x0178 (size: 0x28)
    TSoftObjectPtr<class UStaticMesh> DeployHologramMesh;                             // 0x01A0 (size: 0x28)
    EDeployableOrientations PlacementOrientationsAllowed;                             // 0x01C8 (size: 0x1)
    bool CanLoseDurability;                                                           // 0x01C9 (size: 0x1)
    double MaxItemDurability;                                                         // 0x01D0 (size: 0x8)
    double ChanceToLoseDurability;                                                    // 0x01D8 (size: 0x8)
    FAbioticItemDrop RepairItem;                                                      // 0x01E0 (size: 0x78)
    int32 StackSize;                                                                  // 0x0258 (size: 0x4)
    double Weight;                                                                    // 0x0260 (size: 0x8)
    double Radioactivity;                                                             // 0x0268 (size: 0x8)
    bool TryPlaceInHotbar;                                                            // 0x0270 (size: 0x1)
    bool IsWeapon;                                                                    // 0x0271 (size: 0x1)
    FAbioticWeapon WeaponData;                                                        // 0x0278 (size: 0x1B0)
    FAbioticEquipment EquipmentData;                                                  // 0x0428 (size: 0xB8)
    FFPAnimationRowHandle FPAnimationData;                                            // 0x04E0 (size: 0x10)
    FFPMeshSocketRowHandle AttachSocketFP;                                            // 0x04F0 (size: 0x10)
    FTPMeshSocketRowHandle AttachSocketTP;                                            // 0x0500 (size: 0x10)
    FSalvageRowHandle SalvageData;                                                    // 0x0510 (size: 0x10)
    FAbioticConsumable ConsumableData;                                                // 0x0520 (size: 0x88)
    FAbioticCookable CookableData;                                                    // 0x05A8 (size: 0x80)
    FAbioticLiquid LiquidData;                                                        // 0x0628 (size: 0x30)
    TArray<FItemUseFlagRowHandle> ItemUseFlags;                                       // 0x0658 (size: 0x10)
    FTextureVariantRowHandle TextureVariant;                                          // 0x0668 (size: 0x10)
    FGameplayTagContainer GameplayTags;                                               // 0x0678 (size: 0x20)

}; // Size: 0x698

struct FAbioticInventoryItemSlot
{
    FGlobalItemRowHandle ItemDataTable;                                               // 0x0000 (size: 0x10)
    FAbioticInventoryChangeableData ChangeableData;                                   // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FAbioticInventorySave
{
    TArray<FAbioticInventoryItemSlot> Items;                                          // 0x0000 (size: 0x10)
    int32 ComponentID;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAbioticItemCount : public FTraderOutput
{
    FGlobalItemRowHandle Item;                                                        // 0x0000 (size: 0x10)
    int32 Count;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAbioticItemDrop
{
    FGlobalItemRowHandle ItemDataTable;                                               // 0x0000 (size: 0x10)
    int32 QuantityMin;                                                                // 0x0010 (size: 0x4)
    int32 QuantityMax;                                                                // 0x0014 (size: 0x4)
    double ChanceToDrop;                                                              // 0x0018 (size: 0x8)
    FGameplayTagQuery MaxDropQuery;                                                   // 0x0020 (size: 0x48)
    TArray<FTextureVariantRowHandle> PossibleTextureVariants;                         // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FAbioticItemDropTable : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<FAbioticItemDrop> SalvageDropItems;                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAbioticItemInput
{
    FAnyItemRowHandle Item;                                                           // 0x0000 (size: 0x18)
    int32 Count;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FAbioticItemProxySave
{
    int32 SpotIndex;                                                                  // 0x0000 (size: 0x4)
    FAbioticInventoryChangeableData ChangeableData;                                   // 0x0008 (size: 0x88)
    FGlobalItemRowHandle ItemRow;                                                     // 0x0090 (size: 0x10)
    FAbioticCookingSave CookingData;                                                  // 0x00A0 (size: 0x90)
    TArray<double> TimerData;                                                         // 0x0130 (size: 0x10)

}; // Size: 0x140

struct FAbioticLiquid
{
    int32 MaxLiquid;                                                                  // 0x0000 (size: 0x4)
    TArray<ELiquidType> AllowedLiquids;                                               // 0x0008 (size: 0x10)
    double PercentageLiquidToStartWith;                                               // 0x0018 (size: 0x8)
    TArray<ELiquidType> LiquidToStartWith;                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FAbioticModDependencyList
{
    TArray<int64> DependsOn;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAbioticModKickInfo
{
    EAbioticModKickReason Reason;                                                     // 0x0000 (size: 0x1)
    TArray<FModioModID> MissingMods;                                                  // 0x0008 (size: 0x10)
    TArray<FModioModID> ExtraMods;                                                    // 0x0018 (size: 0x10)
    TArray<int64> ServerLoadOrder;                                                    // 0x0028 (size: 0x10)
    TArray<FModioModID> LocalOnlyMods;                                                // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FAbioticModListEntryInfo
{
    int64 ModId;                                                                      // 0x0000 (size: 0x8)
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    EAbioticModListIssue Issue;                                                       // 0x0018 (size: 0x1)
    FUGCRejection Rejection;                                                          // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FAbioticModLoadOrderComparison
{
    bool bMatches;                                                                    // 0x0000 (size: 0x1)
    bool bOrderChanged;                                                               // 0x0001 (size: 0x1)
    TArray<FAbioticModListEntryInfo> NewMods;                                         // 0x0008 (size: 0x10)
    TArray<FAbioticModListEntryInfo> MissingMods;                                     // 0x0018 (size: 0x10)
    TArray<FAbioticModListEntryInfo> IncompatibleMods;                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FAbioticModOrderEntry
{
    int64 ModId;                                                                      // 0x0000 (size: 0x8)
    bool bPinnedAbove;                                                                // 0x0008 (size: 0x1)
    bool bPinnedBelow;                                                                // 0x0009 (size: 0x1)
    int64 RequiredBy;                                                                 // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAbioticModOrderIssue
{
    EAbioticModOrderIssue Issue;                                                      // 0x0000 (size: 0x1)
    int64 ModId;                                                                      // 0x0008 (size: 0x8)
    int64 RelatedModId;                                                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAbioticModProfile
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Author;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FAbioticNPC : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)
    EFactions DefaultFaction;                                                         // 0x0020 (size: 0x1)
    TSoftClassPtr<AAbioticCharacter> NPCSpawnClass;                                   // 0x0028 (size: 0x28)
    TSoftClassPtr<AAbioticAIController> AIControllerClass;                            // 0x0050 (size: 0x28)
    TSoftObjectPtr<class UBehaviorTree> BehaviorTree;                                 // 0x0078 (size: 0x28)
    double HP_Head;                                                                   // 0x00A0 (size: 0x8)
    double HP_Torso;                                                                  // 0x00A8 (size: 0x8)
    double HP_LeftArm;                                                                // 0x00B0 (size: 0x8)
    double HP_RightArm;                                                               // 0x00B8 (size: 0x8)
    double HP_LeftLeg;                                                                // 0x00C0 (size: 0x8)
    double HP_RightLeg;                                                               // 0x00C8 (size: 0x8)
    double MeleeAttackDamagePerHit;                                                   // 0x00D0 (size: 0x8)
    double RangeToMeleeAttack;                                                        // 0x00D8 (size: 0x8)
    double RangedAttackDamagePerHit;                                                  // 0x00E0 (size: 0x8)
    bool HasRangedAttack;                                                             // 0x00E8 (size: 0x1)
    double RangedAttackCooldown;                                                      // 0x00F0 (size: 0x8)
    double RangeToRangedAttack;                                                       // 0x00F8 (size: 0x8)
    double DefaultWalkSpeed;                                                          // 0x0100 (size: 0x8)
    double DefaultSprintSpeed;                                                        // 0x0108 (size: 0x8)
    TArray<FNPCVoiceRowHandle> VoiceRows;                                             // 0x0110 (size: 0x10)
    FAbioticNPCDialog VoiceLines;                                                     // 0x0120 (size: 0xD0)
    bool HasDBNOState;                                                                // 0x01F0 (size: 0x1)
    bool HasHunger;                                                                   // 0x01F1 (size: 0x1)
    bool HasThirst;                                                                   // 0x01F2 (size: 0x1)
    bool HasFatigue;                                                                  // 0x01F3 (size: 0x1)
    bool CanOpenDoors;                                                                // 0x01F4 (size: 0x1)
    bool CanBashOpenDoors;                                                            // 0x01F5 (size: 0x1)
    TSubclassOf<class UAbioticDamageType> DamageType_Ranged;                          // 0x01F8 (size: 0x8)
    TSubclassOf<class UAbioticDamageType> DamageType_Melee;                           // 0x0200 (size: 0x8)
    TArray<FSalvageRowHandle> PotentialLootWhenKilled;                                // 0x0208 (size: 0x10)
    FAbioticGib GibInfo;                                                              // 0x0218 (size: 0x18)
    double NPC_Hit_XP_Multiplier;                                                     // 0x0230 (size: 0x8)
    FGameplayTagQuery DamageWeaknesses;                                               // 0x0238 (size: 0x48)
    FGameplayTagQuery DamageResistances;                                              // 0x0280 (size: 0x48)
    FGameplayTagQuery DamageImmunities;                                               // 0x02C8 (size: 0x48)
    FAchievementStatRowHandle AchievementStat;                                        // 0x0310 (size: 0x10)
    FCompendiumEntryRowHandle CompendiumKill;                                         // 0x0320 (size: 0x10)

}; // Size: 0x330

struct FAbioticNPCDialog
{
    TArray<TSoftObjectPtr<class USoundBase>> BreathingLoop;                           // 0x0000 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> IdleLines;                               // 0x0010 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> AggroLines;                              // 0x0020 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> LostTargetLines;                         // 0x0030 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> SearchingForTargetLines;                 // 0x0040 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> AngstLines;                              // 0x0050 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> PainSounds;                              // 0x0060 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> NormalDeathSounds;                       // 0x0070 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> ScreamingDeathSounds;                    // 0x0080 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> MeleeAttackGrunt;                        // 0x0090 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> GenericAttackingLines;                   // 0x00A0 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> StartleLines;                            // 0x00B0 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> ReloadingLines;                          // 0x00C0 (size: 0x10)

}; // Size: 0xD0

struct FAbioticNPCSpawnSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    double CurrentCooldownRemaining;                                                  // 0x0020 (size: 0x8)
    int32 LastDayOnCooldown;                                                          // 0x0028 (size: 0x4)
    int32 SpawnCount;                                                                 // 0x002C (size: 0x4)
    bool bHasSpawnedOnce;                                                             // 0x0030 (size: 0x1)
    int32 MinutesPassedCooldownStarted;                                               // 0x0034 (size: 0x4)
    bool bHasBeenEncounteredOnce;                                                     // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FAbioticNPCStateSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    bool bDead;                                                                       // 0x0020 (size: 0x1)
    ENarrativeNPCState NarrativeState;                                                // 0x0021 (size: 0x1)
    FText CustomName;                                                                 // 0x0028 (size: 0x10)
    FVector Location;                                                                 // 0x0038 (size: 0x18)
    TMap<EBodyLimbs, double> CurrentHealthMap;                                        // 0x0050 (size: 0x50)
    TSoftClassPtr<AActor> NPCClass;                                                   // 0x00A0 (size: 0x28)
    TArray<FDynamicProperty> DynamicProperties;                                       // 0x00C8 (size: 0x10)
    FNPCRowHandle NPCRow;                                                             // 0x00D8 (size: 0x10)

}; // Size: 0xE8

struct FAbioticPortalSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    bool bActive;                                                                     // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FAbioticPowerSocketSave
{
    FString SocketID;                                                                 // 0x0000 (size: 0x10)
    FString PluggedInDeviceAssetID;                                                   // 0x0010 (size: 0x10)
    bool bHasTimer;                                                                   // 0x0020 (size: 0x1)
    EPowerTimerMode TimerMode;                                                        // 0x0021 (size: 0x1)
    TArray<FString> ExtraPoweredDeviceAssetIDs;                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FAbioticProjectile : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FString ProjectileDeathLine;                                                      // 0x0010 (size: 0x10)
    TSoftClassPtr<AActor> OptionalProjectileClass;                                    // 0x0020 (size: 0x28)
    double CollisionRadius;                                                           // 0x0048 (size: 0x8)
    double InitialSpeed;                                                              // 0x0050 (size: 0x8)
    double MaxSpeed;                                                                  // 0x0058 (size: 0x8)
    TSoftObjectPtr<class UStaticMesh> StaticMesh;                                     // 0x0060 (size: 0x28)
    TSoftObjectPtr<class USkeletalMesh> SkeletalMesh;                                 // 0x0088 (size: 0x28)
    bool RotationFollowVelocity;                                                      // 0x00B0 (size: 0x1)
    bool RotationRemainsVertical;                                                     // 0x00B1 (size: 0x1)
    double ProjectileGravityScale;                                                    // 0x00B8 (size: 0x8)
    bool ShouldBounce;                                                                // 0x00C0 (size: 0x1)
    int32 NumberOfBounce;                                                             // 0x00C4 (size: 0x4)
    bool BounceAngleAffectsFriction;                                                  // 0x00C8 (size: 0x1)
    double Bounciness;                                                                // 0x00D0 (size: 0x8)
    double Friction;                                                                  // 0x00D8 (size: 0x8)
    double BounceVelocityStopSimulatingThreshold;                                     // 0x00E0 (size: 0x8)
    bool Force_Sub_Stepping;                                                          // 0x00E8 (size: 0x1)
    bool IsHomingProjectile;                                                          // 0x00E9 (size: 0x1)
    double HomingAccelerationMagnitude;                                               // 0x00F0 (size: 0x8)
    bool GlintProjectile;                                                             // 0x00F8 (size: 0x1)
    bool AreaOfEffectDamage;                                                          // 0x00F9 (size: 0x1)
    double AoEMinimumDamage;                                                          // 0x0100 (size: 0x8)
    double DamageFalloff;                                                             // 0x0108 (size: 0x8)
    double AoE_InnerRadius;                                                           // 0x0110 (size: 0x8)
    double AoE_OuterRadius;                                                           // 0x0118 (size: 0x8)
    TSoftClassPtr<UAbioticDamageType> DamageType;                                     // 0x0120 (size: 0x28)
    bool CanHarmDeployables;                                                          // 0x0148 (size: 0x1)
    bool ReducedDamageToDeployables;                                                  // 0x0149 (size: 0x1)
    TArray<FBuffDebuffRowHandle> BuffDebuffToApply;                                   // 0x0150 (size: 0x10)
    bool CanDealDamage;                                                               // 0x0160 (size: 0x1)

}; // Size: 0x168

struct FAbioticRecipe : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FGlobalItemRowHandle ItemToCreate;                                                // 0x0010 (size: 0x10)
    int32 CountToCreate;                                                              // 0x0020 (size: 0x4)
    ERecipeCategory Category;                                                         // 0x0024 (size: 0x1)
    TArray<FAbioticItemInput> RecipeItems;                                            // 0x0028 (size: 0x10)
    TArray<FGlobalItemRowHandle> BenchesRequired;                                     // 0x0038 (size: 0x10)
    double CraftDuration;                                                             // 0x0048 (size: 0x8)
    TArray<FRecipeRowHandle> LinkedRecipesToUnlock;                                   // 0x0050 (size: 0x10)
    bool NotUnlockableByPickup;                                                       // 0x0060 (size: 0x1)
    FAbioticResearch ResearchData;                                                    // 0x0068 (size: 0x18)
    FStatModifierRowHandle StatModifier;                                              // 0x0080 (size: 0x10)
    FGameplayTagContainer RecipeTags;                                                 // 0x0090 (size: 0x20)

}; // Size: 0xB0

struct FAbioticRecipeSubstitute : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText ItemTypeName;                                                               // 0x0010 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> ItemTypeIcon;                                    // 0x0020 (size: 0x28)
    FText ItemTypeDescription;                                                        // 0x0048 (size: 0x10)
    TArray<FGlobalItemRowHandle> ItemsOfType;                                         // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FAbioticResearch
{
    EMinigameDifficulty MinigameDifficulty;                                           // 0x0000 (size: 0x1)
    TArray<FGlobalItemRowHandle> FakeItems;                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAbioticResourceNodeSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    FVector CurrentPosition;                                                          // 0x0020 (size: 0x18)
    bool bPickedUp;                                                                   // 0x0038 (size: 0x1)
    int32 DayPickedUp;                                                                // 0x003C (size: 0x4)

}; // Size: 0x40

struct FAbioticSecurityDoorSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    bool bOpen;                                                                       // 0x0020 (size: 0x1)
    bool bNoReset;                                                                    // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FAbioticSkeletalWeapon
{
    TSoftObjectPtr<class USkeletalMesh> WeaponSkeletalMesh;                           // 0x0000 (size: 0x28)
    FWeaponAnimationRowHandle WeaponAnimationData;                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FAbioticSoundNotifyData
{
    class USoundBase* Sound;                                                          // 0x0000 (size: 0x8)
    float VolumeMultiplier;                                                           // 0x0008 (size: 0x4)
    float PitchMultiplier;                                                            // 0x000C (size: 0x4)
    uint8 bFollow;                                                                    // 0x0010 (size: 0x1)
    FName AttachName;                                                                 // 0x0014 (size: 0x8)

}; // Size: 0x20

struct FAbioticTargetingManagerTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FAbioticTimeOfDaySave
{
    double TimeOfDaySeconds;                                                          // 0x0000 (size: 0x8)
    int32 CurrentDay;                                                                 // 0x0008 (size: 0x4)
    int32 CurrentMonth;                                                               // 0x000C (size: 0x4)
    int32 LastAssaultDay;                                                             // 0x0010 (size: 0x4)
    bool bAssaultDay;                                                                 // 0x0014 (size: 0x1)
    int32 LastWeatherDay;                                                             // 0x0018 (size: 0x4)
    FWeatherEventRowHandle ActiveWeatherRow;                                          // 0x0020 (size: 0x10)
    int32 LastPowerLeechDay;                                                          // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FAbioticTramSave
{
    FSoftObjectPath ActorPath;                                                        // 0x0000 (size: 0x20)
    FSoftObjectPath LastStation;                                                      // 0x0020 (size: 0x20)
    TArray<FAbioticInventorySave> ContainerInventories;                               // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FAbioticTravelingNPCSave
{
    FNPCRowHandle NPCRow;                                                             // 0x0000 (size: 0x10)
    TSoftObjectPtr<class AActor> PreferredSpawn;                                      // 0x0010 (size: 0x28)
    FNPCTraderItemRowHandle TradeItemsRow;                                            // 0x0038 (size: 0x10)
    TArray<int32> TradeStock;                                                         // 0x0048 (size: 0x10)
    ENarrativeNPCState NarrativeState;                                                // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FAbioticTriggerSave
{
    FString UniqueTriggerID;                                                          // 0x0000 (size: 0x10)
    int32 TimesTriggered;                                                             // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FAbioticVehicleSave
{
    TSoftClassPtr<AActor> VehicleClass;                                               // 0x0000 (size: 0x28)
    FString VehicleID;                                                                // 0x0028 (size: 0x10)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)
    TArray<FAbioticInventorySave> ContainerInventories;                               // 0x00A0 (size: 0x10)
    bool bDriveable;                                                                  // 0x00B0 (size: 0x1)
    bool bDestroyed;                                                                  // 0x00B1 (size: 0x1)

}; // Size: 0xC0

struct FAbioticWeapon
{
    bool Melee;                                                                       // 0x0000 (size: 0x1)
    FMeleeSwingStyleRowHandle MeleeSwingData;                                         // 0x0008 (size: 0x10)
    FAbioticSkeletalWeapon SkeletalData;                                              // 0x0018 (size: 0x38)
    class USoundCue* FireSound;                                                       // 0x0050 (size: 0x8)
    TSoftClassPtr<AActor> OptionalProjectileToFire;                                   // 0x0058 (size: 0x28)
    double TimeBetweenShots;                                                          // 0x0080 (size: 0x8)
    double MaximumHitscanRange;                                                       // 0x0088 (size: 0x8)
    double DamagePerHit;                                                              // 0x0090 (size: 0x8)
    double BulletSpread_Min;                                                          // 0x0098 (size: 0x8)
    double BulletSpread_Max;                                                          // 0x00A0 (size: 0x8)
    TSubclassOf<class UAbioticDamageType> DamageType_Hitscan;                         // 0x00A8 (size: 0x8)
    double RecoilAmount;                                                              // 0x00B0 (size: 0x8)
    int32 PelletCount;                                                                // 0x00B8 (size: 0x4)
    int32 MagazineSize;                                                               // 0x00BC (size: 0x4)
    bool RequireAmmo;                                                                 // 0x00C0 (size: 0x1)
    FGlobalItemRowHandle AmmoType;                                                    // 0x00C8 (size: 0x10)
    TArray<FGlobalItemRowHandle> AmmoTypes;                                           // 0x00D8 (size: 0x10)
    FTPAnimationRowHandle TPAnimationData;                                            // 0x00E8 (size: 0x10)
    ESecondaryAttackTypes SecondaryAttack;                                            // 0x00F8 (size: 0x1)
    double LoudnessOnPrimaryUse;                                                      // 0x0100 (size: 0x8)
    double LoudnessOnSecondaryUse;                                                    // 0x0108 (size: 0x8)
    FLoadedAmmoVisual AmmoVisuals;                                                    // 0x0110 (size: 0x78)
    EUnderwaterUsage UnderwaterState;                                                 // 0x0188 (size: 0x1)
    int32 BurstFireCount;                                                             // 0x018C (size: 0x4)
    double MaxAimCorrection;                                                          // 0x0190 (size: 0x8)
    int32 TracerPerShots;                                                             // 0x0198 (size: 0x4)
    TArray<FBuffDebuffRowHandle> DebuffsToApply;                                      // 0x01A0 (size: 0x10)

}; // Size: 0x1B0

struct FAbioticWeaponAnimationData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TSoftClassPtr<UAnimInstance> AnimBP;                                              // 0x0010 (size: 0x28)
    TSoftObjectPtr<class UAnimSequence> ItemIdleLoop;                                 // 0x0038 (size: 0x28)
    TSoftObjectPtr<class UAnimSequence> ItemWalkLoop;                                 // 0x0060 (size: 0x28)
    TSoftObjectPtr<class UAnimSequence> ItemSprintLoop;                               // 0x0088 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemUse;                                       // 0x00B0 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemUseSecondary;                              // 0x00D8 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemBadReload;                                 // 0x0100 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemReload;                                    // 0x0128 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemExpertReload;                              // 0x0150 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemWindup;                                    // 0x0178 (size: 0x28)
    TSoftObjectPtr<class UAnimSequence> ItemAimDownSightsLoop;                        // 0x01A0 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemAimDownSightsFire;                         // 0x01C8 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemSpecial01;                                 // 0x01F0 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemSpecial02;                                 // 0x0218 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemFidget01;                                  // 0x0240 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemFidget02;                                  // 0x0268 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> ItemEquip;                                     // 0x0290 (size: 0x28)
    TSoftClassPtr<UAnimInstance> TP_AnimBP;                                           // 0x02B8 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> TP_ItemUse;                                    // 0x02E0 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> TP_ItemUseSecondary;                           // 0x0308 (size: 0x28)

}; // Size: 0x330

struct FAbiotic_CharacterSkill_Struct
{
    FText SkillName_12_151AF436411AC221F1B7A295B82A483E;                              // 0x0000 (size: 0x10)
    FText SkillTooltip_19_0D5F12434F2DBC48AE7090961B6F4DF0;                           // 0x0010 (size: 0x10)
    float CurrentSkillXP_20_8F7934CD4A4542F036AE5C9649362556;                         // 0x0020 (size: 0x4)
    float CurrentXPMultiplier_15_9DA8B8A24B4F5B134743CDBE828520F0;                    // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FAbiotic_Cooking_Struct
{
    bool MemberVar_44_4A23DC7F40911CE20D48FBBF5395F881;                               // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FAccessibilitySettingRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FAchievement : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FAchievementStatRowHandle ProgressStat;                                           // 0x0010 (size: 0x10)
    int32 ProgressMinValue;                                                           // 0x0020 (size: 0x4)
    int32 ProgressMaxValue;                                                           // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FAchievementRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FAchievementStat : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    bool bIsFloatStat;                                                                // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FAchievementStatListener
{
    TMap<FAchievementRowHandle, int32> LinkedAchievements;                            // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FAchievementStatRowHandle : public FRowHandle
{
}; // Size: 0x10

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
    TMap<FString, FAnalyticWorldFlag> WorldFlags;                                     // 0x00A8 (size: 0x50)
    TMap<FString, FAnalyticEnemyKilled> EnemiesKilled;                                // 0x00F8 (size: 0x50)
    TMap<FString, int32> MoneySpent;                                                  // 0x0148 (size: 0x50)
    TMap<FString, int32> BenchUpgrades;                                               // 0x0198 (size: 0x50)
    TMap<FString, int32> TraitsChosen;                                                // 0x01E8 (size: 0x50)
    TMap<FString, int32> TutorialStates;                                              // 0x0238 (size: 0x50)
    TMap<FString, int32> GenericEvents;                                               // 0x0288 (size: 0x50)

}; // Size: 0x2D8

struct FAnnouncement : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<TSoftObjectPtr<class UDialogueWave>> AnnouncementDialogueInOrder;          // 0x0010 (size: 0x10)
    TArray<FJournalEntryRowHandle> JournalEntriesToAddAfterHearing;                   // 0x0020 (size: 0x10)
    TArray<FCompendiumEntryRowHandle> CompendiumUnlocksAfterHearing;                  // 0x0030 (size: 0x10)
    FText CharacterName;                                                              // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FAnnouncementRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FAnyCustomizationRowHandle : public FMultiRowHandle
{
    EAnyCustomizationTable Table;                                                     // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FAnyItemRowHandle : public FMultiRowHandle
{
    EAnyItemTable Table;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FAnyRecipeRowHandle : public FMultiRowHandle
{
    EAnyRecipeTable Table;                                                            // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FAnyTraitRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FArmorStandPose : public FTableRowBase
{
    FText Pose_Name;                                                                  // 0x0008 (size: 0x10)
    TSoftObjectPtr<class UAnimSequence> Anim_Pose;                                    // 0x0018 (size: 0x28)

}; // Size: 0x40

struct FArmorStandPoseRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FAssault : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<FWorldFlagRowHandle> WorldFlagsRequired;                                   // 0x0010 (size: 0x10)
    EAssaultSpawnMethod AssaultSpawnMethod;                                           // 0x0020 (size: 0x1)
    TArray<FNPCRowHandle> NPCSpawnOrder;                                              // 0x0028 (size: 0x10)
    TArray<FNPCRowHandle> NPCFinalBoss;                                               // 0x0038 (size: 0x10)
    bool RandomSpawnOrder;                                                            // 0x0048 (size: 0x1)
    FText AssaultWarningText;                                                         // 0x0050 (size: 0x10)
    FText AssaultStartedText;                                                         // 0x0060 (size: 0x10)
    EAnnouncementType AssaultWarningAnnounceLine;                                     // 0x0070 (size: 0x1)
    class USoundBase* AssaultWarningSound;                                            // 0x0078 (size: 0x8)
    class USoundBase* AssaultStartSound;                                              // 0x0080 (size: 0x8)
    double AssaultPrepTime;                                                           // 0x0088 (size: 0x8)
    double SpawnRate_Wave1;                                                           // 0x0090 (size: 0x8)
    double SpawnRate_Wave2;                                                           // 0x0098 (size: 0x8)
    double SpawnRate_Wave3;                                                           // 0x00A0 (size: 0x8)
    double SpawnRate_BossWave;                                                        // 0x00A8 (size: 0x8)

}; // Size: 0xB0

struct FAssaultRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FAttachSocket : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FName BoneName;                                                                   // 0x000C (size: 0x8)
    FVector LocationOffset;                                                           // 0x0018 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0030 (size: 0x18)
    FVector ScaleOffset;                                                              // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FAudioOverride
{
    TSoftObjectPtr<class USoundBase> Sound;                                           // 0x0000 (size: 0x28)
    float VolumeMultiplier;                                                           // 0x0028 (size: 0x4)
    float PitchMultiplier;                                                            // 0x002C (size: 0x4)

}; // Size: 0x30

struct FAudioOverrideMap
{
    TMap<FGameplayTag, FAudioOverride> AudioOverrideMap;                              // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FAudioSettingRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FBaseCompendiumSection
{
    FText SectionText;                                                                // 0x0000 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> OptionalSectionImage;                            // 0x0010 (size: 0x28)
    FText OptionalLockedText;                                                         // 0x0038 (size: 0x10)
    TArray<FRecipeRowHandle> RecipesToUnlock;                                         // 0x0048 (size: 0x10)
    bool bDebugUnlock;                                                                // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FBeaconIconRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FBeaconIcons : public FTableRowBase
{
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FBenchUpgrade : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0020 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0030 (size: 0x28)
    TMap<ECharacterSkills, int32> RequiredSkills;                                     // 0x0058 (size: 0x50)
    TArray<FAbioticItemInput> RequiredItems;                                          // 0x00A8 (size: 0x10)
    FGameplayTag GameplayTag;                                                         // 0x00B8 (size: 0x8)
    TSoftClassPtr<ABenchUpgradeActor> UpgradeActor;                                   // 0x00C0 (size: 0x28)

}; // Size: 0xE8

struct FBenchUpgradeRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FBlackboardName
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FBodyLimbHealth
{
    double Head;                                                                      // 0x0000 (size: 0x8)
    double Torso;                                                                     // 0x0008 (size: 0x8)
    double LeftArm;                                                                   // 0x0010 (size: 0x8)
    double RightArm;                                                                  // 0x0018 (size: 0x8)
    double LeftLeg;                                                                   // 0x0020 (size: 0x8)
    double RightLeg;                                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

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
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0138 (size: 0x28)
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
    TSoftObjectPtr<class UNiagaraSystem> BodyParticleEffect;                          // 0x01E8 (size: 0x28)
    FTPMeshSocketRowHandle BodyParticleSocketTP;                                      // 0x0210 (size: 0x10)
    TSoftObjectPtr<class UMaterialInterface> MaterialEffect;                          // 0x0220 (size: 0x28)
    EVoiceLineType PlayerVoiceLine;                                                   // 0x0248 (size: 0x1)
    float PlayerDialogLineDelay;                                                      // 0x024C (size: 0x4)
    FLinearColor SkinTintColor;                                                       // 0x0250 (size: 0x10)

}; // Size: 0x260

struct FBuffDebuffEntry
{
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0000 (size: 0x10)
    EBodyLimbs ParentLimb;                                                            // 0x0010 (size: 0x1)
    float BuffExpireTime;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FBuffDebuffRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FBuffSave_Struct
{
    TArray<FBuffDebuffEntry> Buffs_8_2276236A4B2235B483FBBD8E932EAA87;                // 0x0000 (size: 0x10)
    TArray<FBuffDebuffEntry> BuffID_3_2276236A4B2235B483FBBD8E932EAA87;               // 0x0010 (size: 0x10)

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
    FVector2D Motion;                                                                 // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FCagedCreature_Struct
{
    TSoftClassPtr<AActor> CharacterClass_2_50DEFCB94306388AC6B72C818108D7D1;          // 0x0000 (size: 0x28)
    FAbioticSkeletalWeapon SkeletalData_14_DD6AD2E6419D803E0B6737B90C6EED11;          // 0x0028 (size: 0x38)

}; // Size: 0x60

struct FCharacterStatsSave_Struct
{
    double Hunger_2_A6C5CC6E41993323B119FA9E0B3894CA;                                 // 0x0000 (size: 0x8)
    double Thirst_7_E620D3DA44520EAC8EBFA28ECD77E6DA;                                 // 0x0008 (size: 0x8)
    double Sanity_8_1EA1DBDE4CEA799B882ABBB9EF766161;                                 // 0x0010 (size: 0x8)
    double Fatigue_9_D4A267F046B9CD6F07518AAF88356DBE;                                // 0x0018 (size: 0x8)
    double Continence_11_29DC4A474C89E8B517691D8C627AA2F9;                            // 0x0020 (size: 0x8)
    double IncomingContinence_12_5039F95247EC6EF9D0C04681AD1C484B;                    // 0x0028 (size: 0x8)
    double Radiation_16_CBCAFEC549FC3D10D8D4418FD3D5FB77;                             // 0x0030 (size: 0x8)
    double BodyTemperature_15_B87CC427429084EE2405CA9F8B5AFB40;                       // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FChemistryRecipeRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FClassManagerData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FGameplayTag GameplayTag;                                                         // 0x000C (size: 0x8)
    TSoftClassPtr<UObject> ObjectClass;                                               // 0x0018 (size: 0x28)

}; // Size: 0x40

struct FClassManagerRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCompendiumEntry : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText Title;                                                                      // 0x0010 (size: 0x10)
    FText Subtitle;                                                                   // 0x0020 (size: 0x10)
    FGameplayTagContainer Tags;                                                       // 0x0030 (size: 0x20)
    FGameEntitlementRowHandle RequiredDLC;                                            // 0x0050 (size: 0x10)
    FNPCRowHandle NPCRow;                                                             // 0x0060 (size: 0x10)
    TArray<FCompendiumSection> Sections;                                              // 0x0070 (size: 0x10)
    bool bHasKillRequirementSection;                                                  // 0x0080 (size: 0x1)
    FKillCompendiumSection KillRequirementSection;                                    // 0x0088 (size: 0x68)

}; // Size: 0xF0

struct FCompendiumEntryRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCompendiumKillCount
{
    FCompendiumEntryRowHandle CompendiumRow;                                          // 0x0000 (size: 0x10)
    int32 Count;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCompendiumSection : public FBaseCompendiumSection
{
    ECompendiumUnlockType UnlockRequirement;                                          // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FControlSettingRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCorpseSave_Struct
{
    FSoftObjectPath ActorPath_4_E4DB30BA4F470EF1CDCC26B4BE3F007D;                     // 0x0000 (size: 0x20)
    bool IsGibbed_1_436FC449466600C56D3F8B8F9843B1B6;                                 // 0x0020 (size: 0x1)
    bool IsLooted_10_125CD6D34F07AD4D4CF4FC842814BD8F;                                // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FCraftableItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCraftingBenchItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationBeardRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationBeltRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationFannyPackRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationHairColorRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationHairStyleRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationHeadAccessoryRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationHeadRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationIDCardRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationLabcoatRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationLowerBodyRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationMakeupRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationShirtColorRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationShoesRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationTieRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationUpperBodyRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FCustomizationWatchRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FDamageDefinition : public FTableRowBase
{
    FGameplayTag GameplayTag;                                                         // 0x0008 (size: 0x8)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FDamageDefinitionRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FDataTableValidation : public FTableRowBase
{
    TSet<UDataTable*> DataTables;                                                     // 0x0008 (size: 0x50)
    TSet<TSubclassOf<class UDataTableValidationObject>> ValidationObjects;            // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FDeployableItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FDistillationEntry : public FTableRowBase
{
    FGlobalItemRowHandle Item;                                                        // 0x0008 (size: 0x10)
    int32 Count;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FDynamicProperty
{
    EDynamicProperty Key;                                                             // 0x0000 (size: 0x1)
    int32 Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FEmailAttachment
{
    FString Filename;                                                                 // 0x0000 (size: 0x10)
    class UTexture2D* ImageFile;                                                      // 0x0010 (size: 0x8)
    FAnyRecipeRowHandle RecipeToUnlock;                                               // 0x0018 (size: 0x18)
    FCompendiumEntryRowHandle CompendiumToUnlock;                                     // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FEmailRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FEmailSection
{
    EOSThemes EmailTheme;                                                             // 0x0000 (size: 0x1)
    FString EmailSenderName;                                                          // 0x0008 (size: 0x10)
    FText EmailText;                                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FEmote : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText EmoteDisplayName;                                                           // 0x0010 (size: 0x10)
    FText EmoteSubtext;                                                               // 0x0020 (size: 0x10)
    class UTexture2D* EmoteIcon;                                                      // 0x0030 (size: 0x8)
    TSoftObjectPtr<class UAnimMontage> EmoteMontage;                                  // 0x0038 (size: 0x28)
    bool EndEmoteWhenMontageEnds;                                                     // 0x0060 (size: 0x1)
    TSoftObjectPtr<class UAnimMontage> FirstPersonMontage;                            // 0x0068 (size: 0x28)
    TArray<FNPCVoiceRowHandle> PossibleVoiceLines;                                    // 0x0090 (size: 0x10)
    bool InterruptableByAction;                                                       // 0x00A0 (size: 0x1)
    TArray<FBuffDebuffRowHandle> BuffsToApplyWhileEmoting;                            // 0x00A8 (size: 0x10)
    bool OverrideCameraHeight;                                                        // 0x00B8 (size: 0x1)
    double FPCameraHeight;                                                            // 0x00C0 (size: 0x8)
    bool ForceEndCrouch;                                                              // 0x00C8 (size: 0x1)
    bool HideItemInHandDuringEmote;                                                   // 0x00C9 (size: 0x1)
    bool ForceThirdPerson;                                                            // 0x00CA (size: 0x1)
    bool bHideEmoteInRadialMenu;                                                      // 0x00CB (size: 0x1)
    FGameplayTagContainer OverrideTag;                                                // 0x00D0 (size: 0x20)
    FEmoteRowHandle OverrideRow;                                                      // 0x00F0 (size: 0x10)

}; // Size: 0x100

struct FEmoteRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FErrorMessage : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    FString ErrorCode;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FErrorMessageRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FFPAnimationRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FFPMeshSocketRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FFishData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText FishName;                                                                   // 0x0010 (size: 0x10)
    FGlobalItemRowHandle NormalItemRow;                                               // 0x0020 (size: 0x10)
    FTextureVariantRowHandle TextureVariantRow;                                       // 0x0030 (size: 0x10)
    FGameplayTagContainer ChangeableDataTags;                                         // 0x0040 (size: 0x20)
    FRecipeRowHandle RecipeToUnlock;                                                  // 0x0060 (size: 0x10)
    int32 XPGain;                                                                     // 0x0070 (size: 0x4)
    FGameplayTagQuery CatchRequirement;                                               // 0x0078 (size: 0x48)
    FWorldFlagRowHandle WorldFlagRequirement;                                         // 0x00C0 (size: 0x10)
    FTimeOfDayMultiplier TimeOfDayCatchChance;                                        // 0x00D0 (size: 0x10)
    TMap<FGameplayTag, float> TagChanceModifiers;                                     // 0x00E0 (size: 0x50)
    TSoftObjectPtr<class UNiagaraSystem> DirectionalParticle;                         // 0x0130 (size: 0x28)
    FGameEntitlementRowHandle RequiredDLC;                                            // 0x0158 (size: 0x10)

}; // Size: 0x168

struct FFishReward
{
    FFishRowHandle FishRow;                                                           // 0x0000 (size: 0x10)
    float WeightedChance;                                                             // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FFishRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FFishingZone : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText ZoneName;                                                                   // 0x0010 (size: 0x10)
    TArray<FFishReward> PossibleFish;                                                 // 0x0020 (size: 0x10)
    FSalvageRowHandle JunkSalvageRow;                                                 // 0x0030 (size: 0x10)
    float JunkSalvageChance;                                                          // 0x0040 (size: 0x4)
    TSoftObjectPtr<class UNiagaraSystem> DirectionalParticle;                         // 0x0048 (size: 0x28)

}; // Size: 0x70

struct FFishingZoneRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FFoodAndGibsItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FGameActivity : public FTableRowBase
{
    FString ActivityName;                                                             // 0x0008 (size: 0x10)
    FWorldFlagRowHandle StartingTask;                                                 // 0x0018 (size: 0x10)
    TMap<FString, FWorldFlagRowHandle> AssociatedWorldFlags;                          // 0x0028 (size: 0x50)

}; // Size: 0x78

struct FGameActivityRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FGameCommand : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FString CommandName;                                                              // 0x0010 (size: 0x10)
    FText Description;                                                                // 0x0020 (size: 0x10)
    EGameCommandNetMode NetMode;                                                      // 0x0030 (size: 0x1)
    EGameCommandType CommandType;                                                     // 0x0031 (size: 0x1)
    TArray<FGameCommandInput> Inputs;                                                 // 0x0038 (size: 0x10)
    TSubclassOf<class UGameCommandObject> GameCommandObject;                          // 0x0048 (size: 0x8)
    TSoftClassPtr<UGameCommandWidget> CustomWidget;                                   // 0x0050 (size: 0x28)

}; // Size: 0x78

struct FGameCommandEntry
{
    FGameCommandRowHandle RowHandle;                                                  // 0x0000 (size: 0x10)
    FString CommandName;                                                              // 0x0010 (size: 0x10)
    FString HelperText;                                                               // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGameCommandInput
{
    FText Description;                                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameCommandRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FGameCredit : public FTableRowBase
{
    FString Subject;                                                                  // 0x0008 (size: 0x10)
    FString Title;                                                                    // 0x0018 (size: 0x10)
    bool bIsCategoryHeader;                                                           // 0x0028 (size: 0x1)
    TSoftObjectPtr<class UTexture2D> OptionalImage;                                   // 0x0030 (size: 0x28)

}; // Size: 0x58

struct FGameCreditRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FGameEntitlement : public FTableRowBase
{
    FString ID_PS5;                                                                   // 0x0008 (size: 0x10)
    FString ID_GDK;                                                                   // 0x0018 (size: 0x10)
    FString ID_STEAM;                                                                 // 0x0028 (size: 0x10)
    FString ID_EOS;                                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FGameEntitlementRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FGameSetting : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> DisplayImage;                                    // 0x0028 (size: 0x28)
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
}; // Size: 0x10

struct FGearItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FGeneratedMeshCacheEntry
{
    class USkeletalMesh* Mesh;                                                        // 0x0000 (size: 0x8)
    TArray<UMaterialInterface*> Materials;                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FGlobalItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FHitData
{
    class AActor* Actor;                                                              // 0x0000 (size: 0x8)
    TArray<int32> HitIndexes;                                                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FItemAction : public FTableRowBase
{
    FKeybindSettingRowHandle KeyBind;                                                 // 0x0008 (size: 0x10)
    FText DisplayName;                                                                // 0x0018 (size: 0x10)
    bool bHold;                                                                       // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FItemActionRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FItemCosmeticRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FItemCosmetics : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    bool OverrideInventory3DOrientation;                                              // 0x0009 (size: 0x1)
    FVector Inventory3DLocation;                                                      // 0x0010 (size: 0x18)
    FRotator Inventory3DRotation;                                                     // 0x0028 (size: 0x18)
    TSoftObjectPtr<class UStaticMesh> BrokenItemStaticMesh;                           // 0x0040 (size: 0x28)
    FTPMeshSocketRowHandle HeadlampSocketTP;                                          // 0x0068 (size: 0x10)
    bool ForceItemUpright;                                                            // 0x0078 (size: 0x1)
    TSoftObjectPtr<class UMaterialInterface> LightFunction;                           // 0x0080 (size: 0x28)
    TSoftClassPtr<AActor> DeployProxy;                                                // 0x00A8 (size: 0x28)
    class UCurveVector* ScopeSway;                                                    // 0x00D0 (size: 0x8)
    double ScopeSwaySpeed;                                                            // 0x00D8 (size: 0x8)
    TSoftObjectPtr<class USoundWave> SoundEffect;                                     // 0x00E0 (size: 0x28)
    TSoftObjectPtr<class UNiagaraSystem> ParticleEffect;                              // 0x0108 (size: 0x28)
    class UPrimaryDataAsset* DataAsset;                                               // 0x0130 (size: 0x8)
    bool ItemStand_UseRotationOverride;                                               // 0x0138 (size: 0x1)
    FItemStandOffset ItemStand_Offsets;                                               // 0x0140 (size: 0x60)
    FWeaponCoatingCosmetic WeaponCoating;                                             // 0x01A0 (size: 0x68)

}; // Size: 0x208

struct FItemCount
{
    FGlobalItemRowHandle Item;                                                        // 0x0000 (size: 0x10)
    int32 Count;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FItemCountArray : public FTableRowBase
{
    TArray<FItemCount> ItemCountArray;                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FItemDistillationRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FItemRewardRowHandle : public FMultiRowHandle
{
    EItemRewardTable Table;                                                           // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FItemStandOffset
{
    FRotator RotationOffset;                                                          // 0x0000 (size: 0x18)
    FRotator WallRotationOffset;                                                      // 0x0018 (size: 0x18)
    FVector PositionOffset;                                                           // 0x0030 (size: 0x18)
    FVector WallPositionOffset;                                                       // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FItemUpgrade : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<FItemUpgradeEntry> Upgrades;                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FItemUpgradeEntry
{
    TArray<FAbioticItemInput> RequiredItems;                                          // 0x0000 (size: 0x10)
    FGlobalItemRowHandle OutputItem;                                                  // 0x0010 (size: 0x10)
    TSoftObjectPtr<class UObject> SoundEffect;                                        // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FItemUpgradeRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FItemUseFlag : public FTableRowBase
{
    FText DisabledItemTooltipText;                                                    // 0x0008 (size: 0x10)
    FText PopupText;                                                                  // 0x0018 (size: 0x10)
    FText PopupText_SecondaryUse;                                                     // 0x0028 (size: 0x10)
    FGameplayTag RequiredTag;                                                         // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FItemUseFlagRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FJobBannerRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FJournalEntry : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText Title;                                                                      // 0x0010 (size: 0x10)
    FText Note;                                                                       // 0x0020 (size: 0x10)
    EJournalEntryCategories Category;                                                 // 0x0030 (size: 0x1)
    bool AutoPinToHUD;                                                                // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FJournalEntryRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FJournalMap : public FTableRowBase
{
    EJournalEntryCategories Sector;                                                   // 0x0008 (size: 0x1)
    FLevelRowHandle AssociatedLevel;                                                  // 0x0010 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> MapImage;                                        // 0x0020 (size: 0x28)
    bool StrippedFromBuild;                                                           // 0x0048 (size: 0x1)

}; // Size: 0x50

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
    FUIKeybindActionRowHandle UIAction;                                               // 0x0048 (size: 0x10)
    FKeybindSettingRowHandle GamepadRedirect;                                         // 0x0058 (size: 0x10)
    bool bHiddenKeybind;                                                              // 0x0068 (size: 0x1)
    bool bDevelopmentOnly;                                                            // 0x0069 (size: 0x1)
    TArray<TEnumAsByte<EGameSettingPlatformType>> RestrictToPlatforms;                // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FKeybindSettingRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FKillCompendiumSection : public FBaseCompendiumSection
{
    int32 RequiredCount;                                                              // 0x0060 (size: 0x4)

}; // Size: 0x68

struct FLegacyData_AbioticItemCount_Struct
{
    FDataTableRowHandle Item_5_5AD3D6B1470ED45BCB2D15BC84BB0F1A;                      // 0x0000 (size: 0x10)
    int32 Count_6_4C6C5BFB4956F9C29A5C2BB6F28B7690;                                   // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FLegacyData_Abiotic_InventoryChangeableDataStruct
{
    FString AssetID_25_06DB7A12469849D19D5FC3BA6BEDEEAB;                              // 0x0000 (size: 0x10)
    double CurrentItemDurability_4_24B4D0E64E496B43FB8D3CA2B9D161C8;                  // 0x0010 (size: 0x8)
    double MaxItemDurability_6_F5D5F0D64D4D6050CCCDE4869785012B;                      // 0x0018 (size: 0x8)
    int32 CurrentStack_9_D443B69044D640B0989FD8A629801A49;                            // 0x0020 (size: 0x4)
    int32 CurrentAmmoInMagazine_12_D68C190F4B2FA78A4B1D57835B95C53D;                  // 0x0024 (size: 0x4)
    int32 LiquidLevel_46_D6414A6E49082BC020AADC89CC29E35A;                            // 0x0028 (size: 0x4)
    TEnumAsByte<E_LiquidType::Type> CurrentLiquid_19_3E1652F448223AAE5F405FB510838109; // 0x002C (size: 0x1)
    FDataTableRowHandle TextureVariantRow_28_1C7CF7A0441335E8AC4EA7B5CA91F636;        // 0x0030 (size: 0x10)
    bool DynamicState_39_7597AC6549E292B931C61BB13C9E42EB;                            // 0x0040 (size: 0x1)
    FString PlayerMadeString_42_CC0B72B24DBEAB2CC04454AAFFD4BBE9;                     // 0x0048 (size: 0x10)
    FGameplayTagContainer GameplayTags_45_1A018E824E25CC7BA608A6B2835209A1;           // 0x0058 (size: 0x20)
    TArray<FDynamicProperty> DynamicProperties_50_5C138DB145048726E8C0FEAC7C9600F7;   // 0x0078 (size: 0x10)
    int32 LiquidLevel_16_D6414A6E49082BC020AADC89CC29E35A;                            // 0x0088 (size: 0x4)

}; // Size: 0x90

struct FLegacyData_Abiotic_InventoryItemSlotStruct
{
    FDataTableRowHandle ItemDataTable_18_BF1052F141F66A976F4844AB2B13062B;            // 0x0000 (size: 0x10)
    FAbioticInventoryChangeableData ChangeableData_12_2B90E1F74F648135579D39A49F5A2313; // 0x0010 (size: 0x88)
    FDataTableRowHandle ItemDataTable_17_BF1052F141F66A976F4844AB2B13062B;            // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FLegacyData_Abiotic_SkeletalWeapon_Struct
{
    TSoftObjectPtr<class USkeletalMesh> WeaponSkeletalMesh_4_A0C557594452DB44D313619EB2F1CFBF; // 0x0000 (size: 0x28)
    FDataTableRowHandle WeaponAnimationData_5_B390AB3F4B96BFF9100AF191A4F49575;       // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FLegacyData_BodyLimbHealth_Struct
{
    double Head_2_9DF5F0D3418FEA87915307B0916F71F1;                                   // 0x0000 (size: 0x8)
    double Torso_9_C71E40B64A3CFA07EB7D569FDF7E27FA;                                  // 0x0008 (size: 0x8)
    double LeftArm_10_DBC1F7CB470045555A9179BC1E18BFC3;                               // 0x0010 (size: 0x8)
    double RightArm_11_19F1E62945ADCC1BFD286F9A266F4101;                              // 0x0018 (size: 0x8)
    double LeftLeg_12_3FAFACB443CC3A390EFB3BA1BA33E54D;                               // 0x0020 (size: 0x8)
    double RightLeg_13_93AC33BD4A3F5CAF6132C6A8834E2D9B;                              // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FLevelFXData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    double DirLight_Intensity;                                                        // 0x0010 (size: 0x8)
    FLinearColor DirLight_Color;                                                      // 0x0018 (size: 0x10)
    FRotator DirLight_Angle;                                                          // 0x0028 (size: 0x18)
    double DirLight_DynamicShadowDistance;                                            // 0x0040 (size: 0x8)
    double SkyLight_Intensity;                                                        // 0x0048 (size: 0x8)
    FLinearColor SkyLight_Color;                                                      // 0x0050 (size: 0x10)
    TSoftObjectPtr<class UTextureCube> SkyLight_Cubemap;                              // 0x0060 (size: 0x28)
    double Fog_Density;                                                               // 0x0088 (size: 0x8)
    double Fog_Falloff;                                                               // 0x0090 (size: 0x8)
    FLinearColor Fog_Color;                                                           // 0x0098 (size: 0x10)
    double Fog_MaxOpacity;                                                            // 0x00A8 (size: 0x8)
    double Fog_StartDistance;                                                         // 0x00B0 (size: 0x8)
    double Fog_ZHeight;                                                               // 0x00B8 (size: 0x8)
    TArray<TSoftObjectPtr<class USoundBase>> MusicTracks;                             // 0x00C0 (size: 0x10)
    TSoftObjectPtr<class USoundBase> AmbientSoundTrack;                               // 0x00D0 (size: 0x28)
    int32 AmbientTemperature;                                                         // 0x00F8 (size: 0x4)
    TSoftObjectPtr<class UTexture> LUTOverride;                                       // 0x0100 (size: 0x28)
    FAnnouncementRowHandle DayAnnouncement;                                           // 0x0128 (size: 0x10)
    FAnnouncementRowHandle NightAnnouncement;                                         // 0x0138 (size: 0x10)
    TSoftObjectPtr<class UNiagaraSystem> WeatherParticle;                             // 0x0148 (size: 0x28)
    bool WeatherRenderTargetCulling;                                                  // 0x0170 (size: 0x1)
    bool HasDynamicSkybox;                                                            // 0x0171 (size: 0x1)

}; // Size: 0x178

struct FLevelFXRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FLevelMetadata : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TSoftObjectPtr<class UWorld> Level;                                               // 0x0010 (size: 0x28)
    FLevelFXRowHandle LevelFXRow_Day;                                                 // 0x0038 (size: 0x10)
    FLevelFXRowHandle LevelFXRow_Night;                                               // 0x0048 (size: 0x10)
    FText SectorName;                                                                 // 0x0058 (size: 0x10)
    bool bIsSublevel;                                                                 // 0x0068 (size: 0x1)
    bool ResettablePortalWorld;                                                       // 0x0069 (size: 0x1)
    bool HasFacilityShakes;                                                           // 0x006A (size: 0x1)
    bool IsVignette;                                                                  // 0x006B (size: 0x1)
    FName EntranceTeleporter;                                                         // 0x006C (size: 0x8)

}; // Size: 0x78

struct FLevelRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FLoadedAmmoVisual
{
    TSoftObjectPtr<class UStaticMesh> LoadedAmmoMesh;                                 // 0x0000 (size: 0x28)
    TMap<FName, TSoftObjectPtr<class UAnimSequence>> LoadedAmmoVisuals;               // 0x0028 (size: 0x50)

}; // Size: 0x78

struct FMainMenuBackground : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FName LevelName;                                                                  // 0x0018 (size: 0x8)
    FString UnlockCriteria;                                                           // 0x0020 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> DisplayImage;                                    // 0x0030 (size: 0x28)
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

struct FMapPamphletRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FMapResourceRowHandle : public FMultiRowHandle
{
    EMapResourceTable Table;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FMaterialSwap
{
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials;                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMaterialSwapMap
{
    TMap<FGameplayTag, FMaterialSwap> MaterialSwapMap;                                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMeleeSwingStyle
{
    TSoftObjectPtr<class UAnimMontage> FPMontage;                                     // 0x0000 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> TPMontage;                                     // 0x0028 (size: 0x28)
    ESwingDirections SwingDirection;                                                  // 0x0050 (size: 0x1)
    double FPAnimPlayrate;                                                            // 0x0058 (size: 0x8)
    double TPAnimPlayrate;                                                            // 0x0060 (size: 0x8)
    double MeleeSwingDuration;                                                        // 0x0068 (size: 0x8)
    double MeleeTraceRange;                                                           // 0x0070 (size: 0x8)
    int32 MeleeTraceCount;                                                            // 0x0078 (size: 0x4)

}; // Size: 0x80

struct FMeleeSwingStyleRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FMultiRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FNPCConversation : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText NPCName;                                                                    // 0x0010 (size: 0x10)
    TArray<FNPCConversationLine> BeckoningLines;                                      // 0x0020 (size: 0x10)
    TArray<FNPCConversationLine> IdleLines;                                           // 0x0030 (size: 0x10)
    TArray<FNPCConversationLine> InitalContactMessages;                               // 0x0040 (size: 0x10)
    TArray<FNPCConversationLine> ReturnMessages;                                      // 0x0050 (size: 0x10)
    FWorldFlagRowHandle WorldFlagToComplete;                                          // 0x0060 (size: 0x10)
    TArray<FNPCConversationLine> VendorInteraction_Positive;                          // 0x0070 (size: 0x10)
    TArray<FNPCConversationLine> VendorInteraction_Negative;                          // 0x0080 (size: 0x10)
    TSoftObjectPtr<class UDialogueWave> DeathSound;                                   // 0x0090 (size: 0x28)
    TSoftClassPtr<UUserWidget> SubtitleClass;                                         // 0x00B8 (size: 0x28)

}; // Size: 0xE0

struct FNPCConversationLine
{
    TSoftObjectPtr<class UDialogueWave> DialogToSpeak;                                // 0x0000 (size: 0x28)
    TArray<FRecipeRowHandle> RecipesToUnlock;                                         // 0x0028 (size: 0x10)
    TArray<FJournalEntryRowHandle> JournalEntriesToAdd;                               // 0x0038 (size: 0x10)
    TArray<FWorldFlagRowHandle> WorldFlagsToTrigger;                                  // 0x0048 (size: 0x10)
    TArray<FCompendiumEntryRowHandle> CompendiumEntriesToUnlock;                      // 0x0058 (size: 0x10)
    TSoftObjectPtr<class UAnimMontage> DialogMontage;                                 // 0x0068 (size: 0x28)
    float MontageDelay;                                                               // 0x0090 (size: 0x4)

}; // Size: 0x98

struct FNPCConversationRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FNPCRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FNPCSpawnData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FGameplayTagContainer SpawnTags;                                                  // 0x0010 (size: 0x20)
    bool bExactTagMatch;                                                              // 0x0030 (size: 0x1)
    TArray<FNPCSpawnEntry> SpawnEntries;                                              // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FNPCSpawnEntry
{
    FNPCRowHandle NPCToSpawn;                                                         // 0x0000 (size: 0x10)
    FWorldFlagRowHandle WorldFlagRequired;                                            // 0x0010 (size: 0x10)
    float SpawnChanceWeight;                                                          // 0x0020 (size: 0x4)
    bool bUsesNormalLoadUnloadLogic;                                                  // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FNPCSpawnRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FNPCSpawnSubstitute : public FTableRowBase
{
    TMap<FWeatherEventRowHandle, FNPCRowHandle> WeatherOverrides;                     // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FNPCSpawnSubstituteRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FNPCTrader : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TSoftClassPtr<AAbioticCharacter> NPCClass;                                        // 0x0010 (size: 0x28)
    FNPCConversationRowHandle NPCConversation;                                        // 0x0038 (size: 0x10)
    FNPCTraderItemRowHandle NPCTradeInventory;                                        // 0x0048 (size: 0x10)
    int32 DaysOfTheWeek;                                                              // 0x0058 (size: 0x4)
    float ChanceToSpawn;                                                              // 0x005C (size: 0x4)
    TArray<FWorldFlagRowHandle> RequiredWorldFlags;                                   // 0x0060 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> NPCImage;                                        // 0x0070 (size: 0x28)

}; // Size: 0x98

struct FNPCTraderItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FNPCTraderRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FNPCVoice : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<TSoftObjectPtr<class UDialogueWave>> Idle;                                 // 0x0010 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> LostSightOfTarget;                    // 0x0020 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> SearchingForTarget;                   // 0x0030 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> CombatTaunt;                          // 0x0040 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> AttackingTarget;                      // 0x0050 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> MeleeAttackGrunt;                     // 0x0060 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> Aggro;                                // 0x0070 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> AggroNPCTarget;                       // 0x0080 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> PainStagger;                          // 0x0090 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> StartingReload;                       // 0x00A0 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> Startle;                              // 0x00B0 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DeathNormal;                          // 0x00C0 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DeathExplosive;                       // 0x00D0 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> NeedCover;                            // 0x00E0 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> SeekingCover;                         // 0x00F0 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> Flanking;                             // 0x0100 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> KilledNPCTarget;                      // 0x0110 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> KilledPlayerTarget;                   // 0x0120 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> AllyDeath;                            // 0x0130 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> LastAlive;                            // 0x0140 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> StartHealingFriend;                   // 0x0150 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ThrowingGrenade;                      // 0x0160 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ExitCombat;                           // 0x0170 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> FinishedHealingFriend;                // 0x0180 (size: 0x10)

}; // Size: 0x190

struct FNPCVoiceRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPaintedDeployable : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Default;               // 0x0010 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_White;                 // 0x0020 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Blue;                  // 0x0030 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Red;                   // 0x0040 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Green;                 // 0x0050 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Orange;                // 0x0060 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Purple;                // 0x0070 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Yellow;                // 0x0080 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Black;                 // 0x0090 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Cyan;                  // 0x00A0 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Lime;                  // 0x00B0 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Pink;                  // 0x00C0 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Brown;                 // 0x00D0 (size: 0x10)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Materials_Glitch;                // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FPaintedDeployableRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPet : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FPetRowHandle DefaultParent;                                                      // 0x0010 (size: 0x10)
    FNPCRowHandle PetNPC;                                                             // 0x0020 (size: 0x10)
    FGlobalItemRowHandle PetItem;                                                     // 0x0030 (size: 0x10)
    FBodyLimbHealth HealthBase;                                                       // 0x0040 (size: 0x30)
    FBodyLimbHealth HealthBonusPerLevel;                                              // 0x0070 (size: 0x30)
    double BaseDamage;                                                                // 0x00A0 (size: 0x8)
    double BaseRangedDamage;                                                          // 0x00A8 (size: 0x8)
    double DamageBonusPerLevel;                                                       // 0x00B0 (size: 0x8)
    double BaseSpecial;                                                               // 0x00B8 (size: 0x8)
    double SpecialBonusPerLevel;                                                      // 0x00C0 (size: 0x8)
    int32 DefaultLevel;                                                               // 0x00C8 (size: 0x4)
    FCompendiumEntryRowHandle PettingCompendiumUnlock;                                // 0x00D0 (size: 0x10)
    TArray<FGlobalItemRowHandle> TamingFood;                                          // 0x00E0 (size: 0x10)
    TArray<FPetMutations> Mutations;                                                  // 0x00F0 (size: 0x10)
    TSoftObjectPtr<class UAnimMontage> FeedAnim;                                      // 0x0100 (size: 0x28)
    TSoftObjectPtr<class USoundBase> FeedAudio;                                       // 0x0128 (size: 0x28)
    TSoftObjectPtr<class USoundBase> FeedMutationAudio;                               // 0x0150 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> FeedDeclinedAnim;                              // 0x0178 (size: 0x28)
    TSoftObjectPtr<class USoundBase> HungryAudio;                                     // 0x01A0 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> PetAnim;                                       // 0x01C8 (size: 0x28)
    TSoftObjectPtr<class USoundBase> PetAudio;                                        // 0x01F0 (size: 0x28)
    TSoftObjectPtr<class USoundBase> FollowStartAudio;                                // 0x0218 (size: 0x28)
    TSoftObjectPtr<class USoundBase> PickedUpAudio;                                   // 0x0240 (size: 0x28)
    TSoftObjectPtr<class UAnimSequenceBase> SleepAnim;                                // 0x0268 (size: 0x28)
    TSoftObjectPtr<class UStaticMesh> CollarMesh;                                     // 0x0290 (size: 0x28)
    FAudioOverrideMap AudioOverrides;                                                 // 0x02B8 (size: 0x50)

}; // Size: 0x308

struct FPetItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPetMutationRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPetMutations : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FPetRowHandle MutationTarget;                                                     // 0x0010 (size: 0x10)
    TArray<FGlobalItemRowHandle> MutationItems;                                       // 0x0020 (size: 0x10)
    TArray<FPetRowHandle> MutatesFrom;                                                // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FPetRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPhDRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPickupItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPlantData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)
    TSoftClassPtr<AActor> ProxyBP;                                                    // 0x0020 (size: 0x28)
    FPlantItemRowHandle PlantItem;                                                    // 0x0048 (size: 0x10)
    FSalvageRowHandle HarvestedItem;                                                  // 0x0058 (size: 0x10)
    FGlobalItemRowHandle SeedItem;                                                    // 0x0068 (size: 0x10)
    TMap<EPlantGrowthStage, FPlantMeshData> GrowthStages;                             // 0x0078 (size: 0x50)
    TSoftObjectPtr<class UStaticMesh> FruitMesh;                                      // 0x00C8 (size: 0x28)
    int32 FruitMeshCount;                                                             // 0x00F0 (size: 0x4)

}; // Size: 0xF8

struct FPlantItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPlantMeshData
{
    TSoftObjectPtr<class UStaticMesh> GrowthStageMesh;                                // 0x0000 (size: 0x28)
    TArray<TSoftObjectPtr<class UMaterialInterface>> GrowthStageTexture;              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FPlantRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FPlayerBaseData
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    TArray<AActor*> SignificantFurniture;                                             // 0x0010 (size: 0x10)
    TArray<AActor*> AllFurniture;                                                     // 0x0020 (size: 0x10)
    FVector BaseCenter;                                                               // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FProjectileRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FQuestData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText QuestText;                                                                  // 0x0010 (size: 0x10)
    FText QuestDescription;                                                           // 0x0020 (size: 0x10)
    FWorldFlagRowHandle StartWorldFlag;                                               // 0x0030 (size: 0x10)
    FWorldFlagRowHandle CompletionWorldFlag;                                          // 0x0040 (size: 0x10)
    int32 DisplayOrderPriority;                                                       // 0x0050 (size: 0x4)
    TArray<FQuestRowHandle> SubQuests;                                                // 0x0058 (size: 0x10)
    FName WaypointActorTag;                                                           // 0x0068 (size: 0x8)

}; // Size: 0x70

struct FQuestLineData : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText QuestLineName;                                                              // 0x0010 (size: 0x10)
    bool bImportantQuestLine;                                                         // 0x0020 (size: 0x1)
    FQuestLineRowHandle ParentQuestLine;                                              // 0x0028 (size: 0x10)
    TArray<FQuestRowHandle> Quests;                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FQuestLineRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FQuestRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FRecipeRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FRecipeSubstituteRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FRepGraphActorClassSettings
{
    FSoftClassPath ActorClass;                                                        // 0x0000 (size: 0x20)
    bool bAddClassRepInfoToMap;                                                       // 0x0020 (size: 0x1)
    EClassRepNodeMapping ClassNodeMapping;                                            // 0x0024 (size: 0x4)
    bool bAddToRPC_Multicast_OpenChannelForClassMap;                                  // 0x0028 (size: 0x1)
    bool bRPC_Multicast_OpenChannelForClass;                                          // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FResourceRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FRowHandle
{
    FName RowName;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSalvageRowHandle : public FRowHandle
{
}; // Size: 0x10

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
}; // Size: 0x10

struct FSaveData_ButtonStruct
{
    FSoftObjectPath ActorPath_119_F319A8334D7BE1A3331B168CC67B62E7;                   // 0x0000 (size: 0x20)
    FString ButtonID_109_E703F2D64AD6F2F26DE98DA58A2800F6;                            // 0x0020 (size: 0x10)
    bool ButtonHasBeenPressedOnce_110_C4AE20D34162FCD3FA3323907300CB1F;               // 0x0030 (size: 0x1)
    bool ButtonIsEnabled_111_6C427D5E4726ED1308E948A1A97EECC7;                        // 0x0031 (size: 0x1)
    bool ButtonActivated_123_93C3B8484C701E0D904AF8AC5FD62038;                        // 0x0032 (size: 0x1)
    bool NoReset_125_26B5DC7F411F708F04C121947C23ACFA;                                // 0x0033 (size: 0x1)

}; // Size: 0x38

struct FSaveData_CharacterSave_Struct
{
    bool CompletedIntro_26_7F0FCDEA4BA0DD4D229BF38724FF442C;                          // 0x0000 (size: 0x1)
    FVector LastSafeWorldLocation_30_486FB66C419E431BD6B754B0C04C9F5B;                // 0x0008 (size: 0x18)
    FString LastSafeWorldGUID_98_22FA31304F1D3CE0D223A99ED23D936E;                    // 0x0020 (size: 0x10)
    FRotator LastControlRotation_69_33E2359F425EBFDFB5CE2D84DCE6AD1B;                 // 0x0030 (size: 0x18)
    TArray<FAbioticInventoryItemSlot> EquipmentInventory_11_78EC662B493ED43BF306CD8FD82EA45A; // 0x0048 (size: 0x10)
    TArray<FAbioticInventoryItemSlot> HotbarInventory_12_EB0E545B44BB772E1CCFCEBF8F0170A1; // 0x0058 (size: 0x10)
    TArray<FAbioticInventoryItemSlot> Inventory_8_758B207A48BE5E12B0022C91938F32BD;   // 0x0068 (size: 0x10)
    TArray<FAbioticInventoryItemSlot> TransmogInventory_106_927A0B6647350D453ED2F5B7E007ADDB; // 0x0078 (size: 0x10)
    TArray<bool> TransmogVisibility_109_1A641CB4456B8440A96AE58F027AD93C;             // 0x0088 (size: 0x10)
    TArray<bool> TransmogDisabledArray_145_2BA8A3F74C6661475F021A9999C06090;          // 0x0098 (size: 0x10)
    TArray<FName> Traits_15_0039F2B34D2A43327122E9960B328E55;                         // 0x00A8 (size: 0x10)
    FName PhD_42_91C6570A451A177090EE25AF113045D2;                                    // 0x00B8 (size: 0x8)
    TArray<FAbiotic_CharacterSkill_Struct> Skills_22_3287F93C42DD32FCD04E9E8295C6EDC3; // 0x00C0 (size: 0x10)
    TArray<FName> ItemsPickedUp_40_201286D74B6DA7CECD1480A56F844497;                  // 0x00D0 (size: 0x10)
    TArray<FName> RecipesUnlock_41_C6D066A3416620A76188D2A39E4D8DF9;                  // 0x00E0 (size: 0x10)
    TArray<FName> RecipesRequiringResearch_89_0A2778A74B6F1090075D8A9BEE7A0361;       // 0x00F0 (size: 0x10)
    TArray<FName> JournalEntries_79_C0F0FF544DFD1060769BBF9D2D90127C;                 // 0x0100 (size: 0x10)
    TArray<FName> EmailsRead_82_C3961BBA4AC266EDE4EC7A85E176A75E;                     // 0x0110 (size: 0x10)
    FBodyLimbHealth CharacterHealth_51_C8B0855046256D908ECD3FAC9FD050C0;              // 0x0120 (size: 0x30)
    FCharacterStatsSave_Struct CurrentSurvivalStats_61_828D08B64E0E5CCA5B7C968C1EFA0E07; // 0x0150 (size: 0x40)
    FBuffSave_Struct CurrentBuffDebuffs_150_9E6DA0704D0DE0DEF375ACA4CFD2D80A;         // 0x0190 (size: 0x20)
    TSoftObjectPtr<class AActor> CurrentBed_65_AD4B63414DC6CA930DD825966CF17F32;      // 0x01B0 (size: 0x28)
    bool IsCrouching_72_680FCFCC416605B90367E48F72C519EE;                             // 0x01D8 (size: 0x1)
    int32 LastHotbarSelection_75_9D56EAE8464F9FFF52C04AA7B388D489;                    // 0x01DC (size: 0x4)
    int32 CurrentMoney_85_7425E5BF43364C11279E4C8C26F5A7CA;                           // 0x01E0 (size: 0x4)
    TArray<FName> MapsUnlocked_93_E9A91D554F338AD17C73E7A6EC41EB87;                   // 0x01E8 (size: 0x10)
    TArray<FName> CraftedItems_102_5D7DF1C8402AF7997BA975ACE8206FAB;                  // 0x01F8 (size: 0x10)
    TArray<FName> Compendium_EmailSections_117_5AF84C14476FC99020114C93ED0DBDA0;      // 0x0208 (size: 0x10)
    TArray<FName> Compendium_NarrativeSections_116_2FC6C70144FEDF460E5FE89B7CEA6B40;  // 0x0218 (size: 0x10)
    TArray<FName> Compendium_ExplorationSections_118_50A35DD9425836A07E8AB1A66CB9A8DE; // 0x0228 (size: 0x10)
    FName TerminalRespawnID_122_768A1D184AC865DC562E39A2765F34BE;                     // 0x0238 (size: 0x8)
    TArray<bool> FavoritedSlots_125_BD14BA2A40F37FA19BC7C6816BCC3F3C;                 // 0x0240 (size: 0x10)
    TArray<FName> Compendium_Fish_130_F3328DBD41952E919E4BF48486764935;               // 0x0250 (size: 0x10)
    TArray<FName> Compendium_Kill_134_68DA7D3440838FFFA0A3E996BC33C549;               // 0x0260 (size: 0x10)
    TArray<FCompendiumKillCount> Compendium_KillCount_137_580C4765460383FB00B3A0B49694B010; // 0x0270 (size: 0x10)
    TArray<FName> NewestRecipes_141_C7277E904ACCEB6C26F1FB967CADCAFA;                 // 0x0280 (size: 0x10)
    TArray<FName> Compendium_Unread_149_38D44AA044D8087E1B4026B3D3723202;             // 0x0290 (size: 0x10)
    TArray<FName> Fish_Unread_157_A91CA2374071D28DF6671F9816A63CA5;                   // 0x02A0 (size: 0x10)
    TArray<FName> Journal_Unread_158_D78ED364437E5F530D2BD9A60F06DCE7;                // 0x02B0 (size: 0x10)
    TArray<FName> ItemsDistilled_162_360CC93D4F1B4060A4AB61AC1E77FFC0;                // 0x02C0 (size: 0x10)
    FBuffSave_Struct CurrentBuffDebuffs_58_9E6DA0704D0DE0DEF375ACA4CFD2D80A;          // 0x02D0 (size: 0x20)
    FName PhD_17_91C6570A451A177090EE25AF113045D2;                                    // 0x02F0 (size: 0x8)

}; // Size: 0x2F8

struct FSaveData_Cooking_Struct
{
    FSoftObjectPath ActorPath_49_9FEEAC6446E69602638F6FB6A601D5B3;                    // 0x0000 (size: 0x20)
    FDataTableRowHandle OriginalItem_5_9765522C42FCC99E6F5D04BB2E72F5E0;              // 0x0020 (size: 0x10)
    FDataTableRowHandle CookwareItem_7_0CEA84364B6EFA85C1894C8973D19CEC;              // 0x0030 (size: 0x10)
    double TimetoCook_13_957973F1415B52E0EAF193BFCFEF1ED0;                            // 0x0040 (size: 0x8)
    double TimetoBurn_19_56E61B3D4CD7E80A3468F7B36710A67B;                            // 0x0048 (size: 0x8)
    double TimetoIgnite_21_E1D2B6EA42120839F22F679D838B0EDC;                          // 0x0050 (size: 0x8)
    bool ShowPanMesh_24_555B9EA344D3843851B621999A8B46A3;                             // 0x0058 (size: 0x1)
    FString ChefID_30_B6FE3723499B8BD398B599803507C8EB;                               // 0x0060 (size: 0x10)
    bool Cookware_33_F0F914814DCB16F2C065D59972EC2242;                                // 0x0070 (size: 0x1)
    FGuid CookingDelayGUID_36_032270FC4B3BB25FF024D2A7EE2A29CD;                       // 0x0074 (size: 0x10)
    bool CanCookSoup_39_063D45094EF66504F3CE228577A66547;                             // 0x0084 (size: 0x1)
    bool StartCookingSoup_41_86C766F8442EE0F41118538989D1C2AF;                        // 0x0085 (size: 0x1)
    bool NewIngredientAdded_43_B99A589D4E919808FCA92EB366AD138F;                      // 0x0086 (size: 0x1)
    ECookingState CookState_58_44043C7B47846DF5ADBDF48402C0D6A1;                      // 0x0087 (size: 0x1)
    ECookingState ChefState_59_E6B3445E44EE0E93B0F62AB2A503509F;                      // 0x0088 (size: 0x1)
    FDataTableRowHandle CookwareItem_61_0CEA84364B6EFA85C1894C8973D19CEC;             // 0x0090 (size: 0x10)
    FDataTableRowHandle OriginalItem_60_9765522C42FCC99E6F5D04BB2E72F5E0;             // 0x00A0 (size: 0x10)

}; // Size: 0xB0

struct FSaveData_Decal_Struct
{
    FSoftObjectPath ActorPath_29_3ECA6DFD4CEAB9ECDB8182B2A8CE47C0;                    // 0x0000 (size: 0x20)
    bool Removed_30_128506D0489955F65729EEA611C542AC;                                 // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSaveData_Deployable_Struct
{
    TSoftClassPtr<AActor> Class_77_84FAE6234D772064CD9B659BA5046B1C;                  // 0x0000 (size: 0x28)
    FSoftObjectPath ActorPath_164_90AA6DAB481E5DC2E125A3A94475F44D;                   // 0x0028 (size: 0x20)
    FAbioticInventoryChangeableData ChangableData_37_6153F4A94F01A776C108038B7F38E256; // 0x0048 (size: 0x88)
    bool DeployableDestroyed_56_80BF5DDE46C5F8C6E6CD9EBF6A695E5E;                     // 0x00D0 (size: 0x1)
    bool BrokeWhenPackaged_63_852033BB4713434A14C0D5B5792BA116;                       // 0x00D1 (size: 0x1)
    bool HasBeenPackaged_59_9C1C3E4D4D61B7BC4E7D13A1B993E1B0;                         // 0x00D2 (size: 0x1)
    FTransform Transform_50_85E8B13D40141C9B1308F4BB943BD753;                         // 0x00E0 (size: 0x60)
    bool DeployedByPlayer_71_EA4E6F5C4DBE9C472BC1D1B3ADEE0205;                        // 0x0140 (size: 0x1)
    bool ConstructionMode_82_B226CF9D4E57045A9835B39D8D7AF98D;                        // 0x0141 (size: 0x1)
    double ConstructionLevel_85_460528D64DD6D1712C19198BC316254B;                     // 0x0148 (size: 0x8)
    TArray<FSaveData_Inventories_Struct> ContainerInventories_110_3A680B7244ACB095D963B786D9BB6ECB; // 0x0150 (size: 0x10)
    TArray<bool> ActiveSeats_135_E030A01B4CB15C1F95700EA3945F2A85;                    // 0x0160 (size: 0x10)
    TArray<FSaveData_ItemProxy_Struct> ItemProxies_149_E2E145CE4015C4EDFA89E2B0CE3F579A; // 0x0170 (size: 0x10)
    FString CustomTextDisplay_152_B59A50C74001B5D2234D9E9B0D7CAB7F;                   // 0x0180 (size: 0x10)
    bool FoundByPlayer_154_B3A0D3F6458C7DAD36E130B39DAEDBE3;                          // 0x0190 (size: 0x1)
    TArray<FVector> Supports_158_FE0D33184131D1E1C73782B44057EB5C;                    // 0x0198 (size: 0x10)
    bool NoResetVignette_161_C76AFFC84B04AA28B73A65836D6BB265;                        // 0x01A8 (size: 0x1)
    double CustomSpawnedTime_169_BAD6DE0D42D4F78261A9128279F907FE;                    // 0x01B0 (size: 0x8)

}; // Size: 0x1C0

struct FSaveData_Destructible_Struct
{
    FSoftObjectPath ActorPath_29_3ECA6DFD4CEAB9ECDB8182B2A8CE47C0;                    // 0x0000 (size: 0x20)
    bool Broken_22_128506D0489955F65729EEA611C542AC;                                  // 0x0020 (size: 0x1)
    bool OneWayDoor_HasBeenUnlocked_9_128506D0489955F65729EEA611C542AC;               // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FSaveData_Door_Struct
{
    FSoftObjectPath ActorPath_23_AA99AF994766F5556796A89F89EF7645;                    // 0x0000 (size: 0x20)
    TEnumAsByte<E_DoorStates::Type> DoorState_16_FC20B6E3483FF18E4FBDF19E39E880E9;    // 0x0020 (size: 0x1)
    double DoorRotationRootYaw_17_FEB24A4F4081A0EFDC1475AB811846D1;                   // 0x0028 (size: 0x8)
    bool OneWayDoor_HasBeenUnlocked_9_128506D0489955F65729EEA611C542AC;               // 0x0030 (size: 0x1)
    bool NoReset_25_D7D89CE94FDDFF62450A9AA3A24C5FC8;                                 // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FSaveData_DroppedItem_Struct
{
    FVector ItemLocation_37_38E1A8E94468466B36C82A80795C18C7;                         // 0x0000 (size: 0x18)
    FRotator ItemRotation_38_4EE8B7A9420D79B21005E88FE02EEE26;                        // 0x0018 (size: 0x18)
    FAbioticInventoryItemSlot ItemData_41_A1D40E254568FE81F5A36EB0FFF12116;           // 0x0030 (size: 0x98)
    bool NoDespawn_43_C1DE3E2547279E1C5B2194A40BFAE6A4;                               // 0x00C8 (size: 0x1)

}; // Size: 0xD0

struct FSaveData_Elevator_Struct
{
    FSoftObjectPath ActorPath_29_DD4E0D454F84CBCA00709896259D249A;                    // 0x0000 (size: 0x20)
    bool TopOpen_26_FC20B6E3483FF18E4FBDF19E39E880E9;                                 // 0x0020 (size: 0x1)
    bool DoorState_16_FC20B6E3483FF18E4FBDF19E39E880E9;                               // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FSaveData_EncounterDirector_Struct
{
    FSoftObjectPath ActorPath_5_0A834E0C4FDE53BE48AA01AD2C0E257A;                     // 0x0000 (size: 0x20)
    int32 LastEncounterDay_2_1C7430EA45B91E3D4531F2B345B5556E;                        // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FSaveData_GlobalUnlocks_Struct
{
    TSet<FName> GlobalRecipesUnlocked_43_AA99AF994766F5556796A89F89EF7645;            // 0x0000 (size: 0x50)
    TSet<FName> GlobalRecipesResearched_44_1AC051E9407AF4F01F9F19A62C5CE01E;          // 0x0050 (size: 0x50)
    TArray<FName> GlobalItemsPickedUp_32_0D99146044C3330A30A4C4AB8980DAF4;            // 0x00A0 (size: 0x10)
    TArray<FName> GlobalEmailsRead_34_0A562D184DBED267F898E6A3128557B4;               // 0x00B0 (size: 0x10)
    TArray<FName> GlobalJournalEntries_36_0AB6A0E444B128E28D0741917389C897;           // 0x00C0 (size: 0x10)
    TArray<FName> GlobalCompendiumEmail_38_181999554462F3D8CD3BC7AEF1037A2D;          // 0x00D0 (size: 0x10)
    TArray<FName> GlobalCompendiumNarrative_40_EEBC4619442FF6008D8282A684063892;      // 0x00E0 (size: 0x10)
    TArray<FName> GlobalCompendiumExploration_42_D35947E2407A37D800A2538AB82EDEA5;    // 0x00F0 (size: 0x10)
    FString ActiveLeyakContainmentID_48_759AE779473F27DD9483AAB34D22A795;             // 0x0100 (size: 0x10)
    TArray<FName> GlobalItemsDistilled_52_359C87824289E29B1CEDBFB9CFCEDEBC;           // 0x0110 (size: 0x10)

}; // Size: 0x120

struct FSaveData_Inventories_Struct
{
    TArray<FAbioticInventoryItemSlot> InventoryContent_3_62DE207642C4C366452A129C54F542F5; // 0x0000 (size: 0x10)
    int32 ComponentID_6_606002AC4D025212386B30ACD626A853;                             // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FSaveData_ItemProxy_Struct
{
    int32 SpotIndex_75_9396897F4B2435CCF9B5909D8FFDF3B2;                              // 0x0000 (size: 0x4)
    FAbioticInventoryChangeableData ChangeableData_72_4C9675D849FC210B33DB648A3249A0E0; // 0x0008 (size: 0x88)
    FDataTableRowHandle ItemRow_81_75819F45465D9DA0D3BF64B9C00E1D92;                  // 0x0090 (size: 0x10)
    FSaveData_Cooking_Struct CookingData_60_6DEA84C54D2A902875B23580EAEA39BA;         // 0x00A0 (size: 0xB0)
    TArray<double> TimerData_66_6D089E0745B138F4F3ED42BD7C99CC2F;                     // 0x0150 (size: 0x10)
    FDataTableRowHandle ItemData_78_75819F45465D9DA0D3BF64B9C00E1D92;                 // 0x0160 (size: 0x10)
    FDataTableRowHandle ItemRow_82_75819F45465D9DA0D3BF64B9C00E1D92;                  // 0x0170 (size: 0x10)

}; // Size: 0x180

struct FSaveData_NPCSpawn
{
    FSoftObjectPath ActorPath_20_ED536E6F4A900C466BBD05B047427685;                    // 0x0000 (size: 0x20)
    double CurrentCooldownRemaining_4_B3BE986244C5C3E9F62BEE87D2C6A52B;               // 0x0020 (size: 0x8)
    int32 LastDayOnCooldown_27_075C48654ADA3BF2BB6AAB93D644CAB4;                      // 0x0028 (size: 0x4)
    int32 SpawnCount_17_4617365A4F5E3082B09DE8B2C5C433D0;                             // 0x002C (size: 0x4)
    bool HasSpawnedOnce_14_46E5CFD746B7EF4C60EE5490F647695D;                          // 0x0030 (size: 0x1)
    int32 MinutesPassedCooldownStarted_24_8E0DC672460891BCD8830CBAB51AD583;           // 0x0034 (size: 0x4)
    bool HasBeenEncounteredOnce_30_3CB5D548463CE37436E7708866429B99;                  // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FSaveData_NPCState_Struct
{
    FSoftObjectPath ActorPath_10_AA8197574CDA01EA496CFC9ABD7354E7;                    // 0x0000 (size: 0x20)
    bool IsDead_4_CA620DAE4DEEF38E5F98EF83FB456F5E;                                   // 0x0020 (size: 0x1)
    TEnumAsByte<E_NarrativeNPCStates::Type> NarrativeState_7_4356CFB54CE55C60875D739B0062A5C1; // 0x0021 (size: 0x1)
    FText CustomName_19_3542D8E24BE07A9FD2793886625856FB;                             // 0x0028 (size: 0x10)
    FVector Location_22_4A2FC732466C4BFB7DD7D28401ECCA3C;                             // 0x0038 (size: 0x18)
    TMap<EBodyLimbs, double> CurrentHealthMap_37_3DCC36A344E90F15026001BAEBBFFA26;    // 0x0050 (size: 0x50)
    TSoftClassPtr<AActor> NPCClass_40_6B707D0B4E3EA501567782B7473C4B3C;               // 0x00A0 (size: 0x28)
    TArray<FDynamicProperty> DynamicProperties_44_6B93027F469540FB2E6F04AA8D04608B;   // 0x00C8 (size: 0x10)

}; // Size: 0xD8

struct FSaveData_PortalStruct
{
    FSoftObjectPath ActorPath_9_BF5843B24ECABBAC3E3E5EA3301ACED1;                     // 0x0000 (size: 0x20)
    bool PortalActive_2_421FE7D44B4A3762D8E590ACA4A0D096;                             // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSaveData_PowerSockets
{
    FString PowerSocket_23_0F6755A14AF8031F65674CB6F8553D7A;                          // 0x0000 (size: 0x10)
    FString PluggedInDeviceAssetID_20_EDF3C1474C00B1AC29424D8B05460265;               // 0x0010 (size: 0x10)
    bool HasTimer_9_3EE13A6A4C191C0D16A106BF214E9F81;                                 // 0x0020 (size: 0x1)
    TEnumAsByte<E_PowerTimerModes::Type> TimerMode_8_B4F1798A4364D14CC93168AD9E666B81; // 0x0021 (size: 0x1)
    TArray<FString> ExtraPoweredDeviceAssetIDs_22_3D4D3BEC466CE522948FDDA95A85853E;   // 0x0028 (size: 0x10)
    TArray<FString> ExtraPoweredDevices_18_3D4D3BEC466CE522948FDDA95A85853E;          // 0x0038 (size: 0x10)
    FString PluggedInDevice_3_EDF3C1474C00B1AC29424D8B05460265;                       // 0x0048 (size: 0x10)
    FString PowerSocket_14_0F6755A14AF8031F65674CB6F8553D7A;                          // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FSaveData_Resource_Struct
{
    FSoftObjectPath ActorPath_37_F4CA4A154B350038CF0724BFE4AADA17;                    // 0x0000 (size: 0x20)
    FVector CurrentPosition_34_E00DC5304FE00C5E0A12D7995D504F83;                      // 0x0020 (size: 0x18)
    bool HasBeenPickedUp_29_54FB1A1746210CAC4EFB698940C75094;                         // 0x0038 (size: 0x1)
    int32 DayPickedUp_40_A1150F174D478F1FEF71618160019860;                            // 0x003C (size: 0x4)
    FVector Transform_26_E00DC5304FE00C5E0A12D7995D504F83;                            // 0x0040 (size: 0x18)

}; // Size: 0x58

struct FSaveData_SecurityDoor_Struct
{
    FSoftObjectPath ActorPath_30_79A47AAB48798A47C351A29E0C028802;                    // 0x0000 (size: 0x20)
    bool IsDoorOpen_27_128506D0489955F65729EEA611C542AC;                              // 0x0020 (size: 0x1)
    bool NoReset_32_111CC37841CCD80CE11E9983C40348CC;                                 // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FSaveData_SinkContainer_Struct
{
    FAbioticInventoryItem SinkProxyItemData_2_8DF6EA034F7123270F3C2E8E0FA7AB18;       // 0x0000 (size: 0x698)
    int32 SpotIndex_5_33924E3F400E80999593B488FB9D9DC2;                               // 0x0698 (size: 0x4)

}; // Size: 0x6A0

struct FSaveData_Tram
{
    FSoftObjectPath ActorPath_9_BF5843B24ECABBAC3E3E5EA3301ACED1;                     // 0x0000 (size: 0x20)
    FSoftObjectPath LastStation_16_FC5C2B47405057A1696E1F83421106A3;                  // 0x0020 (size: 0x20)
    TArray<FSaveData_Inventories_Struct> ContainerInventories_22_3D24FF5848B39BEFB1096CABE599CA26; // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FSaveData_TravelingNPC_Struct
{
    FName NPCRow_2_C02E606A465D8BF801D94CBE9A3EE08D;                                  // 0x0000 (size: 0x8)
    TSoftObjectPtr<class AActor> PreferredSpawn_21_101A3B0A419A367323CA53B9BD8875BA;  // 0x0008 (size: 0x28)
    FName TradeItemsRow_23_B610045C470B5C487BC3B0A8BA72515B;                          // 0x0030 (size: 0x8)
    TArray<int32> TradeStock_26_432081D540F3B4356C1F298035180AF6;                     // 0x0038 (size: 0x10)
    TEnumAsByte<E_NarrativeNPCStates::Type> NarrativeState_30_C4CBF7D64EA49446F41B0DB8517B6B7E; // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FSaveData_Trigger_Struct
{
    FString UniqueTriggerID_2_E30F69404E55AF238A104F8F1587A555;                       // 0x0000 (size: 0x10)
    int32 TimesTriggered_5_30E176F44466633B0EA582BAD82FACE9;                          // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FSaveData_Vehicle_Struct
{
    TSoftClassPtr<AActor> Class_164_84FAE6234D772064CD9B659BA5046B1C;                 // 0x0000 (size: 0x28)
    FString VehicleID_160_F41359174DBD46A5207ABD9F4C6FFBDC;                           // 0x0028 (size: 0x10)
    FTransform Transform_50_85E8B13D40141C9B1308F4BB943BD753;                         // 0x0040 (size: 0x60)
    TArray<FSaveData_Inventories_Struct> ContainerInventories_110_3A680B7244ACB095D963B786D9BB6ECB; // 0x00A0 (size: 0x10)
    bool VehicleDriveable_163_E36AC928417142344C1AAFB155C332D4;                       // 0x00B0 (size: 0x1)
    bool VehicleDestroyed_167_2CCD4A754C3A1E6D797F12BBA7A9CC05;                       // 0x00B1 (size: 0x1)
    TSoftClassPtr<AActor> Class_77_84FAE6234D772064CD9B659BA5046B1C;                  // 0x00B8 (size: 0x28)
    FString DeployableFurniture_55_F41359174DBD46A5207ABD9F4C6FFBDC;                  // 0x00E0 (size: 0x10)
    FString DeployableFurniture_61_F41359174DBD46A5207ABD9F4C6FFBDC;                  // 0x00F0 (size: 0x10)
    FString Door_5_F41359174DBD46A5207ABD9F4C6FFBDC;                                  // 0x0100 (size: 0x10)

}; // Size: 0x110

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
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0028 (size: 0x10)
    int32 RequiredEquipmentCount;                                                     // 0x0038 (size: 0x4)
    TArray<FSetBonusEntry> Buffs;                                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FSetBonusEntry
{
    int32 RequiredEquipmentCount;                                                     // 0x0000 (size: 0x4)
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSetBonusRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FSimpleTexture2D : public FTableRowBase
{
    TSoftObjectPtr<class UTexture2D> Texture2D;                                       // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FSingleText : public FTableRowBase
{
    FText Text;                                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSkillData : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0028 (size: 0x28)
    ECharacterSkills SkillType;                                                       // 0x0050 (size: 0x1)
    TMap<FStatModifierRowHandle, int32> StatModifierMap;                              // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FSkillPerk : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0018 (size: 0x10)
    int32 RequiredLevel;                                                              // 0x0028 (size: 0x4)
    FBuffDebuffRowHandle BuffDebuff;                                                  // 0x0030 (size: 0x10)
    FSkillRowHandle SkillRow;                                                         // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FSkillPerkData : public FTableRowBase
{
    FRecipeRowHandle PerkBuffID;                                                      // 0x0008 (size: 0x10)
    ECharacterSkills Skill;                                                           // 0x0018 (size: 0x1)
    int32 LevelGainedAt;                                                              // 0x001C (size: 0x4)

}; // Size: 0x20

struct FSkillPerkRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FSkillRecipeRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FSkillRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FSmallDeployableItemRowHandle : public FRowHandle
{
}; // Size: 0x10

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

struct FSoupRecipeRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FStatModifier : public FTableRowBase
{
    FString DisplayText;                                                              // 0x0008 (size: 0x10)
    EStatModifierApplyType ApplyType;                                                 // 0x0018 (size: 0x1)
    float FloatMultiplier;                                                            // 0x001C (size: 0x4)

}; // Size: 0x20

struct FStatModifierEntry
{
    FStatModifierRowHandle Type;                                                      // 0x0000 (size: 0x10)
    int32 Value;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FStatModifierRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTPAnimation : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TSoftObjectPtr<class UAimOffsetBlendSpace> TP_AimOffset;                          // 0x0010 (size: 0x28)
    TSoftObjectPtr<class UAnimSequence> TP_AimOffset_BASE;                            // 0x0038 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> TP_UseMontage;                                 // 0x0060 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> TP_ReloadMontage;                              // 0x0088 (size: 0x28)
    TSoftObjectPtr<class UAnimMontage> TP_UseSecondaryMontage;                        // 0x00B0 (size: 0x28)

}; // Size: 0xD8

struct FTPAnimationRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTPMeshSocketRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTVTipRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTVTips : public FTableRowBase
{
    TArray<TSoftObjectPtr<class UMaterialInterface>> OnScreenMaterials;               // 0x0008 (size: 0x10)
    TArray<TSoftObjectPtr<class USoundBase>> AudioLoops;                              // 0x0018 (size: 0x10)

}; // Size: 0x28

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

struct FTeleporterTagRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTextureVariant : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText ItemNameOverride;                                                           // 0x0010 (size: 0x10)
    FText ItemDescriptionOverride;                                                    // 0x0020 (size: 0x10)
    FText ItemFlavorTextOverride;                                                     // 0x0030 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> IconOverride;                                    // 0x0040 (size: 0x28)
    TArray<TSoftObjectPtr<class UMaterialInterface>> Texture_Variants;                // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FTextureVariantRowHandle : public FRowHandle
{
}; // Size: 0x10

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

struct FTimeOfDay_Struct
{
    double TimeOfDaySeconds_6_36D2E06F41B4F347E8ABBD8A390BB5B6;                       // 0x0000 (size: 0x8)
    int32 CurrentDay_9_15AFDFAD44ED286FBB66E797DA3068A1;                              // 0x0008 (size: 0x4)
    int32 CurrentMonth_10_15034F7342F51B2063E890836900DD45;                           // 0x000C (size: 0x4)
    int32 LastAssaultDay_15_E6239D2E4669758C115858B6B85F5F08;                         // 0x0010 (size: 0x4)
    bool IsAssaultDay_17_7178FE464A28F65893916B867ED07B66;                            // 0x0014 (size: 0x1)
    int32 LastWeatherDay_23_AFD7EE8B4E4F6098141818BC53D39621;                         // 0x0018 (size: 0x4)
    FName ActiveWeatherRow_22_B3E5AEC34C615AB2DB2329B86904803A;                       // 0x001C (size: 0x8)
    int32 LastPowerLeechDay_27_503FE02E4E4E6310AAA5FEBE064F1C2B;                      // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FTraceTimeCache
{
    FVector OwnerLocation;                                                            // 0x0000 (size: 0x18)
    FVector EyeLocation;                                                              // 0x0018 (size: 0x18)
    FVector EyeForward;                                                               // 0x0030 (size: 0x18)
    float TraceTime;                                                                  // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FTraderItemWF
{
    FInstancedStruct Output;                                                          // 0x0000 (size: 0x10)
    FWorldFlagRowHandle WorldFlagToMakeAvailable;                                     // 0x0010 (size: 0x10)
    int32 AvailableStock;                                                             // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FTraderItems : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<FTraderItemWF> BuyableItems;                                               // 0x0010 (size: 0x10)
    TArray<FAbioticItemCount> TradeableItems;                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FTraderOutput
{
}; // Size: 0x1

struct FTraderOutputCustomization : public FTraderOutput
{
    FAnyCustomizationRowHandle Customization;                                         // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FTraderOutputRecipe : public FTraderOutput
{
    FAnyRecipeRowHandle Recipe;                                                       // 0x0000 (size: 0x18)

}; // Size: 0x18

struct FTrait : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText TraitName;                                                                  // 0x0010 (size: 0x10)
    FText TraitDescription;                                                           // 0x0020 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> TraitIcon;                                       // 0x0030 (size: 0x28)
    FBuffDebuffRowHandle TraitBuff;                                                   // 0x0058 (size: 0x10)
    TMap<ECharacterSkills, int32> TraitSkillModification;                             // 0x0068 (size: 0x50)
    TArray<FAnyTraitRowHandle> TraitsForcedByThisTrait;                               // 0x00B8 (size: 0x10)
    TArray<FAnyTraitRowHandle> MutuallyExclusiveTraits;                               // 0x00C8 (size: 0x10)
    int32 PointCost;                                                                  // 0x00D8 (size: 0x4)
    bool AvailableOnStart;                                                            // 0x00DC (size: 0x1)

}; // Size: 0xE0

struct FTraitRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTutorialHint : public FTableRowBase
{
    FText HintLongText;                                                               // 0x0008 (size: 0x10)
    FKeybindSettingRowHandle OptionalKeybind;                                         // 0x0018 (size: 0x10)
    bool NoAutoRemoval;                                                               // 0x0028 (size: 0x1)
    bool DoNotSave;                                                                   // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FTutorialHintRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTutorialPanelKeybindTipRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTutorialPanelKeybindTips : public FTableRowBase
{
    FText Title;                                                                      // 0x0008 (size: 0x10)
    FText Description;                                                                // 0x0018 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> PlaceholderImage;                                // 0x0028 (size: 0x28)
    bool DoNotSave;                                                                   // 0x0050 (size: 0x1)
    TMap<FKeybindSettingRowHandle, FText> KBM_Binds;                                  // 0x0058 (size: 0x50)
    TMap<FKeybindSettingRowHandle, FText> Gamepad_Binds;                              // 0x00A8 (size: 0x50)

}; // Size: 0xF8

struct FTutorialPanelTipRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FTutorialPanelTips : public FTableRowBase
{
    FText Title;                                                                      // 0x0008 (size: 0x10)
    FText Description;                                                                // 0x0018 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> PlaceholderImage;                                // 0x0028 (size: 0x28)
    bool DoNotSave;                                                                   // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FUGCRowInfo
{
    bool bIsUGC;                                                                      // 0x0000 (size: 0x1)
    FString ModName;                                                                  // 0x0008 (size: 0x10)
    FString Author;                                                                   // 0x0018 (size: 0x10)
    int64 ModId;                                                                      // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FUIKeybindAction : public FTableRowBase
{
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    TArray<TSoftClassPtr<UAbioticWidget>> SupportedWidgets;                           // 0x0018 (size: 0x10)
    TSoftClassPtr<UKeybindAction> KeybindAction;                                      // 0x0028 (size: 0x28)
    int32 Priority;                                                                   // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FUIKeybindActionRowHandle : public FRowHandle
{
}; // Size: 0x10

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
}; // Size: 0x10

struct FUnderwaterFX : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FPostProcessSettings PostProcess;                                                 // 0x0010 (size: 0x6F0)

}; // Size: 0x700

struct FUnderwaterFXRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FUserEntitlements
{
    TArray<FString> Entitlements;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FVideoSettingRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWaypointData : public FTableRowBase
{
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0008 (size: 0x28)
    bool DisplayText;                                                                 // 0x0030 (size: 0x1)
    FText TextToShow;                                                                 // 0x0038 (size: 0x10)
    bool ShowProgressBar;                                                             // 0x0048 (size: 0x1)
    FLinearColor IconColor;                                                           // 0x004C (size: 0x10)
    FLinearColor ProgressBarFillColor;                                                // 0x005C (size: 0x10)
    FLinearColor TextColor;                                                           // 0x006C (size: 0x10)
    double RenderScale;                                                               // 0x0080 (size: 0x8)

}; // Size: 0x88

struct FWaypointRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWeaponAnimationRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWeaponCoating : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText CoatingName;                                                                // 0x0010 (size: 0x10)
    FText Description;                                                                // 0x0020 (size: 0x10)
    TSoftClassPtr<UActorComponent> ComponentClass;                                    // 0x0030 (size: 0x28)
    TSoftObjectPtr<class UMaterialInterface> OverlayMaterial;                         // 0x0058 (size: 0x28)
    TMap<TSubclassOf<UAbioticDamageType>, double> BonusDamage;                        // 0x0080 (size: 0x50)
    TArray<FBuffDebuffRowHandle> DebuffsToApply;                                      // 0x00D0 (size: 0x10)
    TSoftObjectPtr<class USoundBase> HitSound;                                        // 0x00E0 (size: 0x28)
    TSoftObjectPtr<class UNiagaraSystem> HitParticle;                                 // 0x0108 (size: 0x28)
    int32 Durability;                                                                 // 0x0130 (size: 0x4)

}; // Size: 0x138

struct FWeaponCoatingCosmetic
{
    bool UseMaskedTexture;                                                            // 0x0000 (size: 0x1)
    TSoftObjectPtr<class UTexture2D> MaskedTexture;                                   // 0x0008 (size: 0x28)
    FVector GradientDirection;                                                        // 0x0030 (size: 0x18)
    double GradientBias;                                                              // 0x0048 (size: 0x8)
    double GradientContrast;                                                          // 0x0050 (size: 0x8)
    double PulseIntensity;                                                            // 0x0058 (size: 0x8)
    double PulseSpeed;                                                                // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FWeaponCoatingRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWeaponItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWeaponMeleeData : public FTableRowBase
{
    TArray<FMeleeSwingStyle> MeleeSwings;                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FWeatherEvent : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FText WeatherName;                                                                // 0x0010 (size: 0x10)
    FText ChatWarningMessage;                                                         // 0x0020 (size: 0x10)
    FAnnouncementRowHandle AnnouncementRow;                                           // 0x0030 (size: 0x10)
    TSoftClassPtr<AWeatherDirector> WeatherDirector;                                  // 0x0040 (size: 0x28)
    FWorldFlagRowHandle RequiredWorldFlag;                                            // 0x0068 (size: 0x10)
    FLevelFXRowHandle LevelFXRow;                                                     // 0x0078 (size: 0x10)
    FWorldFlagRowHandle TriggeredBeforeWorldFlag;                                     // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FWeatherEventRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWishingShelfItemRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWishingShelfStats : public FTableRowBase
{
    int32 QuantityMin;                                                                // 0x0008 (size: 0x4)
    int32 QuantityMax;                                                                // 0x000C (size: 0x4)
    FWorldFlagRowHandle RequiredFlag;                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWorldCache
{
    TMap<FString, UAbioticSave*> FileToSaveMap;                                       // 0x0010 (size: 0x50)

}; // Size: 0xB0

struct FWorldFlag : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    FString DebugText;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FWorldFlagRowHandle : public FRowHandle
{
}; // Size: 0x10

struct FWorldFlagTrigger : public FTableRowBase
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0008 (size: 0x1)
    TArray<FWorldFlagRowHandle> RequiredWorldFlags;                                   // 0x0010 (size: 0x10)
    FWorldFlagRowHandle WorldFlagToGrant;                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FWorldFlagTriggerRowHandle : public FRowHandle
{
}; // Size: 0x10

class AAbioticAIController : public AAIController
{

    void CollectDebugAIData();
}; // Size: 0x3C0

class AAbioticCharacter : public ACharacter
{
    bool bSmoothCamera;                                                               // 0x0688 (size: 0x1)
    FVector2D PendingSmoothCameraInput;                                               // 0x0690 (size: 0x10)
    float SmoothCameraSpeed;                                                          // 0x06A0 (size: 0x4)
    bool bZeroControllerRotationPitch;                                                // 0x06A4 (size: 0x1)
    bool bZeroControllerRotationRoll;                                                 // 0x06A5 (size: 0x1)
    TArray<TScriptInterface<class IGravityOverrideInterface>> GravityOverrides;       // 0x06A8 (size: 0x10)
    bool bHasBeenRagdolling;                                                          // 0x06C0 (size: 0x1)
    class AActor* TetheredBy;                                                         // 0x06C8 (size: 0x8)
    FGameplayTagContainer GameplayTags;                                               // 0x06D0 (size: 0x20)
    TArray<AAbioticCharacter*> NearbyCharacters;                                      // 0x06F0 (size: 0x10)
    FAbioticCharacterOnNearbyCharacterTagsUpdated OnNearbyCharacterTagsUpdated;       // 0x0700 (size: 0x10)
    void NearbyCharacterTagsRefreshed();
    class USceneComponent* IDCardMeshSocketReference;                                 // 0x0710 (size: 0x8)
    bool bUseBeltIDCardLocation;                                                      // 0x0718 (size: 0x1)
    class UCharacterBuffComponent* BuffComponent;                                     // 0x0720 (size: 0x8)
    class UAudioOverrideComponent* AudioOverrideComponent;                            // 0x0728 (size: 0x8)
    TArray<FStatModifierEntry> StatModifiers;                                         // 0x0730 (size: 0x10)
    TMap<FStatModifierRowHandle, float> StatModifierMap;                              // 0x0740 (size: 0x50)
    TMap<FStatModifierRowHandle, int32> CheatStatModifierMap;                         // 0x0790 (size: 0x50)
    TMap<FSkillRowHandle, int32> SkillLevelMap;                                       // 0x07E0 (size: 0x50)
    FAbioticCharacterOnStatModifiersRefreshed OnStatModifiersRefreshed;               // 0x0830 (size: 0x10)
    void OnStatModifiersRefreshed();
    bool bStatsLocked;                                                                // 0x0840 (size: 0x1)
    FStatModifierRowHandle MaxHealthModifier;                                         // 0x0848 (size: 0x10)
    FStatModifierRowHandle MaxHeadHealthModifier;                                     // 0x0858 (size: 0x10)
    FStatModifierRowHandle MaxTorsoHealthModifier;                                    // 0x0868 (size: 0x10)
    TMap<EBodyLimbs, float> DefaultMax_LimbHealthMap;                                 // 0x0878 (size: 0x50)
    float CurrentHealth_Head;                                                         // 0x08C8 (size: 0x4)
    float CurrentHealth_Torso;                                                        // 0x08CC (size: 0x4)
    float CurrentHealth_LeftArm;                                                      // 0x08D0 (size: 0x4)
    float CurrentHealth_RightArm;                                                     // 0x08D4 (size: 0x4)
    float CurrentHealth_LeftLeg;                                                      // 0x08D8 (size: 0x4)
    float CurrentHealth_RightLeg;                                                     // 0x08DC (size: 0x4)
    FAbioticCharacterOnHealthChanged OnHealthChanged;                                 // 0x08E0 (size: 0x10)
    void HealthChangedDelegate();
    float CurrentStamina;                                                             // 0x08F0 (size: 0x4)
    float MaxStamina;                                                                 // 0x08F4 (size: 0x4)
    float StaminaRequiredToSprint;                                                    // 0x08F8 (size: 0x4)
    FAbioticCharacterOnStaminaChanged OnStaminaChanged;                               // 0x0900 (size: 0x10)
    void StaminaChangedDelegate();
    float BaseWalkSpeed;                                                              // 0x0910 (size: 0x4)
    float BaseSprintSpeed;                                                            // 0x0914 (size: 0x4)
    float MinimumMovementSpeed;                                                       // 0x0918 (size: 0x4)
    float GlobalSpeedModifier;                                                        // 0x091C (size: 0x4)
    float GlobalSprintSpeedModifier;                                                  // 0x0920 (size: 0x4)
    float GlobalSwimSpeedModifier;                                                    // 0x0924 (size: 0x4)
    float GlobalCrouchSpeedModifier;                                                  // 0x0928 (size: 0x4)
    uint8 bIsSprinting;                                                               // 0x092C (size: 0x1)
    uint8 bIsAiming;                                                                  // 0x092C (size: 0x1)
    float JetpackTimestamp;                                                           // 0x0930 (size: 0x4)
    bool bHasStaminaToSprint;                                                         // 0x0934 (size: 0x1)
    float ToggleSprintEnabledTimestamp;                                               // 0x0938 (size: 0x4)
    TMap<FGameplayTag, FAudioOverride> AudioOverrides;                                // 0x0940 (size: 0x50)
    bool GhostMode;                                                                   // 0x0990 (size: 0x1)

    void UpdateSkillStatLevel(FSkillRowHandle Skill, int32 Level);
    void ToggleSprint();
    void ToggleCrouch();
    void ToggleAim();
    void StopSprint(bool bClientSimulation);
    void StopAim(bool bClientSimulation);
    void Sprint(bool bClientSimulation);
    void SetUseBeltIDCardLocation(bool bUseBeltLocation);
    void SetStatUpdateLock(bool bLocked);
    void SetMaxStamina(float NewMaxStamina);
    void SetLimbHealth(EBodyLimbs Limb, float Health);
    void SetInternalStates(bool bDBNO, bool bDead, bool bSitting);
    void SetCurrentStamina(float NewCurrentStamina);
    void ScaledLaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    void RemoveNearbyCharacter(class AAbioticCharacter* Character, class UPrimitiveComponent* OverlapPrimitive);
    void RemoveGravityOverride(TScriptInterface<class IGravityOverrideInterface> Override, bool bCanReset);
    void RejectDLCTeleport();
    void OnUseBeltIDCardLocationUpdated();
    void OnStatModifiersUpdated();
    void OnSprintUpdated();
    void OnRep_UseBeltIDCardLocation();
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
    void IsSprinting();
    void IsLocalAbioticCharacter();
    void IsAlive();
    void IsAiming();
    void HasMatchingGameplayTag(FGameplayTag TagToCheck);
    void HasGravityOverrides();
    void HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    void HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    void GhostModeChanged(bool IsGhost);
    void GetTotalHealth();
    void GetStatModifierValue(float BaseValue, FStatModifierRowHandle Modifier);
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);
    void GetNPCAwarenessData(TMap<AActor*, float>& LastSeenPotential, TMap<AActor*, float>& ListOfPerceptionTargets, TMap<AActor*, float>& AttackerList);
    void GetMaxTotalHealth();
    void GetMaxLimbHealth(EBodyLimbs Limb);
    void GetMaxHealthMap(TMap<EBodyLimbs, float>& MaxHealthMap);
    void GetLimbPercentage(EBodyLimbs Limb);
    void GetLimbHealth(EBodyLimbs Limb);
    void GetJetpackVelocity(const FVector& InitialVelocity, const FVector& FallingVelocity, const float JetpackStartTime, const float DeltaTime);
    void GetInputComponent();
    void GetGravityWorldRotation(const FRotator& Rotation);
    void GetGravityRelativeRotation(const FRotator& Rotation);
    void GetGravityOverrides(TArray<TScriptInterface<class IGravityOverrideInterface>>& OutOverrides);
    void GetDefaultMeshScale();
    void GetCurrentHealthMap(TMap<EBodyLimbs, float>& CurrentHealthMap);
    void GetAIControllerClass();
    void DoesNearbyCharacterMatchTagQuery(FGameplayTagQuery TagQuery);
    void DoesNearbyCharacterHaveTag(FGameplayTag Tag);
    void ClearCheatStatModifiers();
    void CheckForStaminaEvents();
    void CanLaunchOutOfWater();
    void Aim(bool bClientSimulation);
    void AddNearbyCharacter(class AAbioticCharacter* Character, class UPrimitiveComponent* OverlapPrimitive);
    void AddGravityOverride(TScriptInterface<class IGravityOverrideInterface> Override);
    void AddCheatStatModifier(FStatModifierRowHandle Modifier, int32 Value);
}; // Size: 0x9A0

class AAbioticGameMode : public AGameMode
{

    void SaveModeratorList(const TArray<FString>& InModeratorList);
    void SaveBannedPlayerList(const TArray<FString>& InBannedPlayerList);
    void OnPlayerBanned(class APlayerController* BannedPlayer, const FText& BanReason);
    void LoadModeratorList(TArray<FString>& OutModeratorList);
    void LoadBannedPlayerList(TArray<FString>& OutBannedPlayerList);
}; // Size: 0x378

class AAbioticGameSession : public AGameSession
{
}; // Size: 0x2C8

class AAbioticGameState : public AGameState
{
    int32 SavedElapsedMinutes;                                                        // 0x0340 (size: 0x4)
    TMap<AActor*, FString> TeleporterLocationMap;                                     // 0x0348 (size: 0x50)
    TMap<AActor*, bool> TeleporterPoweredMap;                                         // 0x0398 (size: 0x50)
    TMap<FString, bool> TeleporterLocationActiveMap;                                  // 0x03E8 (size: 0x50)
    class ULevelManagerComponent* LevelManager;                                       // 0x0438 (size: 0x8)
    TArray<FWorldFlagRowHandle> WorldFlags;                                           // 0x0440 (size: 0x10)
    FString SessionShortCode;                                                         // 0x0450 (size: 0x10)
    FUniqueNetIdRepl SessionId;                                                       // 0x0460 (size: 0x30)
    TArray<FString> ServerEntitlements;                                               // 0x0490 (size: 0x10)
    bool bHomeWorldsEnabled;                                                          // 0x04A0 (size: 0x1)
    bool bHardcoreMode;                                                               // 0x04A1 (size: 0x1)
    FAbioticGameStateOnServerEntitlementsUpdated OnServerEntitlementsUpdated;         // 0x04A8 (size: 0x10)
    void ServerEntitlementsUpdated();

    void SetTeleporterPowered(class AActor* Teleporter, bool bIsPowered);
    void SetTeleporterLocation(class AActor* Teleporter, FString LocationName);
    void SetServerEntitlements(const TMap<FString, FUserEntitlements>& InServerEntitlements);
    void RemoveTeleporterLocation(class AActor* Teleporter);
    void OnRep_WorldFlags();
    void OnRep_SessionId();
    void OnRep_ServerEntitlements();
    void HasServerGameEntitlement(FGameEntitlementRowHandle Entitlement);
    void GetElapsedMinutes();
    void DoesLocationHaveMatchingTeleporter(FString LocationName, class AActor* Teleporter);
    void CanLevelBeActive(FGameEntitlementRowHandle RequiredEntitlement, FWorldFlagRowHandle RequiredWorldFlag);
}; // Size: 0x4B8

class AAbioticLevelStreamingVolume : public AVolume
{
    EReleaseGroup ReleaseGroup;                                                       // 0x02D0 (size: 0x1)
    TSoftObjectPtr<class UWorld> LevelToLoad;                                         // 0x02D8 (size: 0x28)
    TSoftObjectPtr<class UWorld> RequiredParentLevel;                                 // 0x0300 (size: 0x28)
    FGameEntitlementRowHandle RequiredEntitlement;                                    // 0x0328 (size: 0x10)
    FWorldFlagRowHandle RequiredWorldFlag;                                            // 0x0338 (size: 0x10)
    bool bDisabledForDemo;                                                            // 0x0348 (size: 0x1)
    float X;                                                                          // 0x034C (size: 0x4)
    float Y;                                                                          // 0x0350 (size: 0x4)
    float Z;                                                                          // 0x0354 (size: 0x4)

}; // Size: 0x358

class AAbioticPhysicsVolume : public APhysicsVolume
{
    class AWaterBody* WaterBody;                                                      // 0x02E0 (size: 0x8)

}; // Size: 0x2E8

class AAbioticPlayerController : public APlayerController
{
    class AAbioticCharacter* PlayerCharacter;                                         // 0x0860 (size: 0x8)
    FCachedInputData CachedFrameInput;                                                // 0x0868 (size: 0x70)
    bool CameraCompensateForGravityRotation;                                          // 0x08D8 (size: 0x1)
    TSubclassOf<class UAbioticTargetingManager> TargetingManagerClass;                // 0x08E0 (size: 0x8)
    class UAbioticTargetingManager* TargetingManager;                                 // 0x08E8 (size: 0x8)
    bool bAllowKeyUINavigation;                                                       // 0x08F0 (size: 0x1)
    bool bAllowTabUINavigation;                                                       // 0x08F1 (size: 0x1)
    bool bAllowAnalogUINavigation;                                                    // 0x08F2 (size: 0x1)

    void ToggleLoadingScreen(bool bShow);
    void SetUseSoftwareCursor(bool bEnabled);
    void ServerPlayerVoiceIsBlocked(class AAbioticPlayerState* OtherPlayer);
    void Request_ExecuteGameCommand(FGameCommandRowHandle RowHandle, FString FirstParam, FString SecondParam);
    void ProjectWorldToScreenClamped(const FVector& WorldPosition, FVector2D& ScreenPosition, FVector2D& ScreenDirection, FMargin Padding, bool bPlayerViewportRelative, bool bClamp);
    void OnDetectAnyInput(const FKey& InKey);
    void GetGravityWorldRotation(const FRotator& Rotation);
    void GetGravityRelativeRotation(const FRotator& Rotation);
    void BumpCursor();
}; // Size: 0x910

class AAbioticPlayerState : public APlayerState
{
    bool bIsPlayerMuted;                                                              // 0x0350 (size: 0x1)
    TEnumAsByte<EAbioticPlatform> PlayerPlatform;                                     // 0x0352 (size: 0x1)
    TArray<APlayerState*> VoiceBlockedPlayers;                                        // 0x0358 (size: 0x10)

    void OnRep_PlayerPlatform();
    void OnPlayerNameUpdated();
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
    TMap<FName, bool> SandboxValues_Bool;                                             // 0x04D0 (size: 0x50)
    TMap<FName, float> SandboxValues_Float;                                           // 0x0520 (size: 0x50)
    TMap<FName, int32> SandboxValues_Int;                                             // 0x0570 (size: 0x50)

    void OnRep_SandboxValues();
    void GetSandboxValues();
}; // Size: 0x5C0

class ABenchUpgradeActor : public AActor
{
}; // Size: 0x298

class ABuffActor : public AActor
{
    FBuffDebuffRowHandle Buff;                                                        // 0x0298 (size: 0x10)
    bool bBuffPendingRemoval;                                                         // 0x02A8 (size: 0x1)

    void Server_OnBuffEndPlay(FBuffDebuffRowHandle BuffRow);
    void Server_OnBuffBeginPlay(FBuffDebuffRowHandle BuffRow);
    void OnBuffComponentInitialized(class UCharacterBuffComponent* BuffComponent);
    void Local_OnBuffEndPlay(FBuffDebuffRowHandle BuffRow);
    void Local_OnBuffBeginPlay(FBuffDebuffRowHandle BuffRow);
    void DoesSameBuffActorExist();
    void Broadcast_OnBuffEndPlay(FBuffDebuffRowHandle BuffRow);
    void Broadcast_OnBuffBeginPlay(FBuffDebuffRowHandle BuffRow);
}; // Size: 0x2B0

class ADebugTeleport : public AActor
{
    FName TeleportID;                                                                 // 0x0298 (size: 0x8)
    EJournalEntryCategories TeleporterRegion;                                         // 0x02A0 (size: 0x1)
    EReleaseGroup ReleaseGroup;                                                       // 0x02A1 (size: 0x1)
    class UTextRenderComponent* TextRender;                                           // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class ANPCSpawn : public AActor
{
    FGameplayTagContainer NPCSpawnTags;                                               // 0x0298 (size: 0x20)

}; // Size: 0x2B8

class ATeleporterParent : public AActor
{
    EReleaseGroup ReleaseGroup;                                                       // 0x0298 (size: 0x1)

}; // Size: 0x2A0

class AWeatherDirector : public AActor
{
}; // Size: 0x298

class IAbioticModSourceInterface : public IInterface
{
}; // Size: 0x28

class IAudioOverrideInterface : public IInterface
{

    void GetAudioOverrideComponent();
    void AudioMapChangeReceived(const TMap<FGameplayTag, FAudioOverride>& NewAudioOverrides);
}; // Size: 0x28

class ICraftedTeleporter : public IInterface
{

    void UpdateTeleporterActiveState(bool NewActiveState);
}; // Size: 0x28

class IGravityOverrideInterface : public IInterface
{

    void GetGravityPriority();
    void GetGravityData(class AAbioticCharacter* Character, FVector& OutDirection, float& OutStrength, EGravityCameraBehavior& CameraBehavior);
}; // Size: 0x28

class IThermal : public IInterface
{

    void ThermalEmitterActiveUpdated(bool bActive);
    void GetThermalOverlapPrimitives(TArray<UPrimitiveComponent*>& OutPrimitives);
    void GetAmbientTemperature();
    void ApplyNewTemperature(float NewTemperature);
}; // Size: 0x28

class UABFCombinedSaveSubsystem : public UEngineSubsystem
{
    TMap<FString, FWorldCache> WorldNameToCacheMap;                                   // 0x0030 (size: 0x50)

}; // Size: 0xA8

class UABFMeshMergeManager : public UEngineSubsystem
{
    TMap<FName, FGeneratedMeshCacheEntry> GeneratedMeshes;                            // 0x0030 (size: 0x50)

    void GenerateCombinedMesh(class AActor* ParentActor, class USkeletalMeshComponent* ParentComponent, TArray<USkeletalMeshComponent*> ComponentsToMerge, FName OverrideCacheName);
    void ClearCombinedMeshCache();
}; // Size: 0xD0

class UABFRowRegistrySubsystem : public UEngineSubsystem
{
    TArray<UDataTable*> BaseTables;                                                   // 0x0268 (size: 0x10)
    TArray<UObject*> RootedModObjects;                                                // 0x0278 (size: 0x10)

    void SetSessionLoadOrder(const TArray<int64>& ServerOrder);
    void SetModioDependencies(int64 ModioModID, const TArray<int64>& DependsOn);
    void OnUGCPackagesChanged();
    void K2_GetResolvedLoadOrder();
    void IsSessionLoadOrderActive();
    void InvalidateLoadOrder();
    void GetMergedDependencies();
    void GetLocalOnlyModsForNetwork();
    void GetLoadOrderForNetwork();
    void GetLoadOrderEntries();
    void GetCachedModProfile(int64 ModId, FAbioticModProfile& OutProfile);
    void GetCachedModName(int64 ModId);
    void ClearSessionLoadOrder();
    void CacheModProfile(int64 ModId, FString Name, FString Author);
}; // Size: 0x2A8

class UAIDirectorSubsystem : public UWorldSubsystem
{
    TMap<TSoftObjectPtr<class AActor>, FAISpawnerData> AISpawnMap;                    // 0x0030 (size: 0x50)
    FAIDirectorSubsystemOnSpawnerCooldownUpdated OnSpawnerCooldownUpdated;            // 0x0080 (size: 0x10)
    void SpawnerCooldownUpdated(TSoftObjectPtr<class AActor> Spawner);

    void UpdateCurrentDay(int32 Day);
    void TriggerEncounterOnOwningSpawner(const class UObject* WorldContextObject, class AAbioticCharacter* AI);
    void SetCooldownForSpawner(const class UObject* WorldContextObject, class AActor* Spawner, float TimeRemaining, int32 InCurrentDay, bool bOnlySpawnOnce);
    void RemoveVignetteAISpawnData(const TArray<FString>& VignetteNames);
    void RemoveSpawnedAIFromSpawnList(class AAbioticCharacter* SpawnedAI, TSoftObjectPtr<class AActor> OptionalSpawner);
    void RefreshCooldownOnOwningSpawner(const class UObject* WorldContextObject, class AAbioticCharacter* AI, TArray<AActor*> NearbyPlayers);
    void NPCSpawnDebug();
    void GetSpawnedAIFromSpawnerPtr(TSoftObjectPtr<class AActor> Spawner, TArray<AAbioticCharacter*>& SpawnedAI);
    void GetSpawnedAIFromSpawner(class AActor* Spawner, TArray<AAbioticCharacter*>& SpawnedAI);
    void GetNearbyPlayersOnDeathFromSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    void GetLastTotalCooldownFromSpawner(class AActor* Spawner);
    void GetLastCooldownDayForSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    void GetHasBeenEncounteredOnceForSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    void GetCurrentCooldownRemainingFromSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    void GetCooldownDaysRemainingFromSpawner(const class UObject* WorldContextObject, class AActor* Spawner, int32 DaysRequired);
    void FastNPCDormancy();
    void DoesSpawnerDataExist(class AActor* Spawner);
    void ClearNearbyPlayersOnSpawner(const class UObject* WorldContextObject, class AActor* Spawner);
    void ClearCooldownOnOwningSpawner(const class UObject* WorldContextObject, class AAbioticCharacter* AI);
    void ClearCooldownOnAllCachedSpawns();
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
    void GetValueAsVector(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsString(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsRotator(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsObject(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsName(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsInt(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsFloat(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsEnum(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsClass(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
    void GetValueAsBool(const class UBlackboardComponent* Blackboard, FBlackboardName Key);
}; // Size: 0x28

class UAbioticAnimNotify_MaterialSwap : public UAnimNotifyState
{
    FGameplayTag NotifyTag;                                                           // 0x0030 (size: 0x8)
    TArray<UMaterialInterface*> Materials;                                            // 0x0038 (size: 0x10)

}; // Size: 0x48

class UAbioticAnimNotify_PlaySound : public UAnimNotify_PlaySound
{
    FName NotifyName;                                                                 // 0x0058 (size: 0x8)
    FGameplayTag NotifyTag;                                                           // 0x0060 (size: 0x8)
    bool bFireMontageNotify;                                                          // 0x0068 (size: 0x1)

    void PlaySoundNotify(class USkeletalMeshComponent* MeshComp, const FAbioticSoundNotifyData& SoundNotifyData);
    void AsSoundNotifyData();
}; // Size: 0x70

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
    void IsSprinting();
    void IsAiming();
    void GetWaddingImmersionDepth();
    void GetScaledGravity();
    void GetScaledFriction();
    void GetImmersionDepth();
    void GetDefaultAirControl();
}; // Size: 0xFC0

class UAbioticCharacterSave : public UAbioticSave
{
    FAbioticCharacterSaveData CharacterSaveData;                                      // 0x00E0 (size: 0x2E8)

}; // Size: 0x3C8

class UAbioticCheatManager : public UCheatManager
{

    void InvalidateCombinedWorldCache(FString& WorldName);
}; // Size: 0x88

class UAbioticDamageType : public UDamageType
{
    FText DamageTypeDisplayName;                                                      // 0x0040 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> DamageTypeIcon;                                  // 0x0050 (size: 0x28)
    FText KilledByMessage;                                                            // 0x0078 (size: 0x10)
    bool CanGib;                                                                      // 0x0088 (size: 0x1)
    bool InstantGibType;                                                              // 0x0089 (size: 0x1)
    bool BlocksDBNO;                                                                  // 0x008A (size: 0x1)
    double DeployableDamageMultiplier;                                                // 0x0090 (size: 0x8)
    bool CanHarmResourceNodes;                                                        // 0x0098 (size: 0x1)
    bool CanBeShieldBlocked;                                                          // 0x0099 (size: 0x1)
    bool InstantDeathType;                                                            // 0x009A (size: 0x1)
    bool DisallowDeathSaveLocation;                                                   // 0x009B (size: 0x1)
    bool CanConstruct;                                                                // 0x009C (size: 0x1)
    bool CanRepair;                                                                   // 0x009D (size: 0x1)
    bool IgnoreArmor;                                                                 // 0x009E (size: 0x1)
    bool IgnoreBodyShields;                                                           // 0x009F (size: 0x1)
    bool CanHeadshot;                                                                 // 0x00A0 (size: 0x1)
    double Construction_Multiplier;                                                   // 0x00A8 (size: 0x8)
    ECharacterSkills SkillToAddXPOnHit;                                               // 0x00B0 (size: 0x1)
    double SkillXPMultiplier;                                                         // 0x00B8 (size: 0x8)
    double FortitudeXPMultiplier;                                                     // 0x00C0 (size: 0x8)
    TArray<FName> DebuffsCanApply_LowDmg;                                             // 0x00C8 (size: 0x10)
    TArray<FName> DebuffsCanApply_MediumDmg;                                          // 0x00D8 (size: 0x10)
    TArray<FName> DebuffsCanApply_HighDmg;                                            // 0x00E8 (size: 0x10)
    TArray<FName> DebuffsCanApply_ExtremeDmg;                                         // 0x00F8 (size: 0x10)
    TMap<ECriticalityLevels, double> SeverityLevels;                                  // 0x0108 (size: 0x50)
    EDamageFeedbackType DamageFeedbackType;                                           // 0x0158 (size: 0x1)
    EDeathYellType DeathFeedbackType;                                                 // 0x0159 (size: 0x1)
    class USoundCue* LocalDamageSound;                                                // 0x0160 (size: 0x8)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UMaterialInstance>> SurfaceType; // 0x0168 (size: 0x50)
    double BodyShieldDamage_Multiplier;                                               // 0x01B8 (size: 0x8)
    FGameplayTagContainer DamageTags;                                                 // 0x01C0 (size: 0x20)
    class USoundCue* WeaknessHitSounds;                                               // 0x01E0 (size: 0x8)
    double RagdollImpulseMultiplier;                                                  // 0x01E8 (size: 0x8)
    double StaminaDamageMultiplier;                                                   // 0x01F0 (size: 0x8)
    bool ShouldStaggerTarget;                                                         // 0x01F8 (size: 0x1)
    TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<USoundBase>> SurfaceTypeSounds; // 0x0200 (size: 0x50)
    FStatModifierRowHandle DamageReductionStat;                                       // 0x0250 (size: 0x10)
    FGameplayTagContainer GameplayTags;                                               // 0x0260 (size: 0x20)

}; // Size: 0x280

class UAbioticFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ValidateDamageResults(class UObject* WorldContextObject, TArray<FHitResult>& HitResults, TArray<FHitData>& HitData, TArray<AActor*>& HitPawns, TEnumAsByte<ETraceTypeQuery> TraceChannel, TMap<AActor*, FHitResult>& OutHitActors);
    void UpperBound_Int32(const TArray<int32>& Array, int32 Value);
    void UpperBound_Float(const TArray<double>& Array, float Value);
    void UpdateWidgetInteractionKeyboardFocus(class UWidgetInteractionComponent* WidgetInteractionComponent);
    void UnwindModId(FModioModID ModId);
    void SortSavesByDate(TMap<UObject*, FDateTime>& SaveMap, bool bSortByNewest);
    void SortLocationsByDistanceToLocation(TArray<FVector>& Locations, const FVector& Target);
    void SortLocationsByDistanceToClosestLocation(TArray<FVector>& Locations, const TArray<FVector>& Targets);
    void SortLocationsByDistanceToClosestActor(TArray<FVector>& Locations, const TArray<AActor*>& Actors);
    void SortInventoryArray(TArray<FSortedItem> InventoryArray, TArray<int32>& OutIndexesToClear);
    void ShouldUseRCON();
    void SetShapeAreaClassOverride(class UShapeComponent* ShapeComponent, TSubclassOf<class UNavAreaBase> AreaClassOverride);
    void SetPrimitiveCanEverAffectNavigation(class UPrimitiveComponent* Primitive, bool bCanEverAffectNavigation);
    void SetMouseSmoothing(bool bEnabled);
    void SetDecalSize(class UDecalComponent* DecalComponent, FVector Size);
    void SetActorCanEverAffectNavigation(class AActor* Actor, bool bCanEverAffectNavigation);
    void SanitizeSaveFolderName(FString FolderName);
    void RemovePIEPrefix(const FSoftObjectPath& InPath);
    void ProcessDamageResults(TArray<FHitResult>& HitResults, TEnumAsByte<ECollisionChannel> TraceChannel, TArray<FHitData>& OutHitData, TArray<AActor*>& OutHitPawns);
    void PasteFromClipboard(FString& Text);
    void OpenFolderDirectory(FString FolderPath);
    void MontageGetSections(class UAnimMontage* Montage, TMap<FName, float>& OutSectionData);
    void MontageGetSectionNames(class UAnimMontage* Montage, TArray<FName>& OutSectionNames);
    void ModifyPhysicsLocks(class UPrimitiveComponent* Primitive, bool bLockXRotation, bool bLockYRotation, bool bLockZRotation);
    void ModIdsExactMatch(const TArray<int64>& A, const TArray<int64>& B);
    void MergeValidStructData(class UStruct* BaseStruct, class UStruct* OverridingStruct);
    void MarkObjectDirty(class UObject* Object);
    void MakeSavedObjectPath(const class AActor* Actor);
    void LowerBound_Int32(const TArray<int32>& Array, int32 Value);
    void LowerBound_Float(const TArray<double>& Array, float Value);
    void LessThan_String(FString LHS, FString RHS);
    void KeyIsSpaceBar(const FKey& Key);
    void KeyIsLeftMouse(const FKey& Key);
    void KeyIsFaceButtonTop(const FKey& Key);
    void KeyIsEnter(const FKey& Key);
    void IsWorldTearingDown(const class UObject* WorldContextObject);
    void IsWindowsTimezoneAutomatic(bool& bTimezoneAutomatic, bool& bTimeAutomatic);
    void IsValidNotifyName(class UAnimMontage* Montage, FName NotifyName);
    void IsUsingAnimBlueprint(const class USkeletalMeshComponent* SkeletalMeshComponent);
    void IsTRMode();
    void IsSubscribedApp(int32 AppID);
    void IsSteamSocketsInitialized();
    void IsSteamdeck();
    void IsReleaseMode();
    void IsReleaseGroupActive(EReleaseGroup ReleaseGroup);
    void IsPIERunning();
    void IsModTesting();
    void IsFunctionImplemented(const UClass* Class, FName FunctionName, const bool bIncludeSuperClass);
    void IsFilmMode();
    void IsFeatureEnabled(FName FeatureName);
    void IsEditor();
    void IsDemoMode();
    void IsConsoleBuild();
    void IsBuildType(TEnumAsByte<EGameSettingPlatformType> BuildType);
    void InvertAlphaAndSetUITextureGroupEditorOnly(class UTexture* Texture);
    void InitSteamInput();
    void InitSteamDeck();
    void HasValidOnlineSubsystem();
    void HasActorRecentlyLoaded(class UObject* WorldContextObject, class AActor* Actor, float Tolerance);
    void GreaterThan_String(FString LHS, FString RHS);
    void GetWorldSaveFileList(FString WorldFolder);
    void GetWorldSandboxSettingsFilePath(FString WorldSaveName);
    void GetWorldCountLimit();
    void GetWorldAssetFromLevelStreaming(class ULevelStreaming* LevelStreaming);
    void GetVoiceFromDialogue(const class UDialogueWave* DialogueWave);
    void GetVideoSetting_String(FVideoSettingRowHandle VideoSetting);
    void GetVideoSetting_Int(FVideoSettingRowHandle VideoSetting);
    void GetVideoSetting_Float(FVideoSettingRowHandle VideoSetting);
    void GetVideoSetting_Bool(FVideoSettingRowHandle VideoSetting);
    void GetSystemLanguage();
    void GetSubtitlesFromDialogue(const class UDialogueWave* DialogueWave, bool bUseSourceText, TArray<FString>& OutSubtitleLines, TArray<float>& OutSubtitleTimes);
    void GetStructPropertiesOfClass(class UStruct* Struct, UClass* Class, TArray<UObject*>& OutObjects, TArray<FName>& OutNames);
    void GetSteamIDFromPlayerState(const class APlayerState* PlayerState);
    void GetSourceTextFromDialogueWave(const class UDialogueWave* DialogueWave);
    void GetSoundWaveFromDialogue(const class UDialogueWave* DialogueWave);
    void GetSkeleton(const class UAnimSequenceBase* Animation);
    void GetSessionFavoriteID(class UObject* WorldContextObject, const FBlueprintSessionResult& SessionResult, bool& bDedicated, FString& OutFavoriteID);
    void GetServerMaxPlayers();
    void GetSaveSubfolderName();
    void GetSavedObjectPath(const FSoftObjectPath& InSavePath, FSoftObjectPath& OutSavePath);
    void GetRCONPort();
    void GetPrimaryAssetsOfType(FPrimaryAssetType PrimaryAssetType, TArray<FAssetData>& OutAssetData);
    void GetPlayerSaveID(const class APlayerState* PlayerState);
    void GetPersistentWorld(const class UObject* WorldContextObject, bool bRemovePIEPrefix);
    void GetPersistentLevel(const class UObject* WorldContextObject);
    void GetPaintedMaterials(FPaintedDeployableRowHandle PaintedRow, EPaintColor PaintColor, TArray<TSoftObjectPtr<class UMaterialInterface>>& OutMaterials);
    void GetNumShaderCompilesRemaining();
    void GetLocalizedTextFromDialogueWave(const class UDialogueWave* DialogueWave);
    void GetLevelNameFromWorldAsset(const TSoftObjectPtr<class UWorld>& WorldAsset);
    void GetLevelFromStreamingLevel(class ULevelStreaming* LevelStreaming);
    void GetLevelFileName(const FLevelMetadata& LevelMetadata);
    void GetHitPenetration(const FHitResult& Hit);
    void GetGravityAtLocation(const FVector& Location);
    void GetGameplayTagsFromQuery(const FGameplayTagQuery& Query, TArray<FGameplayTag>& OutTags);
    void GetGameplaySetting_String(FGameplaySettingRowHandle VideoSetting);
    void GetGameplaySetting_Int(FGameplaySettingRowHandle GameplaySetting);
    void GetGameplaySetting_Float(FGameplaySettingRowHandle GameplaySetting);
    void GetGameplaySetting_Bool(FGameplaySettingRowHandle GameplaySetting);
    void GetGamepadIdentifierEnum();
    void GetGamepadIdentifier();
    void GetGamepadEnumID(class UObject* WorldContextObject);
    void GetFocusedWidget();
    void GetDamageTypeCDO(TSubclassOf<class UDamageType> DamageType);
    void GetDamageDefinitionsFromQuery(const FGameplayTagQuery& TagQuery);
    void GetCurrectFacilityDate(const int32 DaysPassed, EDayOfTheWeek& CurrentWeekday, int32& CurrentDay, EMonthOfTheYear& CurrentMonth, int32& CurrentYear);
    void GetControlSetting_String(FControlSettingRowHandle VideoSetting);
    void GetControlSetting_Int(FControlSettingRowHandle ControlSetting);
    void GetControlSetting_Float(FControlSettingRowHandle ControlSetting);
    void GetControlSetting_Bool(FControlSettingRowHandle ControlSetting);
    void GetCompendiumRecipesToUnlock(const TArray<FName>& UnlockedExplorationArray, const TArray<FName>& UnlockedEmailArray, const TArray<FName> UnlockedNPCArray, const TArray<FName> UnlockedKillArray, const TSet<FName>& AlreadyUnlockedRecipes, TSet<FName>& OutActiveKillRequirements);
    void GetCompendiumKillCount(const TArray<FCompendiumKillCount>& KillCounts, const FCompendiumEntryRowHandle CompendiumRow, int32& OutCount, int32& OutRequiredCount, bool& bOutCompleted);
    void GetAudioSetting_String(FAudioSettingRowHandle VideoSetting);
    void GetAudioSetting_Int(FAudioSettingRowHandle AudioSetting);
    void GetAudioSetting_Float(FAudioSettingRowHandle AudioSetting);
    void GetAudioSetting_Bool(FAudioSettingRowHandle AudioSetting);
    void GetAssetNameFromWorld(TSoftObjectPtr<class UWorld> World);
    void GetAllLevelStreaming(class UObject* WorldContextObject, TArray<ULevelStreaming*>& OutLevelStreaming);
    void GetAllActorsOfClassFromLevel(const class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const class UObject* LevelObject, TArray<AActor*>& OutActors);
    void GetAdminIniPath();
    void GetAccessibilitySetting_String(FAccessibilitySettingRowHandle VideoSetting);
    void GetAccessibilitySetting_Int(FAccessibilitySettingRowHandle AccessibilitySetting);
    void GetAccessibilitySetting_Float(FAccessibilitySettingRowHandle AccessibilitySetting);
    void GetAccessibilitySetting_Bool(FAccessibilitySettingRowHandle AccessibilitySetting);
    void GetAbioticPlayerCharacter(const class UObject* WorldContextObject, int32 PlayerIndex);
    void FuzzySearchV2(const TArray<FString>& NameArray, FString SearchInput);
    void FuzzySearch(const TArray<FName>& NameArray, FString SearchInput);
    void ForceDestroyComponent(class UActorComponent* Component);
    void FilterMatchingTags(const FGameplayTagContainer& InTags, const FGameplayTagContainer& FilterTags, FGameplayTagContainer& OutTags);
    void EnableLumenOptimizations(const class UObject* WorldContextObject);
    void DistributeValueRandomlyToArray(int32 ValueToBeDistributed, int32 ArraySize);
    void DeleteDirectory(FString WorldName);
    void DayOfTheWeekToFlag(const EDayOfTheWeek DayOfWeek);
    void CopyToClipboard(FString Text);
    void ConvertStringToSearchable(FString InString);
    void ConvertStringToSave(FString String);
    void ConvertSoftObjectToSave(const TSoftObjectPtr<class UObject> SoftObject);
    void Conv_Int64ToModioModID(int64 ModId);
    void ComputeBounceResult(const FHitResult& Hit, const FVector& Velocity, float Bounciness, float Friction, float CurrentMaxSpeed);
    void CharacterItemWeightModifiers(class AAbioticCharacter* Character, float InItemWeight, float ItemRadioactivity, const FGameplayTagContainer& ItemTags);
    void CanReleaseGroupBeStripped(EReleaseGroup ReleaseGroup);
    void CalculateFishingReward(FFishingZoneRowHandle FishingZone, int32 TimeOfDayHour, const FGameplayTagContainer& RodTags, const FGameplayTagContainer& BaitTags, const FGameplayTagContainer& PlayerTags, const FGameplayTagContainer& WeatherTags, bool bHotspot, bool bNoRares, const TArray<FWorldFlagRowHandle>& WorldFlags, bool bDebug, bool& bWasJunkCatch, FSalvageRowHandle& OutJunkSalvage, FFishRowHandle& OutFishReward);
    void AdjustAimForAimCorrection(class UObject* WorldContextObject, const FVector& AimStartLocation, const FVector& AimVector, float MaxAdjustmentAngle, int32 PlayerIndex);
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
    FString PendingDirectConnectAddress;                                              // 0x0290 (size: 0x10)
    bool bDirectConnectRetryUsed;                                                     // 0x02A0 (size: 0x1)
    TArray<FString> CurrentBannedPlayers;                                             // 0x02A8 (size: 0x10)
    uint8 bShowedPrivilegeLimitations;                                                // 0x0348 (size: 0x1)
    uint8 bCanPlayOnline;                                                             // 0x0348 (size: 0x1)
    uint8 bCanCrossplay;                                                              // 0x0348 (size: 0x1)
    uint8 bCanCommunicate;                                                            // 0x0348 (size: 0x1)
    uint8 bCanUseMods;                                                                // 0x0348 (size: 0x1)
    uint8 bIsSoloOrLanPlayOnly;                                                       // 0x0348 (size: 0x1)
    uint8 bNeedsPrivilgesCheck;                                                       // 0x0348 (size: 0x1)
    FString ActiveWorldSaveName;                                                      // 0x0350 (size: 0x10)
    TArray<UAbioticSave*> PendingWorldSaves;                                          // 0x0360 (size: 0x10)
    TArray<UAbioticSave*> PendingPlayerSaves;                                         // 0x0370 (size: 0x10)
    bool bIsSaving;                                                                   // 0x0380 (size: 0x1)
    TMap<FString, UAbioticSave*> PlayerSaveMap;                                       // 0x0388 (size: 0x50)
    TMap<FString, UAbioticSave*> WorldSaveMap;                                        // 0x03D8 (size: 0x50)
    TSubclassOf<class UAbioticSave> WorldSaveClass;                                   // 0x0428 (size: 0x8)
    TSubclassOf<class UAbioticSave> MetaDataSaveClass;                                // 0x0430 (size: 0x8)
    TSubclassOf<class UAbioticSave> PlayerSaveClass;                                  // 0x0438 (size: 0x8)

    void ToggleStatUnit(bool bEnabled);
    void ToggleStatFPS(bool bEnabled);
    void ShowStorePurchaseUI(FString AbioticId);
    void SetUnfocusedVolumeMultiplier(float NewVolumeMultiplier);
    void SetLocalOnlyModAutoMount(bool bAllow);
    void OnSessionInviteAcceptedWhileOffline();
    void OnRemoteConsoleCommand(FString Command, const TArray<FString>& Arguments);
    void OnPreModUninstall(FModioModID ModId);
    void OnPlayerHasActiveSanction(bool bIsPermenantSanction, FDateTime ExpirationTime);
    void OnOnlineStatusChanged(bool bIsOnline);
    void OnOnlinePrivilegesUpdated();
    void OnOnlinePrivilegesLimited();
    void OnOnlineLoginComplete(bool bWasSuccessful, FString ErrorMessage);
    void OnModProviderInitialized(bool bSuccess);
    void OnModDownloadsFailed(const TArray<FModioModID>& FailedMods, bool bInsufficientSpace);
    void OnlineLogout();
    void OnlineLogin();
    void OfflineLoginComplete();
    void MappingsChanged(class APlayerController* Player);
    void IsLoggedIn();
    void HasPendingSessionInvites();
    void HasPendingSaves();
    void HasGameEntitlement(FGameEntitlementRowHandle Entitlement);
    void GetWorldSave(FString LevelSuffix, bool& bNewSave);
    void GetUnlockedEntitlements();
    void GetSessionShortCode();
    void GetSessionMaxPlayers();
    void GetPlayerSave(FString PlayerId, bool bCreateIfNotFound);
    void GetMetaDataSave(bool& bNewSave);
    void GetBaseSessionSettings();
    void GenerateSessionShortCode();
    void FixupPlayerSuffix(FString PlayerSuffix);
    void FixupLevelSuffix(FString LevelSuffix);
    void FindPlayerStateForUniqueId(FString InUniqueID);
    void DoesWorldSaveExist(FString LevelSuffix);
    void DoesPlayerSaveExist(FString PlayerId);
    void DoesActiveWorldExist();
    void CreatePlayerResetSave(FString PlayerId);
    void ClientWasKicked(const FText& KickReason);
    void ClearPendingSessionInvites();
    void CheckForPendingSessionInvites();
    void AddWorldSaveToQueue(class UAbioticSave* SaveGame);
    void AddPlayerSaveToQueue(class UAbioticSave* SaveGame);
}; // Size: 0x4C0

class UAbioticGameUserSettings : public UGameUserSettings
{
    FAbioticGameUserSettingsOnEnabledModsChanged OnEnabledModsChanged;                // 0x0150 (size: 0x10)
    void AbioticOnEnabledModsChanged();
    TEnumAsByte<EAbioticCrossplaySetting::Type> CrossplaySetting;                     // 0x0160 (size: 0x1)
    TEnumAsByte<EAbioticAllowModsSetting::Type> AllowModsSetting;                     // 0x0161 (size: 0x1)
    bool bUseVRR;                                                                     // 0x0162 (size: 0x1)
    bool bUseLowEnergy;                                                               // 0x0163 (size: 0x1)
    uint8 CustomVersion;                                                              // 0x0164 (size: 0x1)
    TArray<FAbioticBlockedPlayer> BlockedPlayers;                                     // 0x0168 (size: 0x10)
    TArray<FAbioticBlockedPlayer> PlatformBlockedPlayers;                             // 0x0178 (size: 0x10)
    TArray<FAbioticBlockedPlayer> MutedPlayers;                                       // 0x0188 (size: 0x10)
    TArray<int64> EnabledMods;                                                        // 0x0198 (size: 0x10)
    TArray<int64> LocalOnlyMods;                                                      // 0x01A8 (size: 0x10)
    TMap<int64, FAbioticModDependencyList> ModDependencyCache;                        // 0x01B8 (size: 0x50)

    void SetVRRSetting(bool NewUseVRR, bool bFromCvar);
    void SetLowEnergySetting(bool NewUseLowEnergy, bool bFromCvar);
    void SetEnabledModOrder(const TArray<int64>& InOrder, bool bMatchListExactly);
    void SetCrossplaySetting(TEnumAsByte<EAbioticCrossplaySetting::Type> InCrossplay, bool bFromCvar);
    void SetAllowMods(TEnumAsByte<EAbioticAllowModsSetting::Type> InAllowMods, bool bFromCvar);
    void RemoveMutedPlayer(const FAbioticBlockedPlayer& InMutedPlayer);
    void RemoveEnabledModWithDependents(int64 ModId, TArray<int64>& OutAlsoDisabled);
    void RemoveEnabledMods(const TArray<int64>& ModIds);
    void RemoveEnabledMod(int64 ModId);
    void RemoveBlockedPlayer(const FAbioticBlockedPlayer& InBlockedPlayer);
    void MoveEnabledModGroup(int64 ModId, int32 Delta);
    void MoveEnabledMod(int64 ModId, int32 Delta);
    void IsModMounted(int64 ModId);
    void IsModEnabled(int64 ModId);
    void GetUnmountedEnabledMods();
    void GetLocalOnlyMods();
    void GetCrossplaySetting();
    void GetAllowMods();
    void GetActiveMods();
    void AddMutedPlayer(const FAbioticBlockedPlayer& InMutedPlayer);
    void AddEnabledModWithDependencies(int64 ModId, TArray<int64>& OutAlsoEnabled);
    void AddEnabledMods(const TArray<int64>& ModIds);
    void AddEnabledMod(int64 ModId);
    void AddBlockedPlayer(const FAbioticBlockedPlayer& InBlockedPlayer);
}; // Size: 0x208

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

class UAbioticMenuWidget : public UAbioticWidget
{
}; // Size: 0x2E0

class UAbioticModAcquireCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAbioticModAcquireCallbackProxyOnSuccess OnSuccess;                               // 0x0030 (size: 0x10)
    void AbioticModAcquireResult(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    FAbioticModAcquireCallbackProxyOnProgress OnProgress;                             // 0x0040 (size: 0x10)
    void AbioticModAcquireResult(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    FAbioticModAcquireCallbackProxyOnFailure OnFailure;                               // 0x0050 (size: 0x10)
    void AbioticModAcquireResult(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    FAbioticModAcquireCallbackProxyOnCancelled OnCancelled;                           // 0x0060 (size: 0x10)
    void AbioticModAcquireResult(const TArray<FModioModID>& Mods, int32 InstalledCount, int32 TotalCount, FString Reason);
    class UObject* WorldContextObject;                                                // 0x0070 (size: 0x8)

    void Cancel(bool bUnsubscribeNewDownloads);
    void AcquireMods(class UObject* WorldContextObject, const TArray<FModioModID>& ModsToAcquire, float TimeoutSeconds);
}; // Size: 0xC8

class UAbioticModAuthCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAbioticModAuthCallbackProxyOnSuccess OnSuccess;                                  // 0x0030 (size: 0x10)
    void ModAuthResult(FString PrivacyPolicyUrl, FString TermsOfServiceUrl);
    FAbioticModAuthCallbackProxyOnTermsOfServiceAcceptanceNeeded OnTermsOfServiceAcceptanceNeeded; // 0x0040 (size: 0x10)
    void ModAuthResult(FString PrivacyPolicyUrl, FString TermsOfServiceUrl);
    FAbioticModAuthCallbackProxyOnFailure OnFailure;                                  // 0x0050 (size: 0x10)
    void ModAuthResult(FString PrivacyPolicyUrl, FString TermsOfServiceUrl);
    class UObject* WorldContextObject;                                                // 0x0060 (size: 0x8)

    void ModAuthenticationAsync(class UObject* WorldContextObject, bool bAcceptToS);
}; // Size: 0x70

class UAbioticModConfiguration : public UPrimaryDataAsset
{
    FName ModPrefix;                                                                  // 0x0030 (size: 0x8)
    TMap<UDataTable*, UDataTable*> DataOverrideMapping;                               // 0x0038 (size: 0x50)
    TArray<int64> LoadAfter;                                                          // 0x0088 (size: 0x10)
    bool bLocalOnly;                                                                  // 0x0098 (size: 0x1)

}; // Size: 0xA0

class UAbioticModDataTable : public UDataTable
{
    class UDataTable* ParentTable;                                                    // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UAbioticModEnabledStateProvider : public UObject
{
    FAbioticModEnabledStateProviderOnModEnabledStateChanged OnModEnabledStateChanged; // 0x0038 (size: 0x10)
    void ModioOnModEnabledStateChangeMulticastDelegate(int64 RawID, bool bNewEnabledState);

    void CreateAndRegister(class UObject* Outer);
}; // Size: 0x48

class UAbioticModListCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAbioticModListCallbackProxyOnSuccess OnSuccess;                                  // 0x0030 (size: 0x10)
    void ModListResult(const TArray<UAbioticModListItem*>& Items);
    FAbioticModListCallbackProxyOnNoDependencyInfo OnNoDependencyInfo;                // 0x0040 (size: 0x10)
    void ModListResult(const TArray<UAbioticModListItem*>& Items);
    class UObject* WorldContextObject;                                                // 0x0050 (size: 0x8)
    TArray<UAbioticModListItem*> Items;                                               // 0x0058 (size: 0x10)

    void BuildModListItemsAsync(class UObject* WorldContextObject, const TArray<int64>& AdditionalModIds, bool bIncludeOutdatedMods, float ReadyTimeoutSeconds);
}; // Size: 0xA0

class UAbioticModListItem : public UModioModCollectionEntryUI
{
    int64 ModId;                                                                      // 0x0258 (size: 0x8)
    FText DisplayName;                                                                // 0x0260 (size: 0x10)
    FText Author;                                                                     // 0x0270 (size: 0x10)
    bool bInstalled;                                                                  // 0x0280 (size: 0x1)
    bool bIncompatible;                                                               // 0x0281 (size: 0x1)
    FUGCRejection IncompatibleReason;                                                 // 0x0288 (size: 0x18)
    bool bEnabled;                                                                    // 0x02A0 (size: 0x1)
    int32 OrderIndex;                                                                 // 0x02A4 (size: 0x4)
    bool bPinnedAbove;                                                                // 0x02A8 (size: 0x1)
    bool bPinnedBelow;                                                                // 0x02A9 (size: 0x1)
    bool bLocalOnly;                                                                  // 0x02AA (size: 0x1)
    bool bCanReorder;                                                                 // 0x02AB (size: 0x1)
    int64 RequiredByModId;                                                            // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class UAbioticModListLibrary : public UBlueprintFunctionLibrary
{

    void IsInstalledModLocalOnly(int64 ModId);
    void CompareWithSavedLoadOrder(const TArray<int64>& SavedOrder, bool bIncludeOutdatedMods);
    void BuildModListItems(class UObject* Outer, bool bIncludeOutdatedMods, const TArray<int64>& AdditionalModIds);
    void BuildLocalOnlyModLists(const TArray<UAbioticModListItem*>& InItems, TArray<UAbioticModListItem*>& OutOrdered, TArray<UAbioticModListItem*>& OutDisabled);
    void BuildLoadOrderLists(const TArray<UAbioticModListItem*>& InItems, TArray<UAbioticModListItem*>& OutOrdered, TArray<UAbioticModListItem*>& OutDisabled);
}; // Size: 0x28

class UAbioticModOrderLibrary : public UBlueprintFunctionLibrary
{

    void ResolveLoadOrder(const TArray<int64>& PlayerOrder, const TMap<int64, FAbioticModDependencyList>& Dependencies, TArray<FAbioticModOrderIssue>& OutIssues);
    void ParseModKickMessage(FString ErrorMessage, bool& bIsModKick);
    void MoveModGroup(TArray<int64>& PlayerOrder, const TMap<int64, FAbioticModDependencyList>& Requirements, int64 ModId, int32 Delta);
    void MoveMod(TArray<int64>& PlayerOrder, int64 ModId, int32 Delta);
    void BuildOrderEntries(const TArray<int64>& ResolvedOrder, const TMap<int64, FAbioticModDependencyList>& Dependencies, const TMap<int64, FAbioticModDependencyList>& Requirements);
}; // Size: 0x28

class UAbioticModRowAsset : public UPrimaryDataAsset
{
    FName RowName;                                                                    // 0x0030 (size: 0x8)
    bool bOverrideExistingRow;                                                        // 0x0038 (size: 0x1)

}; // Size: 0x40

class UAbioticModSessionFilterCallbackProxy : public UOnlineBlueprintCallProxyBase
{
    FAbioticModSessionFilterCallbackProxyOnSuccess OnSuccess;                         // 0x0030 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    FAbioticModSessionFilterCallbackProxyOnModsNotAllowed OnModsNotAllowed;           // 0x0040 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    FAbioticModSessionFilterCallbackProxyOnMissingMods OnMissingMods;                 // 0x0050 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    FAbioticModSessionFilterCallbackProxyOnExtraMods OnExtraMods;                     // 0x0060 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    FAbioticModSessionFilterCallbackProxyOnExtraAndMissingMods OnExtraAndMissingMods; // 0x0070 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    FAbioticModSessionFilterCallbackProxyOnIncompatibleMods OnIncompatibleMods;       // 0x0080 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    FAbioticModSessionFilterCallbackProxyOnLocalOnlyModsNotAllowed OnLocalOnlyModsNotAllowed; // 0x0090 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    FAbioticModSessionFilterCallbackProxyOnFailure OnFailure;                         // 0x00A0 (size: 0x10)
    void ModSessionFilterResult(const TArray<FModioModID>& ExtraMods, const TArray<FModioModID>& MissingMods, const TArray<int64>& ServerLoadOrder);
    class UObject* WorldContextObject;                                                // 0x00B0 (size: 0x8)

    void ModSessionFilter(class UObject* WorldContextObject, const FBlueprintSessionResult& SessionToJoin);
    void ModListFilter(class UObject* WorldContextObject, const TArray<int64>& ServerMods);
}; // Size: 0x260

class UAbioticModSideloadUgcProvider : public UObject
{
}; // Size: 0x30

class UAbioticModUgcProvider : public UObject
{
}; // Size: 0x48

class UAbioticMultiLineEditableTextBox : public UMultiLineEditableTextBox
{
    FAbioticMultiLineEditableTextBoxOnCursorMoved OnCursorMoved;                      // 0x1088 (size: 0x10)
    void OnCaretMoved(int32 InLineIndex, int32 InOffset);

    void SetCursorPosition(const int32 LineIndex, const int32 LineOffset);
    void InsertTextAtCursor(FString InText);
    void GetCursorPosition(int32& LineIndex, int32& LineOffset);
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
    FAbioticPlayerInputComponentOnMotion OnMotion;                                    // 0x0170 (size: 0x10)
    void OnMotion(FVector2D Val);
    FCachedInputData CachedPreviousFrame;                                             // 0x01F0 (size: 0x70)
    bool bGamepadActive;                                                              // 0x0260 (size: 0x1)
    float BaseYawRate;                                                                // 0x0264 (size: 0x4)
    float BasePitchRate;                                                              // 0x0268 (size: 0x4)
    float AccelerationThreshold;                                                      // 0x0298 (size: 0x4)
    class UCurveFloat* AccelerationCurve;                                             // 0x02A0 (size: 0x8)
    float FrictionLeaveAdjustment;                                                    // 0x02A8 (size: 0x4)
    class UCurveFloat* FrictionAngleCurve;                                            // 0x02B0 (size: 0x8)
    class UCurveFloat* FrictionInputCurve;                                            // 0x02B8 (size: 0x8)
    class UCurveFloat* AdhesionPowerCurve;                                            // 0x02C0 (size: 0x8)
    class UCurveFloat* AdhesionMaxAngleCurve;                                         // 0x02C8 (size: 0x8)
    float UserRadialCloseInputCancelDelay;                                            // 0x02D0 (size: 0x4)

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
}; // Size: 0x2D8

class UAbioticPlayerReportWidget : public UAbioticMenuWidget
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
    void OnOverrideImpactHit(const FHitResult& Hit);

    void SetImpactOverride(const FSetImpactOverrideNewOverride NewOverride);
}; // Size: 0x290

class UAbioticReplicationGraph : public UReplicationGraph
{
    TArray<UClass*> AlwaysRelevantClasses;                                            // 0x0570 (size: 0x10)
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

    void ApplyVersionUpgrade(int32 OldVersion, int32 NewVersion, FString Identifier);
    void ApplyVersion2Upgrade();
}; // Size: 0xE0

class UAbioticSaveStatics : public UObject
{
}; // Size: 0x28

class UAbioticServerModSubsystem : public UGameInstanceSubsystem
{

    void OnProviderInitialized(bool bSuccess);
    void IsStartBlocked();
    void IsReady();
    void HasOverrideWarnings();
    void GetServerModsDirectory();
    void GetErrors();
    void DidSucceed();
}; // Size: 0x1A0

class UAbioticTargetingComponent : public UCapsuleComponent
{
    bool bDefaultEnabled;                                                             // 0x0550 (size: 0x1)
    bool bEnabled;                                                                    // 0x0551 (size: 0x1)
    bool bValidForAimAssist;                                                          // 0x0552 (size: 0x1)
    bool bValidForCrosshairAccuracy;                                                  // 0x0553 (size: 0x1)
    bool bIsInteractableType;                                                         // 0x0554 (size: 0x1)

    void SetEnabled(bool bNewState);
    void IsValidForCrosshairAccuracy();
    void IsEnabled();
    void GetTargetingHotspots();
    void GetTargetingHotspotCount();
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
    void GetBestTarget(TEnumAsByte<ETargetingCategory> TargetingCategory);
}; // Size: 0x2E0

class UAbioticTargetingSubsystem : public UWorldSubsystem
{
    TArray<TWeakObjectPtr<class UAbioticTargetingComponent>> Targetables;             // 0x0030 (size: 0x10)
    TArray<TWeakObjectPtr<class UAbioticTargetingComponent>> OnlyInteractables;       // 0x0040 (size: 0x10)

}; // Size: 0x50

class UAbioticTreeView : public UTreeView
{
    bool AlwaysShowScrollbar;                                                         // 0x0CC8 (size: 0x1)

    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    void IsAlwaysShowScrollbar();
}; // Size: 0xCD0

class UAbioticUIActionRouter : public ULocalPlayerSubsystem
{
    FAbioticUIActionRouterOnInputTypeChanged OnInputTypeChanged;                      // 0x0040 (size: 0x10)
    void OnInputTypeChanged(bool bUsingGamepad);

    void ViewportOnInputTypeChanged(bool bUsingGamepad);
    void TriggerBindCaptureActive(bool bActive);
    void IsUsingGamepad();
    void GetAnalogCursorPosition();
}; // Size: 0x60

class UAbioticVehicleMovementComponent : public UChaosWheeledVehicleMovementComponent
{
    bool bHasDriver;                                                                  // 0x0C60 (size: 0x1)

}; // Size: 0xC70

class UAbioticVisibilityWidget : public UBorder
{
    TMap<FName, bool> VisibilityControls;                                             // 0x0338 (size: 0x50)
    FName CVarVisibilityName;                                                         // 0x0388 (size: 0x8)
    ESlateVisibility VisibleType;                                                     // 0x0390 (size: 0x1)
    ESlateVisibility HiddenType;                                                      // 0x0391 (size: 0x1)

    void UpdateVisibility();
    void GetRegisteredPlatforms();
}; // Size: 0x3A0

class UAbioticWidget : public UUserWidget
{

    void ProcessKeybindOnKeyUp(const FKeyEvent& Key, bool& bHandled);
    void ProcessKeybindOnKeyDown(const FKeyEvent& Key, bool& bHandled);
}; // Size: 0x2E0

class UAbioticWorldMetadataSave : public UAbioticSave
{
    int32 WorldVersion;                                                               // 0x00E0 (size: 0x4)
    int32 MinutesPassed;                                                              // 0x00E4 (size: 0x4)
    FDateTime LastPlayed;                                                             // 0x00E8 (size: 0x8)
    FAbioticGlobalUnlocksSave GlobalUnlocks;                                          // 0x00F0 (size: 0x120)
    FName CustomLevelOverride;                                                        // 0x0210 (size: 0x8)
    TMap<FName, FString> LeyakContainmentIDs;                                         // 0x0218 (size: 0x50)
    TMap<FString, FUserEntitlements> ServerEntitlements;                              // 0x0268 (size: 0x50)
    FName StoryProgressionRow;                                                        // 0x02B8 (size: 0x8)
    TArray<int64> LastUsedModIds;                                                     // 0x02C0 (size: 0x10)

}; // Size: 0x2D0

class UAbioticWorldSave : public UAbioticSave
{
    TMap<FString, FAbioticDoorSave> DoorMap;                                          // 0x00E0 (size: 0x50)
    TArray<FName> WorldFlags;                                                         // 0x0130 (size: 0x10)
    TMap<FString, FAbioticDeployableSave> DeployedObjectMap;                          // 0x0140 (size: 0x50)
    TMap<FString, FAbioticResourceNodeSave> ResourceNodeMap;                          // 0x0190 (size: 0x50)
    TMap<FString, FAbioticDestructibleSave> DestructibleMap;                          // 0x01E0 (size: 0x50)
    TMap<FString, FAbioticSecurityDoorSave> SecurityDoorMap;                          // 0x0230 (size: 0x50)
    TMap<FString, FAbioticElevatorSave> ElevatorMap;                                  // 0x0280 (size: 0x50)
    TMap<FString, FAbioticButtonSave> ButtonMap;                                      // 0x02D0 (size: 0x50)
    int32 LastAssignedAssetID;                                                        // 0x0320 (size: 0x4)
    TMap<FString, FAbioticNPCStateSave> NarrativeNPCMap;                              // 0x0328 (size: 0x50)
    TMap<FString, FAbioticPowerSocketSave> PowerSocketMap;                            // 0x0378 (size: 0x50)
    FAbioticTimeOfDaySave TimeOfDay;                                                  // 0x03C8 (size: 0x38)
    TMap<FString, FAbioticTriggerSave> TriggerMap;                                    // 0x0400 (size: 0x50)
    TMap<FString, FAbioticNPCSpawnSave> NPCSpawnMap;                                  // 0x0450 (size: 0x50)
    TMap<FString, FAbioticPortalSave> PortalMap;                                      // 0x04A0 (size: 0x50)
    FString LevelGUID;                                                                // 0x04F0 (size: 0x10)
    FDateTime LastSavedTime;                                                          // 0x0500 (size: 0x8)
    int32 DayDiscovered;                                                              // 0x0508 (size: 0x4)
    TMap<FString, FAbioticVehicleSave> VehicleMap;                                    // 0x0510 (size: 0x50)
    TArray<FSoftObjectPath> DestroyedActorPaths;                                      // 0x0560 (size: 0x10)
    TMap<FString, FAbioticTramSave> TramMap;                                          // 0x0570 (size: 0x50)
    TMap<FString, FAbioticNPCStateSave> PetNPCMap;                                    // 0x05C0 (size: 0x50)
    TMap<FString, FAbioticDroppedItemSave> DroppedItemMap;                            // 0x0610 (size: 0x50)
    TMap<FString, FAbioticCorpseSave> CorpseMap;                                      // 0x0660 (size: 0x50)
    TMap<FName, FAbioticTravelingNPCSave> TravelingNPCMap;                            // 0x06B0 (size: 0x50)
    TMap<FString, FAbioticEncounterDirectorSave> EncounterDirectorsMap;               // 0x0700 (size: 0x50)
    TMap<FString, FAbioticInventorySave> CustomInventoryMap;                          // 0x0750 (size: 0x50)
    TMap<FString, FAbioticDecalSave> DecalMap;                                        // 0x07A0 (size: 0x50)

}; // Size: 0x7F0

class UAccessibilitySettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralAccessibilitySettingRowHandle(FAccessibilitySettingRowHandle RowHandle);
    void MakeAccessibilitySettingRowHandle(const FName RowName);
    void GetAllAccessibilitySettingRowNames(TArray<FName>& OutRowNames);
    void GetAllAccessibilitySettingRowHandles(TArray<FAccessibilitySettingRowHandle>& OutRowHandles);
    void GetAccessibilitySettingRow(FAccessibilitySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void Equal_AccessibilitySettingRowHandle(FAccessibilitySettingRowHandle A, FAccessibilitySettingRowHandle B);
    void DoesAccessibilitySettingRowExist(FName RowName);
    void Conv_NameToAccessibilitySetting(FName RowName);
    void Conv_AccessibilitySettingToName(const FAccessibilitySettingRowHandle& InHandle);
    void BreakAccessibilitySettingRowHandle(const FAccessibilitySettingRowHandle RowHandle);
}; // Size: 0x28

class UAchievementHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralAchievementRowHandle(FAchievementRowHandle RowHandle);
    void MakeAchievementRowHandle(const FName RowName);
    void GetAllAchievementRowNames(TArray<FName>& OutRowNames);
    void GetAllAchievementRowHandles(TArray<FAchievementRowHandle>& OutRowHandles);
    void GetAchievementRow(FAchievementRowHandle RowHandle, FAchievement& Data, ERowValid& ReturnPath);
    void Equal_AchievementRowHandle(FAchievementRowHandle A, FAchievementRowHandle B);
    void DoesAchievementRowExist(FName RowName);
    void Conv_NameToAchievement(FName RowName);
    void Conv_AchievementToName(const FAchievementRowHandle& InHandle);
    void BreakAchievementRowHandle(const FAchievementRowHandle RowHandle);
}; // Size: 0x28

class UAchievementHandler : public UObject
{
    class UPlayerStatsSave* PlayerStatsSave;                                          // 0x0028 (size: 0x8)
    TMap<FAchievementStatRowHandle, FAchievementStatListener> StatListeners;          // 0x0030 (size: 0x50)

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

    void MakeLiteralAchievementStatRowHandle(FAchievementStatRowHandle RowHandle);
    void MakeAchievementStatRowHandle(const FName RowName);
    void GetAllAchievementStatRowNames(TArray<FName>& OutRowNames);
    void GetAllAchievementStatRowHandles(TArray<FAchievementStatRowHandle>& OutRowHandles);
    void GetAchievementStatRow(FAchievementStatRowHandle RowHandle, FAchievementStat& Data, ERowValid& ReturnPath);
    void Equal_AchievementStatRowHandle(FAchievementStatRowHandle A, FAchievementStatRowHandle B);
    void DoesAchievementStatRowExist(FName RowName);
    void Conv_NameToAchievementStat(FName RowName);
    void Conv_AchievementStatToName(const FAchievementStatRowHandle& InHandle);
    void BreakAchievementStatRowHandle(const FAchievementStatRowHandle RowHandle);
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
    void UploadAchievementData();
    void TriggerAchievement(FAchievementRowHandle Achievement, bool bSkipStore);
    void IncrementAchievementStat_Int(FAchievementStatRowHandle Stat, int32 Value);
    void IncrementAchievementStat_Float(FAchievementStatRowHandle Stat, float Value);
    void HasUnlockedAchievement(FAchievementRowHandle Achievement);
    void GetAchievementStat_Int(FAchievementStatRowHandle Stat);
    void GetAchievementStat_Float(FAchievementStatRowHandle Stat);
    void ClearStatsAndAchievements();
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
    void InitializeAnalytics();
}; // Size: 0x318

class UAnnouncementHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralAnnouncementRowHandle(FAnnouncementRowHandle RowHandle);
    void MakeAnnouncementRowHandle(const FName RowName);
    void GetAnnouncementRow(FAnnouncementRowHandle RowHandle, FAnnouncement& Data, ERowValid& ReturnPath);
    void GetAllAnnouncementRowNames(TArray<FName>& OutRowNames);
    void GetAllAnnouncementRowHandles(TArray<FAnnouncementRowHandle>& OutRowHandles);
    void Equal_AnnouncementRowHandle(FAnnouncementRowHandle A, FAnnouncementRowHandle B);
    void DoesAnnouncementRowExist(FName RowName);
    void Conv_NameToAnnouncement(FName RowName);
    void Conv_AnnouncementToName(const FAnnouncementRowHandle& InHandle);
    void BreakAnnouncementRowHandle(const FAnnouncementRowHandle RowHandle);
}; // Size: 0x28

class UAnyCustomizationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ToCustomizationWatchChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationWatch(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationUpperBodyChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationUpperBody(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationTieChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationTie(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationShoesChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationShoes(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationShirtColorChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationShirtColor(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationMakeupChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationMakeup(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationLowerBodyChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationLowerBody(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationLabcoatChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationLabcoat(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationIDCardChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationIDCard(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationHeadChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationHeadAccessoryChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationHeadAccessory(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationHead(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationHairStyleChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationHairStyle(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationHairColorChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationHairColor(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationFannyPackChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationFannyPack(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationBeltChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationBelt(const FAnyCustomizationRowHandle& InHandle);
    void ToCustomizationBeardChecked(const FAnyCustomizationRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCustomizationBeard(const FAnyCustomizationRowHandle& InHandle);
    void SwitchOnAnyCustomizationTable(const FAnyCustomizationRowHandle& RowHandle, EAnyCustomizationTable& Branch);
    void MakeLiteralAnyCustomizationRowHandle(FAnyCustomizationRowHandle RowHandle);
    void MakeAnyCustomizationRowHandle(EAnyCustomizationTable Table, const FName RowName);
    void IsAnyCustomizationUGCRow(const FAnyCustomizationRowHandle& RowHandle);
    void IsAnyCustomizationRowHandleValid(const FAnyCustomizationRowHandle& RowHandle);
    void IsAnyCustomizationRowHandleNull(const FAnyCustomizationRowHandle& RowHandle);
    void IsAnyCustomizationFromTable(const FAnyCustomizationRowHandle& RowHandle, EAnyCustomizationTable Table);
    void GetAnyCustomizationUGCRowInfo(const FAnyCustomizationRowHandle& RowHandle);
    void GetAnyCustomizationRow(FAnyCustomizationRowHandle RowHandle, int32& Data, ERowValid& ReturnPath);
    void GetAllAnyCustomizationRowNames(EAnyCustomizationTable Table, TArray<FName>& OutRowNames);
    void GetAllAnyCustomizationRowHandles(EAnyCustomizationTable Table, TArray<FAnyCustomizationRowHandle>& OutRowHandles);
    void Equal_AnyCustomizationRowHandle(FAnyCustomizationRowHandle A, FAnyCustomizationRowHandle B);
    void DoesAnyCustomizationRowExist(EAnyCustomizationTable Table, FName RowName);
    void Conv_NameToAnyCustomization(FName RowName, EAnyCustomizationTable Table);
    void Conv_CustomizationWatchToAnyCustomization(const FCustomizationWatchRowHandle& InHandle);
    void Conv_CustomizationUpperBodyToAnyCustomization(const FCustomizationUpperBodyRowHandle& InHandle);
    void Conv_CustomizationTieToAnyCustomization(const FCustomizationTieRowHandle& InHandle);
    void Conv_CustomizationShoesToAnyCustomization(const FCustomizationShoesRowHandle& InHandle);
    void Conv_CustomizationShirtColorToAnyCustomization(const FCustomizationShirtColorRowHandle& InHandle);
    void Conv_CustomizationMakeupToAnyCustomization(const FCustomizationMakeupRowHandle& InHandle);
    void Conv_CustomizationLowerBodyToAnyCustomization(const FCustomizationLowerBodyRowHandle& InHandle);
    void Conv_CustomizationLabcoatToAnyCustomization(const FCustomizationLabcoatRowHandle& InHandle);
    void Conv_CustomizationIDCardToAnyCustomization(const FCustomizationIDCardRowHandle& InHandle);
    void Conv_CustomizationHeadToAnyCustomization(const FCustomizationHeadRowHandle& InHandle);
    void Conv_CustomizationHeadAccessoryToAnyCustomization(const FCustomizationHeadAccessoryRowHandle& InHandle);
    void Conv_CustomizationHairStyleToAnyCustomization(const FCustomizationHairStyleRowHandle& InHandle);
    void Conv_CustomizationHairColorToAnyCustomization(const FCustomizationHairColorRowHandle& InHandle);
    void Conv_CustomizationFannyPackToAnyCustomization(const FCustomizationFannyPackRowHandle& InHandle);
    void Conv_CustomizationBeltToAnyCustomization(const FCustomizationBeltRowHandle& InHandle);
    void Conv_CustomizationBeardToAnyCustomization(const FCustomizationBeardRowHandle& InHandle);
    void Conv_AnyCustomizationToName(const FAnyCustomizationRowHandle& InHandle);
    void BreakAnyCustomizationRowHandle(const FAnyCustomizationRowHandle RowHandle, EAnyCustomizationTable& Table, FName& RowName);
}; // Size: 0x28

class UAnyItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ToRecipeSubstituteChecked(const FAnyItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToRecipeSubstitute(const FAnyItemRowHandle& InHandle);
    void ToGlobalItemChecked(const FAnyItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToGlobalItem(const FAnyItemRowHandle& InHandle);
    void SwitchOnAnyItemTable(const FAnyItemRowHandle& RowHandle, EAnyItemTable& Branch);
    void MakeLiteralAnyItemRowHandle(FAnyItemRowHandle RowHandle);
    void MakeAnyItemRowHandle(EAnyItemTable Table, const FName RowName);
    void IsAnyItemUGCRow(const FAnyItemRowHandle& RowHandle);
    void IsAnyItemRowHandleValid(const FAnyItemRowHandle& RowHandle);
    void IsAnyItemRowHandleNull(const FAnyItemRowHandle& RowHandle);
    void IsAnyItemFromTable(const FAnyItemRowHandle& RowHandle, EAnyItemTable Table);
    void GetAnyItemUGCRowInfo(const FAnyItemRowHandle& RowHandle);
    void GetAnyItemRow(FAnyItemRowHandle RowHandle, int32& Data, ERowValid& ReturnPath);
    void GetAllAnyItemRowNames(EAnyItemTable Table, TArray<FName>& OutRowNames);
    void GetAllAnyItemRowHandles(EAnyItemTable Table, TArray<FAnyItemRowHandle>& OutRowHandles);
    void Equal_AnyItemRowHandle(FAnyItemRowHandle A, FAnyItemRowHandle B);
    void DoesAnyItemRowExist(EAnyItemTable Table, FName RowName);
    void Conv_RecipeSubstituteToAnyItem(const FRecipeSubstituteRowHandle& InHandle);
    void Conv_NameToAnyItem(FName RowName, EAnyItemTable Table);
    void Conv_GlobalItemToAnyItem(const FGlobalItemRowHandle& InHandle);
    void Conv_AnyItemToName(const FAnyItemRowHandle& InHandle);
    void BreakAnyItemRowHandle(const FAnyItemRowHandle RowHandle, EAnyItemTable& Table, FName& RowName);
}; // Size: 0x28

class UAnyRecipeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ToSoupRecipeChecked(const FAnyRecipeRowHandle& InHandle, ERowValid& ReturnPath);
    void ToSoupRecipe(const FAnyRecipeRowHandle& InHandle);
    void ToRecipeChecked(const FAnyRecipeRowHandle& InHandle, ERowValid& ReturnPath);
    void ToRecipe(const FAnyRecipeRowHandle& InHandle);
    void ToChemistryRecipeChecked(const FAnyRecipeRowHandle& InHandle, ERowValid& ReturnPath);
    void ToChemistryRecipe(const FAnyRecipeRowHandle& InHandle);
    void SwitchOnAnyRecipeTable(const FAnyRecipeRowHandle& RowHandle, EAnyRecipeTable& Branch);
    void MakeLiteralAnyRecipeRowHandle(FAnyRecipeRowHandle RowHandle);
    void MakeAnyRecipeRowHandle(EAnyRecipeTable Table, const FName RowName);
    void IsAnyRecipeUGCRow(const FAnyRecipeRowHandle& RowHandle);
    void IsAnyRecipeRowHandleValid(const FAnyRecipeRowHandle& RowHandle);
    void IsAnyRecipeRowHandleNull(const FAnyRecipeRowHandle& RowHandle);
    void IsAnyRecipeFromTable(const FAnyRecipeRowHandle& RowHandle, EAnyRecipeTable Table);
    void GetAnyRecipeUGCRowInfo(const FAnyRecipeRowHandle& RowHandle);
    void GetAnyRecipeRow(FAnyRecipeRowHandle RowHandle, int32& Data, ERowValid& ReturnPath);
    void GetAllAnyRecipeRowNames(EAnyRecipeTable Table, TArray<FName>& OutRowNames);
    void GetAllAnyRecipeRowHandles(EAnyRecipeTable Table, TArray<FAnyRecipeRowHandle>& OutRowHandles);
    void Equal_AnyRecipeRowHandle(FAnyRecipeRowHandle A, FAnyRecipeRowHandle B);
    void DoesAnyRecipeRowExist(EAnyRecipeTable Table, FName RowName);
    void Conv_SoupRecipeToAnyRecipe(const FSoupRecipeRowHandle& InHandle);
    void Conv_RecipeToAnyRecipe(const FRecipeRowHandle& InHandle);
    void Conv_NameToAnyRecipe(FName RowName, EAnyRecipeTable Table);
    void Conv_ChemistryRecipeToAnyRecipe(const FChemistryRecipeRowHandle& InHandle);
    void Conv_AnyRecipeToName(const FAnyRecipeRowHandle& InHandle);
    void BreakAnyRecipeRowHandle(const FAnyRecipeRowHandle RowHandle, EAnyRecipeTable& Table, FName& RowName);
}; // Size: 0x28

class UAnyTraitHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ToTraitChecked(const FAnyTraitRowHandle& InHandle, ERowValid& ReturnPath);
    void ToTrait(const FAnyTraitRowHandle& InHandle);
    void ToPhDChecked(const FAnyTraitRowHandle& InHandle, ERowValid& ReturnPath);
    void ToPhD(const FAnyTraitRowHandle& InHandle);
    void MakeLiteralAnyTraitRowHandle(FAnyTraitRowHandle RowHandle);
    void MakeAnyTraitRowHandle(const FName RowName);
    void GetAnyTraitRow(FAnyTraitRowHandle RowHandle, FTrait& Data, ERowValid& ReturnPath);
    void GetAllAnyTraitRowNames(TArray<FName>& OutRowNames);
    void GetAllAnyTraitRowHandles(TArray<FAnyTraitRowHandle>& OutRowHandles);
    void Equal_AnyTraitRowHandle(FAnyTraitRowHandle A, FAnyTraitRowHandle B);
    void DoesAnyTraitRowExist(FName RowName);
    void Conv_TraitToAnyTrait(const FTraitRowHandle& InHandle);
    void Conv_PhDToAnyTrait(const FPhDRowHandle& InHandle);
    void Conv_NameToAnyTrait(FName RowName);
    void Conv_AnyTraitToName(const FAnyTraitRowHandle& InHandle);
    void BreakAnyTraitRowHandle(const FAnyTraitRowHandle RowHandle);
}; // Size: 0x28

class UArmorStandPoseHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralArmorStandPoseRowHandle(FArmorStandPoseRowHandle RowHandle);
    void MakeArmorStandPoseRowHandle(const FName RowName);
    void GetArmorStandPoseRow(FArmorStandPoseRowHandle RowHandle, FArmorStandPose& Data, ERowValid& ReturnPath);
    void GetAllArmorStandPoseRowNames(TArray<FName>& OutRowNames);
    void GetAllArmorStandPoseRowHandles(TArray<FArmorStandPoseRowHandle>& OutRowHandles);
    void Equal_ArmorStandPoseRowHandle(FArmorStandPoseRowHandle A, FArmorStandPoseRowHandle B);
    void DoesArmorStandPoseRowExist(FName RowName);
    void Conv_NameToArmorStandPose(FName RowName);
    void Conv_ArmorStandPoseToName(const FArmorStandPoseRowHandle& InHandle);
    void BreakArmorStandPoseRowHandle(const FArmorStandPoseRowHandle RowHandle);
}; // Size: 0x28

class UArmorStandPoseModRowAsset : public UAbioticModRowAsset
{
    FArmorStandPose Row;                                                              // 0x0040 (size: 0x40)

}; // Size: 0x80

class UAssaultHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralAssaultRowHandle(FAssaultRowHandle RowHandle);
    void MakeAssaultRowHandle(const FName RowName);
    void GetAssaultRow(FAssaultRowHandle RowHandle, FAssault& Data, ERowValid& ReturnPath);
    void GetAllAssaultRowNames(TArray<FName>& OutRowNames);
    void GetAllAssaultRowHandles(TArray<FAssaultRowHandle>& OutRowHandles);
    void Equal_AssaultRowHandle(FAssaultRowHandle A, FAssaultRowHandle B);
    void DoesAssaultRowExist(FName RowName);
    void Conv_NameToAssault(FName RowName);
    void Conv_AssaultToName(const FAssaultRowHandle& InHandle);
    void BreakAssaultRowHandle(const FAssaultRowHandle RowHandle);
}; // Size: 0x28

class UAssaultModRowAsset : public UAbioticModRowAsset
{
    FAssault Row;                                                                     // 0x0040 (size: 0xB0)

}; // Size: 0xF0

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

    void AsyncFindPlayerBases(const class UObject* WorldContextObject, const float Distance, const FName PlayerBaseTag, bool bRemoveUnloaded, TSubclassOf<class AActor> SearchStartClass, bool bDebugDraw, const FLinearColor DebugColor, const float DebugTime, bool bDebugBranch);
}; // Size: 0x90

class UAudioDeviceOptionFactory : public USettingOptionFactory
{
}; // Size: 0x28

class UAudioOverrideComponent : public UActorComponent
{
    TMap<FGameplayTag, FAudioOverride> AudioOverrides;                                // 0x00B0 (size: 0x50)
    FAudioOverrideComponentAudioMapChangedDelegate AudioMapChangedDelegate;           // 0x0100 (size: 0x10)
    void AudioOverrideDelegate(const FAudioOverrideMap& AudioOverrides);

    void RemoveAudioOverrides(const TArray<FGameplayTag>& RemoveAudioOverrides);
    void GetAudioOverrideMap();
    void GetAudioOverride(const FGameplayTag& AudioTag, FAudioOverride& AudioOverride);
    void FindAudioOverrideInMap(const TMap<FGameplayTag, FAudioOverride>& AudioMap, const FGameplayTagContainer& AudioTags, FAudioOverride& AudioOverride);
    void FindAudioOverride(const FGameplayTagContainer& AudioTags, FAudioOverride& AudioOverride);
    void AddAudioOverrides(const TMap<FGameplayTag, FAudioOverride>& NewAudioOverrides);
}; // Size: 0x110

class UAudioSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralAudioSettingRowHandle(FAudioSettingRowHandle RowHandle);
    void MakeAudioSettingRowHandle(const FName RowName);
    void GetAudioSettingRow(FAudioSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllAudioSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllAudioSettingRowHandles(TArray<FAudioSettingRowHandle>& OutRowHandles);
    void Equal_AudioSettingRowHandle(FAudioSettingRowHandle A, FAudioSettingRowHandle B);
    void DoesAudioSettingRowExist(FName RowName);
    void Conv_NameToAudioSetting(FName RowName);
    void Conv_AudioSettingToName(const FAudioSettingRowHandle& InHandle);
    void BreakAudioSettingRowHandle(const FAudioSettingRowHandle RowHandle);
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
    void SetupBackgroundEntries(class UObject* WorldContext, class UDataTable* BackgroundDataTable);
    void GetDataRowHandleFromAchievement(FAchievementRowHandle RowHandle, class UDataTable* BackgroundDataTable);
    void GetBackgroundData(FDataTableRowHandle BackgroundEntry);
}; // Size: 0x40

class UBeaconIconHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralBeaconIconRowHandle(FBeaconIconRowHandle RowHandle);
    void MakeBeaconIconRowHandle(const FName RowName);
    void GetBeaconIconRow(FBeaconIconRowHandle RowHandle, FBeaconIcons& Data, ERowValid& ReturnPath);
    void GetAllBeaconIconRowNames(TArray<FName>& OutRowNames);
    void GetAllBeaconIconRowHandles(TArray<FBeaconIconRowHandle>& OutRowHandles);
    void Equal_BeaconIconRowHandle(FBeaconIconRowHandle A, FBeaconIconRowHandle B);
    void DoesBeaconIconRowExist(FName RowName);
    void Conv_NameToBeaconIcon(FName RowName);
    void Conv_BeaconIconToName(const FBeaconIconRowHandle& InHandle);
    void BreakBeaconIconRowHandle(const FBeaconIconRowHandle RowHandle);
}; // Size: 0x28

class UBenchUpgradeActorComponent : public UChildActorComponent
{
    FBenchUpgradeRowHandle BenchUpgrade;                                              // 0x0288 (size: 0x10)

    void RefreshUpgradeState(const FGameplayTagContainer& TagContainer);
}; // Size: 0x2A0

class UBenchUpgradeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralBenchUpgradeRowHandle(FBenchUpgradeRowHandle RowHandle);
    void MakeBenchUpgradeRowHandle(const FName RowName);
    void GetBenchUpgradeRow(FBenchUpgradeRowHandle RowHandle, FBenchUpgrade& Data, ERowValid& ReturnPath);
    void GetAllBenchUpgradeRowNames(TArray<FName>& OutRowNames);
    void GetAllBenchUpgradeRowHandles(TArray<FBenchUpgradeRowHandle>& OutRowHandles);
    void Equal_BenchUpgradeRowHandle(FBenchUpgradeRowHandle A, FBenchUpgradeRowHandle B);
    void DoesBenchUpgradeRowExist(FName RowName);
    void Conv_NameToBenchUpgrade(FName RowName);
    void Conv_BenchUpgradeToName(const FBenchUpgradeRowHandle& InHandle);
    void BreakBenchUpgradeRowHandle(const FBenchUpgradeRowHandle RowHandle);
}; // Size: 0x28

class UBenchUpgradeModRowAsset : public UAbioticModRowAsset
{
    FBenchUpgrade Row;                                                                // 0x0040 (size: 0xE8)

}; // Size: 0x128

class UBoxNavAreaComponent : public UBoxComponent
{

    void SetDynamicObstacle(const bool bNewDynamicObstacle);
    void K2_SetCanEverAffectNavigation(const bool bNewCanEverAffectNavigation);
    void K2_SetAreaClassOverride(const TSubclassOf<class UNavAreaBase> NewAreaClassOverride, bool bForceRebuildNav);
    void ForceRebuildNavigation();
}; // Size: 0x560

class UBuffDebuffHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralBuffDebuffRowHandle(FBuffDebuffRowHandle RowHandle);
    void MakeBuffDebuffRowHandle(const FName RowName);
    void GetBuffDebuffRow(FBuffDebuffRowHandle RowHandle, FBuffDebuff& Data, ERowValid& ReturnPath);
    void GetAllBuffDebuffRowNames(TArray<FName>& OutRowNames);
    void GetAllBuffDebuffRowHandles(TArray<FBuffDebuffRowHandle>& OutRowHandles);
    void Equal_BuffDebuffRowHandle(FBuffDebuffRowHandle A, FBuffDebuffRowHandle B);
    void DoesBuffDebuffRowExist(FName RowName);
    void Conv_NameToBuffDebuff(FName RowName);
    void Conv_BuffDebuffToName(const FBuffDebuffRowHandle& InHandle);
    void BreakBuffDebuffRowHandle(const FBuffDebuffRowHandle RowHandle);
}; // Size: 0x28

class UBuffDebuffModRowAsset : public UAbioticModRowAsset
{
    FBuffDebuff Row;                                                                  // 0x0040 (size: 0x260)

}; // Size: 0x2A0

class UBuffDebuffObject : public UObject
{
    FBuffDebuffRowHandle BuffRow;                                                     // 0x0028 (size: 0x10)
    float BuffDuration;                                                               // 0x0038 (size: 0x4)
    float tickRate;                                                                   // 0x003C (size: 0x4)
    TWeakObjectPtr<class AActor> LinkedActor;                                         // 0x0040 (size: 0x8)

    void Server_UpdateRemainingTime(float NewRemainingTime, float& PreviousRemainingTime);
    void Server_OnBuffTick(class AAbioticCharacter* Character, int32 Stack);
    void Server_OnBuffRemove(class AAbioticCharacter* Character, bool bExpiredByTime);
    void Server_OnBuffApply(class AAbioticCharacter* Character);
    void Server_BeginBuffRemoval();
}; // Size: 0x50

class UBulkQueryAndUpdateUserNamesPlayerManagement : public UOnlineBlueprintCallProxyBase
{
    FBulkQueryAndUpdateUserNamesPlayerManagementOnCompleted OnCompleted;              // 0x0038 (size: 0x10)
    void UserInformationQueriedAndUpdated();
    class UObject* WorldContextObject;                                                // 0x0048 (size: 0x8)

    void QueryAndUpdateUserNamesForPlayerManagement(class UObject* WorldContextObject);
}; // Size: 0xA8

class UCharacterBuffComponent : public UActorComponent
{
    TArray<FBuffDebuffRowHandle> ImmuneToBuffs;                                       // 0x00A8 (size: 0x10)
    TArray<FBuffDebuffEntry> CurrentBuffs;                                            // 0x00B8 (size: 0x10)
    TArray<FBuffDebuffRowHandle> BuffParticles;                                       // 0x00C8 (size: 0x10)
    TArray<FBuffDebuffRowHandle> BuffMaterials;                                       // 0x00D8 (size: 0x10)
    TArray<FBuffDebuffRowHandle> BuffTints;                                           // 0x00E8 (size: 0x10)
    FBuffDebuffRowHandle CurrentBuffTint;                                             // 0x00F8 (size: 0x10)
    TMap<FBuffDebuffRowHandle, UBuffDebuffObject*> BuffObjectMap;                     // 0x0108 (size: 0x50)
    TMap<FBuffDebuffRowHandle, ABuffActor*> BuffActorMap;                             // 0x0158 (size: 0x50)
    TArray<ABuffActor*> BuffActors;                                                   // 0x01A8 (size: 0x10)
    TArray<FBuffDebuffRowHandle> TraitBuffRows;                                       // 0x01B8 (size: 0x10)
    TArray<UBuffDebuffObject*> TraitBuffObjects;                                      // 0x01C8 (size: 0x10)
    FGameplayTagContainer BuffTagContainer;                                           // 0x01D8 (size: 0x20)
    FCharacterBuffComponentOnBuffTagContainerRefreshed OnBuffTagContainerRefreshed;   // 0x01F8 (size: 0x10)
    void OnBuffTagContainerRefreshed();
    FCharacterBuffComponentOnCurrentBuffsUpdated OnCurrentBuffsUpdated;               // 0x0208 (size: 0x10)
    void OnCurrentBuffsUpdated(class UCharacterBuffComponent* BuffComponent);
    FCharacterBuffComponentOnBuffBlocked OnBuffBlocked;                               // 0x0218 (size: 0x10)
    void OnBuffUpdated(FBuffDebuffRowHandle BuffRow);
    FCharacterBuffComponentOnBuffTintChanged OnBuffTintChanged;                       // 0x0228 (size: 0x10)
    void OnBuffUpdated(FBuffDebuffRowHandle BuffRow);
    TMap<FBuffDebuffRowHandle, UActorComponent*> BuffParticleMap;                     // 0x0238 (size: 0x50)
    TMap<FBuffDebuffRowHandle, TSoftObjectPtr<class UMaterialInterface>> BuffMaterialMap; // 0x0288 (size: 0x50)

    void SpawnBuffParticle(FBuffDebuffRowHandle BuffRow);
    void Server_RemoveTraitBuff(FBuffDebuffRowHandle BuffRow);
    void Server_RemoveTaggedBuffs(FGameplayTagQuery TagQuery, bool bSpecificLimbs, TArray<EBodyLimbs> Limbs);
    void Server_RemoveSpecificBuffs(TArray<FBuffDebuffRowHandle> BuffRows, bool bSpecificLimbs, TArray<EBodyLimbs> Limbs);
    void Server_RemoveFullHealthBuffsOnLimb(EBodyLimbs Limb);
    void Server_RemoveBuff(FBuffDebuffRowHandle BuffRow, bool bRemoveEntireStack, EBodyLimbs Limb, bool bExpiredByTime);
    void Server_ApplyBuff(FBuffDebuffRowHandle BuffRow, bool bOverrideDefaultDuration, float NewDuration, EBodyLimbs Limb, class AActor* LinkedActor, bool bSkipDialog);
    void Server_AddTraitBuff(FBuffDebuffRowHandle BuffRow);
    void ResetBuffExpireTime(const FBuffDebuffRowHandle BuffRow, const bool bOnlyFirst);
    void RemoveBuffMaterial(FBuffDebuffRowHandle BuffRow);
    void PlayDialogLine(FBuffDebuffRowHandle BuffRow);
    void OnRep_CurrentBuffs();
    void OnRep_BuffTints();
    void OnRep_BuffTagContainer();
    void OnRep_BuffParticles();
    void OnRep_BuffMaterials();
    void HasBuffTag(FGameplayTag Tag);
    void HasBuff(FBuffDebuffRowHandle BuffRow, bool bMustBeOnSameLimb, EBodyLimbs Limb);
    void GetBuffsToSave();
    void GetBuffExpireTime(FBuffDebuffRowHandle BuffRow, float& ExpireTime);
    void GetBuffCountMap(bool bIgnoreSilent, TMap<FBuffDebuffRowHandle, int32>& OutBuffCountMap);
    void FindBuffInArray(TArray<FBuffDebuffEntry> BuffArray, FBuffDebuffEntry& OutBuffEntry);
    void DoesBuffTagQueryMatch(FGameplayTagQuery TagQuery);
    void BuffRemoved(FBuffDebuffRowHandle BuffRow);
    void BuffReceived(FBuffDebuffRowHandle BuffRow);
    void ApplyBuffMaterial(FBuffDebuffRowHandle BuffRow);
}; // Size: 0x2D8

class UChemistryRecipeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralChemistryRecipeRowHandle(FChemistryRecipeRowHandle RowHandle);
    void MakeChemistryRecipeRowHandle(const FName RowName);
    void GetChemistryRecipeRow(FChemistryRecipeRowHandle RowHandle, FAbioticRecipe& Data, ERowValid& ReturnPath);
    void GetAllChemistryRecipeRowNames(TArray<FName>& OutRowNames);
    void GetAllChemistryRecipeRowHandles(TArray<FChemistryRecipeRowHandle>& OutRowHandles);
    void Equal_ChemistryRecipeRowHandle(FChemistryRecipeRowHandle A, FChemistryRecipeRowHandle B);
    void DoesChemistryRecipeRowExist(FName RowName);
    void Conv_NameToChemistryRecipe(FName RowName);
    void Conv_ChemistryRecipeToName(const FChemistryRecipeRowHandle& InHandle);
    void BreakChemistryRecipeRowHandle(const FChemistryRecipeRowHandle RowHandle);
}; // Size: 0x28

class UChemistryRecipeModRowAsset : public UAbioticModRowAsset
{
    FAbioticRecipe Row;                                                               // 0x0040 (size: 0xB0)

}; // Size: 0xF0

class UClassManagerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetClassManagersWithTag(const FGameplayTag& Tag, TArray<FClassManagerRowHandle>& OutRowHandles, bool bExactMatch);
    void GetClassManagerSingle(const FGameplayTag& Tag, TSoftClassPtr<UObject>& OutClass, bool bExactMatch);
    void GetClassManagerMultiple(const FGameplayTag& Tag, TArray<TSoftClassPtr<UObject>>& OutClasses, bool bExactMatch);
}; // Size: 0x28

class UClassManagerHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralClassManagerRowHandle(FClassManagerRowHandle RowHandle);
    void MakeClassManagerRowHandle(const FName RowName);
    void GetClassManagerRow(FClassManagerRowHandle RowHandle, FClassManagerData& Data, ERowValid& ReturnPath);
    void GetAllClassManagerRowNames(TArray<FName>& OutRowNames);
    void GetAllClassManagerRowHandles(TArray<FClassManagerRowHandle>& OutRowHandles);
    void Equal_ClassManagerRowHandle(FClassManagerRowHandle A, FClassManagerRowHandle B);
    void DoesClassManagerRowExist(FName RowName);
    void Conv_NameToClassManager(FName RowName);
    void Conv_ClassManagerToName(const FClassManagerRowHandle& InHandle);
    void BreakClassManagerRowHandle(const FClassManagerRowHandle RowHandle);
}; // Size: 0x28

class UClassManagerModRowAsset : public UAbioticModRowAsset
{
    FClassManagerData Row;                                                            // 0x0040 (size: 0x40)

}; // Size: 0x80

class UCompendiumEntryHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCompendiumEntryRowHandle(FCompendiumEntryRowHandle RowHandle);
    void MakeCompendiumEntryRowHandle(const FName RowName);
    void GetCompendiumEntryRow(FCompendiumEntryRowHandle RowHandle, FCompendiumEntry& Data, ERowValid& ReturnPath);
    void GetAllCompendiumEntryRowNames(TArray<FName>& OutRowNames);
    void GetAllCompendiumEntryRowHandles(TArray<FCompendiumEntryRowHandle>& OutRowHandles);
    void Equal_CompendiumEntryRowHandle(FCompendiumEntryRowHandle A, FCompendiumEntryRowHandle B);
    void DoesCompendiumEntryRowExist(FName RowName);
    void Conv_NameToCompendiumEntry(FName RowName);
    void Conv_CompendiumEntryToName(const FCompendiumEntryRowHandle& InHandle);
    void BreakCompendiumEntryRowHandle(const FCompendiumEntryRowHandle RowHandle);
}; // Size: 0x28

class UCompendiumEntryItem : public UObject
{
    FCompendiumEntryRowHandle CompendiumEntry;                                        // 0x0028 (size: 0x10)
    FText Title;                                                                      // 0x0038 (size: 0x10)

    void RedactText(const FText& SourceString, FString RedactSymbol);
    void GetCompendiumEntries();
}; // Size: 0x48

class UControlSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralControlSettingRowHandle(FControlSettingRowHandle RowHandle);
    void MakeControlSettingRowHandle(const FName RowName);
    void GetControlSettingRow(FControlSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllControlSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllControlSettingRowHandles(TArray<FControlSettingRowHandle>& OutRowHandles);
    void Equal_ControlSettingRowHandle(FControlSettingRowHandle A, FControlSettingRowHandle B);
    void DoesControlSettingRowExist(FName RowName);
    void Conv_NameToControlSetting(FName RowName);
    void Conv_ControlSettingToName(const FControlSettingRowHandle& InHandle);
    void BreakControlSettingRowHandle(const FControlSettingRowHandle RowHandle);
}; // Size: 0x28

class UCraftableItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCraftableItemRowHandle(FCraftableItemRowHandle RowHandle);
    void MakeCraftableItemRowHandle(const FName RowName);
    void GetCraftableItemRow(FCraftableItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllCraftableItemRowNames(TArray<FName>& OutRowNames);
    void GetAllCraftableItemRowHandles(TArray<FCraftableItemRowHandle>& OutRowHandles);
    void Equal_CraftableItemRowHandle(FCraftableItemRowHandle A, FCraftableItemRowHandle B);
    void DoesCraftableItemRowExist(FName RowName);
    void Conv_NameToCraftableItem(FName RowName);
    void Conv_CraftableItemToName(const FCraftableItemRowHandle& InHandle);
    void BreakCraftableItemRowHandle(const FCraftableItemRowHandle RowHandle);
}; // Size: 0x28

class UCraftableItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UCraftingBenchItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCraftingBenchItemRowHandle(FCraftingBenchItemRowHandle RowHandle);
    void MakeCraftingBenchItemRowHandle(const FName RowName);
    void GetCraftingBenchItemRow(FCraftingBenchItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllCraftingBenchItemRowNames(TArray<FName>& OutRowNames);
    void GetAllCraftingBenchItemRowHandles(TArray<FCraftingBenchItemRowHandle>& OutRowHandles);
    void Equal_CraftingBenchItemRowHandle(FCraftingBenchItemRowHandle A, FCraftingBenchItemRowHandle B);
    void DoesCraftingBenchItemRowExist(FName RowName);
    void Conv_NameToCraftingBenchItem(FName RowName);
    void Conv_CraftingBenchItemToName(const FCraftingBenchItemRowHandle& InHandle);
    void BreakCraftingBenchItemRowHandle(const FCraftingBenchItemRowHandle RowHandle);
}; // Size: 0x28

class UCraftingBenchItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UCraftingEntryItem : public UObject
{
    FAnyRecipeRowHandle RecipeRow;                                                    // 0x0028 (size: 0x18)
    int32 CountToCreate;                                                              // 0x0040 (size: 0x4)
    FText RecipeItemName;                                                             // 0x0048 (size: 0x10)
    FGlobalItemRowHandle ItemToCreate;                                                // 0x0058 (size: 0x10)
    TArray<FGlobalItemRowHandle> BenchesRequired;                                     // 0x0068 (size: 0x10)
    uint8 Category;                                                                   // 0x0078 (size: 0x1)
    TArray<FAbioticItemInput> RecipeItems;                                            // 0x0080 (size: 0x10)
    TArray<FItemCount> SubstituteItems;                                               // 0x0090 (size: 0x10)
    FGameplayTagContainer RecipeTags;                                                 // 0x00A0 (size: 0x20)
    bool bIsSoupRecipe;                                                               // 0x00C0 (size: 0x1)
    bool bUnlocked;                                                                   // 0x00C1 (size: 0x1)
    bool bResearched;                                                                 // 0x00C2 (size: 0x1)
    bool bBenchAvailable;                                                             // 0x00C3 (size: 0x1)
    bool bNewRecipeHighlight;                                                         // 0x00C4 (size: 0x1)
    bool bNeverCrafted;                                                               // 0x00C5 (size: 0x1)
    bool bFavorited;                                                                  // 0x00C6 (size: 0x1)

    void UpdateCraftingEntryStates(TArray<UCraftingEntryItem*>& CraftingEntries, const TArray<FName>& RecipesUnlocked, const TArray<FName>& RecipesRequiringResearch, bool bDebugFreeCrafting, bool bResearchEnabled, const TArray<FName>& NewestRecipes, const TArray<FName>& CraftedItems, const TArray<FName>& Favorites, const TArray<FGlobalItemRowHandle>& AvailableBenches);
    void GetCategoryFilterStates(TArray<UCraftingEntryItem*>& CraftingEntries, TArray<uint8>& OutNewItemCategories, TArray<uint8>& OutNewResearchCategories);
    void FindCraftingEntryForItem(TArray<UCraftingEntryItem*>& CraftingEntries, FName ItemRowName, class UCraftingEntryItem*& OutCraftingEntry);
    void FilterCraftingEntries(const TArray<UCraftingEntryItem*>& CraftingEntries, bool bOnlyUnlocked, bool bOnlyFavorites, bool bFilterBench, bool bUseCategory, uint8 FilterCategory, FGameplayTag FilterTag, FString SearchString, TArray<UCraftingEntryItem*>& OutFilteredEntries, TArray<UCraftingEntryItem*>& OutFilteredBenchEntries);
}; // Size: 0xC8

class UCustomizationBeardHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationBeardRowHandle(FCustomizationBeardRowHandle RowHandle);
    void MakeCustomizationBeardRowHandle(const FName RowName);
    void GetCustomizationBeardRow(FCustomizationBeardRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationBeardRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationBeardRowHandles(TArray<FCustomizationBeardRowHandle>& OutRowHandles);
    void Equal_CustomizationBeardRowHandle(FCustomizationBeardRowHandle A, FCustomizationBeardRowHandle B);
    void DoesCustomizationBeardRowExist(FName RowName);
    void Conv_NameToCustomizationBeard(FName RowName);
    void Conv_CustomizationBeardToName(const FCustomizationBeardRowHandle& InHandle);
    void BreakCustomizationBeardRowHandle(const FCustomizationBeardRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationBeardModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationBeltHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationBeltRowHandle(FCustomizationBeltRowHandle RowHandle);
    void MakeCustomizationBeltRowHandle(const FName RowName);
    void GetCustomizationBeltRow(FCustomizationBeltRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationBeltRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationBeltRowHandles(TArray<FCustomizationBeltRowHandle>& OutRowHandles);
    void Equal_CustomizationBeltRowHandle(FCustomizationBeltRowHandle A, FCustomizationBeltRowHandle B);
    void DoesCustomizationBeltRowExist(FName RowName);
    void Conv_NameToCustomizationBelt(FName RowName);
    void Conv_CustomizationBeltToName(const FCustomizationBeltRowHandle& InHandle);
    void BreakCustomizationBeltRowHandle(const FCustomizationBeltRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationBeltModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationFannyPackHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationFannyPackRowHandle(FCustomizationFannyPackRowHandle RowHandle);
    void MakeCustomizationFannyPackRowHandle(const FName RowName);
    void GetCustomizationFannyPackRow(FCustomizationFannyPackRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationFannyPackRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationFannyPackRowHandles(TArray<FCustomizationFannyPackRowHandle>& OutRowHandles);
    void Equal_CustomizationFannyPackRowHandle(FCustomizationFannyPackRowHandle A, FCustomizationFannyPackRowHandle B);
    void DoesCustomizationFannyPackRowExist(FName RowName);
    void Conv_NameToCustomizationFannyPack(FName RowName);
    void Conv_CustomizationFannyPackToName(const FCustomizationFannyPackRowHandle& InHandle);
    void BreakCustomizationFannyPackRowHandle(const FCustomizationFannyPackRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationHairColorHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationHairColorRowHandle(FCustomizationHairColorRowHandle RowHandle);
    void MakeCustomizationHairColorRowHandle(const FName RowName);
    void GetCustomizationHairColorRow(FCustomizationHairColorRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationHairColorRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationHairColorRowHandles(TArray<FCustomizationHairColorRowHandle>& OutRowHandles);
    void Equal_CustomizationHairColorRowHandle(FCustomizationHairColorRowHandle A, FCustomizationHairColorRowHandle B);
    void DoesCustomizationHairColorRowExist(FName RowName);
    void Conv_NameToCustomizationHairColor(FName RowName);
    void Conv_CustomizationHairColorToName(const FCustomizationHairColorRowHandle& InHandle);
    void BreakCustomizationHairColorRowHandle(const FCustomizationHairColorRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationHairColorModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationHairStyleHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationHairStyleRowHandle(FCustomizationHairStyleRowHandle RowHandle);
    void MakeCustomizationHairStyleRowHandle(const FName RowName);
    void GetCustomizationHairStyleRow(FCustomizationHairStyleRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationHairStyleRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationHairStyleRowHandles(TArray<FCustomizationHairStyleRowHandle>& OutRowHandles);
    void Equal_CustomizationHairStyleRowHandle(FCustomizationHairStyleRowHandle A, FCustomizationHairStyleRowHandle B);
    void DoesCustomizationHairStyleRowExist(FName RowName);
    void Conv_NameToCustomizationHairStyle(FName RowName);
    void Conv_CustomizationHairStyleToName(const FCustomizationHairStyleRowHandle& InHandle);
    void BreakCustomizationHairStyleRowHandle(const FCustomizationHairStyleRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationHairStyleModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationHeadAccessoryHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationHeadAccessoryRowHandle(FCustomizationHeadAccessoryRowHandle RowHandle);
    void MakeCustomizationHeadAccessoryRowHandle(const FName RowName);
    void GetCustomizationHeadAccessoryRow(FCustomizationHeadAccessoryRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationHeadAccessoryRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationHeadAccessoryRowHandles(TArray<FCustomizationHeadAccessoryRowHandle>& OutRowHandles);
    void Equal_CustomizationHeadAccessoryRowHandle(FCustomizationHeadAccessoryRowHandle A, FCustomizationHeadAccessoryRowHandle B);
    void DoesCustomizationHeadAccessoryRowExist(FName RowName);
    void Conv_NameToCustomizationHeadAccessory(FName RowName);
    void Conv_CustomizationHeadAccessoryToName(const FCustomizationHeadAccessoryRowHandle& InHandle);
    void BreakCustomizationHeadAccessoryRowHandle(const FCustomizationHeadAccessoryRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationHeadAccessoryModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationHeadHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationHeadRowHandle(FCustomizationHeadRowHandle RowHandle);
    void MakeCustomizationHeadRowHandle(const FName RowName);
    void GetCustomizationHeadRow(FCustomizationHeadRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationHeadRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationHeadRowHandles(TArray<FCustomizationHeadRowHandle>& OutRowHandles);
    void Equal_CustomizationHeadRowHandle(FCustomizationHeadRowHandle A, FCustomizationHeadRowHandle B);
    void DoesCustomizationHeadRowExist(FName RowName);
    void Conv_NameToCustomizationHead(FName RowName);
    void Conv_CustomizationHeadToName(const FCustomizationHeadRowHandle& InHandle);
    void BreakCustomizationHeadRowHandle(const FCustomizationHeadRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationHeadModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationIDCardHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationIDCardRowHandle(FCustomizationIDCardRowHandle RowHandle);
    void MakeCustomizationIDCardRowHandle(const FName RowName);
    void GetCustomizationIDCardRow(FCustomizationIDCardRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationIDCardRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationIDCardRowHandles(TArray<FCustomizationIDCardRowHandle>& OutRowHandles);
    void Equal_CustomizationIDCardRowHandle(FCustomizationIDCardRowHandle A, FCustomizationIDCardRowHandle B);
    void DoesCustomizationIDCardRowExist(FName RowName);
    void Conv_NameToCustomizationIDCard(FName RowName);
    void Conv_CustomizationIDCardToName(const FCustomizationIDCardRowHandle& InHandle);
    void BreakCustomizationIDCardRowHandle(const FCustomizationIDCardRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationIDCardModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationLabcoatHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationLabcoatRowHandle(FCustomizationLabcoatRowHandle RowHandle);
    void MakeCustomizationLabcoatRowHandle(const FName RowName);
    void GetCustomizationLabcoatRow(FCustomizationLabcoatRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationLabcoatRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationLabcoatRowHandles(TArray<FCustomizationLabcoatRowHandle>& OutRowHandles);
    void Equal_CustomizationLabcoatRowHandle(FCustomizationLabcoatRowHandle A, FCustomizationLabcoatRowHandle B);
    void DoesCustomizationLabcoatRowExist(FName RowName);
    void Conv_NameToCustomizationLabcoat(FName RowName);
    void Conv_CustomizationLabcoatToName(const FCustomizationLabcoatRowHandle& InHandle);
    void BreakCustomizationLabcoatRowHandle(const FCustomizationLabcoatRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationLabcoatModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationLowerBodyHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationLowerBodyRowHandle(FCustomizationLowerBodyRowHandle RowHandle);
    void MakeCustomizationLowerBodyRowHandle(const FName RowName);
    void GetCustomizationLowerBodyRow(FCustomizationLowerBodyRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationLowerBodyRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationLowerBodyRowHandles(TArray<FCustomizationLowerBodyRowHandle>& OutRowHandles);
    void Equal_CustomizationLowerBodyRowHandle(FCustomizationLowerBodyRowHandle A, FCustomizationLowerBodyRowHandle B);
    void DoesCustomizationLowerBodyRowExist(FName RowName);
    void Conv_NameToCustomizationLowerBody(FName RowName);
    void Conv_CustomizationLowerBodyToName(const FCustomizationLowerBodyRowHandle& InHandle);
    void BreakCustomizationLowerBodyRowHandle(const FCustomizationLowerBodyRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationLowerBodyModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationMakeupHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationMakeupRowHandle(FCustomizationMakeupRowHandle RowHandle);
    void MakeCustomizationMakeupRowHandle(const FName RowName);
    void GetCustomizationMakeupRow(FCustomizationMakeupRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationMakeupRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationMakeupRowHandles(TArray<FCustomizationMakeupRowHandle>& OutRowHandles);
    void Equal_CustomizationMakeupRowHandle(FCustomizationMakeupRowHandle A, FCustomizationMakeupRowHandle B);
    void DoesCustomizationMakeupRowExist(FName RowName);
    void Conv_NameToCustomizationMakeup(FName RowName);
    void Conv_CustomizationMakeupToName(const FCustomizationMakeupRowHandle& InHandle);
    void BreakCustomizationMakeupRowHandle(const FCustomizationMakeupRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationShirtColorHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationShirtColorRowHandle(FCustomizationShirtColorRowHandle RowHandle);
    void MakeCustomizationShirtColorRowHandle(const FName RowName);
    void GetCustomizationShirtColorRow(FCustomizationShirtColorRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationShirtColorRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationShirtColorRowHandles(TArray<FCustomizationShirtColorRowHandle>& OutRowHandles);
    void Equal_CustomizationShirtColorRowHandle(FCustomizationShirtColorRowHandle A, FCustomizationShirtColorRowHandle B);
    void DoesCustomizationShirtColorRowExist(FName RowName);
    void Conv_NameToCustomizationShirtColor(FName RowName);
    void Conv_CustomizationShirtColorToName(const FCustomizationShirtColorRowHandle& InHandle);
    void BreakCustomizationShirtColorRowHandle(const FCustomizationShirtColorRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationShirtColorModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationShoesHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationShoesRowHandle(FCustomizationShoesRowHandle RowHandle);
    void MakeCustomizationShoesRowHandle(const FName RowName);
    void GetCustomizationShoesRow(FCustomizationShoesRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationShoesRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationShoesRowHandles(TArray<FCustomizationShoesRowHandle>& OutRowHandles);
    void Equal_CustomizationShoesRowHandle(FCustomizationShoesRowHandle A, FCustomizationShoesRowHandle B);
    void DoesCustomizationShoesRowExist(FName RowName);
    void Conv_NameToCustomizationShoes(FName RowName);
    void Conv_CustomizationShoesToName(const FCustomizationShoesRowHandle& InHandle);
    void BreakCustomizationShoesRowHandle(const FCustomizationShoesRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationShoesModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationTieHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationTieRowHandle(FCustomizationTieRowHandle RowHandle);
    void MakeCustomizationTieRowHandle(const FName RowName);
    void GetCustomizationTieRow(FCustomizationTieRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationTieRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationTieRowHandles(TArray<FCustomizationTieRowHandle>& OutRowHandles);
    void Equal_CustomizationTieRowHandle(FCustomizationTieRowHandle A, FCustomizationTieRowHandle B);
    void DoesCustomizationTieRowExist(FName RowName);
    void Conv_NameToCustomizationTie(FName RowName);
    void Conv_CustomizationTieToName(const FCustomizationTieRowHandle& InHandle);
    void BreakCustomizationTieRowHandle(const FCustomizationTieRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationTieModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationUpperBodyHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationUpperBodyRowHandle(FCustomizationUpperBodyRowHandle RowHandle);
    void MakeCustomizationUpperBodyRowHandle(const FName RowName);
    void GetCustomizationUpperBodyRow(FCustomizationUpperBodyRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationUpperBodyRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationUpperBodyRowHandles(TArray<FCustomizationUpperBodyRowHandle>& OutRowHandles);
    void Equal_CustomizationUpperBodyRowHandle(FCustomizationUpperBodyRowHandle A, FCustomizationUpperBodyRowHandle B);
    void DoesCustomizationUpperBodyRowExist(FName RowName);
    void Conv_NameToCustomizationUpperBody(FName RowName);
    void Conv_CustomizationUpperBodyToName(const FCustomizationUpperBodyRowHandle& InHandle);
    void BreakCustomizationUpperBodyRowHandle(const FCustomizationUpperBodyRowHandle RowHandle);
}; // Size: 0x28

class UCustomizationUpperBodyModRowAsset : public UAbioticModRowAsset
{
    FAbioticCustomization Row;                                                        // 0x0040 (size: 0x198)

}; // Size: 0x1D8

class UCustomizationWatchHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralCustomizationWatchRowHandle(FCustomizationWatchRowHandle RowHandle);
    void MakeCustomizationWatchRowHandle(const FName RowName);
    void GetCustomizationWatchRow(FCustomizationWatchRowHandle RowHandle, FAbioticCustomization& Data, ERowValid& ReturnPath);
    void GetAllCustomizationWatchRowNames(TArray<FName>& OutRowNames);
    void GetAllCustomizationWatchRowHandles(TArray<FCustomizationWatchRowHandle>& OutRowHandles);
    void Equal_CustomizationWatchRowHandle(FCustomizationWatchRowHandle A, FCustomizationWatchRowHandle B);
    void DoesCustomizationWatchRowExist(FName RowName);
    void Conv_NameToCustomizationWatch(FName RowName);
    void Conv_CustomizationWatchToName(const FCustomizationWatchRowHandle& InHandle);
    void BreakCustomizationWatchRowHandle(const FCustomizationWatchRowHandle RowHandle);
}; // Size: 0x28

class UDTValidation_RowHandles : public UDataTableValidationObject
{
}; // Size: 0x38

class UDTValidation_SoftReference : public UDataTableValidationObject
{
}; // Size: 0x38

class UDamageDefinitionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralDamageDefinitionRowHandle(FDamageDefinitionRowHandle RowHandle);
    void MakeDamageDefinitionRowHandle(const FName RowName);
    void GetDamageDefinitionRow(FDamageDefinitionRowHandle RowHandle, FDamageDefinition& Data, ERowValid& ReturnPath);
    void GetAllDamageDefinitionRowNames(TArray<FName>& OutRowNames);
    void GetAllDamageDefinitionRowHandles(TArray<FDamageDefinitionRowHandle>& OutRowHandles);
    void Equal_DamageDefinitionRowHandle(FDamageDefinitionRowHandle A, FDamageDefinitionRowHandle B);
    void DoesDamageDefinitionRowExist(FName RowName);
    void Conv_NameToDamageDefinition(FName RowName);
    void Conv_DamageDefinitionToName(const FDamageDefinitionRowHandle& InHandle);
    void BreakDamageDefinitionRowHandle(const FDamageDefinitionRowHandle RowHandle);
}; // Size: 0x28

class UDataTableValidationObject : public UObject
{
    class UDataTable* TableRef;                                                       // 0x0028 (size: 0x8)

    void ValidationWarning(FText Message, bool bCondition);
    void ValidationError(FText Message, bool bCondition);
    void ValidateRow(class UDataTable* Table, FName RowName);
    void ValidateDataTable(class UDataTable* DataTable, bool FlushLogs);
}; // Size: 0x38

class UDeployableItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralDeployableItemRowHandle(FDeployableItemRowHandle RowHandle);
    void MakeDeployableItemRowHandle(const FName RowName);
    void GetDeployableItemRow(FDeployableItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllDeployableItemRowNames(TArray<FName>& OutRowNames);
    void GetAllDeployableItemRowHandles(TArray<FDeployableItemRowHandle>& OutRowHandles);
    void Equal_DeployableItemRowHandle(FDeployableItemRowHandle A, FDeployableItemRowHandle B);
    void DoesDeployableItemRowExist(FName RowName);
    void Conv_NameToDeployableItem(FName RowName);
    void Conv_DeployableItemToName(const FDeployableItemRowHandle& InHandle);
    void BreakDeployableItemRowHandle(const FDeployableItemRowHandle RowHandle);
}; // Size: 0x28

class UDeployableItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UDynamicPropertyFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetDynamicProperty(TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32 Value);
    void GetStovewareType(const TArray<FDynamicProperty>& DynamicProperties);
    void GetPortions(const TArray<FDynamicProperty>& DynamicProperties);
    void GetDynamicProperty(const TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property, int32& Value);
    void GetCookingState(const TArray<FDynamicProperty>& DynamicProperties);
    void CopyCookingDynamicProperties(const TArray<FDynamicProperty>& SourceDynamicProperties, TArray<FDynamicProperty>& DestinationDynamicProperties);
    void ClearDynamicProperty(TArray<FDynamicProperty>& DynamicProperties, EDynamicProperty Property);
    void ClearCookingDynamicProperties(TArray<FDynamicProperty>& DynamicProperties);
}; // Size: 0x28

class UEQGenerator_CoverPoints : public UEnvQueryGenerator_ProjectedPoints
{
    TSubclassOf<class UEnvQueryContext> GenerateAround;                               // 0x0090 (size: 0x8)
    FAIDataProviderFloatValue Radius;                                                 // 0x0098 (size: 0x38)

}; // Size: 0xD0

class UEmailHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralEmailRowHandle(FEmailRowHandle RowHandle);
    void MakeEmailRowHandle(const FName RowName);
    void GetEmailRow(FEmailRowHandle RowHandle, FAbioticEmail& Data, ERowValid& ReturnPath);
    void GetAllEmailRowNames(TArray<FName>& OutRowNames);
    void GetAllEmailRowHandles(TArray<FEmailRowHandle>& OutRowHandles);
    void Equal_EmailRowHandle(FEmailRowHandle A, FEmailRowHandle B);
    void DoesEmailRowExist(FName RowName);
    void Conv_NameToEmail(FName RowName);
    void Conv_EmailToName(const FEmailRowHandle& InHandle);
    void BreakEmailRowHandle(const FEmailRowHandle RowHandle);
}; // Size: 0x28

class UEmoteHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralEmoteRowHandle(FEmoteRowHandle RowHandle);
    void MakeEmoteRowHandle(const FName RowName);
    void GetEmoteRow(FEmoteRowHandle RowHandle, FEmote& Data, ERowValid& ReturnPath);
    void GetAllEmoteRowNames(TArray<FName>& OutRowNames);
    void GetAllEmoteRowHandles(TArray<FEmoteRowHandle>& OutRowHandles);
    void Equal_EmoteRowHandle(FEmoteRowHandle A, FEmoteRowHandle B);
    void DoesEmoteRowExist(FName RowName);
    void Conv_NameToEmote(FName RowName);
    void Conv_EmoteToName(const FEmoteRowHandle& InHandle);
    void BreakEmoteRowHandle(const FEmoteRowHandle RowHandle);
}; // Size: 0x28

class UEmoteModRowAsset : public UAbioticModRowAsset
{
    FEmote Row;                                                                       // 0x0040 (size: 0x100)

}; // Size: 0x140

class UEnvQueryTest_LevelLoaded : public UEnvQueryTest
{
}; // Size: 0x1F8

class UEnvQueryTest_LineDistance : public UEnvQueryTest
{
    FEnvDirection Line;                                                               // 0x01F8 (size: 0x20)
    FAIDataProviderFloatValue MaxDistance;                                            // 0x0218 (size: 0x38)

}; // Size: 0x250

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

    void MakeLiteralErrorMessageRowHandle(FErrorMessageRowHandle RowHandle);
    void MakeErrorMessageRowHandle(const FName RowName);
    void GetErrorMessageRow(FErrorMessageRowHandle RowHandle, FErrorMessage& Data, ERowValid& ReturnPath);
    void GetAllErrorMessageRowNames(TArray<FName>& OutRowNames);
    void GetAllErrorMessageRowHandles(TArray<FErrorMessageRowHandle>& OutRowHandles);
    void Equal_ErrorMessageRowHandle(FErrorMessageRowHandle A, FErrorMessageRowHandle B);
    void DoesErrorMessageRowExist(FName RowName);
    void Conv_NameToErrorMessage(FName RowName);
    void Conv_ErrorMessageToName(const FErrorMessageRowHandle& InHandle);
    void BreakErrorMessageRowHandle(const FErrorMessageRowHandle RowHandle);
}; // Size: 0x28

class UFPAnimationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralFPAnimationRowHandle(FFPAnimationRowHandle RowHandle);
    void MakeFPAnimationRowHandle(const FName RowName);
    void GetFPAnimationRow(FFPAnimationRowHandle RowHandle, FAbioticFPAnimation& Data, ERowValid& ReturnPath);
    void GetAllFPAnimationRowNames(TArray<FName>& OutRowNames);
    void GetAllFPAnimationRowHandles(TArray<FFPAnimationRowHandle>& OutRowHandles);
    void Equal_FPAnimationRowHandle(FFPAnimationRowHandle A, FFPAnimationRowHandle B);
    void DoesFPAnimationRowExist(FName RowName);
    void Conv_NameToFPAnimation(FName RowName);
    void Conv_FPAnimationToName(const FFPAnimationRowHandle& InHandle);
    void BreakFPAnimationRowHandle(const FFPAnimationRowHandle RowHandle);
}; // Size: 0x28

class UFPAnimationModRowAsset : public UAbioticModRowAsset
{
    FAbioticFPAnimation Row;                                                          // 0x0040 (size: 0xA0)

}; // Size: 0xE0

class UFPArmsAnimInstance : public UAnimInstance
{
    EFPAnimState CurrentAnimState;                                                    // 0x0368 (size: 0x1)

}; // Size: 0x370

class UFPMeshSocketHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralFPMeshSocketRowHandle(FFPMeshSocketRowHandle RowHandle);
    void MakeFPMeshSocketRowHandle(const FName RowName);
    void GetFPMeshSocketRow(FFPMeshSocketRowHandle RowHandle, FAttachSocket& Data, ERowValid& ReturnPath);
    void GetAllFPMeshSocketRowNames(TArray<FName>& OutRowNames);
    void GetAllFPMeshSocketRowHandles(TArray<FFPMeshSocketRowHandle>& OutRowHandles);
    void Equal_FPMeshSocketRowHandle(FFPMeshSocketRowHandle A, FFPMeshSocketRowHandle B);
    void DoesFPMeshSocketRowExist(FName RowName);
    void Conv_NameToFPMeshSocket(FName RowName);
    void Conv_FPMeshSocketToName(const FFPMeshSocketRowHandle& InHandle);
    void BreakFPMeshSocketRowHandle(const FFPMeshSocketRowHandle RowHandle);
}; // Size: 0x28

class UFPMeshSocketModRowAsset : public UAbioticModRowAsset
{
    FAttachSocket Row;                                                                // 0x0040 (size: 0x60)

}; // Size: 0xA0

class UFilterSessionResultEntries : public UOnlineBlueprintCallProxyBase
{
    FFilterSessionResultEntriesOnSuccess OnSuccess;                                   // 0x0030 (size: 0x10)
    void ProfanityFilterResult(bool bSuccess, const TArray<FBlueprintSessionResult>& OutSessionResults);
    FFilterSessionResultEntriesOnFailure OnFailure;                                   // 0x0040 (size: 0x10)
    void ProfanityFilterResult(bool bSuccess, const TArray<FBlueprintSessionResult>& OutSessionResults);
    class UObject* WorldContextObject;                                                // 0x0050 (size: 0x8)

    void GetFilterSessionResultEntries(class UObject* WorldContextObject, const TArray<FBlueprintSessionResult>& InSessionResults);
}; // Size: 0x68

class UFindEnemyQueryContext : public UEnvQueryContext
{
}; // Size: 0x28

class UFishHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralFishRowHandle(FFishRowHandle RowHandle);
    void MakeFishRowHandle(const FName RowName);
    void GetFishRow(FFishRowHandle RowHandle, FFishData& Data, ERowValid& ReturnPath);
    void GetAllFishRowNames(TArray<FName>& OutRowNames);
    void GetAllFishRowHandles(TArray<FFishRowHandle>& OutRowHandles);
    void Equal_FishRowHandle(FFishRowHandle A, FFishRowHandle B);
    void DoesFishRowExist(FName RowName);
    void Conv_NameToFish(FName RowName);
    void Conv_FishToName(const FFishRowHandle& InHandle);
    void BreakFishRowHandle(const FFishRowHandle RowHandle);
}; // Size: 0x28

class UFishModRowAsset : public UAbioticModRowAsset
{
    FFishData Row;                                                                    // 0x0040 (size: 0x168)

}; // Size: 0x1A8

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

    void MakeLiteralFishingZoneRowHandle(FFishingZoneRowHandle RowHandle);
    void MakeFishingZoneRowHandle(const FName RowName);
    void GetFishingZoneRow(FFishingZoneRowHandle RowHandle, FFishingZone& Data, ERowValid& ReturnPath);
    void GetAllFishingZoneRowNames(TArray<FName>& OutRowNames);
    void GetAllFishingZoneRowHandles(TArray<FFishingZoneRowHandle>& OutRowHandles);
    void Equal_FishingZoneRowHandle(FFishingZoneRowHandle A, FFishingZoneRowHandle B);
    void DoesFishingZoneRowExist(FName RowName);
    void Conv_NameToFishingZone(FName RowName);
    void Conv_FishingZoneToName(const FFishingZoneRowHandle& InHandle);
    void BreakFishingZoneRowHandle(const FFishingZoneRowHandle RowHandle);
}; // Size: 0x28

class UFishingZoneModRowAsset : public UAbioticModRowAsset
{
    FFishingZone Row;                                                                 // 0x0040 (size: 0x70)

}; // Size: 0xB0

class UFoodAndGibsItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralFoodAndGibsItemRowHandle(FFoodAndGibsItemRowHandle RowHandle);
    void MakeFoodAndGibsItemRowHandle(const FName RowName);
    void GetFoodAndGibsItemRow(FFoodAndGibsItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllFoodAndGibsItemRowNames(TArray<FName>& OutRowNames);
    void GetAllFoodAndGibsItemRowHandles(TArray<FFoodAndGibsItemRowHandle>& OutRowHandles);
    void Equal_FoodAndGibsItemRowHandle(FFoodAndGibsItemRowHandle A, FFoodAndGibsItemRowHandle B);
    void DoesFoodAndGibsItemRowExist(FName RowName);
    void Conv_NameToFoodAndGibsItem(FName RowName);
    void Conv_FoodAndGibsItemToName(const FFoodAndGibsItemRowHandle& InHandle);
    void BreakFoodAndGibsItemRowHandle(const FFoodAndGibsItemRowHandle RowHandle);
}; // Size: 0x28

class UFoodAndGibsItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UGameActivityHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralGameActivityRowHandle(FGameActivityRowHandle RowHandle);
    void MakeGameActivityRowHandle(const FName RowName);
    void GetGameActivityRow(FGameActivityRowHandle RowHandle, FGameActivity& Data, ERowValid& ReturnPath);
    void GetAllGameActivityRowNames(TArray<FName>& OutRowNames);
    void GetAllGameActivityRowHandles(TArray<FGameActivityRowHandle>& OutRowHandles);
    void Equal_GameActivityRowHandle(FGameActivityRowHandle A, FGameActivityRowHandle B);
    void DoesGameActivityRowExist(FName RowName);
    void Conv_NameToGameActivity(FName RowName);
    void Conv_GameActivityToName(const FGameActivityRowHandle& InHandle);
    void BreakGameActivityRowHandle(const FGameActivityRowHandle RowHandle);
}; // Size: 0x28

class UGameActivitySubsystem : public UWorldSubsystem
{
    TMap<FString, TEnumAsByte<EActivityState>> CachedState;                           // 0x0030 (size: 0x50)

    void WorldFlagsChanged();
    void ResetActivities();
}; // Size: 0x80

class UGameCommandEntryWidget : public UUserWidget
{
    FGameCommandRowHandle RowHandle;                                                  // 0x02E0 (size: 0x10)

}; // Size: 0x2F0

class UGameCommandHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralGameCommandRowHandle(FGameCommandRowHandle RowHandle);
    void MakeGameCommandRowHandle(const FName RowName);
    void GetGameCommandRow(FGameCommandRowHandle RowHandle, FGameCommand& Data, ERowValid& ReturnPath);
    void GetAllGameCommandRowNames(TArray<FName>& OutRowNames);
    void GetAllGameCommandRowHandles(TArray<FGameCommandRowHandle>& OutRowHandles);
    void Equal_GameCommandRowHandle(FGameCommandRowHandle A, FGameCommandRowHandle B);
    void DoesGameCommandRowExist(FName RowName);
    void Conv_NameToGameCommand(FName RowName);
    void Conv_GameCommandToName(const FGameCommandRowHandle& InHandle);
    void BreakGameCommandRowHandle(const FGameCommandRowHandle RowHandle);
}; // Size: 0x28

class UGameCommandModRowAsset : public UAbioticModRowAsset
{
    FGameCommand Row;                                                                 // 0x0040 (size: 0x78)

}; // Size: 0xB8

class UGameCommandObject : public UObject
{
    FGameCommandRowHandle RowHandle;                                                  // 0x0028 (size: 0x10)

    void OnCommandExecuted(class AAbioticPlayerController* Player, FString FirstParam, FString SecondParam);
    void GetSliderSettings(bool& bDynamicSettings);
    void GetSecondParamOptions(bool& bDynamicOptions);
    void GetFirstParamOptions(bool& bDynamicOptions);
    void GetCurrentValue(float& OutValue);
    void GetCurrentState(FString& OutState);
    void ConvertParamToOriginal(FString InParam, bool bIsSecondParam);
}; // Size: 0x38

class UGameCommandSubsystem : public UGameInstanceSubsystem
{
    TMap<FGameCommandRowHandle, UGameCommandObject*> GameCommandInstances;            // 0x0030 (size: 0x50)
    TArray<FGameCommandEntry> GameCommands;                                           // 0x0080 (size: 0x10)

    void GetGameCommand(FGameCommandRowHandle RowHandle);
    void GameCommandFuzzySearch(FString SearchInput);
    void ExecuteGameCommandForPlayer(class AAbioticPlayerController* PlayerController, const FGameCommandRowHandle& RowHandle, FString FirstParam, FString SecondParam);
    void ExecuteGameCommand(const class UObject* WorldContextObject, const FGameCommandRowHandle& RowHandle, FString FirstParam, FString SecondParam);
}; // Size: 0x90

class UGameCommandWidget : public UUserWidget
{
    FGameCommandRowHandle RowHandle;                                                  // 0x02E0 (size: 0x10)

    void FilterGameCommandWidgets(class UPanelWidget* PanelWidget, TArray<UGameCommandWidget*> GameCommandWidgets, const TArray<FGameCommandRowHandle>& FilteredRowHandles);
}; // Size: 0x2F0

class UGameCreditHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralGameCreditRowHandle(FGameCreditRowHandle RowHandle);
    void MakeGameCreditRowHandle(const FName RowName);
    void GetGameCreditRow(FGameCreditRowHandle RowHandle, FGameCredit& Data, ERowValid& ReturnPath);
    void GetAllGameCreditRowNames(TArray<FName>& OutRowNames);
    void GetAllGameCreditRowHandles(TArray<FGameCreditRowHandle>& OutRowHandles);
    void Equal_GameCreditRowHandle(FGameCreditRowHandle A, FGameCreditRowHandle B);
    void DoesGameCreditRowExist(FName RowName);
    void Conv_NameToGameCredit(FName RowName);
    void Conv_GameCreditToName(const FGameCreditRowHandle& InHandle);
    void BreakGameCreditRowHandle(const FGameCreditRowHandle RowHandle);
}; // Size: 0x28

class UGameEntitlementHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralGameEntitlementRowHandle(FGameEntitlementRowHandle RowHandle);
    void MakeGameEntitlementRowHandle(const FName RowName);
    void GetGameEntitlementRow(FGameEntitlementRowHandle RowHandle, FGameEntitlement& Data, ERowValid& ReturnPath);
    void GetAllGameEntitlementRowNames(TArray<FName>& OutRowNames);
    void GetAllGameEntitlementRowHandles(TArray<FGameEntitlementRowHandle>& OutRowHandles);
    void Equal_GameEntitlementRowHandle(FGameEntitlementRowHandle A, FGameEntitlementRowHandle B);
    void DoesGameEntitlementRowExist(FName RowName);
    void Conv_NameToGameEntitlement(FName RowName);
    void Conv_GameEntitlementToName(const FGameEntitlementRowHandle& InHandle);
    void BreakGameEntitlementRowHandle(const FGameEntitlementRowHandle RowHandle);
}; // Size: 0x28

class UGameSettingFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShouldShowSetting(const FGameSetting& Setting, bool bCheckDynamicState);
    void GetDefaultValueForSetting(const FGameSetting& Setting);
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

    void MakeLiteralGameplaySettingRowHandle(FGameplaySettingRowHandle RowHandle);
    void MakeGameplaySettingRowHandle(const FName RowName);
    void GetGameplaySettingRow(FGameplaySettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllGameplaySettingRowNames(TArray<FName>& OutRowNames);
    void GetAllGameplaySettingRowHandles(TArray<FGameplaySettingRowHandle>& OutRowHandles);
    void Equal_GameplaySettingRowHandle(FGameplaySettingRowHandle A, FGameplaySettingRowHandle B);
    void DoesGameplaySettingRowExist(FName RowName);
    void Conv_NameToGameplaySetting(FName RowName);
    void Conv_GameplaySettingToName(const FGameplaySettingRowHandle& InHandle);
    void BreakGameplaySettingRowHandle(const FGameplaySettingRowHandle RowHandle);
}; // Size: 0x28

class UGearItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralGearItemRowHandle(FGearItemRowHandle RowHandle);
    void MakeGearItemRowHandle(const FName RowName);
    void GetGearItemRow(FGearItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllGearItemRowNames(TArray<FName>& OutRowNames);
    void GetAllGearItemRowHandles(TArray<FGearItemRowHandle>& OutRowHandles);
    void Equal_GearItemRowHandle(FGearItemRowHandle A, FGearItemRowHandle B);
    void DoesGearItemRowExist(FName RowName);
    void Conv_NameToGearItem(FName RowName);
    void Conv_GearItemToName(const FGearItemRowHandle& InHandle);
    void BreakGearItemRowHandle(const FGearItemRowHandle RowHandle);
}; // Size: 0x28

class UGearItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UGlobalItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ToWeaponItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToWeaponItem(const FGlobalItemRowHandle& InHandle);
    void ToSmallDeployableItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToSmallDeployableItem(const FGlobalItemRowHandle& InHandle);
    void ToPlantItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToPlantItem(const FGlobalItemRowHandle& InHandle);
    void ToPickupItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToPickupItem(const FGlobalItemRowHandle& InHandle);
    void ToPetItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToPetItem(const FGlobalItemRowHandle& InHandle);
    void ToGearItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToGearItem(const FGlobalItemRowHandle& InHandle);
    void ToFoodAndGibsItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToFoodAndGibsItem(const FGlobalItemRowHandle& InHandle);
    void ToDeployableItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToDeployableItem(const FGlobalItemRowHandle& InHandle);
    void ToCraftingBenchItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCraftingBenchItem(const FGlobalItemRowHandle& InHandle);
    void ToCraftableItemChecked(const FGlobalItemRowHandle& InHandle, ERowValid& ReturnPath);
    void ToCraftableItem(const FGlobalItemRowHandle& InHandle);
    void MakeLiteralGlobalItemRowHandle(FGlobalItemRowHandle RowHandle);
    void MakeGlobalItemRowHandle(const FName RowName);
    void GetGlobalItemRow(FGlobalItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllGlobalItemRowNames(TArray<FName>& OutRowNames);
    void GetAllGlobalItemRowHandles(TArray<FGlobalItemRowHandle>& OutRowHandles);
    void Equal_GlobalItemRowHandle(FGlobalItemRowHandle A, FGlobalItemRowHandle B);
    void DoesGlobalItemRowExist(FName RowName);
    void Conv_WeaponItemToGlobalItem(const FWeaponItemRowHandle& InHandle);
    void Conv_SmallDeployableItemToGlobalItem(const FSmallDeployableItemRowHandle& InHandle);
    void Conv_PlantItemToGlobalItem(const FPlantItemRowHandle& InHandle);
    void Conv_PickupItemToGlobalItem(const FPickupItemRowHandle& InHandle);
    void Conv_PetItemToGlobalItem(const FPetItemRowHandle& InHandle);
    void Conv_NameToGlobalItem(FName RowName);
    void Conv_GlobalItemToName(const FGlobalItemRowHandle& InHandle);
    void Conv_GearItemToGlobalItem(const FGearItemRowHandle& InHandle);
    void Conv_FoodAndGibsItemToGlobalItem(const FFoodAndGibsItemRowHandle& InHandle);
    void Conv_DeployableItemToGlobalItem(const FDeployableItemRowHandle& InHandle);
    void Conv_CraftingBenchItemToGlobalItem(const FCraftingBenchItemRowHandle& InHandle);
    void Conv_CraftableItemToGlobalItem(const FCraftableItemRowHandle& InHandle);
    void BreakGlobalItemRowHandle(const FGlobalItemRowHandle RowHandle);
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
    float IdleSpeedThreshold_Walk;                                                    // 0x03A0 (size: 0x4)
    float IdleSpeedThreshold_CrouchWalk;                                              // 0x03A4 (size: 0x4)
    float SyncTime_Idle;                                                              // 0x03A8 (size: 0x4)
    float SyncTime_CrouchIdle;                                                        // 0x03AC (size: 0x4)
    float SyncTime_Walk;                                                              // 0x03B0 (size: 0x4)
    float SyncTime_CrouchWalk;                                                        // 0x03B4 (size: 0x4)
    float SyncTime_Sprint;                                                            // 0x03B8 (size: 0x4)

}; // Size: 0x3D0

class UHelicopterMovementComponent : public UAbioticCharacterMovementComponent
{
    FVector AngularVelocity;                                                          // 0x0FC0 (size: 0x18)
    bool HelicopterFlight;                                                            // 0x0FD8 (size: 0x1)
    float YawSpeed;                                                                   // 0x0FDC (size: 0x4)
    float TiltSpeed;                                                                  // 0x0FE0 (size: 0x4)
    class AActor* LookTargetActor;                                                    // 0x0FE8 (size: 0x8)
    float FlightPower;                                                                // 0x0FF0 (size: 0x4)

    void TickRotation(const float DeltaTime);
    void GetLookTargetLocation();
    void GetFlightPower();
    void ApplyGravity(const float DeltaTime);
}; // Size: 0x1000

class UItemActionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralItemActionRowHandle(FItemActionRowHandle RowHandle);
    void MakeItemActionRowHandle(const FName RowName);
    void GetItemActionRow(FItemActionRowHandle RowHandle, FItemAction& Data, ERowValid& ReturnPath);
    void GetAllItemActionRowNames(TArray<FName>& OutRowNames);
    void GetAllItemActionRowHandles(TArray<FItemActionRowHandle>& OutRowHandles);
    void Equal_ItemActionRowHandle(FItemActionRowHandle A, FItemActionRowHandle B);
    void DoesItemActionRowExist(FName RowName);
    void Conv_NameToItemAction(FName RowName);
    void Conv_ItemActionToName(const FItemActionRowHandle& InHandle);
    void BreakItemActionRowHandle(const FItemActionRowHandle RowHandle);
}; // Size: 0x28

class UItemActionModRowAsset : public UAbioticModRowAsset
{
    FItemAction Row;                                                                  // 0x0040 (size: 0x30)

}; // Size: 0x70

class UItemCosmeticHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralItemCosmeticRowHandle(FItemCosmeticRowHandle RowHandle);
    void MakeItemCosmeticRowHandle(const FName RowName);
    void GetItemCosmeticRow(FItemCosmeticRowHandle RowHandle, FItemCosmetics& Data, ERowValid& ReturnPath);
    void GetAllItemCosmeticRowNames(TArray<FName>& OutRowNames);
    void GetAllItemCosmeticRowHandles(TArray<FItemCosmeticRowHandle>& OutRowHandles);
    void Equal_ItemCosmeticRowHandle(FItemCosmeticRowHandle A, FItemCosmeticRowHandle B);
    void DoesItemCosmeticRowExist(FName RowName);
    void Conv_NameToItemCosmetic(FName RowName);
    void Conv_ItemCosmeticToName(const FItemCosmeticRowHandle& InHandle);
    void BreakItemCosmeticRowHandle(const FItemCosmeticRowHandle RowHandle);
}; // Size: 0x28

class UItemCosmeticModRowAsset : public UAbioticModRowAsset
{
    FItemCosmetics Row;                                                               // 0x0040 (size: 0x208)

}; // Size: 0x248

class UItemDistillationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralItemDistillationRowHandle(FItemDistillationRowHandle RowHandle);
    void MakeItemDistillationRowHandle(const FName RowName);
    void GetItemDistillationRow(FItemDistillationRowHandle RowHandle, FDistillationEntry& Data, ERowValid& ReturnPath);
    void GetAllItemDistillationRowNames(TArray<FName>& OutRowNames);
    void GetAllItemDistillationRowHandles(TArray<FItemDistillationRowHandle>& OutRowHandles);
    void Equal_ItemDistillationRowHandle(FItemDistillationRowHandle A, FItemDistillationRowHandle B);
    void DoesItemDistillationRowExist(FName RowName);
    void Conv_NameToItemDistillation(FName RowName);
    void Conv_ItemDistillationToName(const FItemDistillationRowHandle& InHandle);
    void BreakItemDistillationRowHandle(const FItemDistillationRowHandle RowHandle);
}; // Size: 0x28

class UItemDistillationModRowAsset : public UAbioticModRowAsset
{
    FDistillationEntry Row;                                                           // 0x0040 (size: 0x20)

}; // Size: 0x60

class UItemFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SanitizeItems(const TArray<FAbioticInventoryItemSlot>& InventoryItems, TArray<FAbioticInventoryItemSlot>& SanitizedItems, TArray<FAbioticInventoryItemSlot>& InvalidItems);
    void ItemPassesTagQuery(const FGlobalItemRowHandle& ItemRowHandle, const FGameplayTagQuery& Query);
    void ItemHasTag(const FGlobalItemRowHandle& ItemRowHandle, const FGameplayTag& Tag, bool bExactMatch);
    void GetItemGameplayTags(const FGlobalItemRowHandle& ItemRowHandle);
    void GetAllItemsWithTag(const FGameplayTag& Tag, TArray<FGlobalItemRowHandle>& OutRowHandles, bool bExactMatch);
    void GetAllItemsMatchingTagQuery(const FGameplayTagQuery& Query, TArray<FGlobalItemRowHandle>& OutRowHandles);
    void Conv_GlobalItemToItemCosmetic(const FGlobalItemRowHandle& InHandle);
}; // Size: 0x28

class UItemManagerListEntry : public UObject
{
    FGlobalItemRowHandle RowName;                                                     // 0x0028 (size: 0x10)
    FText DisplayName;                                                                // 0x0038 (size: 0x10)
    int32 Amount;                                                                     // 0x0048 (size: 0x4)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0050 (size: 0x28)
    FGameplayTagContainer Tags;                                                       // 0x0078 (size: 0x20)
    TArray<UItemManagerListEntry*> ChildListEntries;                                  // 0x0098 (size: 0x10)

    void SortListEntries(TArray<UItemManagerListEntry*>& ListEntries, const TEnumAsByte<ESortDatabaseTerminalList> SortBy, const bool bReverse);
    void FilterListEntries(TArray<UItemManagerListEntry*>& ListEntries, FString FilterText, const FGameplayTagContainer& FilterTags);
}; // Size: 0xA8

class UItemRewardHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ToSalvageChecked(const FItemRewardRowHandle& InHandle, ERowValid& ReturnPath);
    void ToSalvage(const FItemRewardRowHandle& InHandle);
    void ToGlobalItemChecked(const FItemRewardRowHandle& InHandle, ERowValid& ReturnPath);
    void ToGlobalItem(const FItemRewardRowHandle& InHandle);
    void SwitchOnItemRewardTable(const FItemRewardRowHandle& RowHandle, EItemRewardTable& Branch);
    void MakeLiteralItemRewardRowHandle(FItemRewardRowHandle RowHandle);
    void MakeItemRewardRowHandle(EItemRewardTable Table, const FName RowName);
    void IsItemRewardUGCRow(const FItemRewardRowHandle& RowHandle);
    void IsItemRewardRowHandleValid(const FItemRewardRowHandle& RowHandle);
    void IsItemRewardRowHandleNull(const FItemRewardRowHandle& RowHandle);
    void IsItemRewardFromTable(const FItemRewardRowHandle& RowHandle, EItemRewardTable Table);
    void GetItemRewardUGCRowInfo(const FItemRewardRowHandle& RowHandle);
    void GetItemRewardRow(FItemRewardRowHandle RowHandle, int32& Data, ERowValid& ReturnPath);
    void GetAllItemRewardRowNames(EItemRewardTable Table, TArray<FName>& OutRowNames);
    void GetAllItemRewardRowHandles(EItemRewardTable Table, TArray<FItemRewardRowHandle>& OutRowHandles);
    void Equal_ItemRewardRowHandle(FItemRewardRowHandle A, FItemRewardRowHandle B);
    void DoesItemRewardRowExist(EItemRewardTable Table, FName RowName);
    void Conv_SalvageToItemReward(const FSalvageRowHandle& InHandle);
    void Conv_NameToItemReward(FName RowName, EItemRewardTable Table);
    void Conv_ItemRewardToName(const FItemRewardRowHandle& InHandle);
    void Conv_GlobalItemToItemReward(const FGlobalItemRowHandle& InHandle);
    void BreakItemRewardRowHandle(const FItemRewardRowHandle RowHandle, EItemRewardTable& Table, FName& RowName);
}; // Size: 0x28

class UItemUpgradeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralItemUpgradeRowHandle(FItemUpgradeRowHandle RowHandle);
    void MakeItemUpgradeRowHandle(const FName RowName);
    void GetItemUpgradeRow(FItemUpgradeRowHandle RowHandle, FItemUpgrade& Data, ERowValid& ReturnPath);
    void GetAllItemUpgradeRowNames(TArray<FName>& OutRowNames);
    void GetAllItemUpgradeRowHandles(TArray<FItemUpgradeRowHandle>& OutRowHandles);
    void Equal_ItemUpgradeRowHandle(FItemUpgradeRowHandle A, FItemUpgradeRowHandle B);
    void DoesItemUpgradeRowExist(FName RowName);
    void Conv_NameToItemUpgrade(FName RowName);
    void Conv_ItemUpgradeToName(const FItemUpgradeRowHandle& InHandle);
    void BreakItemUpgradeRowHandle(const FItemUpgradeRowHandle RowHandle);
}; // Size: 0x28

class UItemUpgradeModRowAsset : public UAbioticModRowAsset
{
    FItemUpgrade Row;                                                                 // 0x0040 (size: 0x20)

}; // Size: 0x60

class UItemUseFlagHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralItemUseFlagRowHandle(FItemUseFlagRowHandle RowHandle);
    void MakeItemUseFlagRowHandle(const FName RowName);
    void GetItemUseFlagRow(FItemUseFlagRowHandle RowHandle, FItemUseFlag& Data, ERowValid& ReturnPath);
    void GetAllItemUseFlagRowNames(TArray<FName>& OutRowNames);
    void GetAllItemUseFlagRowHandles(TArray<FItemUseFlagRowHandle>& OutRowHandles);
    void Equal_ItemUseFlagRowHandle(FItemUseFlagRowHandle A, FItemUseFlagRowHandle B);
    void DoesItemUseFlagRowExist(FName RowName);
    void Conv_NameToItemUseFlag(FName RowName);
    void Conv_ItemUseFlagToName(const FItemUseFlagRowHandle& InHandle);
    void BreakItemUseFlagRowHandle(const FItemUseFlagRowHandle RowHandle);
}; // Size: 0x28

class UItemUseFlagModRowAsset : public UAbioticModRowAsset
{
    FItemUseFlag Row;                                                                 // 0x0040 (size: 0x40)

}; // Size: 0x80

class UJobBannerHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralJobBannerRowHandle(FJobBannerRowHandle RowHandle);
    void MakeJobBannerRowHandle(const FName RowName);
    void GetJobBannerRow(FJobBannerRowHandle RowHandle, FSimpleTexture2D& Data, ERowValid& ReturnPath);
    void GetAllJobBannerRowNames(TArray<FName>& OutRowNames);
    void GetAllJobBannerRowHandles(TArray<FJobBannerRowHandle>& OutRowHandles);
    void Equal_JobBannerRowHandle(FJobBannerRowHandle A, FJobBannerRowHandle B);
    void DoesJobBannerRowExist(FName RowName);
    void Conv_NameToJobBanner(FName RowName);
    void Conv_JobBannerToName(const FJobBannerRowHandle& InHandle);
    void BreakJobBannerRowHandle(const FJobBannerRowHandle RowHandle);
}; // Size: 0x28

class UJobBannerModRowAsset : public UAbioticModRowAsset
{
    FSimpleTexture2D Row;                                                             // 0x0040 (size: 0x30)

}; // Size: 0x70

class UJournalEntryHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralJournalEntryRowHandle(FJournalEntryRowHandle RowHandle);
    void MakeJournalEntryRowHandle(const FName RowName);
    void GetJournalEntryRow(FJournalEntryRowHandle RowHandle, FJournalEntry& Data, ERowValid& ReturnPath);
    void GetAllJournalEntryRowNames(TArray<FName>& OutRowNames);
    void GetAllJournalEntryRowHandles(TArray<FJournalEntryRowHandle>& OutRowHandles);
    void Equal_JournalEntryRowHandle(FJournalEntryRowHandle A, FJournalEntryRowHandle B);
    void DoesJournalEntryRowExist(FName RowName);
    void Conv_NameToJournalEntry(FName RowName);
    void Conv_JournalEntryToName(const FJournalEntryRowHandle& InHandle);
    void BreakJournalEntryRowHandle(const FJournalEntryRowHandle RowHandle);
}; // Size: 0x28

class UKeybindAction : public UObject
{

    void OnKeyUp(class UAbioticWidget* Widget);
    void OnKeyDown(class UAbioticWidget* Widget);
}; // Size: 0x28

class UKeybindSettingFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ShouldShowKeybind(const FKeybindSetting& Setting);
}; // Size: 0x28

class UKeybindSettingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralKeybindSettingRowHandle(FKeybindSettingRowHandle RowHandle);
    void MakeKeybindSettingRowHandle(const FName RowName);
    void GetKeybindSettingRow(FKeybindSettingRowHandle RowHandle, FKeybindSetting& Data, ERowValid& ReturnPath);
    void GetAllKeybindSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllKeybindSettingRowHandles(TArray<FKeybindSettingRowHandle>& OutRowHandles);
    void Equal_KeybindSettingRowHandle(FKeybindSettingRowHandle A, FKeybindSettingRowHandle B);
    void DoesKeybindSettingRowExist(FName RowName);
    void Conv_NameToKeybindSetting(FName RowName);
    void Conv_KeybindSettingToName(const FKeybindSettingRowHandle& InHandle);
    void BreakKeybindSettingRowHandle(const FKeybindSettingRowHandle RowHandle);
}; // Size: 0x28

class UKeybindSubsystem : public UGameInstanceSubsystem
{
    TMap<FKey, FKeybindActionArray> KeybindActionMap;                                 // 0x0030 (size: 0x50)
    TMap<TSoftClassPtr<UAbioticWidget>, FKeybindActionArray> SupportedKeybindActions; // 0x0080 (size: 0x50)
    TMap<FUIKeybindActionRowHandle, UKeybindAction*> KeybindActionInstances;          // 0x00D0 (size: 0x50)

    void GetKeybindActionsForWidget(const FKey& Key, class UAbioticWidget* Widget, TArray<FUIKeybindActionRowHandle>& ActionArray);
    void GetKeybindAction(FUIKeybindActionRowHandle RowHandle);
}; // Size: 0x120

class ULanguageOptionFactory : public USettingOptionFactory
{
}; // Size: 0x28

class ULegacyCharacterSaveData : public UObject
{
    FSaveData_CharacterSave_Struct CharacterSaveData;                                 // 0x0028 (size: 0x2F8)

}; // Size: 0x320

class ULegacyWorldMetadataSaveData : public UObject
{
    int32 WorldVersion;                                                               // 0x0028 (size: 0x4)
    int32 MinutesPassed;                                                              // 0x002C (size: 0x4)
    FDateTime LastPlayed;                                                             // 0x0030 (size: 0x8)
    FSaveData_GlobalUnlocks_Struct GlobalUnlocks;                                     // 0x0038 (size: 0x120)
    FName CustomLevelOverride;                                                        // 0x0158 (size: 0x8)
    TMap<FName, FString> LeyakContainmentIDs;                                         // 0x0160 (size: 0x50)
    TMap<FString, FUserEntitlements> ServerEntitlements;                              // 0x01B0 (size: 0x50)
    FName StoryProgressionRow;                                                        // 0x0200 (size: 0x8)

}; // Size: 0x208

class ULegacyWorldSaveData : public UObject
{
    TMap<FString, FSaveData_Door_Struct> SimpleDoorMap;                               // 0x0028 (size: 0x50)
    TArray<FName> WorldFlags;                                                         // 0x0078 (size: 0x10)
    TMap<FString, FSaveData_Deployable_Struct> DeployedObjectMap;                     // 0x0088 (size: 0x50)
    TMap<FString, FSaveData_Resource_Struct> ResourceNodeMap;                         // 0x00D8 (size: 0x50)
    TMap<FString, FSaveData_Destructible_Struct> DestructibleMap;                     // 0x0128 (size: 0x50)
    TMap<FString, FSaveData_SecurityDoor_Struct> SecurityDoorMap;                     // 0x0178 (size: 0x50)
    TMap<FString, FSaveData_Elevator_Struct> ElevatorMap;                             // 0x01C8 (size: 0x50)
    TMap<FString, FSaveData_ButtonStruct> ButtonMap;                                  // 0x0218 (size: 0x50)
    int32 AssetID;                                                                    // 0x0268 (size: 0x4)
    TMap<FString, FSaveData_NPCState_Struct> NarrativeNPCMap;                         // 0x0270 (size: 0x50)
    TMap<FString, FSaveData_PowerSockets> PowerSocketMap;                             // 0x02C0 (size: 0x50)
    FTimeOfDay_Struct TimeOfDay;                                                      // 0x0310 (size: 0x28)
    TMap<FString, FSaveData_Trigger_Struct> TriggerMap;                               // 0x0338 (size: 0x50)
    TMap<FString, FSaveData_NPCSpawn> NPCSpawnMap;                                    // 0x0388 (size: 0x50)
    TMap<FString, FSaveData_PortalStruct> PortalMap;                                  // 0x03D8 (size: 0x50)
    FString LevelGUID;                                                                // 0x0428 (size: 0x10)
    FDateTime DateTime;                                                               // 0x0438 (size: 0x8)
    int32 DayDiscovered;                                                              // 0x0440 (size: 0x4)
    TMap<FString, FSaveData_Vehicle_Struct> VehicleMap;                               // 0x0448 (size: 0x50)
    TArray<FSoftObjectPath> DestroyedActorPaths;                                      // 0x0498 (size: 0x10)
    TMap<FString, FSaveData_Tram> TramMap;                                            // 0x04A8 (size: 0x50)
    TMap<FString, FSaveData_NPCState_Struct> PetNPC;                                  // 0x04F8 (size: 0x50)
    TMap<FString, FSaveData_DroppedItem_Struct> DroppedItemMap;                       // 0x0548 (size: 0x50)
    TMap<FString, FCorpseSave_Struct> CorpseMap;                                      // 0x0598 (size: 0x50)
    TMap<FName, FSaveData_TravelingNPC_Struct> TravelingNPCsMap;                      // 0x05E8 (size: 0x50)
    TMap<FString, FSaveData_EncounterDirector_Struct> EncounterDirectorsMap;          // 0x0638 (size: 0x50)
    TMap<FString, FSaveData_Inventories_Struct> CustomInventoryMap;                   // 0x0688 (size: 0x50)
    TMap<FString, FSaveData_Decal_Struct> DecalMap;                                   // 0x06D8 (size: 0x50)

}; // Size: 0x728

class ULevelFXHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralLevelFXRowHandle(FLevelFXRowHandle RowHandle);
    void MakeLevelFXRowHandle(const FName RowName);
    void GetLevelFXRow(FLevelFXRowHandle RowHandle, FLevelFXData& Data, ERowValid& ReturnPath);
    void GetAllLevelFXRowNames(TArray<FName>& OutRowNames);
    void GetAllLevelFXRowHandles(TArray<FLevelFXRowHandle>& OutRowHandles);
    void Equal_LevelFXRowHandle(FLevelFXRowHandle A, FLevelFXRowHandle B);
    void DoesLevelFXRowExist(FName RowName);
    void Conv_NameToLevelFX(FName RowName);
    void Conv_LevelFXToName(const FLevelFXRowHandle& InHandle);
    void BreakLevelFXRowHandle(const FLevelFXRowHandle RowHandle);
}; // Size: 0x28

class ULevelFXModRowAsset : public UAbioticModRowAsset
{
    FLevelFXData Row;                                                                 // 0x0040 (size: 0x178)

}; // Size: 0x1B8

class ULevelHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeLiteralLevelRowHandle(FLevelRowHandle RowHandle);
    void MakeLevelRowHandle(const FName RowName);
    void GetLevelRow(FLevelRowHandle RowHandle, FLevelMetadata& Data, ERowValid& ReturnPath);
    void GetAllLevelRowNames(TArray<FName>& OutRowNames);
    void GetAllLevelRowHandles(TArray<FLevelRowHandle>& OutRowHandles);
    void Equal_LevelRowHandle(FLevelRowHandle A, FLevelRowHandle B);
    void DoesLevelRowExist(FName RowName);
    void Conv_NameToLevel(FName RowName);
    void Conv_LevelToName(const FLevelRowHandle& InHandle);
    void BreakLevelRowHandle(const FLevelRowHandle RowHandle);
}; // Size: 0x28

class ULevelManagerComponent : public UActorComponent
{
    FTimerHandle UnloadTimerHandle;                                                   // 0x00A8 (size: 0x8)
    FTimerHandle LoadTimerHandle;                                                     // 0x00B0 (size: 0x8)
    TMap<ULevelStreaming*, ULevelManagerInstance*> LevelArray;                        // 0x00C0 (size: 0x50)

    void CheckLevelsForUnload();
    void CheckLevelsForLoad();
}; // Size: 0x110

class ULevelManagerInstance : public UObject
{
    class ULevelStreaming* LevelStreaming;                                            // 0x0028 (size: 0x8)
    TArray<AAbioticLevelStreamingVolume*> LevelStreamingVolumes;                      // 0x0030 (size: 0x10)
    TSoftObjectPtr<class UWorld> ParentWorldAsset;                                    // 0x0040 (size: 0x28)
    FGameEntitlementRowHandle RequiredEntitlement;                                    // 0x0068 (size: 0x10)
    FWorldFlagRowHandle RequiredWorldFlag;                                            // 0x0078 (size: 0x10)

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
    TMap<FString, TSoftObjectPtr<class AActor>> DeployableIDMap;                      // 0x0078 (size: 0x50)
    TMap<AActor*, bool> ActiveLightMap;                                               // 0x00C8 (size: 0x50)
    TArray<AActor*> ActiveCharacters;                                                 // 0x0118 (size: 0x10)
    TArray<AActor*> PlayerDeployables;                                                // 0x0128 (size: 0x10)

    void UpdateCachedLight(class AActor* Light, bool bIsPowered);
    void SetDebugForceLevelLoad(bool bForceLoad);
    void RemovePlayerDeployable(class AActor* Deployable);
    void RemoveDeployableID(FString AssetID);
    void RemoveCachedLight(class AActor* Light);
    void RemoveCachedCharacter(class AActor* Character);
    void MarkLevelAsLoadedFromSave(const TSoftObjectPtr<class UWorld>& Level);
    void IsLocationLoaded(const FVector& Location);
    void IsLevelVisible(const TSoftObjectPtr<class UWorld>& Level);
    void IsLevelLoaded(const TSoftObjectPtr<class UWorld>& Level);
    void IsAnyLevelLoading();
    void HasOwningLevelFinishedLoadedFromSave(const class AActor*& ActorToCheck);
    void GetPowerLeechPlayerFurnitureTargets(TArray<TSubclassOf<class AActor>> AllowedClasses, TArray<TSubclassOf<class AActor>> IgnoredClasses);
    void GetOwningWorldFromActor(const class AActor* Actor);
    void GetNearbyPlayerFurniture(FVector Location, float Distance, bool bIgnoreZ, const TArray<AActor*>& ActorsToIgnore, TSubclassOf<class AActor> ClassFilter);
    void GetNearbyLights(FVector Location, float Distance, bool bIgnoreZ, bool bOnlyPowered, const TArray<AActor*>& ActorsToIgnore, TSubclassOf<class AActor> ClassFilter);
    void GetNearbyCharacters(FVector Location, float Distance, bool bIgnoreZ, const TArray<AActor*>& ActorsToIgnore, TSubclassOf<class AActor> ClassFilter);
    void GetLoadedLevelState(const TSoftObjectPtr<class UWorld>& Level, bool& bPendingUnload, FString& VisibleState, TArray<AAbioticCharacter*>& PlayersInLevel, bool& bLocalPlayerInLevel);
    void GetLevelAtLocation(const FVector& Location);
    void GetAllSublevels(TArray<TSoftObjectPtr<class UWorld>>& Sublevels);
    void GetActorTimeSinceCreation(const class AActor* Actor);
    void FindLatestLevelPlayerIsIn(class AAbioticCharacter* Player, TSoftObjectPtr<class UWorld>& Level);
    void FindDeployableID(FString AssetID, TSoftObjectPtr<class AActor>& Deployable);
    void AreLevelsLoaded(const TArray<AAbioticLevelStreamingVolume*>& LevelVolumes, const TSoftObjectPtr<class UWorld>& OwningLevel);
    void AddPlayerDeployable(class AActor* Deployable);
    void AddDeployableID(FString AssetID, TSoftObjectPtr<class AActor> Deployable);
    void AddCachedCharacter(class AActor* Character);
}; // Size: 0x138

class ULevelStreamingCustom : public UBlueprintFunctionLibrary
{

    void UnloadStreamLevel(const class UObject* WorldContextObject, FString LevelName, bool bShouldBlockOnUnload, bool& bSuccess, bool& bNotLoaded);
    void SetLoadlLevelStreamVisibility(const class UObject* WorldContextObject, FString LevelName, bool bShown, bool& bSuccess);
    void LoadStreamLevel(const class UObject* WorldContextObject, FString LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, bool& bSuccess, bool& bAlreadyLoaded);
    void IsLocationInsideAnyLoadedLevelStreamingVolume(const class UObject* WorldContextObject, FVector Location);
    void GetWorldLevels(const class UObject* WorldContextObject, TArray<ULevelStreaming*>& NamesOfWorldLevels);
    void GetStreamingLevel(const class UObject* WorldContextObject, FString LevelName);
    void GetNamesOfWorldLevels(const class UObject* WorldContextObject, TArray<FString>& NamesOfWorldLevels);
    void GetAllActorsOfClassInLevel(const class UObject* WorldContextObject, FString LevelName, TSubclassOf<class AActor> ActorClass, TArray<AActor*>& OutActors);
    void GetAllActorsInLevel(const class UObject* WorldContextObject, FString LevelName, TArray<AActor*>& OutActors);
    void GetActorLevelName(const class UObject* WorldContextObject, class AActor* Actor);
}; // Size: 0x28

class UMapPamphletHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeMapPamphletRowHandle(const FName RowName);
    void MakeLiteralMapPamphletRowHandle(FMapPamphletRowHandle RowHandle);
    void GetMapPamphletRow(FMapPamphletRowHandle RowHandle, FJournalMap& Data, ERowValid& ReturnPath);
    void GetAllMapPamphletRowNames(TArray<FName>& OutRowNames);
    void GetAllMapPamphletRowHandles(TArray<FMapPamphletRowHandle>& OutRowHandles);
    void Equal_MapPamphletRowHandle(FMapPamphletRowHandle A, FMapPamphletRowHandle B);
    void DoesMapPamphletRowExist(FName RowName);
    void Conv_NameToMapPamphlet(FName RowName);
    void Conv_MapPamphletToName(const FMapPamphletRowHandle& InHandle);
    void BreakMapPamphletRowHandle(const FMapPamphletRowHandle RowHandle);
}; // Size: 0x28

class UMapResourceHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void ToResourceChecked(const FMapResourceRowHandle& InHandle, ERowValid& ReturnPath);
    void ToResource(const FMapResourceRowHandle& InHandle);
    void ToNPCTraderItemChecked(const FMapResourceRowHandle& InHandle, ERowValid& ReturnPath);
    void ToNPCTraderItem(const FMapResourceRowHandle& InHandle);
    void SwitchOnMapResourceTable(const FMapResourceRowHandle& RowHandle, EMapResourceTable& Branch);
    void MakeMapResourceRowHandle(EMapResourceTable Table, const FName RowName);
    void MakeLiteralMapResourceRowHandle(FMapResourceRowHandle RowHandle);
    void IsMapResourceUGCRow(const FMapResourceRowHandle& RowHandle);
    void IsMapResourceRowHandleValid(const FMapResourceRowHandle& RowHandle);
    void IsMapResourceRowHandleNull(const FMapResourceRowHandle& RowHandle);
    void IsMapResourceFromTable(const FMapResourceRowHandle& RowHandle, EMapResourceTable Table);
    void GetMapResourceUGCRowInfo(const FMapResourceRowHandle& RowHandle);
    void GetMapResourceRow(FMapResourceRowHandle RowHandle, int32& Data, ERowValid& ReturnPath);
    void GetAllMapResourceRowNames(EMapResourceTable Table, TArray<FName>& OutRowNames);
    void GetAllMapResourceRowHandles(EMapResourceTable Table, TArray<FMapResourceRowHandle>& OutRowHandles);
    void Equal_MapResourceRowHandle(FMapResourceRowHandle A, FMapResourceRowHandle B);
    void DoesMapResourceRowExist(EMapResourceTable Table, FName RowName);
    void Conv_ResourceToMapResource(const FResourceRowHandle& InHandle);
    void Conv_NPCTraderItemToMapResource(const FNPCTraderItemRowHandle& InHandle);
    void Conv_NameToMapResource(FName RowName, EMapResourceTable Table);
    void Conv_MapResourceToName(const FMapResourceRowHandle& InHandle);
    void BreakMapResourceRowHandle(const FMapResourceRowHandle RowHandle, EMapResourceTable& Table, FName& RowName);
}; // Size: 0x28

class UMaterialSwapSkeletalMeshComponent : public USkeletalMeshComponent
{
    TMap<FGameplayTag, FMaterialSwap> MaterialSwaps;                                  // 0x0F68 (size: 0x50)
    TArray<UMaterialInterface*> SavedOverrideMaterials;                               // 0x0FB8 (size: 0x10)
    FMaterialSwapSkeletalMeshComponentMaterialsMapChangedDelegate MaterialsMapChangedDelegate; // 0x0FC8 (size: 0x10)
    void MaterialSwapDelegate(const FMaterialSwapMap& MaterialSwaps);
    bool bSwappingMaterials;                                                          // 0x0FD8 (size: 0x1)
    TArray<TWeakObjectPtr<class UAnimNotifyState>> ActiveSwapNotifies;                // 0x0FE0 (size: 0x10)
    TArray<FGameplayTag> ActiveSwapTags;                                              // 0x0FF0 (size: 0x10)

    void SetActiveMaterialSwap(const TArray<UMaterialInterface*>& NewMaterialSwaps, const FGameplayTag& NotifyTag, const class UAnimNotifyState* OwningNotify);
    void RemoveMaterialSwaps(const TArray<FGameplayTag>& RemoveMaterialSwaps);
    void GetMaterialSwapMap();
    void GetMaterialSwap(const FGameplayTag& MaterialTag, FMaterialSwap& MaterialSwap);
    void GetClassDefaultMaterialSwapMap(const TSubclassOf<class AActor> ActorClass);
    void FindMaterialSwapInMap(const TMap<FGameplayTag, FMaterialSwap>& MaterialsMap, const FGameplayTagContainer& Tags, FMaterialSwap& MaterialSwap);
    void FindMaterialSwap(const FGameplayTagContainer& Tags, FMaterialSwap& MaterialSwap);
    void ClearMaterialSwapByTag(const FGameplayTag& Tag);
    void ClearMaterialSwapByNotify(const class UAnimNotifyState* Notify);
    void ClearAllMaterialSwaps();
    void AddMaterialSwaps(const TMap<FGameplayTag, FMaterialSwap>& NewMaterialSwaps);
}; // Size: 0x1000

class UMeleeSwingStyleHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeMeleeSwingStyleRowHandle(const FName RowName);
    void MakeLiteralMeleeSwingStyleRowHandle(FMeleeSwingStyleRowHandle RowHandle);
    void GetMeleeSwingStyleRow(FMeleeSwingStyleRowHandle RowHandle, FWeaponMeleeData& Data, ERowValid& ReturnPath);
    void GetAllMeleeSwingStyleRowNames(TArray<FName>& OutRowNames);
    void GetAllMeleeSwingStyleRowHandles(TArray<FMeleeSwingStyleRowHandle>& OutRowHandles);
    void Equal_MeleeSwingStyleRowHandle(FMeleeSwingStyleRowHandle A, FMeleeSwingStyleRowHandle B);
    void DoesMeleeSwingStyleRowExist(FName RowName);
    void Conv_NameToMeleeSwingStyle(FName RowName);
    void Conv_MeleeSwingStyleToName(const FMeleeSwingStyleRowHandle& InHandle);
    void BreakMeleeSwingStyleRowHandle(const FMeleeSwingStyleRowHandle RowHandle);
}; // Size: 0x28

class UMeleeSwingStyleModRowAsset : public UAbioticModRowAsset
{
    FWeaponMeleeData Row;                                                             // 0x0040 (size: 0x18)

}; // Size: 0x58

class UNPCConversationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeNPCConversationRowHandle(const FName RowName);
    void MakeLiteralNPCConversationRowHandle(FNPCConversationRowHandle RowHandle);
    void GetNPCConversationRow(FNPCConversationRowHandle RowHandle, FNPCConversation& Data, ERowValid& ReturnPath);
    void GetAllNPCConversationRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCConversationRowHandles(TArray<FNPCConversationRowHandle>& OutRowHandles);
    void Equal_NPCConversationRowHandle(FNPCConversationRowHandle A, FNPCConversationRowHandle B);
    void DoesNPCConversationRowExist(FName RowName);
    void Conv_NPCConversationToName(const FNPCConversationRowHandle& InHandle);
    void Conv_NameToNPCConversation(FName RowName);
    void BreakNPCConversationRowHandle(const FNPCConversationRowHandle RowHandle);
}; // Size: 0x28

class UNPCConversationModRowAsset : public UAbioticModRowAsset
{
    FNPCConversation Row;                                                             // 0x0040 (size: 0xE0)

}; // Size: 0x120

class UNPCHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeNPCRowHandle(const FName RowName);
    void MakeLiteralNPCRowHandle(FNPCRowHandle RowHandle);
    void GetNPCRow(FNPCRowHandle RowHandle, FAbioticNPC& Data, ERowValid& ReturnPath);
    void GetAllNPCRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCRowHandles(TArray<FNPCRowHandle>& OutRowHandles);
    void Equal_NPCRowHandle(FNPCRowHandle A, FNPCRowHandle B);
    void DoesNPCRowExist(FName RowName);
    void Conv_NPCToName(const FNPCRowHandle& InHandle);
    void Conv_NameToNPC(FName RowName);
    void BreakNPCRowHandle(const FNPCRowHandle RowHandle);
}; // Size: 0x28

class UNPCModRowAsset : public UAbioticModRowAsset
{
    FAbioticNPC Row;                                                                  // 0x0040 (size: 0x330)

}; // Size: 0x370

class UNPCSpawnFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetNPCSpawnRowsForTags(const FGameplayTagContainer& SpawnTags, TArray<FNPCSpawnRowHandle>& OutRowHandles);
    void GetNPCSpawnEntriesForTags(const FGameplayTagContainer& SpawnTags, TArray<FNPCSpawnEntry>& OutEntries);
}; // Size: 0x28

class UNPCSpawnHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeNPCSpawnRowHandle(const FName RowName);
    void MakeLiteralNPCSpawnRowHandle(FNPCSpawnRowHandle RowHandle);
    void GetNPCSpawnRow(FNPCSpawnRowHandle RowHandle, FNPCSpawnData& Data, ERowValid& ReturnPath);
    void GetAllNPCSpawnRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCSpawnRowHandles(TArray<FNPCSpawnRowHandle>& OutRowHandles);
    void Equal_NPCSpawnRowHandle(FNPCSpawnRowHandle A, FNPCSpawnRowHandle B);
    void DoesNPCSpawnRowExist(FName RowName);
    void Conv_NPCSpawnToName(const FNPCSpawnRowHandle& InHandle);
    void Conv_NameToNPCSpawn(FName RowName);
    void BreakNPCSpawnRowHandle(const FNPCSpawnRowHandle RowHandle);
}; // Size: 0x28

class UNPCSpawnModRowAsset : public UAbioticModRowAsset
{
    FNPCSpawnData Row;                                                                // 0x0040 (size: 0x48)

}; // Size: 0x88

class UNPCSpawnSubstituteHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeNPCSpawnSubstituteRowHandle(const FName RowName);
    void MakeLiteralNPCSpawnSubstituteRowHandle(FNPCSpawnSubstituteRowHandle RowHandle);
    void GetNPCSpawnSubstituteRow(FNPCSpawnSubstituteRowHandle RowHandle, FNPCSpawnSubstitute& Data, ERowValid& ReturnPath);
    void GetAllNPCSpawnSubstituteRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCSpawnSubstituteRowHandles(TArray<FNPCSpawnSubstituteRowHandle>& OutRowHandles);
    void Equal_NPCSpawnSubstituteRowHandle(FNPCSpawnSubstituteRowHandle A, FNPCSpawnSubstituteRowHandle B);
    void DoesNPCSpawnSubstituteRowExist(FName RowName);
    void Conv_NPCSpawnSubstituteToName(const FNPCSpawnSubstituteRowHandle& InHandle);
    void Conv_NameToNPCSpawnSubstitute(FName RowName);
    void BreakNPCSpawnSubstituteRowHandle(const FNPCSpawnSubstituteRowHandle RowHandle);
}; // Size: 0x28

class UNPCSpawnSubstituteModRowAsset : public UAbioticModRowAsset
{
    FNPCSpawnSubstitute Row;                                                          // 0x0040 (size: 0x58)

}; // Size: 0x98

class UNPCTraderHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeNPCTraderRowHandle(const FName RowName);
    void MakeLiteralNPCTraderRowHandle(FNPCTraderRowHandle RowHandle);
    void GetNPCTraderRow(FNPCTraderRowHandle RowHandle, FNPCTrader& Data, ERowValid& ReturnPath);
    void GetAllNPCTraderRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCTraderRowHandles(TArray<FNPCTraderRowHandle>& OutRowHandles);
    void Equal_NPCTraderRowHandle(FNPCTraderRowHandle A, FNPCTraderRowHandle B);
    void DoesNPCTraderRowExist(FName RowName);
    void Conv_NPCTraderToName(const FNPCTraderRowHandle& InHandle);
    void Conv_NameToNPCTrader(FName RowName);
    void BreakNPCTraderRowHandle(const FNPCTraderRowHandle RowHandle);
}; // Size: 0x28

class UNPCTraderItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeNPCTraderItemRowHandle(const FName RowName);
    void MakeLiteralNPCTraderItemRowHandle(FNPCTraderItemRowHandle RowHandle);
    void GetNPCTraderItemRow(FNPCTraderItemRowHandle RowHandle, FTraderItems& Data, ERowValid& ReturnPath);
    void GetAllNPCTraderItemRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCTraderItemRowHandles(TArray<FNPCTraderItemRowHandle>& OutRowHandles);
    void Equal_NPCTraderItemRowHandle(FNPCTraderItemRowHandle A, FNPCTraderItemRowHandle B);
    void DoesNPCTraderItemRowExist(FName RowName);
    void Conv_NPCTraderItemToName(const FNPCTraderItemRowHandle& InHandle);
    void Conv_NameToNPCTraderItem(FName RowName);
    void BreakNPCTraderItemRowHandle(const FNPCTraderItemRowHandle RowHandle);
}; // Size: 0x28

class UNPCTraderItemModRowAsset : public UAbioticModRowAsset
{
    FTraderItems Row;                                                                 // 0x0040 (size: 0x30)

}; // Size: 0x70

class UNPCTraderModRowAsset : public UAbioticModRowAsset
{
    FNPCTrader Row;                                                                   // 0x0040 (size: 0x98)

}; // Size: 0xD8

class UNPCVoiceHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeNPCVoiceRowHandle(const FName RowName);
    void MakeLiteralNPCVoiceRowHandle(FNPCVoiceRowHandle RowHandle);
    void GetNPCVoiceRow(FNPCVoiceRowHandle RowHandle, FNPCVoice& Data, ERowValid& ReturnPath);
    void GetAllNPCVoiceRowNames(TArray<FName>& OutRowNames);
    void GetAllNPCVoiceRowHandles(TArray<FNPCVoiceRowHandle>& OutRowHandles);
    void Equal_NPCVoiceRowHandle(FNPCVoiceRowHandle A, FNPCVoiceRowHandle B);
    void DoesNPCVoiceRowExist(FName RowName);
    void Conv_NPCVoiceToName(const FNPCVoiceRowHandle& InHandle);
    void Conv_NameToNPCVoice(FName RowName);
    void BreakNPCVoiceRowHandle(const FNPCVoiceRowHandle RowHandle);
}; // Size: 0x28

class UNPCVoiceModRowAsset : public UAbioticModRowAsset
{
    FNPCVoice Row;                                                                    // 0x0040 (size: 0x190)

}; // Size: 0x1D0

class UPaintedDeployableHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePaintedDeployableRowHandle(const FName RowName);
    void MakeLiteralPaintedDeployableRowHandle(FPaintedDeployableRowHandle RowHandle);
    void GetPaintedDeployableRow(FPaintedDeployableRowHandle RowHandle, FPaintedDeployable& Data, ERowValid& ReturnPath);
    void GetAllPaintedDeployableRowNames(TArray<FName>& OutRowNames);
    void GetAllPaintedDeployableRowHandles(TArray<FPaintedDeployableRowHandle>& OutRowHandles);
    void Equal_PaintedDeployableRowHandle(FPaintedDeployableRowHandle A, FPaintedDeployableRowHandle B);
    void DoesPaintedDeployableRowExist(FName RowName);
    void Conv_PaintedDeployableToName(const FPaintedDeployableRowHandle& InHandle);
    void Conv_NameToPaintedDeployable(FName RowName);
    void BreakPaintedDeployableRowHandle(const FPaintedDeployableRowHandle RowHandle);
}; // Size: 0x28

class UPetFunctionLibrary : public UBlueprintFunctionLibrary
{

    void IsTamedPet(const class AActor* TargetActor);
    void GetPossibleMutationsForPet(const FPetRowHandle& PetRow, TArray<FPetMutationRowHandle>& PetMutations, ERowValid& ReturnPath);
    void GetPetRowForNPC(const FNPCRowHandle& NPCRow, FPetRowHandle& PetRow, ERowValid& ReturnPath);
    void GetPetRowForItem(const FGlobalItemRowHandle& ItemRow, FPetRowHandle& PetRow, ERowValid& ReturnPath);
    void GetPetMutationForFood(const FPetRowHandle& PetRow, const FGlobalItemRowHandle& FoodItem, FPetMutationRowHandle& PetMutation, ERowValid& ReturnPath);
    void GetPetData(const FPetRowHandle& PetRow, FPet& Data, ERowValid& ReturnPath);
    void ConvertPetNPCRowToItem(const FNPCRowHandle& NPCRow, FGlobalItemRowHandle& ItemRow, ERowValid& ReturnPath);
    void ConvertPetItemToNPCRow(const FGlobalItemRowHandle& ItemRow, FNPCRowHandle& NPCRow, ERowValid& ReturnPath);
}; // Size: 0x28

class UPetHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePetRowHandle(const FName RowName);
    void MakeLiteralPetRowHandle(FPetRowHandle RowHandle);
    void GetPetRow(FPetRowHandle RowHandle, FPet& Data, ERowValid& ReturnPath);
    void GetAllPetRowNames(TArray<FName>& OutRowNames);
    void GetAllPetRowHandles(TArray<FPetRowHandle>& OutRowHandles);
    void Equal_PetRowHandle(FPetRowHandle A, FPetRowHandle B);
    void DoesPetRowExist(FName RowName);
    void Conv_PetToName(const FPetRowHandle& InHandle);
    void Conv_NameToPet(FName RowName);
    void BreakPetRowHandle(const FPetRowHandle RowHandle);
}; // Size: 0x28

class UPetItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePetItemRowHandle(const FName RowName);
    void MakeLiteralPetItemRowHandle(FPetItemRowHandle RowHandle);
    void GetPetItemRow(FPetItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllPetItemRowNames(TArray<FName>& OutRowNames);
    void GetAllPetItemRowHandles(TArray<FPetItemRowHandle>& OutRowHandles);
    void Equal_PetItemRowHandle(FPetItemRowHandle A, FPetItemRowHandle B);
    void DoesPetItemRowExist(FName RowName);
    void Conv_PetItemToName(const FPetItemRowHandle& InHandle);
    void Conv_NameToPetItem(FName RowName);
    void BreakPetItemRowHandle(const FPetItemRowHandle RowHandle);
}; // Size: 0x28

class UPetItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UPetModRowAsset : public UAbioticModRowAsset
{
    FPet Row;                                                                         // 0x0040 (size: 0x308)

}; // Size: 0x348

class UPetMutationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePetMutationRowHandle(const FName RowName);
    void MakeLiteralPetMutationRowHandle(FPetMutationRowHandle RowHandle);
    void GetPetMutationRow(FPetMutationRowHandle RowHandle, FPetMutations& Data, ERowValid& ReturnPath);
    void GetAllPetMutationRowNames(TArray<FName>& OutRowNames);
    void GetAllPetMutationRowHandles(TArray<FPetMutationRowHandle>& OutRowHandles);
    void Equal_PetMutationRowHandle(FPetMutationRowHandle A, FPetMutationRowHandle B);
    void DoesPetMutationRowExist(FName RowName);
    void Conv_PetMutationToName(const FPetMutationRowHandle& InHandle);
    void Conv_NameToPetMutation(FName RowName);
    void BreakPetMutationRowHandle(const FPetMutationRowHandle RowHandle);
}; // Size: 0x28

class UPetMutationModRowAsset : public UAbioticModRowAsset
{
    FPetMutations Row;                                                                // 0x0040 (size: 0x40)

}; // Size: 0x80

class UPhDHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePhDRowHandle(const FName RowName);
    void MakeLiteralPhDRowHandle(FPhDRowHandle RowHandle);
    void GetPhDRow(FPhDRowHandle RowHandle, FTrait& Data, ERowValid& ReturnPath);
    void GetAllPhDRowNames(TArray<FName>& OutRowNames);
    void GetAllPhDRowHandles(TArray<FPhDRowHandle>& OutRowHandles);
    void Equal_PhDRowHandle(FPhDRowHandle A, FPhDRowHandle B);
    void DoesPhDRowExist(FName RowName);
    void Conv_PhDToName(const FPhDRowHandle& InHandle);
    void Conv_NameToPhD(FName RowName);
    void BreakPhDRowHandle(const FPhDRowHandle RowHandle);
}; // Size: 0x28

class UPhDModRowAsset : public UAbioticModRowAsset
{
    FTrait Row;                                                                       // 0x0040 (size: 0xE0)

}; // Size: 0x120

class UPickupItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePickupItemRowHandle(const FName RowName);
    void MakeLiteralPickupItemRowHandle(FPickupItemRowHandle RowHandle);
    void GetPickupItemRow(FPickupItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllPickupItemRowNames(TArray<FName>& OutRowNames);
    void GetAllPickupItemRowHandles(TArray<FPickupItemRowHandle>& OutRowHandles);
    void Equal_PickupItemRowHandle(FPickupItemRowHandle A, FPickupItemRowHandle B);
    void DoesPickupItemRowExist(FName RowName);
    void Conv_PickupItemToName(const FPickupItemRowHandle& InHandle);
    void Conv_NameToPickupItem(FName RowName);
    void BreakPickupItemRowHandle(const FPickupItemRowHandle RowHandle);
}; // Size: 0x28

class UPickupItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UPlantHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePlantRowHandle(const FName RowName);
    void MakeLiteralPlantRowHandle(FPlantRowHandle RowHandle);
    void GetPlantRow(FPlantRowHandle RowHandle, FPlantData& Data, ERowValid& ReturnPath);
    void GetAllPlantRowNames(TArray<FName>& OutRowNames);
    void GetAllPlantRowHandles(TArray<FPlantRowHandle>& OutRowHandles);
    void Equal_PlantRowHandle(FPlantRowHandle A, FPlantRowHandle B);
    void DoesPlantRowExist(FName RowName);
    void Conv_PlantToName(const FPlantRowHandle& InHandle);
    void Conv_NameToPlant(FName RowName);
    void BreakPlantRowHandle(const FPlantRowHandle RowHandle);
}; // Size: 0x28

class UPlantItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakePlantItemRowHandle(const FName RowName);
    void MakeLiteralPlantItemRowHandle(FPlantItemRowHandle RowHandle);
    void GetPlantItemRow(FPlantItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllPlantItemRowNames(TArray<FName>& OutRowNames);
    void GetAllPlantItemRowHandles(TArray<FPlantItemRowHandle>& OutRowHandles);
    void Equal_PlantItemRowHandle(FPlantItemRowHandle A, FPlantItemRowHandle B);
    void DoesPlantItemRowExist(FName RowName);
    void Conv_PlantItemToName(const FPlantItemRowHandle& InHandle);
    void Conv_NameToPlantItem(FName RowName);
    void BreakPlantItemRowHandle(const FPlantItemRowHandle RowHandle);
}; // Size: 0x28

class UPlantItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UPlantModRowAsset : public UAbioticModRowAsset
{
    FPlantData Row;                                                                   // 0x0040 (size: 0xF8)

}; // Size: 0x138

class UPlayerCharacterVoiceDataAsset : public UPrimaryDataAsset
{
    FText DisplayName;                                                                // 0x0030 (size: 0x10)
    FText DisplayDescription;                                                         // 0x0040 (size: 0x10)
    TSoftObjectPtr<class UTexture2D> Icon;                                            // 0x0050 (size: 0x28)
    TArray<TSoftObjectPtr<class UDialogueWave>> SitExhaleLines;                       // 0x0078 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> PainGruntLines;                       // 0x0088 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> PainYellLines;                        // 0x0098 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> PainYellStopLines;                    // 0x00A8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ScreamLines;                          // 0x00B8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DownedLines;                          // 0x00C8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DeathLines;                           // 0x00D8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DeathFallingLines;                    // 0x00E8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> CallHelpLines;                        // 0x00F8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> RevivedLines;                         // 0x0108 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ReliefLines;                          // 0x0118 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> TiredLines;                           // 0x0128 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> SleepyLines;                          // 0x0138 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ExhaustedLines;                       // 0x0148 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> SleepStartLines;                      // 0x0158 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> WakeUpBadLines;                       // 0x0168 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> WakeUpGoodLines;                      // 0x0178 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DryMouthLines;                        // 0x0188 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ThirstLines;                          // 0x0198 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ParchedLines;                         // 0x01A8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> BreathingLightLines;                  // 0x01B8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> BreathingMediumLines;                 // 0x01C8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> BreathingHeavyLines;                  // 0x01D8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> InsaneLines;                          // 0x01E8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> PeckishLines;                         // 0x01F8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> HungryLines;                          // 0x0208 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> StarvingLines;                        // 0x0218 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> EatingLines;                          // 0x0228 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ToiletSoonLines;                      // 0x0238 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ToiletUrgentLines;                    // 0x0248 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ToiletReliefLines;                    // 0x0258 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ChillyLines;                          // 0x0268 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ColdLines;                            // 0x0278 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> HypothermiaLines;                     // 0x0288 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> WarmLines;                            // 0x0298 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> HotLines;                             // 0x02A8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> HeatstrokeLines;                      // 0x02B8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> SickLines;                            // 0x02C8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> VomitLines;                           // 0x02D8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> CuriousLines;                         // 0x02E8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> CraftingLines;                        // 0x02F8 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ProximityQuestionLines;               // 0x0308 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ProximityAnswerLines;                 // 0x0318 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ToiletQuestionLines;                  // 0x0328 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ToiletAnswerLines;                    // 0x0338 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> ContinenceLines;                      // 0x0348 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> FumbleLines;                          // 0x0358 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> LootingOwnCorpseLines;                // 0x0368 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> StunnedLines;                         // 0x0378 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DeathRattledLines;                    // 0x0388 (size: 0x10)
    TArray<TSoftObjectPtr<class UDialogueWave>> DeathExplosionLines;                  // 0x0398 (size: 0x10)

    void GetVoiceLinesFromType(EVoiceLineType VoiceLineType, TArray<TSoftObjectPtr<class UDialogueWave>>& VoiceLines);
    void GetRandomVoiceLineFromType(EVoiceLineType VoiceLineType, TSoftObjectPtr<class UDialogueWave>& VoiceLine);
}; // Size: 0x3A8

class UPlayerFunctionLibrary : public UBlueprintFunctionLibrary
{

    void GetSkillPerksForSkill(const FSkillRowHandle& SkillRow, TArray<FSkillPerkRowHandle>& Perks);
    void GetSkillPerksAtLevel(const FSkillRowHandle& SkillRow, int32 Level, TArray<FSkillPerkRowHandle>& Perks);
}; // Size: 0x28

class UPlayerStatsSave : public USaveGame
{
    TMap<FName, int32> Stats_Int;                                                     // 0x0028 (size: 0x50)
    TMap<FName, float> Stats_Float;                                                   // 0x0078 (size: 0x50)
    TArray<FName> Achievements;                                                       // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class UPostProcessCharacterAnimInstance : public UAnimInstance
{
    FName IDCardSocketName;                                                           // 0x0368 (size: 0x8)
    FName IDCardAltSocketName;                                                        // 0x0370 (size: 0x8)
    FName OffsetXCurve;                                                               // 0x0378 (size: 0x8)
    FName OffsetYCurve;                                                               // 0x0380 (size: 0x8)
    FName OffsetZCurve;                                                               // 0x0388 (size: 0x8)
    FVector2D ForwardMovementVelocityRange;                                           // 0x0390 (size: 0x10)
    FVector2D ForwardMovementRotationRange;                                           // 0x03A0 (size: 0x10)
    FVector2D FallVelocityRange;                                                      // 0x03B0 (size: 0x10)
    FVector2D FallRotationRange;                                                      // 0x03C0 (size: 0x10)
    FVector2D RollVelocityRange;                                                      // 0x03D0 (size: 0x10)
    FVector2D RollRotationRange;                                                      // 0x03E0 (size: 0x10)
    float BlendSpeed;                                                                 // 0x03F0 (size: 0x4)
    float TransformAlpha;                                                             // 0x03F4 (size: 0x4)
    float TransformAltAlpha;                                                          // 0x03F8 (size: 0x4)
    FVector IDLocation;                                                               // 0x0400 (size: 0x18)
    FRotator IDRotation;                                                              // 0x0418 (size: 0x18)
    FVector IDScale;                                                                  // 0x0430 (size: 0x18)
    FRotator IDRotationOffset;                                                        // 0x0448 (size: 0x18)
    FRotator IDRotationOffsetBlend;                                                   // 0x0460 (size: 0x18)
    FVector PreviousLocation;                                                         // 0x0478 (size: 0x18)
    FVector IDLocationOffset;                                                         // 0x0490 (size: 0x18)

}; // Size: 0x4B0

class UProjectileHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeProjectileRowHandle(const FName RowName);
    void MakeLiteralProjectileRowHandle(FProjectileRowHandle RowHandle);
    void GetProjectileRow(FProjectileRowHandle RowHandle, FAbioticProjectile& Data, ERowValid& ReturnPath);
    void GetAllProjectileRowNames(TArray<FName>& OutRowNames);
    void GetAllProjectileRowHandles(TArray<FProjectileRowHandle>& OutRowHandles);
    void Equal_ProjectileRowHandle(FProjectileRowHandle A, FProjectileRowHandle B);
    void DoesProjectileRowExist(FName RowName);
    void Conv_ProjectileToName(const FProjectileRowHandle& InHandle);
    void Conv_NameToProjectile(FName RowName);
    void BreakProjectileRowHandle(const FProjectileRowHandle RowHandle);
}; // Size: 0x28

class UProjectileModRowAsset : public UAbioticModRowAsset
{
    FAbioticProjectile Row;                                                           // 0x0040 (size: 0x168)

}; // Size: 0x1A8

class UQuestEntryItem : public UObject
{
    FQuestRowHandle QuestRowHandle;                                                   // 0x0028 (size: 0x10)
    FQuestLineRowHandle QuestLineRowHandle;                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

class UQuestHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeQuestRowHandle(const FName RowName);
    void MakeLiteralQuestRowHandle(FQuestRowHandle RowHandle);
    void GetQuestRow(FQuestRowHandle RowHandle, FQuestData& Data, ERowValid& ReturnPath);
    void GetAllQuestRowNames(TArray<FName>& OutRowNames);
    void GetAllQuestRowHandles(TArray<FQuestRowHandle>& OutRowHandles);
    void Equal_QuestRowHandle(FQuestRowHandle A, FQuestRowHandle B);
    void DoesQuestRowExist(FName RowName);
    void Conv_QuestToName(const FQuestRowHandle& InHandle);
    void Conv_NameToQuest(FName RowName);
    void BreakQuestRowHandle(const FQuestRowHandle RowHandle);
}; // Size: 0x28

class UQuestLineHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeQuestLineRowHandle(const FName RowName);
    void MakeLiteralQuestLineRowHandle(FQuestLineRowHandle RowHandle);
    void GetQuestLineRow(FQuestLineRowHandle RowHandle, FQuestLineData& Data, ERowValid& ReturnPath);
    void GetAllQuestLineRowNames(TArray<FName>& OutRowNames);
    void GetAllQuestLineRowHandles(TArray<FQuestLineRowHandle>& OutRowHandles);
    void Equal_QuestLineRowHandle(FQuestLineRowHandle A, FQuestLineRowHandle B);
    void DoesQuestLineRowExist(FName RowName);
    void Conv_QuestLineToName(const FQuestLineRowHandle& InHandle);
    void Conv_NameToQuestLine(FName RowName);
    void BreakQuestLineRowHandle(const FQuestLineRowHandle RowHandle);
}; // Size: 0x28

class UQuestLineLibrary : public UBlueprintFunctionLibrary
{

    void SortQuestsByDisplayPriority(TArray<FQuestRowHandle>& Quests);
    void IsQuestLineComplete(class UObject* WorldContext, FQuestLineRowHandle QuestLine, FQuestLineRowHandle& ParentQuestLine);
    void IsLastQuestInQuestLine(FQuestLineRowHandle QuestLine, FQuestRowHandle Quest);
    void FindQuestLineForQuest(FQuestRowHandle Quest, FQuestLineRowHandle& QuestLine);
    void FilterSubquestsNaive(TArray<FQuestRowHandle>& QuestRowHandles);
}; // Size: 0x28

class UQuestLineModRowAsset : public UAbioticModRowAsset
{
    FQuestLineData Row;                                                               // 0x0040 (size: 0x48)

}; // Size: 0x88

class UQuestModRowAsset : public UAbioticModRowAsset
{
    FQuestData Row;                                                                   // 0x0040 (size: 0x70)

}; // Size: 0xB0

class URealtimeMultiplaySubsystem : public UGameInstanceSubsystem
{

    void SetPlayerAcivelyPlaying(bool bIsActive);
    void EvaluateMultiplayFeature();
}; // Size: 0x40

class URecipeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeRecipeRowHandle(const FName RowName);
    void MakeLiteralRecipeRowHandle(FRecipeRowHandle RowHandle);
    void GetRecipeRow(FRecipeRowHandle RowHandle, FAbioticRecipe& Data, ERowValid& ReturnPath);
    void GetAllRecipeRowNames(TArray<FName>& OutRowNames);
    void GetAllRecipeRowHandles(TArray<FRecipeRowHandle>& OutRowHandles);
    void Equal_RecipeRowHandle(FRecipeRowHandle A, FRecipeRowHandle B);
    void DoesRecipeRowExist(FName RowName);
    void Conv_RecipeToName(const FRecipeRowHandle& InHandle);
    void Conv_NameToRecipe(FName RowName);
    void BreakRecipeRowHandle(const FRecipeRowHandle RowHandle);
}; // Size: 0x28

class URecipeModRowAsset : public UAbioticModRowAsset
{
    FAbioticRecipe Row;                                                               // 0x0040 (size: 0xB0)

}; // Size: 0xF0

class URecipeSubstituteHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeRecipeSubstituteRowHandle(const FName RowName);
    void MakeLiteralRecipeSubstituteRowHandle(FRecipeSubstituteRowHandle RowHandle);
    void GetRecipeSubstituteRow(FRecipeSubstituteRowHandle RowHandle, FAbioticRecipeSubstitute& Data, ERowValid& ReturnPath);
    void GetAllRecipeSubstituteRowNames(TArray<FName>& OutRowNames);
    void GetAllRecipeSubstituteRowHandles(TArray<FRecipeSubstituteRowHandle>& OutRowHandles);
    void Equal_RecipeSubstituteRowHandle(FRecipeSubstituteRowHandle A, FRecipeSubstituteRowHandle B);
    void DoesRecipeSubstituteRowExist(FName RowName);
    void Conv_RecipeSubstituteToName(const FRecipeSubstituteRowHandle& InHandle);
    void Conv_NameToRecipeSubstitute(FName RowName);
    void BreakRecipeSubstituteRowHandle(const FRecipeSubstituteRowHandle RowHandle);
}; // Size: 0x28

class URecipeSubstituteModRowAsset : public UAbioticModRowAsset
{
    FAbioticRecipeSubstitute Row;                                                     // 0x0040 (size: 0x68)

}; // Size: 0xA8

class URemoteConsoleSubsystem : public UGameInstanceSubsystem
{
}; // Size: 0x30

class UResourceHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeResourceRowHandle(const FName RowName);
    void MakeLiteralResourceRowHandle(FResourceRowHandle RowHandle);
    void GetResourceRow(FResourceRowHandle RowHandle, FItemCountArray& Data, ERowValid& ReturnPath);
    void GetAllResourceRowNames(TArray<FName>& OutRowNames);
    void GetAllResourceRowHandles(TArray<FResourceRowHandle>& OutRowHandles);
    void Equal_ResourceRowHandle(FResourceRowHandle A, FResourceRowHandle B);
    void DoesResourceRowExist(FName RowName);
    void Conv_ResourceToName(const FResourceRowHandle& InHandle);
    void Conv_NameToResource(FName RowName);
    void BreakResourceRowHandle(const FResourceRowHandle RowHandle);
}; // Size: 0x28

class URowHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void IsUGCRow(const FRowHandle& RowHandle);
    void IsRowHandleValid(const FRowHandle& RowHandle);
    void IsRowHandleNull(const FRowHandle& RowHandle);
    void GetUGCRowInfo(const FRowHandle& RowHandle);
}; // Size: 0x28

class USalvageHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSalvageRowHandle(const FName RowName);
    void MakeLiteralSalvageRowHandle(FSalvageRowHandle RowHandle);
    void GetSalvageRow(FSalvageRowHandle RowHandle, FAbioticItemDropTable& Data, ERowValid& ReturnPath);
    void GetAllSalvageRowNames(TArray<FName>& OutRowNames);
    void GetAllSalvageRowHandles(TArray<FSalvageRowHandle>& OutRowHandles);
    void Equal_SalvageRowHandle(FSalvageRowHandle A, FSalvageRowHandle B);
    void DoesSalvageRowExist(FName RowName);
    void Conv_SalvageToName(const FSalvageRowHandle& InHandle);
    void Conv_NameToSalvage(FName RowName);
    void BreakSalvageRowHandle(const FSalvageRowHandle RowHandle);
}; // Size: 0x28

class USalvageModRowAsset : public UAbioticModRowAsset
{
    FAbioticItemDropTable Row;                                                        // 0x0040 (size: 0x20)

}; // Size: 0x60

class USandboxOptionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSandboxOptionRowHandle(const FName RowName);
    void MakeLiteralSandboxOptionRowHandle(FSandboxOptionRowHandle RowHandle);
    void GetSandboxOptionRow(FSandboxOptionRowHandle RowHandle, FSandboxOption& Data, ERowValid& ReturnPath);
    void GetAllSandboxOptionRowNames(TArray<FName>& OutRowNames);
    void GetAllSandboxOptionRowHandles(TArray<FSandboxOptionRowHandle>& OutRowHandles);
    void Equal_SandboxOptionRowHandle(FSandboxOptionRowHandle A, FSandboxOptionRowHandle B);
    void DoesSandboxOptionRowExist(FName RowName);
    void Conv_SandboxOptionToName(const FSandboxOptionRowHandle& InHandle);
    void Conv_NameToSandboxOption(FName RowName);
    void BreakSandboxOptionRowHandle(const FSandboxOptionRowHandle RowHandle);
}; // Size: 0x28

class USandboxOptionSubsystem : public UWorldSubsystem
{

    void WriteSandboxSettingsToFile(FString FilePath, const TMap<FName, FString>& Settings);
    void ReadSandboxSettingsFromFile(FString FilePath, TMap<FName, FString>& OutSettings);
    void MergeLoadedSandboxSettingsWithDefault(const TMap<FName, FString>& InSettings, EModifiedRuleset& OutModifiedRuleset);
    void HasSandboxOptionsInitialized(const class UObject* WorldContextObject);
    void GetSandboxStringValue(FString InValue, const FSandboxOption& SandboxData);
    void GetSandboxOption_String(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    void GetSandboxOption_Int(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    void GetSandboxOption_Float(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    void GetSandboxOption_Bool(const class UObject* WorldContextObject, FSandboxOptionRowHandle Option);
    void GetDefaultSandboxSettings();
}; // Size: 0x30

class USaveCurrentWorld : public UBlueprintAsyncActionBase
{
    FSaveCurrentWorldSaveWorld SaveWorld;                                             // 0x0040 (size: 0x10)
    void SaveCurrentWorldOutputPin(bool bSuccess);
    TArray<UAbioticSave*> WorldSaveDuplicates;                                        // 0x0078 (size: 0x10)
    TArray<UAbioticSave*> PlayerSaveDuplicates;                                       // 0x0088 (size: 0x10)

    void SaveCurrentWorld(const class UObject* WorldContextObject);
}; // Size: 0x98

class USaveQueueSubsystem : public UTickableWorldSubsystem
{
    TArray<TEnumAsByte<ESaveType>> SaveQueue;                                         // 0x0040 (size: 0x10)

    void WorldSaveComplete();
    void WorldBackupComplete();
    void SettingsSaveRequested();
    void QueueUserSettingsBPSave(class USaveGame* SaveGame);
    void QueueUnlocksSave(class USaveGame* SaveGame);
    void QueuePlayerStatsSave(class USaveGame* SaveGame);
    void QueueCustomizationSave(class USaveGame* SaveGame);
    void KeybindSaveRequested();
}; // Size: 0x88

class USaveWorldBackup : public UBlueprintAsyncActionBase
{
    FSaveWorldBackupSaveWorld SaveWorld;                                              // 0x0040 (size: 0x10)
    void SaveWorldBackupOutputPin(bool bSuccess);

    void SaveWorldBackup(const class UObject* WorldContextObject, FString WorldSaveName);
}; // Size: 0x88

class USessionResultItem : public UObject
{
    FBlueprintSessionResult SessionResult;                                            // 0x0028 (size: 0x120)
    int32 Ping;                                                                       // 0x0148 (size: 0x4)
    bool bDedicated;                                                                  // 0x014C (size: 0x1)
    bool bHardcore;                                                                   // 0x014D (size: 0x1)
    bool bLocked;                                                                     // 0x014E (size: 0x1)
    int32 PlayerCount;                                                                // 0x0150 (size: 0x4)
    int32 MaxPlayers;                                                                 // 0x0154 (size: 0x4)
    FName StoryProgressionRow;                                                        // 0x0158 (size: 0x8)
    int32 ModifiedRuleset;                                                            // 0x0160 (size: 0x4)
    FString ServerName;                                                               // 0x0168 (size: 0x10)

    void GetSessionResultEntries(const TArray<FBlueprintSessionResult>& Results);
    void FilterSessionResultEntries(const TArray<USessionResultItem*>& Results, FString FilterString, EFilterState Dedicated, EFilterState Locked, EFilterState Empty, EModifiedRuleset Ruleset);
}; // Size: 0x178

class USetBonusHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSetBonusRowHandle(const FName RowName);
    void MakeLiteralSetBonusRowHandle(FSetBonusRowHandle RowHandle);
    void GetSetBonusRow(FSetBonusRowHandle RowHandle, FSetBonus& Data, ERowValid& ReturnPath);
    void GetAllSetBonusRowNames(TArray<FName>& OutRowNames);
    void GetAllSetBonusRowHandles(TArray<FSetBonusRowHandle>& OutRowHandles);
    void Equal_SetBonusRowHandle(FSetBonusRowHandle A, FSetBonusRowHandle B);
    void DoesSetBonusRowExist(FName RowName);
    void Conv_SetBonusToName(const FSetBonusRowHandle& InHandle);
    void Conv_NameToSetBonus(FName RowName);
    void BreakSetBonusRowHandle(const FSetBonusRowHandle RowHandle);
}; // Size: 0x28

class USetBonusModRowAsset : public UAbioticModRowAsset
{
    FSetBonus Row;                                                                    // 0x0040 (size: 0x50)

}; // Size: 0x90

class USkillHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSkillRowHandle(const FName RowName);
    void MakeLiteralSkillRowHandle(FSkillRowHandle RowHandle);
    void GetSkillRow(FSkillRowHandle RowHandle, FSkillData& Data, ERowValid& ReturnPath);
    void GetAllSkillRowNames(TArray<FName>& OutRowNames);
    void GetAllSkillRowHandles(TArray<FSkillRowHandle>& OutRowHandles);
    void Equal_SkillRowHandle(FSkillRowHandle A, FSkillRowHandle B);
    void DoesSkillRowExist(FName RowName);
    void Conv_SkillToName(const FSkillRowHandle& InHandle);
    void Conv_NameToSkill(FName RowName);
    void BreakSkillRowHandle(const FSkillRowHandle RowHandle);
}; // Size: 0x28

class USkillPerkHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSkillPerkRowHandle(const FName RowName);
    void MakeLiteralSkillPerkRowHandle(FSkillPerkRowHandle RowHandle);
    void GetSkillPerkRow(FSkillPerkRowHandle RowHandle, FSkillPerk& Data, ERowValid& ReturnPath);
    void GetAllSkillPerkRowNames(TArray<FName>& OutRowNames);
    void GetAllSkillPerkRowHandles(TArray<FSkillPerkRowHandle>& OutRowHandles);
    void Equal_SkillPerkRowHandle(FSkillPerkRowHandle A, FSkillPerkRowHandle B);
    void DoesSkillPerkRowExist(FName RowName);
    void Conv_SkillPerkToName(const FSkillPerkRowHandle& InHandle);
    void Conv_NameToSkillPerk(FName RowName);
    void BreakSkillPerkRowHandle(const FSkillPerkRowHandle RowHandle);
}; // Size: 0x28

class USkillPerkModRowAsset : public UAbioticModRowAsset
{
    FSkillPerk Row;                                                                   // 0x0040 (size: 0x50)

}; // Size: 0x90

class USkillRecipeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSkillRecipeRowHandle(const FName RowName);
    void MakeLiteralSkillRecipeRowHandle(FSkillRecipeRowHandle RowHandle);
    void GetSkillRecipeRow(FSkillRecipeRowHandle RowHandle, FSkillPerkData& Data, ERowValid& ReturnPath);
    void GetAllSkillRecipeRowNames(TArray<FName>& OutRowNames);
    void GetAllSkillRecipeRowHandles(TArray<FSkillRecipeRowHandle>& OutRowHandles);
    void Equal_SkillRecipeRowHandle(FSkillRecipeRowHandle A, FSkillRecipeRowHandle B);
    void DoesSkillRecipeRowExist(FName RowName);
    void Conv_SkillRecipeToName(const FSkillRecipeRowHandle& InHandle);
    void Conv_NameToSkillRecipe(FName RowName);
    void BreakSkillRecipeRowHandle(const FSkillRecipeRowHandle RowHandle);
}; // Size: 0x28

class USkillRecipeModRowAsset : public UAbioticModRowAsset
{
    FSkillPerkData Row;                                                               // 0x0040 (size: 0x20)

}; // Size: 0x60

class USmallDeployableItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSmallDeployableItemRowHandle(const FName RowName);
    void MakeLiteralSmallDeployableItemRowHandle(FSmallDeployableItemRowHandle RowHandle);
    void GetSmallDeployableItemRow(FSmallDeployableItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllSmallDeployableItemRowNames(TArray<FName>& OutRowNames);
    void GetAllSmallDeployableItemRowHandles(TArray<FSmallDeployableItemRowHandle>& OutRowHandles);
    void Equal_SmallDeployableItemRowHandle(FSmallDeployableItemRowHandle A, FSmallDeployableItemRowHandle B);
    void DoesSmallDeployableItemRowExist(FName RowName);
    void Conv_SmallDeployableItemToName(const FSmallDeployableItemRowHandle& InHandle);
    void Conv_NameToSmallDeployableItem(FName RowName);
    void BreakSmallDeployableItemRowHandle(const FSmallDeployableItemRowHandle RowHandle);
}; // Size: 0x28

class USmallDeployableItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class USoupRecipeHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeSoupRecipeRowHandle(const FName RowName);
    void MakeLiteralSoupRecipeRowHandle(FSoupRecipeRowHandle RowHandle);
    void GetSoupRecipeRow(FSoupRecipeRowHandle RowHandle, FAbioticRecipe& Data, ERowValid& ReturnPath);
    void GetAllSoupRecipeRowNames(TArray<FName>& OutRowNames);
    void GetAllSoupRecipeRowHandles(TArray<FSoupRecipeRowHandle>& OutRowHandles);
    void Equal_SoupRecipeRowHandle(FSoupRecipeRowHandle A, FSoupRecipeRowHandle B);
    void DoesSoupRecipeRowExist(FName RowName);
    void Conv_SoupRecipeToName(const FSoupRecipeRowHandle& InHandle);
    void Conv_NameToSoupRecipe(FName RowName);
    void BreakSoupRecipeRowHandle(const FSoupRecipeRowHandle RowHandle);
}; // Size: 0x28

class USoupRecipeModRowAsset : public UAbioticModRowAsset
{
    FAbioticRecipe Row;                                                               // 0x0040 (size: 0xB0)

}; // Size: 0xF0

class USplineMovementComponent : public UActorComponent
{
    float Speed;                                                                      // 0x00A8 (size: 0x4)
    float CurrentDistance;                                                            // 0x00AC (size: 0x4)
    bool bIsTransitioning;                                                            // 0x00B0 (size: 0x1)
    TArray<USplineComponent*> SplineComponents;                                       // 0x00B8 (size: 0x10)
    class USplineComponent* SplineComponent;                                          // 0x00C8 (size: 0x8)
    class USplineComponent* TempSplineComponent;                                      // 0x00D0 (size: 0x8)
    class UCharacterMovementComponent* CharacterMovementComponent;                    // 0x00D8 (size: 0x8)
    FVector TargetPosition;                                                           // 0x00E0 (size: 0x18)

    void SetCurrentSpline(class USplineComponent* NewSpline);
    void SelectRandomSpline();
}; // Size: 0x150

class UStatModifierHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeStatModifierRowHandle(const FName RowName);
    void MakeLiteralStatModifierRowHandle(FStatModifierRowHandle RowHandle);
    void GetStatModifierRow(FStatModifierRowHandle RowHandle, FStatModifier& Data, ERowValid& ReturnPath);
    void GetAllStatModifierRowNames(TArray<FName>& OutRowNames);
    void GetAllStatModifierRowHandles(TArray<FStatModifierRowHandle>& OutRowHandles);
    void Equal_StatModifierRowHandle(FStatModifierRowHandle A, FStatModifierRowHandle B);
    void DoesStatModifierRowExist(FName RowName);
    void Conv_StatModifierToName(const FStatModifierRowHandle& InHandle);
    void Conv_NameToStatModifier(FName RowName);
    void BreakStatModifierRowHandle(const FStatModifierRowHandle RowHandle);
}; // Size: 0x28

class UStatModifierModRowAsset : public UAbioticModRowAsset
{
    FStatModifier Row;                                                                // 0x0040 (size: 0x20)

}; // Size: 0x60

class UTPAnimationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTPAnimationRowHandle(const FName RowName);
    void MakeLiteralTPAnimationRowHandle(FTPAnimationRowHandle RowHandle);
    void GetTPAnimationRow(FTPAnimationRowHandle RowHandle, FTPAnimation& Data, ERowValid& ReturnPath);
    void GetAllTPAnimationRowNames(TArray<FName>& OutRowNames);
    void GetAllTPAnimationRowHandles(TArray<FTPAnimationRowHandle>& OutRowHandles);
    void Equal_TPAnimationRowHandle(FTPAnimationRowHandle A, FTPAnimationRowHandle B);
    void DoesTPAnimationRowExist(FName RowName);
    void Conv_TPAnimationToName(const FTPAnimationRowHandle& InHandle);
    void Conv_NameToTPAnimation(FName RowName);
    void BreakTPAnimationRowHandle(const FTPAnimationRowHandle RowHandle);
}; // Size: 0x28

class UTPAnimationModRowAsset : public UAbioticModRowAsset
{
    FTPAnimation Row;                                                                 // 0x0040 (size: 0xD8)

}; // Size: 0x118

class UTPMeshSocketHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTPMeshSocketRowHandle(const FName RowName);
    void MakeLiteralTPMeshSocketRowHandle(FTPMeshSocketRowHandle RowHandle);
    void GetTPMeshSocketRow(FTPMeshSocketRowHandle RowHandle, FAttachSocket& Data, ERowValid& ReturnPath);
    void GetAllTPMeshSocketRowNames(TArray<FName>& OutRowNames);
    void GetAllTPMeshSocketRowHandles(TArray<FTPMeshSocketRowHandle>& OutRowHandles);
    void Equal_TPMeshSocketRowHandle(FTPMeshSocketRowHandle A, FTPMeshSocketRowHandle B);
    void DoesTPMeshSocketRowExist(FName RowName);
    void Conv_TPMeshSocketToName(const FTPMeshSocketRowHandle& InHandle);
    void Conv_NameToTPMeshSocket(FName RowName);
    void BreakTPMeshSocketRowHandle(const FTPMeshSocketRowHandle RowHandle);
}; // Size: 0x28

class UTPMeshSocketModRowAsset : public UAbioticModRowAsset
{
    FAttachSocket Row;                                                                // 0x0040 (size: 0x60)

}; // Size: 0xA0

class UTVTipHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTVTipRowHandle(const FName RowName);
    void MakeLiteralTVTipRowHandle(FTVTipRowHandle RowHandle);
    void GetTVTipRow(FTVTipRowHandle RowHandle, FTVTips& Data, ERowValid& ReturnPath);
    void GetAllTVTipRowNames(TArray<FName>& OutRowNames);
    void GetAllTVTipRowHandles(TArray<FTVTipRowHandle>& OutRowHandles);
    void Equal_TVTipRowHandle(FTVTipRowHandle A, FTVTipRowHandle B);
    void DoesTVTipRowExist(FName RowName);
    void Conv_TVTipToName(const FTVTipRowHandle& InHandle);
    void Conv_NameToTVTip(FName RowName);
    void BreakTVTipRowHandle(const FTVTipRowHandle RowHandle);
}; // Size: 0x28

class UTeleporterTagHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTeleporterTagRowHandle(const FName RowName);
    void MakeLiteralTeleporterTagRowHandle(FTeleporterTagRowHandle RowHandle);
    void GetTeleporterTagRow(FTeleporterTagRowHandle RowHandle, FSingleText& Data, ERowValid& ReturnPath);
    void GetAllTeleporterTagRowNames(TArray<FName>& OutRowNames);
    void GetAllTeleporterTagRowHandles(TArray<FTeleporterTagRowHandle>& OutRowHandles);
    void Equal_TeleporterTagRowHandle(FTeleporterTagRowHandle A, FTeleporterTagRowHandle B);
    void DoesTeleporterTagRowExist(FName RowName);
    void Conv_TeleporterTagToName(const FTeleporterTagRowHandle& InHandle);
    void Conv_NameToTeleporterTag(FName RowName);
    void BreakTeleporterTagRowHandle(const FTeleporterTagRowHandle RowHandle);
}; // Size: 0x28

class UTextureVariantHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTextureVariantRowHandle(const FName RowName);
    void MakeLiteralTextureVariantRowHandle(FTextureVariantRowHandle RowHandle);
    void GetTextureVariantRow(FTextureVariantRowHandle RowHandle, FTextureVariant& Data, ERowValid& ReturnPath);
    void GetAllTextureVariantRowNames(TArray<FName>& OutRowNames);
    void GetAllTextureVariantRowHandles(TArray<FTextureVariantRowHandle>& OutRowHandles);
    void Equal_TextureVariantRowHandle(FTextureVariantRowHandle A, FTextureVariantRowHandle B);
    void DoesTextureVariantRowExist(FName RowName);
    void Conv_TextureVariantToName(const FTextureVariantRowHandle& InHandle);
    void Conv_NameToTextureVariant(FName RowName);
    void BreakTextureVariantRowHandle(const FTextureVariantRowHandle RowHandle);
}; // Size: 0x28

class UTextureVariantModRowAsset : public UAbioticModRowAsset
{
    FTextureVariant Row;                                                              // 0x0040 (size: 0x78)

}; // Size: 0xB8

class UThermalEmitterComponent : public USceneComponent
{
    int32 ThermalTemperature;                                                         // 0x0238 (size: 0x4)
    bool bStartActive;                                                                // 0x023C (size: 0x1)
    bool bEmitterActive;                                                              // 0x023D (size: 0x1)
    TArray<UPrimitiveComponent*> OverlapPrimitives;                                   // 0x0240 (size: 0x10)

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
    TArray<UThermalEmitterComponent*> OverlappingEmitters;                            // 0x00C8 (size: 0x10)
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

class UTraderOutputLibrary : public UBlueprintFunctionLibrary
{

    void IsTraderOutputOfType(const FTraderItemWF& TraderItem, class UScriptStruct* OutputType);
    void GetTraderOutputType(const FTraderItemWF& TraderItem);
    void GetTraderOutputAsRecipeUnlock(const FTraderItemWF& TraderItem, FAnyRecipeRowHandle& OutRecipe);
    void GetTraderOutputAsItemCount(const FTraderItemWF& TraderItem, FAbioticItemCount& OutItemCount);
    void GetTraderOutputAsCustomization(const FTraderItemWF& TraderItem, FAnyCustomizationRowHandle& OutCustomization);
}; // Size: 0x28

class UTraitHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTraitRowHandle(const FName RowName);
    void MakeLiteralTraitRowHandle(FTraitRowHandle RowHandle);
    void GetTraitRow(FTraitRowHandle RowHandle, FTrait& Data, ERowValid& ReturnPath);
    void GetAllTraitRowNames(TArray<FName>& OutRowNames);
    void GetAllTraitRowHandles(TArray<FTraitRowHandle>& OutRowHandles);
    void Equal_TraitRowHandle(FTraitRowHandle A, FTraitRowHandle B);
    void DoesTraitRowExist(FName RowName);
    void Conv_TraitToName(const FTraitRowHandle& InHandle);
    void Conv_NameToTrait(FName RowName);
    void BreakTraitRowHandle(const FTraitRowHandle RowHandle);
}; // Size: 0x28

class UTraitModRowAsset : public UAbioticModRowAsset
{
    FTrait Row;                                                                       // 0x0040 (size: 0xE0)

}; // Size: 0x120

class UTramMovementComponent : public UMovementComponent
{
    bool bStopped;                                                                    // 0x0110 (size: 0x1)

}; // Size: 0x118

class UTutorialHintHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTutorialHintRowHandle(const FName RowName);
    void MakeLiteralTutorialHintRowHandle(FTutorialHintRowHandle RowHandle);
    void GetTutorialHintRow(FTutorialHintRowHandle RowHandle, FTutorialHint& Data, ERowValid& ReturnPath);
    void GetAllTutorialHintRowNames(TArray<FName>& OutRowNames);
    void GetAllTutorialHintRowHandles(TArray<FTutorialHintRowHandle>& OutRowHandles);
    void Equal_TutorialHintRowHandle(FTutorialHintRowHandle A, FTutorialHintRowHandle B);
    void DoesTutorialHintRowExist(FName RowName);
    void Conv_TutorialHintToName(const FTutorialHintRowHandle& InHandle);
    void Conv_NameToTutorialHint(FName RowName);
    void BreakTutorialHintRowHandle(const FTutorialHintRowHandle RowHandle);
}; // Size: 0x28

class UTutorialPanelKeybindTipHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTutorialPanelKeybindTipRowHandle(const FName RowName);
    void MakeLiteralTutorialPanelKeybindTipRowHandle(FTutorialPanelKeybindTipRowHandle RowHandle);
    void GetTutorialPanelKeybindTipRow(FTutorialPanelKeybindTipRowHandle RowHandle, FTutorialPanelKeybindTips& Data, ERowValid& ReturnPath);
    void GetAllTutorialPanelKeybindTipRowNames(TArray<FName>& OutRowNames);
    void GetAllTutorialPanelKeybindTipRowHandles(TArray<FTutorialPanelKeybindTipRowHandle>& OutRowHandles);
    void Equal_TutorialPanelKeybindTipRowHandle(FTutorialPanelKeybindTipRowHandle A, FTutorialPanelKeybindTipRowHandle B);
    void DoesTutorialPanelKeybindTipRowExist(FName RowName);
    void Conv_TutorialPanelKeybindTipToName(const FTutorialPanelKeybindTipRowHandle& InHandle);
    void Conv_NameToTutorialPanelKeybindTip(FName RowName);
    void BreakTutorialPanelKeybindTipRowHandle(const FTutorialPanelKeybindTipRowHandle RowHandle);
}; // Size: 0x28

class UTutorialPanelTipHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeTutorialPanelTipRowHandle(const FName RowName);
    void MakeLiteralTutorialPanelTipRowHandle(FTutorialPanelTipRowHandle RowHandle);
    void GetTutorialPanelTipRow(FTutorialPanelTipRowHandle RowHandle, FTutorialPanelTips& Data, ERowValid& ReturnPath);
    void GetAllTutorialPanelTipRowNames(TArray<FName>& OutRowNames);
    void GetAllTutorialPanelTipRowHandles(TArray<FTutorialPanelTipRowHandle>& OutRowHandles);
    void Equal_TutorialPanelTipRowHandle(FTutorialPanelTipRowHandle A, FTutorialPanelTipRowHandle B);
    void DoesTutorialPanelTipRowExist(FName RowName);
    void Conv_TutorialPanelTipToName(const FTutorialPanelTipRowHandle& InHandle);
    void Conv_NameToTutorialPanelTip(FName RowName);
    void BreakTutorialPanelTipRowHandle(const FTutorialPanelTipRowHandle RowHandle);
}; // Size: 0x28

class UUIKeybindActionHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeUIKeybindActionRowHandle(const FName RowName);
    void MakeLiteralUIKeybindActionRowHandle(FUIKeybindActionRowHandle RowHandle);
    void GetUIKeybindActionRow(FUIKeybindActionRowHandle RowHandle, FUIKeybindAction& Data, ERowValid& ReturnPath);
    void GetAllUIKeybindActionRowNames(TArray<FName>& OutRowNames);
    void GetAllUIKeybindActionRowHandles(TArray<FUIKeybindActionRowHandle>& OutRowHandles);
    void Equal_UIKeybindActionRowHandle(FUIKeybindActionRowHandle A, FUIKeybindActionRowHandle B);
    void DoesUIKeybindActionRowExist(FName RowName);
    void Conv_UIKeybindActionToName(const FUIKeybindActionRowHandle& InHandle);
    void Conv_NameToUIKeybindAction(FName RowName);
    void BreakUIKeybindActionRowHandle(const FUIKeybindActionRowHandle RowHandle);
}; // Size: 0x28

class UUIPopupHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeUIPopupRowHandle(const FName RowName);
    void MakeLiteralUIPopupRowHandle(FUIPopupRowHandle RowHandle);
    void GetUIPopupRow(FUIPopupRowHandle RowHandle, FUIPopup& Data, ERowValid& ReturnPath);
    void GetAllUIPopupRowNames(TArray<FName>& OutRowNames);
    void GetAllUIPopupRowHandles(TArray<FUIPopupRowHandle>& OutRowHandles);
    void Equal_UIPopupRowHandle(FUIPopupRowHandle A, FUIPopupRowHandle B);
    void DoesUIPopupRowExist(FName RowName);
    void Conv_UIPopupToName(const FUIPopupRowHandle& InHandle);
    void Conv_NameToUIPopup(FName RowName);
    void BreakUIPopupRowHandle(const FUIPopupRowHandle RowHandle);
}; // Size: 0x28

class UUnderwaterFXHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeUnderwaterFXRowHandle(const FName RowName);
    void MakeLiteralUnderwaterFXRowHandle(FUnderwaterFXRowHandle RowHandle);
    void GetUnderwaterFXRow(FUnderwaterFXRowHandle RowHandle, FUnderwaterFX& Data, ERowValid& ReturnPath);
    void GetAllUnderwaterFXRowNames(TArray<FName>& OutRowNames);
    void GetAllUnderwaterFXRowHandles(TArray<FUnderwaterFXRowHandle>& OutRowHandles);
    void Equal_UnderwaterFXRowHandle(FUnderwaterFXRowHandle A, FUnderwaterFXRowHandle B);
    void DoesUnderwaterFXRowExist(FName RowName);
    void Conv_UnderwaterFXToName(const FUnderwaterFXRowHandle& InHandle);
    void Conv_NameToUnderwaterFX(FName RowName);
    void BreakUnderwaterFXRowHandle(const FUnderwaterFXRowHandle RowHandle);
}; // Size: 0x28

class UUnderwaterFXModRowAsset : public UAbioticModRowAsset
{
    FUnderwaterFX Row;                                                                // 0x0040 (size: 0x700)

}; // Size: 0x740

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

    void MakeVideoSettingRowHandle(const FName RowName);
    void MakeLiteralVideoSettingRowHandle(FVideoSettingRowHandle RowHandle);
    void GetVideoSettingRow(FVideoSettingRowHandle RowHandle, FGameSetting& Data, ERowValid& ReturnPath);
    void GetAllVideoSettingRowNames(TArray<FName>& OutRowNames);
    void GetAllVideoSettingRowHandles(TArray<FVideoSettingRowHandle>& OutRowHandles);
    void Equal_VideoSettingRowHandle(FVideoSettingRowHandle A, FVideoSettingRowHandle B);
    void DoesVideoSettingRowExist(FName RowName);
    void Conv_VideoSettingToName(const FVideoSettingRowHandle& InHandle);
    void Conv_NameToVideoSetting(FName RowName);
    void BreakVideoSettingRowHandle(const FVideoSettingRowHandle RowHandle);
}; // Size: 0x28

class UWaypointHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWaypointRowHandle(const FName RowName);
    void MakeLiteralWaypointRowHandle(FWaypointRowHandle RowHandle);
    void GetWaypointRow(FWaypointRowHandle RowHandle, FWaypointData& Data, ERowValid& ReturnPath);
    void GetAllWaypointRowNames(TArray<FName>& OutRowNames);
    void GetAllWaypointRowHandles(TArray<FWaypointRowHandle>& OutRowHandles);
    void Equal_WaypointRowHandle(FWaypointRowHandle A, FWaypointRowHandle B);
    void DoesWaypointRowExist(FName RowName);
    void Conv_WaypointToName(const FWaypointRowHandle& InHandle);
    void Conv_NameToWaypoint(FName RowName);
    void BreakWaypointRowHandle(const FWaypointRowHandle RowHandle);
}; // Size: 0x28

class UWaypointModRowAsset : public UAbioticModRowAsset
{
    FWaypointData Row;                                                                // 0x0040 (size: 0x88)

}; // Size: 0xC8

class UWeaponAnimationHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWeaponAnimationRowHandle(const FName RowName);
    void MakeLiteralWeaponAnimationRowHandle(FWeaponAnimationRowHandle RowHandle);
    void GetWeaponAnimationRow(FWeaponAnimationRowHandle RowHandle, FAbioticWeaponAnimationData& Data, ERowValid& ReturnPath);
    void GetAllWeaponAnimationRowNames(TArray<FName>& OutRowNames);
    void GetAllWeaponAnimationRowHandles(TArray<FWeaponAnimationRowHandle>& OutRowHandles);
    void Equal_WeaponAnimationRowHandle(FWeaponAnimationRowHandle A, FWeaponAnimationRowHandle B);
    void DoesWeaponAnimationRowExist(FName RowName);
    void Conv_WeaponAnimationToName(const FWeaponAnimationRowHandle& InHandle);
    void Conv_NameToWeaponAnimation(FName RowName);
    void BreakWeaponAnimationRowHandle(const FWeaponAnimationRowHandle RowHandle);
}; // Size: 0x28

class UWeaponAnimationModRowAsset : public UAbioticModRowAsset
{
    FAbioticWeaponAnimationData Row;                                                  // 0x0040 (size: 0x330)

}; // Size: 0x370

class UWeaponCoatingHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWeaponCoatingRowHandle(const FName RowName);
    void MakeLiteralWeaponCoatingRowHandle(FWeaponCoatingRowHandle RowHandle);
    void GetWeaponCoatingRow(FWeaponCoatingRowHandle RowHandle, FWeaponCoating& Data, ERowValid& ReturnPath);
    void GetAllWeaponCoatingRowNames(TArray<FName>& OutRowNames);
    void GetAllWeaponCoatingRowHandles(TArray<FWeaponCoatingRowHandle>& OutRowHandles);
    void Equal_WeaponCoatingRowHandle(FWeaponCoatingRowHandle A, FWeaponCoatingRowHandle B);
    void DoesWeaponCoatingRowExist(FName RowName);
    void Conv_WeaponCoatingToName(const FWeaponCoatingRowHandle& InHandle);
    void Conv_NameToWeaponCoating(FName RowName);
    void BreakWeaponCoatingRowHandle(const FWeaponCoatingRowHandle RowHandle);
}; // Size: 0x28

class UWeaponCoatingModRowAsset : public UAbioticModRowAsset
{
    FWeaponCoating Row;                                                               // 0x0040 (size: 0x138)

}; // Size: 0x178

class UWeaponItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWeaponItemRowHandle(const FName RowName);
    void MakeLiteralWeaponItemRowHandle(FWeaponItemRowHandle RowHandle);
    void GetWeaponItemRow(FWeaponItemRowHandle RowHandle, FAbioticInventoryItem& Data, ERowValid& ReturnPath);
    void GetAllWeaponItemRowNames(TArray<FName>& OutRowNames);
    void GetAllWeaponItemRowHandles(TArray<FWeaponItemRowHandle>& OutRowHandles);
    void Equal_WeaponItemRowHandle(FWeaponItemRowHandle A, FWeaponItemRowHandle B);
    void DoesWeaponItemRowExist(FName RowName);
    void Conv_WeaponItemToName(const FWeaponItemRowHandle& InHandle);
    void Conv_NameToWeaponItem(FName RowName);
    void BreakWeaponItemRowHandle(const FWeaponItemRowHandle RowHandle);
}; // Size: 0x28

class UWeaponItemModRowAsset : public UAbioticModRowAsset
{
    FAbioticInventoryItem Row;                                                        // 0x0040 (size: 0x698)

}; // Size: 0x6D8

class UWeatherEventHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWeatherEventRowHandle(const FName RowName);
    void MakeLiteralWeatherEventRowHandle(FWeatherEventRowHandle RowHandle);
    void GetWeatherEventRow(FWeatherEventRowHandle RowHandle, FWeatherEvent& Data, ERowValid& ReturnPath);
    void GetAllWeatherEventRowNames(TArray<FName>& OutRowNames);
    void GetAllWeatherEventRowHandles(TArray<FWeatherEventRowHandle>& OutRowHandles);
    void Equal_WeatherEventRowHandle(FWeatherEventRowHandle A, FWeatherEventRowHandle B);
    void DoesWeatherEventRowExist(FName RowName);
    void Conv_WeatherEventToName(const FWeatherEventRowHandle& InHandle);
    void Conv_NameToWeatherEvent(FName RowName);
    void BreakWeatherEventRowHandle(const FWeatherEventRowHandle RowHandle);
}; // Size: 0x28

class UWeatherEventModRowAsset : public UAbioticModRowAsset
{
    FWeatherEvent Row;                                                                // 0x0040 (size: 0x98)

}; // Size: 0xD8

class UWishingShelfItemHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWishingShelfItemRowHandle(const FName RowName);
    void MakeLiteralWishingShelfItemRowHandle(FWishingShelfItemRowHandle RowHandle);
    void GetWishingShelfItemRow(FWishingShelfItemRowHandle RowHandle, FWishingShelfStats& Data, ERowValid& ReturnPath);
    void GetAllWishingShelfItemRowNames(TArray<FName>& OutRowNames);
    void GetAllWishingShelfItemRowHandles(TArray<FWishingShelfItemRowHandle>& OutRowHandles);
    void Equal_WishingShelfItemRowHandle(FWishingShelfItemRowHandle A, FWishingShelfItemRowHandle B);
    void DoesWishingShelfItemRowExist(FName RowName);
    void Conv_WishingShelfItemToName(const FWishingShelfItemRowHandle& InHandle);
    void Conv_NameToWishingShelfItem(FName RowName);
    void BreakWishingShelfItemRowHandle(const FWishingShelfItemRowHandle RowHandle);
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
    void SortWorldEntries(const TArray<UWorldEntryItem*> InWorldEntries);
    void PerformVersionUpgrade();
    void PerformCompressionUpgrade();
    void IsUpgradeBlockedByExistingWorld(FString& BlockingWorldName);
    void GetWorldEntriesCount(FString WorldFolder, FString LevelFolder, bool bSearchBackups);
    void GetWorldEntries(FString WorldFolder, FString LevelFolder, bool bSearchBackups);
    void GetSaveVersion();
    void GetSaveIntegrityState();
    void GetMetaDataSave();
    void GetLatestSaveVersion();
}; // Size: 0x78

class UWorldFlagHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWorldFlagRowHandle(const FName RowName);
    void MakeLiteralWorldFlagRowHandle(FWorldFlagRowHandle RowHandle);
    void GetWorldFlagRow(FWorldFlagRowHandle RowHandle, FWorldFlag& Data, ERowValid& ReturnPath);
    void GetAllWorldFlagRowNames(TArray<FName>& OutRowNames);
    void GetAllWorldFlagRowHandles(TArray<FWorldFlagRowHandle>& OutRowHandles);
    void Equal_WorldFlagRowHandle(FWorldFlagRowHandle A, FWorldFlagRowHandle B);
    void DoesWorldFlagRowExist(FName RowName);
    void Conv_WorldFlagToName(const FWorldFlagRowHandle& InHandle);
    void Conv_NameToWorldFlag(FName RowName);
    void BreakWorldFlagRowHandle(const FWorldFlagRowHandle RowHandle);
}; // Size: 0x28

class UWorldFlagModRowAsset : public UAbioticModRowAsset
{
    FWorldFlag Row;                                                                   // 0x0040 (size: 0x20)

}; // Size: 0x60

class UWorldFlagSubsystem : public UWorldSubsystem
{
    FWorldFlagSubsystemOnWorldFlagUpdated OnWorldFlagUpdated;                         // 0x0030 (size: 0x10)
    void WorldFlagUpdated();
    FWorldFlagSubsystemOnWorldFlagsLoaded OnWorldFlagsLoaded;                         // 0x0040 (size: 0x10)
    void WorldFlagsLoaded();

    void SetWorldFlag(FWorldFlagRowHandle WorldFlag, bool bState, class UObject* Context);
    void LoadWorldFlags(TArray<FName> FlagArray, bool bForce);
    void HasWorldFlagsLoaded();
    void HasWorldFlag(const class UObject* WorldContextObject, FWorldFlagRowHandle WorldFlag);
    void GetWorldFlags(TArray<FName>& FlagArray);
    void GetWorldFlagRows(TArray<FWorldFlagRowHandle>& FlagArray);
    void FindCurrentQuest(FQuestRowHandle& QuestRowHandle);
    void FindAllActiveQuests(const FQuestLineRowHandle& QuestLineFilter, TArray<FQuestRowHandle>& QuestRowHandles, const bool bOnlyLatest, const bool bIgnoreSubQuests);
}; // Size: 0x58

class UWorldFlagTriggerHandleFunctionLibrary : public UBlueprintFunctionLibrary
{

    void MakeWorldFlagTriggerRowHandle(const FName RowName);
    void MakeLiteralWorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle RowHandle);
    void GetWorldFlagTriggerRow(FWorldFlagTriggerRowHandle RowHandle, FWorldFlagTrigger& Data, ERowValid& ReturnPath);
    void GetAllWorldFlagTriggerRowNames(TArray<FName>& OutRowNames);
    void GetAllWorldFlagTriggerRowHandles(TArray<FWorldFlagTriggerRowHandle>& OutRowHandles);
    void Equal_WorldFlagTriggerRowHandle(FWorldFlagTriggerRowHandle A, FWorldFlagTriggerRowHandle B);
    void DoesWorldFlagTriggerRowExist(FName RowName);
    void Conv_WorldFlagTriggerToName(const FWorldFlagTriggerRowHandle& InHandle);
    void Conv_NameToWorldFlagTrigger(FName RowName);
    void BreakWorldFlagTriggerRowHandle(const FWorldFlagTriggerRowHandle RowHandle);
}; // Size: 0x28

class UWorldSaveFunctionLibrary : public UBlueprintFunctionLibrary
{

    void VerifySaveBackups(FString WorldSaveName, bool bDeleteCorrupt);
    void RestoreSaveBackup(FString WorldSaveName, FString BackupFolderName, FString& ErrorString);
    void GetNewestSaveBackup(FString WorldName, int32& OutIndex);
    void GetMetaDataTimestampForSaveBackup(FString WorldName, int32 BackupIndex, class UAbioticSave*& OutSave, FDateTime& OutTimestamp);
    void GetMetaDataTimestampForSave(FString WorldName, class UAbioticSave*& OutSave, FDateTime& OutTimestamp);
    void DoesSaveBackupIndexExist(FString WorldSaveName, int32 Index);
    void DoesCurrentSaveHaveEmptyFileCorruption(FString WorldSaveName);
    void DoesAnySaveBackupExist(FString WorldSaveName);
}; // Size: 0x28

#endif
