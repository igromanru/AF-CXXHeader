#ifndef UE4SS_SDK_Abiotic_Character_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Character_ParentBP_HPP

class AAbiotic_Character_ParentBP_C : public AAbioticCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0900 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0908 (size: 0x8)
    class UThermalReceiverComponent* ThermalReceiver;                                 // 0x0910 (size: 0x8)
    class UAIPerceptionComponent* AIPerception;                                       // 0x0918 (size: 0x8)
    class UAbiotic_CharacterBuffComponent_C* BuffDebuffComponent;                     // 0x0920 (size: 0x8)
    class UAbiotic_InventoryComponent_C* CharacterInventory;                          // 0x0928 (size: 0x8)
    class UAudioComponent* CharacterVoiceAudio;                                       // 0x0930 (size: 0x8)
    float RagdollBlend_PhysicsBlend_0D3332C045A8BC3A68470C9AF96830C5;                 // 0x0938 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RagdollBlend__Direction_0D3332C045A8BC3A68470C9AF96830C5; // 0x093C (size: 0x1)
    class UTimelineComponent* RagdollBlend;                                           // 0x0940 (size: 0x8)
    float Timeline_PhysicsBlend_9551C00B415539165B0B10851E745CE1;                     // 0x0948 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_9551C00B415539165B0B10851E745CE1; // 0x094C (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0950 (size: 0x8)
    float ZiplineTimeline_NewTrack_0_A49DF07F41CCAF35CD606489F286D9F2;                // 0x0958 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ZiplineTimeline__Direction_A49DF07F41CCAF35CD606489F286D9F2; // 0x095C (size: 0x1)
    class UTimelineComponent* ZiplineTimeline;                                        // 0x0960 (size: 0x8)
    double TotalCombinedHealth;                                                       // 0x0968 (size: 0x8)
    bool IsDead;                                                                      // 0x0970 (size: 0x1)
    FAbiotic_Character_ParentBP_CHealth_Changed Health_Changed;                       // 0x0978 (size: 0x10)
    void Health_Changed();
    bool IsDBNO;                                                                      // 0x0988 (size: 0x1)
    bool HasDBNOState;                                                                // 0x0989 (size: 0x1)
    FAbiotic_Character_ParentBP_CDBNOState_Changed DBNOState_Changed;                 // 0x0990 (size: 0x10)
    void DBNOState_Changed(class AAbiotic_Character_ParentBP_C* Character);
    double MeleeRange;                                                                // 0x09A0 (size: 0x8)
    double InteractionRange;                                                          // 0x09A8 (size: 0x8)
    double CurrentHunger;                                                             // 0x09B0 (size: 0x8)
    double MaxHunger;                                                                 // 0x09B8 (size: 0x8)
    double HungerDecayInterval;                                                       // 0x09C0 (size: 0x8)
    double HungerDecayAmount;                                                         // 0x09C8 (size: 0x8)
    TArray<FName> HeadBones;                                                          // 0x09D0 (size: 0x10)
    double CurrentFatigue;                                                            // 0x09E0 (size: 0x8)
    double MaxFatigue;                                                                // 0x09E8 (size: 0x8)
    double FatigueIncreaseInterval;                                                   // 0x09F0 (size: 0x8)
    double FatigueIncreaseAmount;                                                     // 0x09F8 (size: 0x8)
    double CurrentThirst;                                                             // 0x0A00 (size: 0x8)
    double MaxThirst;                                                                 // 0x0A08 (size: 0x8)
    double ThirstDecayInterval;                                                       // 0x0A10 (size: 0x8)
    double ThirstDecayAmount;                                                         // 0x0A18 (size: 0x8)
    bool HasThirst;                                                                   // 0x0A20 (size: 0x1)
    bool HasHunger;                                                                   // 0x0A21 (size: 0x1)
    bool HasFatigue;                                                                  // 0x0A22 (size: 0x1)
    FTimerHandle HungerDecayTimer;                                                    // 0x0A28 (size: 0x8)
    FTimerHandle FatigueIncreaseTimer;                                                // 0x0A30 (size: 0x8)
    FTimerHandle ThirstDecayTimer;                                                    // 0x0A38 (size: 0x8)
    FAbiotic_Character_ParentBP_CHunger_Changed Hunger_Changed;                       // 0x0A40 (size: 0x10)
    void Hunger_Changed();
    FAbiotic_Character_ParentBP_CThirst_Changed Thirst_Changed;                       // 0x0A50 (size: 0x10)
    void Thirst_Changed();
    FAbiotic_Character_ParentBP_CFatigue_Changed Fatigue_Changed;                     // 0x0A60 (size: 0x10)
    void Fatigue_Changed();
    bool RecentlyExertedSelf;                                                         // 0x0A70 (size: 0x1)
    FAbiotic_Character_ParentBP_CStamina_Changed Stamina_Changed;                     // 0x0A78 (size: 0x10)
    void Stamina_Changed();
    double Sprinting_StaminaDrainPerInterval;                                         // 0x0A88 (size: 0x8)
    double Sprinting_StaminaDrainInterval;                                            // 0x0A90 (size: 0x8)
    TArray<FName> TorsoBones;                                                         // 0x0A98 (size: 0x10)
    TArray<FName> LeftArmBones;                                                       // 0x0AA8 (size: 0x10)
    TArray<FName> RightArmBones;                                                      // 0x0AB8 (size: 0x10)
    TArray<FName> LeftLegBones;                                                       // 0x0AC8 (size: 0x10)
    TArray<FName> RightLegBones;                                                      // 0x0AD8 (size: 0x10)
    FAbiotic_PointDamageStruct LastPointDamage;                                       // 0x0AE8 (size: 0x178)
    TEnumAsByte<E_Factions::Type> Faction;                                            // 0x0C60 (size: 0x1)
    TEnumAsByte<E_AudioImportance::Type> CurrentVoiceAudioImportance;                 // 0x0C61 (size: 0x1)
    bool NPC_Targetable;                                                              // 0x0C62 (size: 0x1)
    TMap<EBodyLimbs, double> Current_LimbHealthMap;                                   // 0x0C68 (size: 0x50)
    bool Inventory;                                                                   // 0x0CB8 (size: 0x1)
    double CurrentBodyTemperature;                                                    // 0x0CC0 (size: 0x8)
    double LethalBodyTemperature_High;                                                // 0x0CC8 (size: 0x8)
    double LethalBodyTemperature_Low;                                                 // 0x0CD0 (size: 0x8)
    bool HasBodyTemperature;                                                          // 0x0CD8 (size: 0x1)
    double PreferredBodyTemperature;                                                  // 0x0CE0 (size: 0x8)
    FAbiotic_Character_ParentBP_CBodyTemp_Changed BodyTemp_Changed;                   // 0x0CE8 (size: 0x10)
    void BodyTemp_Changed();
    bool LockedInPlaceMontage;                                                        // 0x0CF8 (size: 0x1)
    double BleedoutStartTime;                                                         // 0x0D00 (size: 0x8)
    double CurrentBleedoutTime;                                                       // 0x0D08 (size: 0x8)
    FTimerHandle BleedoutTimer;                                                       // 0x0D10 (size: 0x8)
    FAbiotic_Character_ParentBP_CDeadAlive_Changed DeadAlive_Changed;                 // 0x0D18 (size: 0x10)
    void DeadAlive_Changed(class AAbiotic_Character_ParentBP_C* Character);
    TArray<class UAnimMontage*> DeathAnimations;                                      // 0x0D28 (size: 0x10)
    int32 SelectedDeathAnimation;                                                     // 0x0D38 (size: 0x4)
    bool DiedExplosively;                                                             // 0x0D3C (size: 0x1)
    bool DamageSpilloverToHead;                                                       // 0x0D3D (size: 0x1)
    bool IsSleeping;                                                                  // 0x0D3E (size: 0x1)
    bool IsSittingInSeat;                                                             // 0x0D3F (size: 0x1)
    bool IsDrivingVehicle;                                                            // 0x0D40 (size: 0x1)
    class ADeployed_Furniture_Bed_ParentBP_C* CurrentBed;                             // 0x0D48 (size: 0x8)
    double FatigueRequiredToSleep;                                                    // 0x0D50 (size: 0x8)
    FTimerHandle Sleeping_Timer;                                                      // 0x0D58 (size: 0x8)
    FAbiotic_Character_ParentBP_CSleepSitState_Changed SleepSitState_Changed;         // 0x0D60 (size: 0x10)
    void SleepSitState_Changed();
    double TimeLastMadeLandingNoise;                                                  // 0x0D70 (size: 0x8)
    class USceneComponent* SeizedByComponent;                                         // 0x0D78 (size: 0x8)
    bool HasMasterKey;                                                                // 0x0D80 (size: 0x1)
    double TimeLastRevived;                                                           // 0x0D88 (size: 0x8)
    TEnumAsByte<EBloodSplatterType::Type> BloodSplatterType;                          // 0x0D90 (size: 0x1)
    bool IsReloading;                                                                 // 0x0D91 (size: 0x1)
    TSoftObjectPtr<UAnimMontage> ReloadMontage;                                       // 0x0D98 (size: 0x28)
    bool InvincibleToNPCs;                                                            // 0x0DC0 (size: 0x1)
    TArray<FName> DebuffsImmune;                                                      // 0x0DC8 (size: 0x10)
    double TimeOfLastPainYell;                                                        // 0x0DD8 (size: 0x8)
    double TimeOfLastPainGrunt;                                                       // 0x0DE0 (size: 0x8)
    class AAbioticDeployed_Furniture_ParentBP_C* CurrentSeat;                         // 0x0DE8 (size: 0x8)
    int32 LastSeatIndex;                                                              // 0x0DF0 (size: 0x4)
    double ContinenceToReceive;                                                       // 0x0DF8 (size: 0x8)
    bool HasContinence;                                                               // 0x0E00 (size: 0x1)
    double CurrentContinence;                                                         // 0x0E08 (size: 0x8)
    double MaxContinence;                                                             // 0x0E10 (size: 0x8)
    double ContinenceComputeInterval;                                                 // 0x0E18 (size: 0x8)
    FTimerHandle ContinenceComputeTimer;                                              // 0x0E20 (size: 0x8)
    bool RegeneratesHealth;                                                           // 0x0E28 (size: 0x1)
    double HealthRegenInterval;                                                       // 0x0E30 (size: 0x8)
    FTimerHandle HealthRegenTimer;                                                    // 0x0E38 (size: 0x8)
    double CurrentArmor_Chest;                                                        // 0x0E40 (size: 0x8)
    double CurrentArmor_Arms;                                                         // 0x0E48 (size: 0x8)
    double CurrentArmor_Legs;                                                         // 0x0E50 (size: 0x8)
    double CurrentArmor_Head;                                                         // 0x0E58 (size: 0x8)
    bool Invincible;                                                                  // 0x0E60 (size: 0x1)
    TEnumAsByte<ENPCCharacterSize::Type> CharacterSize;                               // 0x0E61 (size: 0x1)
    bool ReducedHeadDamage;                                                           // 0x0E62 (size: 0x1)
    double CurrentLightValue;                                                         // 0x0E68 (size: 0x8)
    bool DebugMeleeSwings;                                                            // 0x0E70 (size: 0x1)
    bool PerformingMeleeSwing;                                                        // 0x0E71 (size: 0x1)
    FMeleeingData_Struct CurrentMeleeingData;                                         // 0x0E78 (size: 0x50)
    TArray<class AActor*> ActorsHitThisMeleeSwing;                                    // 0x0EC8 (size: 0x10)
    int32 MeleeSwingProgress;                                                         // 0x0ED8 (size: 0x4)
    float CurrentReloadDuration;                                                      // 0x0EDC (size: 0x4)
    double SpeakingAlpha;                                                             // 0x0EE0 (size: 0x8)
    class USourceEffectEnvelopeFollowerPreset* LipsyncPreset;                         // 0x0EE8 (size: 0x8)
    bool HasLipsync;                                                                  // 0x0EF0 (size: 0x1)
    bool LipsyncRegistered;                                                           // 0x0EF1 (size: 0x1)
    class UEnvelopeFollowerListener* LipSyncFollower;                                 // 0x0EF8 (size: 0x8)
    double CurrentSafetyValue;                                                        // 0x0F00 (size: 0x8)
    bool DoTick_GrabZoneCheck;                                                        // 0x0F08 (size: 0x1)
    FName GrabSocket;                                                                 // 0x0F0C (size: 0x8)
    class AAbiotic_Character_ParentBP_C* GrabbedByCharacter;                          // 0x0F18 (size: 0x8)
    float GrabCheckRadius;                                                            // 0x0F20 (size: 0x4)
    class AAbiotic_Character_ParentBP_C* HoldingCharacter;                            // 0x0F28 (size: 0x8)
    bool InfiniteStamina;                                                             // 0x0F30 (size: 0x1)
    bool ClimbingLadder;                                                              // 0x0F31 (size: 0x1)
    class ADeployed_Ladder_ParentBP_C* CurrentLadder;                                 // 0x0F38 (size: 0x8)
    double LadderClimbSpeed;                                                          // 0x0F40 (size: 0x8)
    double LadderStartZ;                                                              // 0x0F48 (size: 0x8)
    bool RecentlyStaggered;                                                           // 0x0F50 (size: 0x1)
    double TemperatureInterval;                                                       // 0x0F58 (size: 0x8)
    FTimerHandle TemperatureCheckTimer;                                               // 0x0F60 (size: 0x8)
    class UCurveFloat* TemperatureCurve;                                              // 0x0F68 (size: 0x8)
    float TargetBodyTemperature;                                                      // 0x0F70 (size: 0x4)
    double CurrentRadiation;                                                          // 0x0F78 (size: 0x8)
    bool CanReceiveRadiation;                                                         // 0x0F80 (size: 0x1)
    double RadiationCheckInterval;                                                    // 0x0F88 (size: 0x8)
    FTimerHandle RadiationCheckTimer;                                                 // 0x0F90 (size: 0x8)
    double CurrentRadiationBeingReceived;                                             // 0x0F98 (size: 0x8)
    double MaxRadiation;                                                              // 0x0FA0 (size: 0x8)
    FAbiotic_Character_ParentBP_CRadiation_Changed Radiation_Changed;                 // 0x0FA8 (size: 0x10)
    void Radiation_Changed();
    FAbiotic_Character_ParentBP_CIncomingRadiation_Changed IncomingRadiation_Changed; // 0x0FB8 (size: 0x10)
    void IncomingRadiation_Changed();
    TArray<double> WalkSpeed_Modifiers;                                               // 0x0FC8 (size: 0x10)
    double RadiationResistance;                                                       // 0x0FD8 (size: 0x8)
    double Pitch;                                                                     // 0x0FE0 (size: 0x8)
    double Yaw;                                                                       // 0x0FE8 (size: 0x8)
    double DamageReductionPerArmorPoint;                                              // 0x0FF0 (size: 0x8)
    bool LastLadderDirectionDown;                                                     // 0x0FF8 (size: 0x1)
    bool UsingZipline;                                                                // 0x0FF9 (size: 0x1)
    class AZipline_C* CurrentZipline;                                                 // 0x1000 (size: 0x8)
    FAbiotic_Character_ParentBP_CZiplineState_Changed ZiplineState_Changed;           // 0x1008 (size: 0x10)
    void ZiplineState_Changed();
    double DamageToNPCs;                                                              // 0x1018 (size: 0x8)
    double DefaultSpottability;                                                       // 0x1020 (size: 0x8)
    bool ZenMode;                                                                     // 0x1028 (size: 0x1)
    bool IsAI;                                                                        // 0x1029 (size: 0x1)
    int32 ReviveCount;                                                                // 0x102C (size: 0x4)
    bool DeadFlailInAir;                                                              // 0x1030 (size: 0x1)
    bool IsShieldBlocking;                                                            // 0x1031 (size: 0x1)
    double LastBlockedDamagePercentage;                                               // 0x1038 (size: 0x8)
    double WalkSoundVolume;                                                           // 0x1040 (size: 0x8)
    double SprintSoundVolume;                                                         // 0x1048 (size: 0x8)
    class UNiagaraComponent* VomitEmitter;                                            // 0x1050 (size: 0x8)
    double TimeLastVomitted;                                                          // 0x1058 (size: 0x8)
    bool LastKilledByInstantDamageType;                                               // 0x1060 (size: 0x1)
    FAbiotic_Character_ParentBP_CWasShoved WasShoved;                                 // 0x1068 (size: 0x10)
    void WasShoved(class AAbiotic_Character_ParentBP_C* Shover);
    bool IsSpeaking;                                                                  // 0x1078 (size: 0x1)
    bool IsStateDrainDisabled;                                                        // 0x1079 (size: 0x1)
    FRotator LastSeatRotation;                                                        // 0x1080 (size: 0x18)
    FBloodStains_Struct BloodStainsData;                                              // 0x1098 (size: 0x10)
    double DefaultMaxFatigue;                                                         // 0x10A8 (size: 0x8)
    TSubclassOf<class UDamageType> LastFatalDamageType;                               // 0x10B0 (size: 0x8)
    FTimerHandle VomitTimer;                                                          // 0x10B8 (size: 0x8)
    TArray<class AActor*> VomitHitActors;                                             // 0x10C0 (size: 0x10)
    bool SilenceDuringNarrative;                                                      // 0x10D0 (size: 0x1)
    bool LadderStillOnFloor;                                                          // 0x10D1 (size: 0x1)
    class UPlayerCharacterVoiceDataAsset* LoadedVoiceAsset;                           // 0x10D8 (size: 0x8)
    double LastStartBlockTime;                                                        // 0x10E0 (size: 0x8)
    int32 MaxReviveCount;                                                             // 0x10E8 (size: 0x4)
    bool IsDisabled;                                                                  // 0x10EC (size: 0x1)
    bool PerformingWeaponThrow;                                                       // 0x10ED (size: 0x1)
    double WeaponHoldThrowProgress;                                                   // 0x10F0 (size: 0x8)
    double TempThreshold_Ignition;                                                    // 0x10F8 (size: 0x8)
    double TempThreshold_VeryHot;                                                     // 0x1100 (size: 0x8)
    double TempThreshold_Hot;                                                         // 0x1108 (size: 0x8)
    double TempThreshold_Warm;                                                        // 0x1110 (size: 0x8)
    double TempThreshold_Default;                                                     // 0x1118 (size: 0x8)
    double TempThreshold_Cool;                                                        // 0x1120 (size: 0x8)
    double TempThreshold_Cold;                                                        // 0x1128 (size: 0x8)
    double TempThreshold_VeryCold;                                                    // 0x1130 (size: 0x8)
    bool HasSwimmingStats;                                                            // 0x1138 (size: 0x1)
    FTimerHandle SwimmingUpdateTimer;                                                 // 0x1140 (size: 0x8)
    double SwimmingUpdateInterval;                                                    // 0x1148 (size: 0x8)
    double UnderwaterImmersionDepth;                                                  // 0x1150 (size: 0x8)
    double WaddingImmersionDepth;                                                     // 0x1158 (size: 0x8)
    double DrownTime;                                                                 // 0x1160 (size: 0x8)
    double RebreatherDrownTime;                                                       // 0x1168 (size: 0x8)
    FAbiotic_Character_ParentBP_CContinence_Changed Continence_Changed;               // 0x1170 (size: 0x10)
    void Continence_Changed();
    double TotalArmorWeight;                                                          // 0x1180 (size: 0x8)
    bool BodyShieldAbsorbedLastHit;                                                   // 0x1188 (size: 0x1)
    TArray<class ARadioactiveZone_ParentBP_C*> OverlappingRadioactiveZones;           // 0x1190 (size: 0x10)
    TArray<class AAbioticLevelStreamingVolume*> OverlappingLevelVolumes;              // 0x11A0 (size: 0x10)
    FAbiotic_Character_ParentBP_CLevelStreamingVolumesUpdated LevelStreamingVolumesUpdated; // 0x11B0 (size: 0x10)
    void LevelStreamingVolumesUpdated();
    double CrouchedWaddingImmersionDepth;                                             // 0x11C0 (size: 0x8)
    double MaxArmorDamageReduction;                                                   // 0x11C8 (size: 0x8)
    FGameplayTagContainer CompatibleGrabs;                                            // 0x11D0 (size: 0x20)
    FName HitReactionBone;                                                            // 0x11F0 (size: 0x8)
    bool HasBeenGrabbed;                                                              // 0x11F8 (size: 0x1)
    bool NoDamageSpillover;                                                           // 0x11F9 (size: 0x1)
    float DefaultGravityScale;                                                        // 0x11FC (size: 0x4)
    double NearbyFatigueMultiplier;                                                   // 0x1200 (size: 0x8)
    TMap<EVoiceLineType, double> TimeOfVoiceLineTypeSpoken;                           // 0x1208 (size: 0x50)
    float HitReactImpulse_Max;                                                        // 0x1258 (size: 0x4)
    FAbiotic_Character_ParentBP_COnBlockReaction OnBlockReaction;                     // 0x1260 (size: 0x10)
    void OnBlockReaction();
    bool RecentlyBlockedAttack;                                                       // 0x1270 (size: 0x1)
    bool WasSwimmingLastCheck;                                                        // 0x1271 (size: 0x1)
    FAbiotic_Character_ParentBP_COnGrabbed OnGrabbed;                                 // 0x1278 (size: 0x10)
    void OnGrabbed(class AAbiotic_Character_ParentBP_C* Character);
    FAbiotic_DeathData_Struct DeathData;                                              // 0x1288 (size: 0x48)
    bool CanRagdoll;                                                                  // 0x12D0 (size: 0x1)
    FVector RagdollLocation;                                                          // 0x12D8 (size: 0x18)
    FName RagdollBoneRoot;                                                            // 0x12F0 (size: 0x8)
    class UPhysicsAsset* RagdollPhysicsOverride;                                      // 0x12F8 (size: 0x8)
    bool HadRVOEnabled;                                                               // 0x1300 (size: 0x1)
    bool PerformingMeleeAttack;                                                       // 0x1301 (size: 0x1)
    double RagdollDelay;                                                              // 0x1308 (size: 0x8)
    double RagdollBlendLength;                                                        // 0x1310 (size: 0x8)
    FVector ZiplineStartLoc;                                                          // 0x1318 (size: 0x18)
    TSoftObjectPtr<UDialogueWave> LastDialogPlayed;                                   // 0x1330 (size: 0x28)
    bool TorsoIsLethal;                                                               // 0x1358 (size: 0x1)
    FTransform SeatTransform;                                                         // 0x1360 (size: 0x60)
    double TimeLastVehicleHit;                                                        // 0x13C0 (size: 0x8)
    int32 CurrentHeatResist;                                                          // 0x13C8 (size: 0x4)
    int32 CurrentColdResist;                                                          // 0x13CC (size: 0x4)
    FAbiotic_Character_ParentBP_CTempResist_Changed TempResist_Changed;               // 0x13D0 (size: 0x10)
    void TempResist_Changed();
    class UNiagaraComponent* ColdBreathEmitter;                                       // 0x13E0 (size: 0x8)
    double VomitForwardDistance;                                                      // 0x13E8 (size: 0x8)
    double ArmorSoftCap;                                                              // 0x13F0 (size: 0x8)
    double DiminishingReturnScalingFactor;                                            // 0x13F8 (size: 0x8)
    double LastActiveCamoCooldown;                                                    // 0x1400 (size: 0x8)

    void GetPinnedHighlightColor(int32& Color, bool& IsPinnedIngredient);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    float GetAmbientTemperature();
    void GetThermalOverlapPrimitives(TArray<class UPrimitiveComponent*>& OutPrimitives);
    bool CanBeGrabbed(FGameplayTag TagToCheck);
    void CanBeCarbuncled(bool& Success);
    void TargetableByTurrets(bool& Targetable);
    void GetWandererNPC(class ANPC_Base_ParentBP_C*& Wanderer);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    void Targetable By Triggers(bool& Targetable);
    bool GetSpottability(double& Spottability, bool& Crouched);
    bool GetCurrentLightLevel(double& LightLevel);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void RequiresRangedWeaponToEngage(bool& RequiresRanged);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void Server_TriggerActiveCamoCooldown();
    void GetFinalTPMontageToPlay(class UAnimMontage* OriginalMontage, bool Secondary, bool HideHeldItemDuringAnim, class UAnimMontage*& FinalMontageToPlay);
    void CalculateDamageReduction(float BaseDamage, FStatModifierRowHandle Modifier, double& TotalDamage);
    double CalculateArmorDamageReduction(double TotalArmorOnLimb, double DamageTypeResistanceFromArmor);
    void Get Current Pager Highlighted Components(TArray<class UActorComponent*>& Components);
    void DisplayEmetophobiaMessages();
    void HandleVehicleHit(bool& Handled);
    void ChooseCorrectTemperatureDebuff(bool IsHot, int32 TemperatureLevel, int32 TemperatureResistance, FBuffDebuffRowHandle& Debuff);
    void OnRep_CurrentColdResist();
    void OnRep_CurrentHeatResist();
    void UpdateSeatTransform();
    void OnRep_SeatTransform();
    void RagdollTimeout();
    void IsInvincible(bool& Return);
    void SelectDeathAnimation(int32& SelectedIndex);
    bool HasBeenGibbed();
    void ActivateRagdoll();
    void RagdollTick();
    bool CanPerformHitReaction();
    void OnRep_DeathData();
    void Can Dodge Ranged Hit(TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, bool& RedShift, bool& BulletDeflect);
    FText GetCharacterName();
    void PlayWaterStateChangeFX();
    void CheckForBloodstainDebuffs();
    void ToggleSitState(bool StartSitting, class AAbioticDeployed_Furniture_ParentBP_C* Seat, bool IgnoreZLocation);
    void DoDamageTypeReactionFX(FVector Location, FRotator ImpactRotation, TSubclassOf<class UDamageType> DamageType, class AActor* DamageCauser, class UActorComponent* HitComponent, FName HitBone);
    void GetResponseToDamageType(TSubclassOf<class UDamageType> DamageType, class AActor* DamageCauser, class UActorComponent* HitComponent, FName HitBone, bool& Immune, bool& Weakness, bool& Resisted);
    void CheckNearbyCharactersForSimilarVoiceLine(EVoiceLineType LineType, bool& AllowedToSpeak);
    bool CanCurrentlyShieldBlock();
    void ShoveCharacter(class AAbiotic_Character_ParentBP_C* Shover);
    void OnDrivingVehicleChanged();
    void OnCurrentSeatUpdated();
    bool IsLevelLoaded(bool RequireAllOverlapped);
    void ProcessNearMiss(FHitResult& HitResult, class AAbiotic_Character_ParentBP_C* Owner);
    double CalculateEnviromentalRadiation();
    void RemoveRadioactiveZone(class ARadioactiveZone_ParentBP_C* Zone);
    void AddRadioactiveZone(class ARadioactiveZone_ParentBP_C* Zone);
    void GetArmorWeightMovementClass(int32& WeightClass);
    void OnRep_CurrentContinence();
    double GetRemainingTimeToDrown();
    bool IsUnderwater();
    void Timer_Update_Swimming();
    void End Weapon Throw Hold();
    FName GetGrabTraceSocket();
    void GetDamageResistanceOnLimb(EBodyLimbs Limb, const class UDamageType* DamageType, double& DamageBlockedByArmor);
    void ApplyRevivedBuffs();
    void OnRep_IsDisabled();
    void Do Melee Impact FX(FVector Location, FRotator ImpactRotation, class AActor* HitActor, class UActorComponent* ComponentHit, const FVector EndTrace, class UPhysicalMaterial* PhysicalMaterialHit, bool LocalPlayer, bool Unarmed, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageHitType, bool InstantKillHit, FName HitBone);
    void Get MouthFX New Attach Location(FName AttachPointToLookFor, class USceneComponent*& AttachToComponent, FName& AttachPointName, FVector& Location, FRotator& Rotation);
    void RestoreHealthFromDBNO();
    double GetMaxBleedoutTime();
    void CheckForHealthDebuffs();
    void LocalShutUpCharacter();
    void AttemptRevive(class AActor* Reviver);
    void IsCharacterAllowedToSpeak(bool& Allowed);
    void Create Impact Decal(FVector ActorHitLocation, FRotator ActorHitAngle, class AActor* ActorHit, class UActorComponent* ComponentHit, const FVector EndTrace, TSubclassOf<class UDamageType> DamageType, class UPhysicalMaterial* PhysicalMaterial, bool& Created);
    void SetNewStainValue(double StainValue, TEnumAsByte<EBloodSplatterType::Type> StainType, class AAbiotic_Character_ParentBP_C* AffectedActor, double& New Stain Level);
    void Local Vomit Hit Trace(int32 Segments);
    void DeathAnalytics();
    class USceneComponent* GetTetherAttachComponent();
    void DisconnectTether();
    void Start Apply Blood Stains();
    void OnRep_BloodStainsData();
    void ApplyBloodyEffectsOnMesh(class UMeshComponent* MeshComponent);
    void SprayBloodToCharactersInRadius(double Value, TEnumAsByte<EBloodSplatterType::Type> NewBloodyType, double MaxDistance, FVector ActorHitLocation);
    void Check For Invulnerability Buff(const class UDamageType* DamageType, bool& Success);
    bool IsAlive();
    void UpdateInternalStates();
    void Local_RespawnResetSequence();
    void DoVomitingSequence(bool& Vomitted);
    void Local_StopMinigame(bool PlayAlarm);
    void OnRep_IsShieldBlocking();
    void IsFacingActorWithinBlockWindow(class AActor* ActorToCheck, bool& InBlockWindow);
    void ModifyFriendlyFireDam();
    void LocalUpdateJumpHeight();
    bool Player Is Solo Player();
    void OnRep_UsingZipline();
    void OnRep_CurrentLadder();
    void UpdatePitchAndYaw();
    void OnRep_Yaw();
    void OnRep_Pitch();
    void OnRep_WalkSpeed_Modifiers();
    void ModifyStat_Radiation(double RadiationChange, bool SkipResistance);
    void OnRep_CurrentRadiationBeingReceived();
    void OnRep_CurrentRadiation();
    void CheckForRadiationDebuffs();
    void Timer_ComputeRadiation();
    void CheckForTemperatureDebuffs(double TemperatureChange);
    void Set New Ambient Temperature(int32 Value);
    void Timer_ComputeBodyTemperature();
    void Tick_CheckOnGroundBelowLadder();
    void ToggleLadderClimbing(bool BeginClimb, class ADeployed_Ladder_ParentBP_C* Ladder);
    void Can Grab Character(class AAbiotic_Character_ParentBP_C* CharacterToGrab, bool& Success);
    void DropHoldingCharacter();
    void Server_PerformGrabHoldSequence(class AAbiotic_Character_ParentBP_C* CharacterToSeize);
    void Tick_CheckForGrabOverlap(bool& SuccessfulGrab);
    void OnRep_GrabbedByCharacter();
    void ToggleGrabStatePhysics(bool Grabbed);
    void FindBestClosestSeatToCharacter(TArray<class USceneComponent*>& Seats, TArray<bool>& Seats Occupied, FVector WorldPosition, int32& Cloest Seat Index);
    void ProcessLipsync(float EnvelopeValue);
    void CreateLipsyncDevice();
    void ToggleLipsync(bool On);
    void Do Bullet Impact FX(FVector HitLocation, FRotator HitNormalRotation, class AActor* HitActor, class UActorComponent* Hit Component, const FVector EndTrace, const TSubclassOf<class UDamageType> DamageType, class UPhysicalMaterial* PhysicalMaterial, FName HitBone);
    void EndMeleeSwingArc();
    void Tick_ProcessMeleeSwingArc();
    void CheckFriendlyAllyOrHostile(const class APawn* PawnToTest, bool& Friend, double& DamageMultiplier);
    void ReceivedNewBed();
    void OnRep_CurrentBed();
    void IsDeadOrDBNO?(bool OnlyCheckForDead, bool& TRUE);
    void FindArmorOnLimb(EBodyLimbs Limb, const class UAbiotic_DamageType_ParentBP_C* DamageType, double& DamageBlockedByArmor, TEnumAsByte<E_InventorySlotType::Type>& GearSlot);
    void Server_HealRandomLimb(double AmountToHeal, bool& Success);
    void Timer_HealthRegen();
    void AddToContinencePool(double Amount);
    void CheckForContinenceDebuffs(double ContinenceChange);
    void Timer_ComputeContinence();
    void StopSleepSit_Safe();
    void ToggleLocalPlayerSittingFX();
    void OnRep_CurrentSeat();
    void OnRep_IsDrivingVehicle();
    void CheckForThirstDebuffs(double ThirstChange, EBuffSeverity& SeverityLevel);
    void CheckForHungerDebuffs(double HungerChange, EBuffSeverity& SeverityLevel);
    void CheckForFatigueDebuffs(double FatigueChange);
    void FindDamageSeverity(double Damage, const class UAbiotic_DamageType_ParentBP_C* DamageType, bool& Severe, TEnumAsByte<ECriticalityLevels::Type>& Severity);
    void Damage Try Apply Limb Specific Debuff(double Damage, const class UAbiotic_DamageType_ParentBP_C* DamageType, EBodyLimbs DamagedLimb, class AActor* DamageCauser, bool& AppliedDebuff);
    void LocalUpdateWalkSpeed();
    void OnRep_IsSittingInSeat();
    void FindBoneInHeriarchy(const TArray<FName>& ArrayOfParentBones, const FName& BoneToCheck, bool& IsChild);
    void Create Blood Splatter Decal(FVector ActorHitLocation, FRotator ActorHitAngle, double MaxDistance, bool& Created);
    void OnRep_SeizedByComponent();
    void Timer_Sleeping();
    void OnRep_IsSleeping();
    void Calculate Target Body Temperature();
    void ModifyStat_Continence(double ContinenceChange);
    void ModifyStat_Fatigue(double FatigueChange);
    void ModifyStat_Stamina(double StaminaChange);
    void ModifyStat_Hunger(double HungerChange, bool AddToContinence_);
    void ModifyStat_Thirst(double ThirstChange, bool AddToContinence);
    void OnRep_SelectedDeathAnimation();
    void LocalPerformDeathSequence();
    void Get Bleedout Percentage Remaining(double& Percent);
    void SetLocalHealthFX();
    void Is Locally Controlled Abiotic Character(bool& TRUE);
    void OnRep_CurrentBleedoutTime();
    void Server_Elapse_Bleedout_Timer();
    void TryPickupItemAndFindBestSlotForIt(FDataTableRowHandle ItemRow, FAbiotic_InventoryChangeableDataStruct ChangeableData, bool& PickedUpEntireStack, int32& NumberOfItemsLeftOver);
    void OnRep_CurrentBodyTemperature();
    void All_PerformDeathSequence();
    void Server_PerformDeathSequence();
    void DamageAllNonZeroLimbs(double Damage, const class UDamageType* Damage Type, bool& LowHP);
    void GetCharacterEyesLocation(FVector& Location);
    void GetAllLimbStates(TEnumAsByte<ECriticalityLevels::Type>& Head, TEnumAsByte<ECriticalityLevels::Type>& Torso, TEnumAsByte<ECriticalityLevels::Type>& LeftArm, TEnumAsByte<ECriticalityLevels::Type>& RightArm, TEnumAsByte<ECriticalityLevels::Type>& LeftLeg, TEnumAsByte<ECriticalityLevels::Type>& RightLeg);
    void DistributeDamageThroughLimbs(FAbiotic_PointDamageStruct LastPointDamage, bool& KillCharacter);
    void FindBonesParentLimb(FName bone, class UPrimitiveComponent* HitComponent, EBodyLimbs& Limb);
    void TryDealLimbDamage(bool& DamageFailed);
    void GetAndSetTotalHealth(bool GetOnly, double& TotalHealth, bool& ZeroHeadHealth, double& MaxHealth);
    void OnRep_CurrentLeftLegHealth();
    void OnRep_CurrentRightLegHealth();
    void OnRep_CurrentRightArmHealth();
    void OnRep_CurrentLeftArmHealth();
    void OnRep_CurrentTorsoHealth();
    void OnRep_CurrentHeadHealth();
    bool IsCharacterExertingThemselves();
    void OnRep_CurrentFatigue();
    void OnRep_CurrentThirst();
    void OnRep_CurrentHunger();
    void Timer_IncreaseFatigue();
    void Timer_Decay_Thirst();
    void Timer_Decay_Hunger();
    void SetupCharacterTimers();
    void ToggleState_DownButNotOut(bool Begin (False=End));
    void OnRep_IsDBNO();
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void OnRep_IsDead();
    void UserConstructionScript();
    void ZiplineTimeline__FinishedFunc();
    void ZiplineTimeline__UpdateFunc();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void RagdollBlend__FinishedFunc();
    void RagdollBlend__UpdateFunc();
    void OnNotifyEnd_36BD4DEA4188FE842F97D7AD0779C927(FName NotifyName);
    void OnNotifyBegin_36BD4DEA4188FE842F97D7AD0779C927(FName NotifyName);
    void OnInterrupted_36BD4DEA4188FE842F97D7AD0779C927(FName NotifyName);
    void OnBlendOut_36BD4DEA4188FE842F97D7AD0779C927(FName NotifyName);
    void OnCompleted_36BD4DEA4188FE842F97D7AD0779C927(FName NotifyName);
    void OnLoaded_F1F3FD4240A8C8B1CCBEEA80B0E61B84(class UObject* Loaded);
    void OnLoaded_B113A9C04A3B0B14DD586C9A4020E470(class UObject* Loaded);
    void OnLoaded_7A85A32D47AFE9A3C2390E9B2A00FF99(class UObject* Loaded);
    void OnLoaded_388851DD4F0CB77F64CF28A80672A2CE(class UObject* Loaded);
    void OnLoaded_BE5A12E34F9D0A350B4F3AA42BA9A14B(class UObject* Loaded);
    void OnLoaded_C468ADAE4FCE81C956F267B3F4D350C2(class UObject* Loaded);
    void ApplyNewTemperature(float NewTemperature);
    void ThermalEmitterActiveUpdated(bool bActive);
    void DoActionToSensedTarget(bool SuccessfullySensed);
    void SetNewWandererNPC(class ANPC_Base_ParentBP_C* PotentialWanderer);
    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void Broadcast_DialogSpeak(TSoftObjectPtr<UDialogueWave> CueToPlay, TEnumAsByte<E_AudioImportance::Type> AudioImportance);
    void ReceiveBeginPlay();
    void Revive_From_DBNO(bool RespawnedFromDeath);
    void PlayThirdPersonMontage(bool LockInPlace, class UAnimMontage* MontageToPlay, bool HideHeldItemDuringAnim, float PlayRate, bool SecondaryUse);
    void ReceivePossessed(class AController* NewController);
    void Server_ToggleSleepState(bool GoToSleep, class ADeployed_Furniture_Bed_ParentBP_C* bed);
    void Toggle_SeizedByComponentState(class USceneComponent* AttachedToComponent);
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void Local_Play_DialogSpeak(class USoundBase* SoundToPlay, TEnumAsByte<E_AudioImportance::Type> AudioImportance);
    void Server_ToggleIsReloading(bool BeginReload, double ReloadDuration, const class AAbiotic_Item_ParentBP_C*& WeaponItem);
    void Broadcast_PlayReloadMontage();
    void Server_ToggleSitState(bool StartSitting, class AAbioticDeployed_Furniture_ParentBP_C* Seat);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void Broadcast_DoSuccessfulGrabAnimation();
    void OnLanded(const FHitResult& Hit);
    void SuccessfulGrab_CheckForAnimEnd();
    void Toggle_ZiplineUse(bool BeginZipline, class AZipline_C* Zipline);
    void Broadcast_TempZipLineSound(bool On);
    void TICK_DeathSequence_FallToGround();
    void Broadcast_BlockReaction();
    void BlockDamage_Event(double TotalDamageReceived, FVector DamageDirection, FHitResult Hit Result, class AActor* Instigator);
    void PlayVomitFX();
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void StartVomitTrace();
    void TryApplyVomitStainsDebuff();
    void OnStatModifiersUpdated();
    void TryDialogVoiceLine(EVoiceLineType VoiceLine, TEnumAsByte<E_AudioImportance::Type> AudioImportance);
    void Local_DamageBlocked();
    void Server_ImpactDamageFX(TSubclassOf<class UDamageType> Damage Class, FHitResult Hit);
    void Broadcast_ImpactDamageFX(TSubclassOf<class UDamageType> Damage Class, FHitResult Hit);
    void UpdateDisabledState();
    void FailedGrab_CheckForAnimEnd();
    void Broadcast_DoFailedGrabAnimation();
    void Broadcast_Play3DSoundEffect(class USoundBase* Sound, bool Attached, FVector UnattachedLocation, bool PlayForLocalPlayer);
    void Broadcast_NPCDialogMontagePlay(TSoftObjectPtr<UAnimMontage> MontageToPlay, double MontageDelay, bool LockedInPlaceMontage);
    void OnLevelVolumeEnter(class AAbioticLevelStreamingVolume* Volume);
    void OnLevelVolumeExit(class AAbioticLevelStreamingVolume* Volume);
    void Local_DoHitReaction();
    void DoHitReaction();
    void Server_RecentlyBlockedAttack();
    void ShowCharacterOutline(int32 StencilValue, double Duration, bool NoExpiration);
    void Broadcast_DialogSpeakLegacy(TSoftObjectPtr<USoundBase> CueToPlay, TEnumAsByte<E_AudioImportance::Type> AudioImportance);
    void DialogSpeak(class USoundBase* CueToPlay, TEnumAsByte<E_AudioImportance::Type> Importance);
    void OnCharacterSpeakingStart();
    void DelayedRagdollImpulse();
    void Broadcast_SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, float Duration, float SimulateTime);
    void ActivateRagdollBlend();
    void PlayColdBreathFX(double Temperature);
    void BndEvt__Abiotic_Character_ParentBP_ThermalReceiver_K2Node_ComponentBoundEvent_0_CurrentTemperatureUpdated__DelegateSignature(float NewTemperature);
    void PlaySurfaceHitSound(TEnumAsByte<EPhysicalSurface> surface, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, FVector Location);
    void Play2DHitSound(TEnumAsByte<EPhysicalSurface> surface, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType);
    void Request_TeleportToPortalDestination(FName PortalID, FText FailedTeleportMessage, class AActor* TeleportOrigin, bool IsTryingToTeleport);
    void Server_PoopOnFloor();
    void ExecuteUbergraph_Abiotic_Character_ParentBP(int32 EntryPoint);
    void TempResist_Changed__DelegateSignature();
    void OnGrabbed__DelegateSignature(class AAbiotic_Character_ParentBP_C* Character);
    void OnBlockReaction__DelegateSignature();
    void LevelStreamingVolumesUpdated__DelegateSignature();
    void Continence_Changed__DelegateSignature();
    void WasShoved__DelegateSignature(class AAbiotic_Character_ParentBP_C* Shover);
    void ZiplineState_Changed__DelegateSignature();
    void IncomingRadiation_Changed__DelegateSignature();
    void Radiation_Changed__DelegateSignature();
    void SleepSitState_Changed__DelegateSignature();
    void DeadAlive_Changed__DelegateSignature(class AAbiotic_Character_ParentBP_C* Character);
    void BodyTemp_Changed__DelegateSignature();
    void Stamina_Changed__DelegateSignature();
    void Fatigue_Changed__DelegateSignature();
    void Thirst_Changed__DelegateSignature();
    void Hunger_Changed__DelegateSignature();
    void DBNOState_Changed__DelegateSignature(class AAbiotic_Character_ParentBP_C* Character);
    void Health_Changed__DelegateSignature();
}; // Size: 0x1408

#endif
