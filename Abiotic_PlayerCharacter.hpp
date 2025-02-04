#ifndef UE4SS_SDK_Abiotic_PlayerCharacter_HPP
#define UE4SS_SDK_Abiotic_PlayerCharacter_HPP

class AAbiotic_PlayerCharacter_C : public AAbiotic_Character_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1460 (size: 0x8)
    class UBodyShieldComponent_Player_C* BodyShieldComponent_Player;                  // 0x1468 (size: 0x8)
    class USkeletalMeshComponent* BodyShieldMesh;                                     // 0x1470 (size: 0x8)
    class UNiagaraComponent* UnderwaterParticle;                                      // 0x1478 (size: 0x8)
    class USceneComponent* FP_MouthLocation;                                          // 0x1480 (size: 0x8)
    class USkeletalMeshComponent* FPLeg_Suit;                                         // 0x1488 (size: 0x8)
    class UCameraComponent* ThirdPersonCamera;                                        // 0x1490 (size: 0x8)
    class USpringArmComponent* EmoteSpringArm;                                        // 0x1498 (size: 0x8)
    class UNiagaraComponent* ActiveWeatherParticle;                                   // 0x14A0 (size: 0x8)
    class UAudioComponent* FP_HazmatBreathAudio;                                      // 0x14A8 (size: 0x8)
    class UStaticMeshComponent* FPSuitWindow;                                         // 0x14B0 (size: 0x8)
    class UAbiotic_TransmogInventoryComp_C* TmogInventory;                            // 0x14B8 (size: 0x8)
    class UChildActorComponent* NearbyOverlapActor;                                   // 0x14C0 (size: 0x8)
    class USkeletalMeshComponent* FPLeg_Armor;                                        // 0x14C8 (size: 0x8)
    class UChildActorComponent* RadioactiveActor;                                     // 0x14D0 (size: 0x8)
    class USpotLightComponent* HeadlampSpotlight;                                     // 0x14D8 (size: 0x8)
    class UPostProcessComponent* HeadlampPostProcessing;                              // 0x14E0 (size: 0x8)
    class UPostProcessComponent* PlayerPostProcess;                                   // 0x14E8 (size: 0x8)
    class UChildActorComponent* DeployableOverlapActor;                               // 0x14F0 (size: 0x8)
    class UStaticMeshComponent* ScopePlane_R;                                         // 0x14F8 (size: 0x8)
    class UStaticMeshComponent* ScopePlane_L;                                         // 0x1500 (size: 0x8)
    class UStaticMeshComponent* ScopePlane_Bot;                                       // 0x1508 (size: 0x8)
    class UStaticMeshComponent* ScopePlane_Top;                                       // 0x1510 (size: 0x8)
    class UStaticMeshComponent* ScopePlane;                                           // 0x1518 (size: 0x8)
    class UPhysicsConstraintComponent* TrinketSwingConstraint;                        // 0x1520 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x1528 (size: 0x8)
    class USceneComponent* WaypointLocation;                                          // 0x1530 (size: 0x8)
    class UCameraComponent* FirstPersonCamera;                                        // 0x1538 (size: 0x8)
    class USceneComponent* CameraHeadJoint;                                           // 0x1540 (size: 0x8)
    class USkeletalMeshComponent* FPLegs;                                             // 0x1548 (size: 0x8)
    class UPointLightComponent* LanternLight;                                         // 0x1550 (size: 0x8)
    class UPointLightComponent* WristwatchLight;                                      // 0x1558 (size: 0x8)
    class USphereComponent* OverlapTrigger;                                           // 0x1560 (size: 0x8)
    class UAbiotic_CharacterProgressionComponent_C* CharacterProgressionComponent;    // 0x1568 (size: 0x8)
    class USkeletalMeshComponent* Armor_Suit;                                         // 0x1570 (size: 0x8)
    class USkeletalMeshComponent* Armor_Helmet;                                       // 0x1578 (size: 0x8)
    class UStaticMeshComponent* FannyPackMesh;                                        // 0x1580 (size: 0x8)
    class USkeletalMeshComponent* BeardMesh;                                          // 0x1588 (size: 0x8)
    class USkeletalMeshComponent* HeadAccessoryMesh;                                  // 0x1590 (size: 0x8)
    class USkeletalMeshComponent* HairMesh;                                           // 0x1598 (size: 0x8)
    class USkeletalMeshComponent* Armor_Legs;                                         // 0x15A0 (size: 0x8)
    class USkeletalMeshComponent* Armor_Arms;                                         // 0x15A8 (size: 0x8)
    class USkeletalMeshComponent* Armor_Torso;                                        // 0x15B0 (size: 0x8)
    class UWidgetInteractionComponent* WidgetInteraction;                             // 0x15B8 (size: 0x8)
    class USceneComponent* ProjectileSpawnLocation;                                   // 0x15C0 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x15C8 (size: 0x8)
    class UAbiotic_InventoryComponent_C* CharacterEquipSlotInventory;                 // 0x15D0 (size: 0x8)
    class UAbiotic_InventoryComponent_C* CharacterHotbarInventory;                    // 0x15D8 (size: 0x8)
    class USpotLightComponent* FlashlightSpotlight;                                   // 0x15E0 (size: 0x8)
    class USceneComponent* FPArmHinge;                                                // 0x15E8 (size: 0x8)
    class UWidgetComponent* Wristwatch;                                               // 0x15F0 (size: 0x8)
    class UStaticMeshComponent* TP_ItemInHand;                                        // 0x15F8 (size: 0x8)
    class UStaticMeshComponent* BackpackMesh;                                         // 0x1600 (size: 0x8)
    class USkeletalMeshComponent* FPArms;                                             // 0x1608 (size: 0x8)
    class USceneComponent* AimSwayNode;                                               // 0x1610 (size: 0x8)
    class USkeletalMeshComponent* PantsMesh;                                          // 0x1618 (size: 0x8)
    class USkeletalMeshComponent* TorsoMesh;                                          // 0x1620 (size: 0x8)
    class USpotLightComponent* CharacterPane_SpotLight;                               // 0x1628 (size: 0x8)
    class USceneCaptureComponent2D* CharacterPane_RenderTarget;                       // 0x1630 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x1638 (size: 0x8)
    class USceneComponent* ItemDropPoint;                                             // 0x1640 (size: 0x8)
    float FlashlightFlickerTimeline_NewTrack_0_5BF063A64DDA7C4244506CB7798A8C23;      // 0x1648 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FlashlightFlickerTimeline__Direction_5BF063A64DDA7C4244506CB7798A8C23; // 0x164C (size: 0x1)
    class UTimelineComponent* FlashlightFlickerTimeline;                              // 0x1650 (size: 0x8)
    float ControllerRecoilTimeline_NewTrack_0_AFC3F42148DFC42265088DA509116D45;       // 0x1658 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ControllerRecoilTimeline__Direction_AFC3F42148DFC42265088DA509116D45; // 0x165C (size: 0x1)
    class UTimelineComponent* ControllerRecoilTimeline;                               // 0x1660 (size: 0x8)
    float ADS_Zoom_Timeline_Alpha_DFE102FD4B24663C0400BEBF14D78F01;                   // 0x1668 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ADS_Zoom_Timeline__Direction_DFE102FD4B24663C0400BEBF14D78F01; // 0x166C (size: 0x1)
    class UTimelineComponent* ADS_Zoom_Timeline;                                      // 0x1670 (size: 0x8)
    float Timeline_1_DamageMultiplyValue_8328351944D630437C0EF497C55C7BAE;            // 0x1678 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_8328351944D630437C0EF497C55C7BAE; // 0x167C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x1680 (size: 0x8)
    float ScreenColorFlashTimeline_NewTrack_0_057EEB42441DFE6AC2A9AA9CD71EB08C;       // 0x1688 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ScreenColorFlashTimeline__Direction_057EEB42441DFE6AC2A9AA9CD71EB08C; // 0x168C (size: 0x1)
    class UTimelineComponent* ScreenColorFlashTimeline;                               // 0x1690 (size: 0x8)
    float WindUpDamageTimeline_DamageMultiplyValue_B321CE824694AB824DB932BA7CDEBA2B;  // 0x1698 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> WindUpDamageTimeline__Direction_B321CE824694AB824DB932BA7CDEBA2B; // 0x169C (size: 0x1)
    class UTimelineComponent* WindUpDamageTimeline;                                   // 0x16A0 (size: 0x8)
    float RecoilTimeline_NewTrack_0_7619EC7841CCE2A53A63A7841FB4C01D;                 // 0x16A8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> RecoilTimeline__Direction_7619EC7841CCE2A53A63A7841FB4C01D; // 0x16AC (size: 0x1)
    class UTimelineComponent* RecoilTimeline;                                         // 0x16B0 (size: 0x8)
    FVector SwayTimelineLoop_NewTrack_1_1E19F0E74CE5FFB6096EBC86C262A1F2;             // 0x16B8 (size: 0x18)
    TEnumAsByte<ETimelineDirection::Type> SwayTimelineLoop__Direction_1E19F0E74CE5FFB6096EBC86C262A1F2; // 0x16D0 (size: 0x1)
    class UTimelineComponent* SwayTimelineLoop;                                       // 0x16D8 (size: 0x8)
    double BaseTurnRate;                                                              // 0x16E0 (size: 0x8)
    double BaseLookUpRate;                                                            // 0x16E8 (size: 0x8)
    double CurrentWalkSpeed;                                                          // 0x16F0 (size: 0x8)
    class UW_PlayerInventory_Main_C* InventoryReference;                              // 0x16F8 (size: 0x8)
    bool IsInventoryOpen;                                                             // 0x1700 (size: 0x1)
    bool HUD_HiddenByUser;                                                            // 0x1701 (size: 0x1)
    FTimerHandle CharacterPane3DRotateTimer;                                          // 0x1708 (size: 0x8)
    FInventorySlotSelected_Struct CurrentHotbarSlotSelected;                          // 0x1710 (size: 0x10)
    int32 MaxHotbarSlotSelected;                                                      // 0x1720 (size: 0x4)
    bool IsDeployMode;                                                                // 0x1724 (size: 0x1)
    bool CanPlaceDeployableNow;                                                       // 0x1725 (size: 0x1)
    class AActor* BestInteractable_InteractA;                                         // 0x1728 (size: 0x8)
    FTimerHandle InteractionFinderTimer;                                              // 0x1730 (size: 0x8)
    class AAbiotic_PlayerState_C* MyPlayerState;                                      // 0x1738 (size: 0x8)
    double LastTimeFiredWeapon;                                                       // 0x1740 (size: 0x8)
    double TimeBetweenPunches;                                                        // 0x1748 (size: 0x8)
    bool Local_KeyHeld_Fire;                                                          // 0x1750 (size: 0x1)
    double PunchDamage;                                                               // 0x1758 (size: 0x8)
    bool TriggeredDeathMessageThisLife;                                               // 0x1760 (size: 0x1)
    class AAbiotic_PlayerController_C* MyPlayerController;                            // 0x1768 (size: 0x8)
    FHitResult CrosshairHit;                                                          // 0x1770 (size: 0xF8)
    double BulletSpread_Base;                                                         // 0x1868 (size: 0x8)
    FVector2D CrosshairOffset;                                                        // 0x1870 (size: 0x10)
    double BaseGunSway_Multiplier;                                                    // 0x1880 (size: 0x8)
    double CurrentGunSway_Speed;                                                      // 0x1888 (size: 0x8)
    FRotator AimSwayRotationCenter;                                                   // 0x1890 (size: 0x18)
    double AimRecoilAdditive;                                                         // 0x18A8 (size: 0x8)
    bool Local_KeyHeld_Interact;                                                      // 0x18B0 (size: 0x1)
    FTimerHandle InteractionHeldTimer;                                                // 0x18B8 (size: 0x8)
    double CurrentHoldToInteractTime;                                                 // 0x18C0 (size: 0x8)
    class AActor* BestInteractable_InteractB;                                         // 0x18C8 (size: 0x8)
    bool IsViewingWristwatch;                                                         // 0x18D0 (size: 0x1)
    bool Local_KeyHeld_Wristwatch;                                                    // 0x18D1 (size: 0x1)
    class UActorComponent* BestInteractableComponent;                                 // 0x18D8 (size: 0x8)
    int32 CurrentMoney;                                                               // 0x18E0 (size: 0x4)
    FAbiotic_PlayerCharacter_CMoney_Changed Money_Changed;                            // 0x18E8 (size: 0x10)
    void Money_Changed();
    class AAbiotic_Item_ParentBP_C* ItemInHand_BP;                                    // 0x18F8 (size: 0x8)
    FTimerHandle Stamina_Timer;                                                       // 0x1900 (size: 0x8)
    double Stamina_CheckRate;                                                         // 0x1908 (size: 0x8)
    double Stamina_DrainRate;                                                         // 0x1910 (size: 0x8)
    double Stamina_RegainRate;                                                        // 0x1918 (size: 0x8)
    double Stamina_ExertionDelay;                                                     // 0x1920 (size: 0x8)
    double LastHoldInteractionStartTime;                                              // 0x1928 (size: 0x8)
    double CurrentSanity;                                                             // 0x1930 (size: 0x8)
    double MaxSanity;                                                                 // 0x1938 (size: 0x8)
    class AAbioticActor_C* LastItemInHand_BP;                                         // 0x1940 (size: 0x8)
    FAbiotic_PlayerCharacter_CSanity_Changed Sanity_Changed;                          // 0x1948 (size: 0x10)
    void Sanity_Changed();
    bool PerformingInteraction;                                                       // 0x1958 (size: 0x1)
    bool LastInteractionWasTypeA;                                                     // 0x1959 (size: 0x1)
    class AActor* LastHoldInteractableAttempted;                                      // 0x1960 (size: 0x8)
    bool JustExecutedInteraction;                                                     // 0x1968 (size: 0x1)
    bool Debug_FreeCrafting;                                                          // 0x1969 (size: 0x1)
    bool Local_KeyHeld_AltFire;                                                       // 0x196A (size: 0x1)
    bool IsMeleeWindingUp;                                                            // 0x196B (size: 0x1)
    bool IsMeleeWindUpHeld;                                                           // 0x196C (size: 0x1)
    double CurrentMeleeDamageMultiplier;                                              // 0x1970 (size: 0x8)
    bool Flashlight_On;                                                               // 0x1978 (size: 0x1)
    double TimeLastWarnedFatigue;                                                     // 0x1980 (size: 0x8)
    double TimeLastWarnedThirst;                                                      // 0x1988 (size: 0x8)
    double TimeLastWarnedHunger;                                                      // 0x1990 (size: 0x8)
    FString OverheadName;                                                             // 0x1998 (size: 0x10)
    bool JustDeployed;                                                                // 0x19A8 (size: 0x1)
    bool TakeFallDamage;                                                              // 0x19A9 (size: 0x1)
    FVector StartOfLastFall;                                                          // 0x19B0 (size: 0x18)
    FInventorySlotSelected_Struct Server_LastSelectedHotbarItem;                      // 0x19C8 (size: 0x10)
    class UObject* LastMeshInFPHands;                                                 // 0x19D8 (size: 0x8)
    bool IsUsingTerminal;                                                             // 0x19E0 (size: 0x1)
    class AComputerTerminal_ParentBP_C* CurrentTerminal;                              // 0x19E8 (size: 0x8)
    FAbiotic_PlayerCharacter_CTerminalUseState_Changed TerminalUseState_Changed;      // 0x19F0 (size: 0x10)
    void TerminalUseState_Changed(bool UsingTerminal);
    double TimeOfLastDeath;                                                           // 0x1A00 (size: 0x8)
    double SittingEyeHeight;                                                          // 0x1A08 (size: 0x8)
    double Skill_AccuracyMultiplier_StartValue;                                       // 0x1A10 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_BackpackBP;                                     // 0x1A18 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_HelmetBP;                                       // 0x1A20 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_ArmsBP;                                         // 0x1A28 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_LegsBP;                                         // 0x1A30 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_SuitBP;                                         // 0x1A38 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_TorsoBP;                                        // 0x1A40 (size: 0x8)
    class UMeshComponent* CurrentFPItemMesh;                                          // 0x1A48 (size: 0x8)
    bool LocalJumpCooldownActive;                                                     // 0x1A50 (size: 0x1)
    bool Trait_FannyPack;                                                             // 0x1A51 (size: 0x1)
    double ArmorSlowMultiplier;                                                       // 0x1A58 (size: 0x8)
    bool Local_KeyHeld_Crouch;                                                        // 0x1A60 (size: 0x1)
    FInventorySlotSelected_Struct CurrentFPItemIndex;                                 // 0x1A68 (size: 0x10)
    FAbiotic_InventoryItemStruct CurrentHeldItemData;                                 // 0x1A78 (size: 0x650)
    bool CurrentHeldItemExists;                                                       // 0x20C8 (size: 0x1)
    TArray<class UActorComponent*> LastHighlightedInteractComponents;                 // 0x20D0 (size: 0x10)
    FText InteractWithText;                                                           // 0x20E0 (size: 0x10)
    bool IsPlugPlacementMode;                                                         // 0x20F0 (size: 0x1)
    class APowerSocket_ParentBP_C* CurrentPlugCableSocket;                            // 0x20F8 (size: 0x8)
    FTimerHandle SanityTimer;                                                         // 0x2100 (size: 0x8)
    double Sanity_CheckRate;                                                          // 0x2108 (size: 0x8)
    FTimerHandle LightValueTimer;                                                     // 0x2110 (size: 0x8)
    float LightValueCheckTime;                                                        // 0x2118 (size: 0x4)
    double LastAuditoryHallucination;                                                 // 0x2120 (size: 0x8)
    TArray<TSoftObjectPtr<USoundCue>> HallucinationSounds_Innocent;                   // 0x2128 (size: 0x10)
    TArray<TSoftObjectPtr<USoundCue>> HallucinationSounds_Hostile;                    // 0x2138 (size: 0x10)
    double PreviousRadiation;                                                         // 0x2148 (size: 0x8)
    FName CurrentPerformingEmote;                                                     // 0x2150 (size: 0x8)
    class UAnimMontage* LastKnownLoadedEmote;                                         // 0x2158 (size: 0x8)
    FEmote_Struct LastEmoteData;                                                      // 0x2160 (size: 0xC0)
    class UStaticMeshComponent* FPPlugMesh;                                           // 0x2220 (size: 0x8)
    double FallDamageResistance;                                                      // 0x2228 (size: 0x8)
    double MaxInventoryWeight;                                                        // 0x2230 (size: 0x8)
    FAbiotic_PlayerCharacter_CInventoryWeight_Changed InventoryWeight_Changed;        // 0x2238 (size: 0x10)
    void InventoryWeight_Changed();
    double DefaultMaxStamina;                                                         // 0x2248 (size: 0x8)
    double DefaultMaxInventoryWeight;                                                 // 0x2250 (size: 0x8)
    bool LanternLight_On;                                                             // 0x2258 (size: 0x1)
    FString Asset ID;                                                                 // 0x2260 (size: 0x10)
    FTimerHandle PlayerLocHandle;                                                     // 0x2270 (size: 0x8)
    FVector LastZiplineVelocity;                                                      // 0x2278 (size: 0x18)
    bool Noclip_On;                                                                   // 0x2290 (size: 0x1)
    int32 MeleeSwingIndex;                                                            // 0x2294 (size: 0x4)
    FMeleeSwingStyle_Struct ClientLastMeleeSwingStyleData;                            // 0x2298 (size: 0x80)
    class UDecalComponent* CrosshairDecal;                                            // 0x2318 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_HeadlampBP;                                     // 0x2320 (size: 0x8)
    bool HeadlampOn;                                                                  // 0x2328 (size: 0x1)
    class UW_RadialWheel_ParentBP_C* RadialWheel;                                     // 0x2330 (size: 0x8)
    FName ChosenEmote;                                                                // 0x2338 (size: 0x8)
    double CurrentJumpHeight;                                                         // 0x2340 (size: 0x8)
    FAbiotic_InventoryChangeableDataStruct Carryover Changeable Data;                 // 0x2348 (size: 0x118)
    class UW_PlayerHUD_RecipeVBox_C* RecipeUnlockVBox;                                // 0x2460 (size: 0x8)
    FTimerHandle SneakingXPTimer;                                                     // 0x2468 (size: 0x8)
    double DeadEyeHeight;                                                             // 0x2470 (size: 0x8)
    bool DangerousIngestionWarning;                                                   // 0x2478 (size: 0x1)
    double CrouchAlpha;                                                               // 0x2480 (size: 0x8)
    double CrouchInterpSpeed;                                                         // 0x2488 (size: 0x8)
    bool CanUseJetpack;                                                               // 0x2490 (size: 0x1)
    class UCurveFloat* JetpackCurve;                                                  // 0x2498 (size: 0x8)
    float AccsCameraShakeAmount;                                                      // 0x24A0 (size: 0x4)
    bool Ctrls_InvertYAxis;                                                           // 0x24A4 (size: 0x1)
    double Ctrls_MouseXSensitivity;                                                   // 0x24A8 (size: 0x8)
    FTimerHandle FireDelayTimer;                                                      // 0x24B0 (size: 0x8)
    float Axis Value Forward;                                                         // 0x24B8 (size: 0x4)
    bool LocalUsingAutoMove;                                                          // 0x24BC (size: 0x1)
    double Liquid Percentage Remains;                                                 // 0x24C0 (size: 0x8)
    TArray<class UAbiotic_InventoryComponent_C*> Additional Inventories;              // 0x24C8 (size: 0x10)
    bool PendingNonHotbarUsage;                                                       // 0x24D8 (size: 0x1)
    class UStaticMeshComponent* ClipboardMesh;                                        // 0x24E0 (size: 0x8)
    FString CurrentFPItemAssetID;                                                     // 0x24E8 (size: 0x10)
    TEnumAsByte<E_AnimInteractState::Type> InteractAnimationState;                    // 0x24F8 (size: 0x1)
    double Ctrls_MouseYSensitivity;                                                   // 0x2500 (size: 0x8)
    double Ctrls_GamepadXSensitivity;                                                 // 0x2508 (size: 0x8)
    double Ctrls_GamepadYSensitivity;                                                 // 0x2510 (size: 0x8)
    class UMaterialInstanceDynamic* CrosshairDecalMaterial;                           // 0x2518 (size: 0x8)
    FTimerHandle ProjectilePathTimer;                                                 // 0x2520 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_TrinketBP;                                      // 0x2528 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_WristwatchBP;                                   // 0x2530 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_HackingDeviceBP;                                // 0x2538 (size: 0x8)
    bool HasProcessedMeleeDurability;                                                 // 0x2540 (size: 0x1)
    class UStaticMesh* HologramArrowMesh;                                             // 0x2548 (size: 0x8)
    FVector WristwatchPointLightLocation;                                             // 0x2550 (size: 0x18)
    int32 LastSelectedHotbarSlot;                                                     // 0x2568 (size: 0x4)
    bool RangedWeaponInRange;                                                         // 0x256C (size: 0x1)
    bool Local_CrosshairHidden;                                                       // 0x256D (size: 0x1)
    bool IsWeaponThrowReady;                                                          // 0x256E (size: 0x1)
    bool IsWeaponThrowHeld;                                                           // 0x256F (size: 0x1)
    double CurrentThrowWeaponDistanceMultiplier;                                      // 0x2570 (size: 0x8)
    double AmbientTemp;                                                               // 0x2578 (size: 0x8)
    double CallForHelpStartTime;                                                      // 0x2580 (size: 0x8)
    class UMaterialInterface* DefaultLightFunction;                                   // 0x2588 (size: 0x8)
    bool UsingSniperScope;                                                            // 0x2590 (size: 0x1)
    bool CrosshairCenterNoSway;                                                       // 0x2591 (size: 0x1)
    bool UnderwaterFXActive;                                                          // 0x2592 (size: 0x1)
    class UStaticMesh* CurrentDeployHologram;                                         // 0x2598 (size: 0x8)
    double LadderUpDownBias;                                                          // 0x25A0 (size: 0x8)
    bool MeleeOnlyTargets;                                                            // 0x25A8 (size: 0x1)
    TArray<double> ArmorWeightClasses;                                                // 0x25B0 (size: 0x10)
    FRotator LastMeleeSwingRotation;                                                  // 0x25C0 (size: 0x18)
    class UMaterialInstanceDynamic* RadiationPostProcess;                             // 0x25D8 (size: 0x8)
    double RadiationPostProcessAlpha;                                                 // 0x25E0 (size: 0x8)
    bool ServerLevelLoaded;                                                           // 0x25E8 (size: 0x1)
    bool OwningLevelLoaded;                                                           // 0x25E9 (size: 0x1)
    class AAbiotic_PlayerFreezeJail_C* JailActor;                                     // 0x25F0 (size: 0x8)
    bool HeldItemIsCooking;                                                           // 0x25F8 (size: 0x1)
    double LastTimeCookingThrowable;                                                  // 0x2600 (size: 0x8)
    TArray<class USceneComponent*> ChildrenComponentsToDestroy;                       // 0x2608 (size: 0x10)
    float Axis Value Right;                                                           // 0x2618 (size: 0x4)
    bool HasRecentlyTeleported;                                                       // 0x261C (size: 0x1)
    FAbiotic_PlayerCharacter_COnHungerRestored OnHungerRestored;                      // 0x2620 (size: 0x10)
    void OnHungerRestored(double CurrentHunger);
    FAbiotic_PlayerCharacter_COnThirstRestored OnThirstRestored;                      // 0x2630 (size: 0x10)
    void OnThirstRestored(double CurrentThirst);
    class AItem_Gear_ParentBP_C* Gear_ShieldBP;                                       // 0x2640 (size: 0x8)
    bool ShieldHeld;                                                                  // 0x2648 (size: 0x1)
    double HotbarSlotChangedTimestamp;                                                // 0x2650 (size: 0x8)
    float RollStartTime;                                                              // 0x2658 (size: 0x4)
    FAbiotic_PlayerCharacter_CCharacter_Emoted Character_Emoted;                      // 0x2660 (size: 0x10)
    void Character_Emoted(FName EmoteRow);
    FRotator ScopeSwayRotation;                                                       // 0x2670 (size: 0x18)
    class UCurveVector* ScopeSwayCurve;                                               // 0x2688 (size: 0x8)
    double ScopeSwayTime;                                                             // 0x2690 (size: 0x8)
    double ScopeSwaySpeed;                                                            // 0x2698 (size: 0x8)
    bool SprintKeyHeld;                                                               // 0x26A0 (size: 0x1)
    bool ScopeHoldBreath;                                                             // 0x26A1 (size: 0x1)
    TArray<FBuffDebuffRowHandle> CurrentSetBonuses;                                   // 0x26A8 (size: 0x10)
    FAbiotic_PlayerCharacter_COnCurrentSetBonusesUpdated OnCurrentSetBonusesUpdated;  // 0x26B8 (size: 0x10)
    void OnCurrentSetBonusesUpdated(class AAbiotic_PlayerCharacter_C* OwningCharacter);
    bool DoingThrowAnimation;                                                         // 0x26C8 (size: 0x1)
    class UAudioComponent* DBNOHeartbeat;                                             // 0x26D0 (size: 0x8)
    bool IsSquinting;                                                                 // 0x26D8 (size: 0x1)
    double Last_ADS_FOV;                                                              // 0x26E0 (size: 0x8)
    FRotator RecoilTimelineStartRotation;                                             // 0x26E8 (size: 0x18)
    class UMaterialInstanceDynamic* CrosshairDecalMaterial_Shotgun;                   // 0x2700 (size: 0x8)
    class APowerSocket_ParentBP_C* LastPlugCableSocket;                               // 0x2708 (size: 0x8)
    TArray<FAbioticItemCount_Struct> CableRerouteCost;                                // 0x2710 (size: 0x10)
    double DistanceForSubtitles;                                                      // 0x2720 (size: 0x8)
    FTimerHandle Equip_ClearFireDelayTimer;                                           // 0x2728 (size: 0x8)
    bool TempShieldHolster;                                                           // 0x2730 (size: 0x1)
    FAbiotic_PlayerCharacter_COnShieldHeldUpdated OnShieldHeldUpdated;                // 0x2738 (size: 0x10)
    void OnShieldHeldUpdated(bool ShieldHeld);
    class UCurveFloat* LaserSightCurve_Pistol;                                        // 0x2748 (size: 0x8)
    class UCurveFloat* LaserSightCurve_Shotgun;                                       // 0x2750 (size: 0x8)
    FName CurrentItemRow;                                                             // 0x2758 (size: 0x8)
    bool Ctrls_ToggleSprint;                                                          // 0x2760 (size: 0x1)
    bool AccsStaticInteractPrompt;                                                    // 0x2761 (size: 0x1)
    bool IsFirstPerson;                                                               // 0x2762 (size: 0x1)
    bool EmoteShouldHideFP;                                                           // 0x2763 (size: 0x1)
    class UMaterialInstanceDynamic* Hot Post Process;                                 // 0x2768 (size: 0x8)
    class UCurveFloat* TemperatureUICurve;                                            // 0x2770 (size: 0x8)
    class UMaterialInstanceDynamic* Cold Post Process;                                // 0x2778 (size: 0x8)
    double CurrentTemperatureFXAlpha;                                                 // 0x2780 (size: 0x8)
    class UCurveFloat* TemperaturePPCurve;                                            // 0x2788 (size: 0x8)
    class UAudioComponent* UnderwaterSound;                                           // 0x2790 (size: 0x8)
    int32 CurrentWeaponBurstCounter;                                                  // 0x2798 (size: 0x4)
    bool FiringWeaponBurst;                                                           // 0x279C (size: 0x1)
    double Light_FlickeringIntensityLow;                                              // 0x27A0 (size: 0x8)
    double Light_DefaultIntensity;                                                    // 0x27A8 (size: 0x8)
    float Light_FlickerAlpha;                                                         // 0x27B0 (size: 0x4)
    bool LightFlickerEnabled;                                                         // 0x27B4 (size: 0x1)
    class UAudioComponent* ActiveNPCMusic;                                            // 0x27B8 (size: 0x8)
    double Lantern_DefaultIntensity;                                                  // 0x27C0 (size: 0x8)
    class AItem_Gear_ParentBP_C* Gear_Trinket2_BP;                                    // 0x27C8 (size: 0x8)
    bool IsCurrentlyOfferingItem;                                                     // 0x27D0 (size: 0x1)
    bool PagerOn;                                                                     // 0x27D1 (size: 0x1)
    double StaminaLoss_Jumping;                                                       // 0x27D8 (size: 0x8)
    FTimerHandle ReloadHeldTimer;                                                     // 0x27E0 (size: 0x8)
    FVector LastActorLocation;                                                        // 0x27E8 (size: 0x18)
    float Last AFKInput Time Stamp;                                                   // 0x2800 (size: 0x4)
    double TimeToAFK;                                                                 // 0x2808 (size: 0x8)
    FAbiotic_PlayerCharacter_COnGearVisualStatus_Updated OnGearVisualStatus_Updated;  // 0x2810 (size: 0x10)
    void OnGearVisualStatus_Updated();
    class UMeshComponent* ShieldComponent_TP;                                         // 0x2820 (size: 0x8)
    class UMeshComponent* ShieldComponent_FP;                                         // 0x2828 (size: 0x8)
    FAbiotic_PlayerCharacter_CAimDownSights_Changed AimDownSights_Changed;            // 0x2830 (size: 0x10)
    void AimDownSights_Changed(bool UsingSniperScope, bool IsSquinting);
    bool ShouldBlockCrouchInput;                                                      // 0x2840 (size: 0x1)

    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void CanUseSharedInteraction(bool& Can Use);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    bool IsRadioactive();
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void GetStoredString(FString& String);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void RequiresToolToDismantle(bool& Tool Required);
    void GetConstructionState(bool& UnderConstruction, double& PercentComplete);
    void GetItemChangeableData(FAbiotic_InventoryChangeableDataStruct& ChangeableData);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void HasSitLocations(bool& IsSittable);
    void SitLocations(TArray<FVector>& Locations);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void NPC_CanInteractWith(bool& Success);
    void PlayerExitLocations(int32 CurrentSeatIndex, TArray<FVector>& Locations);
    void ShootThroughOneSided(TArray<FHitResult>& Array, double BaseDamage, class AAbiotic_Weapon_ParentBP_C* Weapon, const TSubclassOf<class UDamageType> DamageType);
    bool CheckProjectileBlockOverridden(class AAbioticProjectile_ParentBP_C* Projectile, FHitResult& Hit);
    double ApplyGiantSlayerDamageMultiplier(double BaseDamage, class AActor* HitTarget);
    void Server_Elapse_Bleedout_Timer();
    void CanEnterDBNO(bool& Allowed);
    void GetCorrectReloadAnim(TSoftObjectPtr<UAnimMontage> BadReload, TSoftObjectPtr<UAnimMontage> NormalReload, TSoftObjectPtr<UAnimMontage> ExpertReload, int32 SkillTier, TSoftObjectPtr<UAnimMontage>& ValidAnim);
    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void IsPrimaryItemUseOnCooldown(bool SkipCooldown, class AAbiotic_Item_ParentBP_C* ItemToUse, bool& OnCooldown);
    void IsValidAimTargetInRange(FHitResult TreacResult, bool& InRange);
    void SetShieldAnimBP(class USkeletalMeshComponent* ShieldComponent);
    void Server Start Charge Player Inventory Item(FInventorySlotSelected_Struct InventorySlot, int32 ChargeAmount);
    void Get Current Gear Item BP(int32 Index, bool& Success, class AAbiotic_Item_ParentBP_C*& Blueprint);
    void Server_CheckForAFK();
    void GetWeaponProjectile(TSoftClassPtr<AAbioticProjectile_ParentBP_C>& ProjectileClass);
    void IsAnyRadialOpen(bool& RadialOpen);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void Get Current Pager Highlighted Components(TArray<class UActorComponent*>& Components);
    void ToggleSitState(bool StartSitting, class AAbioticDeployed_Furniture_ParentBP_C* Seat, bool IgnoreZLocation);
    void DoesCharacterOfferItem(bool& Offer Food);
    void OnRep_Gear_Trinket2_BP();
    void Evaluate TP Item Visibility(bool ForceVisible);
    void GetPerceivedTemperature(double& PerceivedTemperature);
    void IsAnyMenuOpen(bool& MenuOpen);
    void ClearBurstFire();
    void IncrementBurstFire(int32 BurstGoal);
    void GetHitscanDamageType(TSubclassOf<class UDamageType>& DamageType);
    void EvaluateEmoteVisibility();
    void GetHomingTarget(class AActor*& Target);
    void Change Ammo Type In Weapon(class UObject* WeaponBlueprint, int32 AmmoTypeIndex);
    bool IsMoving();
    void TickTemperaturePostProcess(double DeltaTime);
    void Init Temperature Post Process();
    void UpdateTemperatureResist();
    void UpdateFPMeshVisibility(FAbiotic_InventoryItemSlotStruct Item Slot Data);
    void Server Heavy Armor Debuff Check(int32 WeightClassValue);
    void Set TP Meshes Owner No See(bool View TP meshes);
    void Local_UpdateParticleVisibility(bool Force);
    void Local_UpdateWeatherParticle(class UNiagaraSystem* NewParticle);
    void FP_ToggleSuitFrame(bool SuitActive, bool StopBreathingAudio);
    void CheckHeldItemCache();
    void CheckEquipmentInventoryAchievement();
    void IsInvincible(bool& Return);
    void UpdateShieldGearState();
    void ServerUpdateEquippedGearState();
    FText GetCharacterName();
    void RecalculateSetBonuses();
    void ReduceInventoryItemsDurabilityOnRespawn(class UAbiotic_InventoryComponent_C*& Inventory);
    void SetupPlayerLootItems(const FVector CurrentDeathLocation);
    bool GetSpottability(double& Spottability, bool& Crouched);
    void UpdateItemActions();
    void SetFPAttachedCosmeticItemData(FAbiotic_InventoryItemSlotStruct SlotData);
    void OnRep_CurrentPlugCableSocket();
    void CanThrowGenericItem(FAbiotic_InventoryItemStruct& ItemData, bool& CanThrow);
    void DetermineRecoilOutcome(double RecoilFromWeapon, double& PitchPerkTick, double& YawPerTick);
    void LocalUseItem_Internal(class AAbiotic_Item_ParentBP_C* ItemToUse, bool SecondaryAction, bool SkipCooldown, double ItemUseMontageStartTime);
    void UpdateFPItemMesh();
    void AdditionalDeployStackCheck(class AActor* HitActor, bool& Success, FText& FailMessage);
    bool GetTargetPriority(TEnumAsByte<E_TargetPriority::Type>& Priority);
    bool InteractTraceCheck(const TArray<class AActor*>& ActorsToIgnore, class AActor*& HitActor, class UPrimitiveComponent*& HitComponent);
    void OnRep_CurrentSetBonuses();
    void Server Armor Set Bonuses Update(const FSetBonusRowHandle IncomingSetBonus);
    void DoVomitingSequence(bool& Vomitted);
    void TickScopeSway(double DeltaTime);
    FRotator GetFinalSwayRotation(FRotator& InRotation, FRotator& SwayRotation);
    double Get Instant Kill Damage(double OriginalDamage, bool SharpMeleeDamage?, class AActor* Hit Actor);
    void CanCrouchRoll?(bool& Can Roll);
    void Server Refresh New Inventory Weight();
    void GetBulletFireAngle(FVector MuzzleLocation, double MaximumHitscanRange, double MinSpread, double MaxSpread, bool Shotgun, FVector ForwardVector, double MaxCorrection, FVector& HitscanEnd, FVector& AimVector);
    void ToggleShieldVisibility(bool Hidden);
    void OnRep_ShieldHeld();
    bool HasShieldActive();
    void OnRep_Gear_ShieldBP();
    void CheckForThirstDebuffs(double ThirstChange, EBuffSeverity& SeverityLevel);
    void CheckForHungerDebuffs(double HungerChange, EBuffSeverity& SeverityLevel);
    void TryCloseRadialWheel(bool CommitAction, TSubclassOf<class UW_RadialWheel_ParentBP_C> Class, bool& WasClosed);
    void CheckNearbyCharactersForSimilarVoiceLine(EVoiceLineType LineType, bool& AllowedToSpeak);
    bool TeleportPlayer(FVector DestLocation, FRotator DestRotation, bool Force);
    void Targetable By Triggers(bool& Targetable);
    bool CanCurrentlyShieldBlock();
    void Server_TryScrapItem(FAbiotic_InventoryItemSlotStruct SlotData, class UAbiotic_InventoryComponent_C* Inventory, int32 Index, bool& Success, FString& DebugNote);
    void OnDrivingVehicleChanged();
    void OnCurrentSeatUpdated();
    void Can Plug Device(bool& Success, class AAbioticDeployed_ParentBP_C*& DeployedActor);
    void CheckHeldThrowableReleased(bool& ThrowableValid);
    void Tick_RadiationPostProcess();
    void InitRadiationPostProcess();
    void GetArmorWeightMovementClass(int32& WeightClass);
    void DetermineMeleeSwingTarget();
    void OnRep_HeadlampOn();
    void Local_CycleFlashlights(bool ItemInHandOnly);
    void GetDeployProxyFromItem(FName ItemRow, TSubclassOf<class ADeployProxy_ParentBP_C>& DeployProxy);
    void GetDeployProxy(bool& Success, class ADeployProxy_ParentBP_C*& Proxy);
    bool CanUseItemUnderwater(TEnumAsByte<E_UnderwaterUsage::Type> Usage);
    void TryAimDownSights(bool Begin, const FGameplayTagContainer& TagContainer);
    void CheckItemInPinnedRecipe(FName ItemToLookFor, bool& Exist, TArray<FName>& Recipes);
    bool IsUsingNonHotbar();
    void Local_ResetProjectilePath(bool EndPrediction);
    void Tick_ProcessWeaponThrow();
    void EndNonHotbarUsage();
    void GetDamageResistanceOnLimb(EBodyLimbs Limb, const class UDamageType* DamageType, double& DamageBlockedByArmor);
    void GetDamageResistanceFromGear(const class UDamageType* DamageType, class AItem_Gear_ParentBP_C* GearBP, double& DamageBlockedByArmor);
    void DropOverflowItem(FDataTableRowHandle ItemDataRow, FAbiotic_InventoryChangeableDataStruct ChangeableData, int32 OverflowStack);
    void ApplyRevivedBuffs();
    void FindChildComponentWithTag(class USceneComponent* ParentComponent, FName Tag, class USceneComponent*& ComponentFound);
    void OnRep_Gear_HackingDeviceBP();
    void OnRep_Gear_WristwatchBP();
    void OnRep_Gear_TrinketBP();
    void Server_TrySwapItems(class UAbiotic_InventoryComponent_C* Inventory1, int32 SlotIndex1, class UAbiotic_InventoryComponent_C* Inventory2, int32 SlotIndex2);
    void Check Held Weapon Released(bool& ShouldFire);
    void CheckHeldWeaponPressed(bool& ConsumedByWeapon);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    void Get MouthFX New Attach Location(FName AttachPointToLookFor, class USceneComponent*& AttachToComponent, FName& AttachPointName, FVector& Location, FRotator& Rotation);
    void OnRep_InteractAnimationState();
    void CreateInventoryWidget();
    TSoftObjectPtr<UStaticMesh> GetCorrectItemMesh(FAbiotic_InventoryItemSlotStruct& SlotData, TSoftObjectPtr<UStaticMesh> ItemMesh, bool DeployMode, FGameplayTagContainer& ItemTags);
    void UpdateTPItemMesh(bool Force);
    void UpdateFiredWeaponTimeFromEquip(double EquipDuration);
    void IsTutorialPanelActive(bool& Active);
    void LadderMove(double Input);
    void HasSkillPerksForMeleeThrowOrWindupSwing(TEnumAsByte<E_CharacterSkills::Type> SkillToLookFor, bool& Success);
    void DeathAnalytics();
    void OnRep_CanUseJetpack();
    void CableRecursionTest(class AActor* Actor, class AActor* Target, bool& Valid);
    FVector GetJetpackVelocity(const FVector& InitialVelocity, const FVector& FallingVelocity, const float JetpackStartTime, const float DeltaTime);
    class USceneComponent* GetTetherAttachComponent();
    void Start Apply Blood Stains();
    void ClearCurrentMeshMaterials(class UMeshComponent* Mesh);
    void Get Equipped Gear Mesh Component(TEnumAsByte<E_InventorySlotType::Type> GearSlot, class UMeshComponent*& GearMeshComponent);
    void Local Toggle Ingestion Warning(bool Show, bool Lethal, bool InteractA, TEnumAsByte<E_DangerousActPrompt::Type> DangerousActType);
    void IsItemHarmfulToUse?(TArray<FName>& Debuffs, TEnumAsByte<E_LiquidType::Type> LiquidType, TArray<FAbioticItemCount_Struct>& Ingredients, bool& Dangerous, bool& Lethal);
    void Local_RespawnResetSequence();
    void ResetCameraHeightToDefault();
    void Update Head Joint Location Rotation();
    void SetFPArmSkinTone(TEnumAsByte<E_SkinTones::Type> SkinTone);
    void CheckForStealthAttackBonusDamage(double Base Damage, class AActor* Hit Target, bool& ReceivedBonusDamage, double& TotalDamageToApply);
    void OnRep_SensedByAI();
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void LocalPerformDeathSequence();
    void Local Destroy Child Component(class USceneComponent* Component, FName ComponentTag, bool DestroyAll, bool bIncludeAllDescendants, bool& Destroyed);
    void LocalSafe_EndBlocking();
    void SetAttachedTextureOverride(class UMeshComponent* Mesh, const FAbiotic_InventoryItemSlotStruct Slot Data, bool& Success);
    void Server Drop Item On The Ground(const FAbiotic_InventoryItemSlotStruct& ItemSlotData);
    void ResetCrosshairToDefault();
    void Try Fill Out Stack In Inventory(FDataTableRowHandle Item To Look For, FAbiotic_InventoryChangeableDataStruct Changeable Data, class UAbiotic_InventoryComponent_C* Inventory To Avoid, bool& Success, FAbiotic_InventoryChangeableDataStruct& Updated Changeable Data, int32& Updated Leftover);
    void Local Execute Pager Event(class AActor* LinkedActor);
    void OnRep_CurrentJumpHeight();
    void LocalUpdateJumpHeight();
    void Locate Items In Player Inventory(FDataTableRowHandle Item To Look For, bool In Hotbar, bool In Backpack, bool In Container, bool In EquipmentSlots, bool Check Only, bool FindTagOnly, FGameplayTag ItemTagToLookFor, bool& Success, class UAbiotic_InventoryComponent_C*& Inventory, int32& InventoryIndex, FAbiotic_InventoryItemSlotStruct& Item Found, TArray<class UAbiotic_InventoryComponent_C*>& Inventory List);
    void OnRep_Gear_HeadlampBP();
    void CheckItemRequirements(const TArray<FDataTableRowHandle>& RequiredItemUseFlags, bool PrimaryUse, bool& RequirementsMet, FText& PopupText, bool& HeavyWeapon);
    void Calculate Next Melee Data(FDataTableRowHandle WeaponMeleeSwingDataRow, bool IsUnarmedAttack, bool IsWindupEnd, double DefaultWeaponRange, FGameplayTagContainer GameplayTags, FMeleeingData_Struct& MeleeingData);
    void OnRep_Noclip_On();
    void Refresh Current Max Carry Weight();
    double Calculate Total Inventory Carry Weight();
    void Local Try Inventory Shortcut(EInventoryMode InventoryMode);
    void OnRep_LanternLight_On();
    void CorrectCharacterOrientation();
    void CheckForInventoryEncumberance();
    void UpdatePitchAndYaw();
    void GetInventoryWeightPercent(double& WeightPercent);
    void OnRep_MaxInventoryWeight();
    void Local_ToggleFPArms(bool Visible);
    void Server_PerformDeathSequence();
    void Client_EmoteEndSafe(bool& JustEndedEmote);
    bool IsPerformingEmote();
    void OnRep_CurrentPerformingEmote();
    void ToggleGrabStatePhysics(bool Grabbed);
    void ReportPlayerSoundToNPCs(float Loudness, double MaxRange);
    void Server_TryChangeValueInLiquidContainer(class UAbiotic_InventoryComponent_C* Inventory, int32 SlotIndex, int32 NewLiquidValue, TEnumAsByte<E_LiquidType::Type> LiquidType, FName OptionalItemRow, bool& Success);
    void IsUsingVehicle(bool& TRUE, class AActor*& Vehicle, class AVehicle_Seat_Passenger_C*& VehicleSeat, bool& IsDriver);
    void Tick_ProcessMeleeSwingArc();
    void Timer_ComputeLightValue();
    void Update Gear Visual Status(TEnumAsByte<E_InventorySlotType::Type> EquipSlot);
    void AddToContinencePool(double Amount);
    void CheckForSanityDebuffs();
    void Timer_ComputeSanity();
    void Toggle_PlugPlacementMode(class APowerSocket_ParentBP_C* PowerPlugSocket, bool PlugModeActive, bool AttemptReroute, bool SkipHotbarReset, bool FromOnRep);
    void Tick_PlayerLookAtCheck(class AAbiotic_Character_ParentBP_C*& LookingAtCharacter, float& MaxDistance);
    void CanBeCarbuncled(bool& Success);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void IsHoldingLiquidContainer(bool& LiquidContainer, TEnumAsByte<E_LiquidType::Type>& CurrentLiquidType, int32& CurrentFillAmount, int32& MaxFillAmount, TArray<TEnumAsByte<E_LiquidType::Type>>& AllowedLiquids, FAbiotic_InventoryItemSlotStruct& ItemSlotInfo, FAbiotic_InventoryItemStruct& ItemData);
    void IsHoldingFarmableItem(bool& FarmItem);
    void IsHoldingCookableItem(bool& Cookware, bool& cookable);
    void Server_TryIncreaseItemDurability(class UAbiotic_InventoryComponent_C* Inventory, int32 SlotIndex, double DurabilityGainAmount, bool ConsumeItemToRepair);
    void RefreshOverallDebuffState();
    void Attach Logic Actor and Hide It(class AActor* LogicActor);
    void OnRep_Trait_FannyPack();
    void Local_SendCustomizationToServer();
    void Get Jump Cooldown(double& JumpCooldownDuration);
    void PlayReloadAnimation();
    void PlayItemUseAnimation(bool Secondary Use Anim, double InTimeToStartMontageAt);
    void PlayLinkedFPMontage(TSoftObjectPtr<UAnimMontage> ItemMontage, TSoftObjectPtr<UAnimMontage> FPArmMontage, float InTimeToStartMontageAt, float InPlayRate, double& Duration);
    void Server_CheckForGearRemoval();
    void Server_SpawnLogicItemForGear(FAbiotic_InventoryItemSlotStruct SlotData, FAbiotic_InventoryItemStruct ItemToSpawn, TEnumAsByte<E_InventorySlotType::Type> Gear Slot Type, bool& Success);
    void OnRep_Gear_TorsoBP();
    void OnRep_Gear_SuitBP();
    void OnRep_Gear_LegsBP();
    void OnRep_Gear_ArmsBP();
    void OnRep_Gear_HelmetBP();
    void OnRep_Gear_BackpackBP();
    void UpdateSkillStat(TEnumAsByte<E_CharacterSkills::Type> SkillToUpdate);
    void Server_TryAwardSkillXPOnTargetable(const class UObject* TargetableActor, double Amount, bool Melee, bool Ranged, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageType, bool& Success);
    void DoesAwardSkillXPWhenHit(bool& MeleeXP, bool& RangedXP, double& XPMultiplier);
    void ToggleLocalPlayerSittingFX();
    void LocalUpdateWalkSpeed();
    void ToggleState_DownButNotOut(bool Begin (False=End));
    void All_PerformDeathSequence();
    void OnRep_IsUsingTerminal();
    bool Server_TryReduceItemDurability(class UAbiotic_InventoryComponent_C*& Inventory, int32 SlotIndex, double DurabilityLossAmount, bool ForceDurabilityLoss);
    void GetCurrentWeaponAmmoCount(int32& AmmoInGunMagazine, bool& IsWeaponThatUsesAmmo);
    void ConsumeItemOfSpecificCount(FName ItemToConsume, int32 Count);
    void TryReloadGunMagazine(bool SkipAmmoConsumption, bool& Success);
    void ConsumeAmmunitionInWeapon(class UObject* WeaponBlueprint, int32 Amount, bool Force, bool& AmmoConsumed);
    void GetLocalPlayerHUD(bool& Success, class UW_PlayerHUD_Main_C*& PlayerHUDRef);
    void TryApplyFallDamage(double Distance, FHitResult Hit, bool ClientSideCalculationOnly, bool& AppliedFallDamage, int32& Severity);
    void Local Owner Safe Turn Off Light(bool ForceFlashlightOrLanternOff, bool ForceHeadlampOff);
    void OnRep_Flashlight_On();
    void ConsumeCraftingRecipe(TArray<FAbioticItemCount_Struct>& ItemsToConsume, TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, bool& Consumed, FAbiotic_InventoryChangeableDataStruct& CarryoverChangeableData, double& LiquidPercentageRemains, double& DurabilityPercentage, bool& HasCarryoverData);
    void DoesInventoryContainItem(FDataTableRowHandle Item, int32 RequiredCount, bool IncludeHotbarItems, bool IncludeEquippedItem (unavailable), TArray<class UAbiotic_InventoryComponent_C*>& AdditionalInventories, bool ShouldCheckHotbarFirst?, bool& ContainsItem, int32& CountFound);
    void FindBestItemDropLocation(FVector& ItemDropLocation, FRotator& ItemDropRotation);
    void FPArms_PushBackFromWall();
    void FPArms_ToggleWristwatch(bool Show);
    void ModifyStat_Sanity(double Value, bool NoResilienceXP);
    void GetCurrentSanityLevel(TEnumAsByte<E_SanityLevels::Type>& SanityLevel, double& Sanity);
    void UpdateSanityFX();
    void OnRep_CurrentSanity();
    void RefreshHotbarState();
    void Server_SpawnLogicItemInHotbar(bool InHand);
    void OnRep_CurrentHotbarSlotSelected();
    void Toggle_HUDHoldInteract(bool StartAndShow, bool TypeA);
    void Local_GetPointAtCrosshair(bool& Success, FVector& HitLocation, FRotator& RotationAwayFromCamera);
    void Timer_StaminaManager();
    void OnRep_ItemInHand_BP();
    void OnRep_CurrentMoney();
    void CanInteractRightNow(bool& CanInteract);
    void Tick_DynamicAimingCrosshair(double DeltaTime);
    void GetCrosshairAimLocation(bool& CenterCrosshair, bool& HideCrosshair, bool& HitSomething, bool& RequireAmmo, bool& OutOfRange, FHitResult& OutHit, FRotator& RotationAwayFromCamera, bool& IsShotgun, FVector& OutEndTrace);
    void Local Do Ranged Attack(bool InitialTriggerPull, bool& Success, double& TimeBetweenShots);
    void RespawnPlayerCharacter(bool RevivedOnSpot, bool UsePlayerStartOnly, FName DestinationID, bool& Success);
    void SetLocalHealthFX();
    void Server Drop or Destroy Item(class UAbiotic_InventoryComponent_C* Inventory, bool DestroyItem, int32 NumberOfItem, int32 Index, bool SkipAmmoUnload);
    void FindBestInteractableTarget();
    void GetCurrentHeldItem(bool& Success, FAbiotic_InventoryItemSlotStruct& ItemSlotInfo, FAbiotic_InventoryItemStruct& ItemData, class AAbiotic_Item_ParentBP_C*& Blueprint);
    void PrintScreenDebugText(FString Prefix, FString Message, double Duration, TEnumAsByte<ECriticalityLevels::Type> Severity);
    void UpdateInventorySlot(class UAbiotic_InventoryComponent_C* Inventory, const FAbiotic_InventoryItemSlotStruct& NewItemSlotInfo, int32 Index, class UAbiotic_InventoryComponent_C* OriginInventory, int32 OriginSlot);
    void GetItemInSlot(class UAbiotic_InventoryComponent_C* Inventory, int32 Index, bool& Success, FAbiotic_InventoryItemSlotStruct& SlotData, FAbiotic_InventoryItemStruct& ItemData, TEnumAsByte<E_InventorySlotType::Type>& AlternateSlotType);
    void RefreshSelectedHotbarSlot(class UAbiotic_InventoryComponent_C* Inventory, int32 Index, bool JustRefreshCurrent, bool Sound, bool SkipEquip, bool Holster);
    void ToggleInventory(bool ForceClose, EInventoryMode InventoryMode, TArray<FDataTableRowHandle>& CraftingBenchesAvailable, class UAbiotic_InventoryComponent_C* ContainerInventoryComponent, bool CustomUIKeyboardFocus);
    void TryPickupItemAndFindBestSlotForIt(FDataTableRowHandle ItemRow, FAbiotic_InventoryChangeableDataStruct ChangeableData, bool& PickedUpEntireStack, int32& NumberOfItemsLeftOver);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void OnRep_CurrentWalkSpeed();
    bool IsLocalCharacter();
    void LockoutControlCheck(bool& Locked);
    void UserConstructionScript();
    void SwayTimelineLoop__FinishedFunc();
    void SwayTimelineLoop__UpdateFunc();
    void RecoilTimeline__FinishedFunc();
    void RecoilTimeline__UpdateFunc();
    void ControllerRecoilTimeline__FinishedFunc();
    void ControllerRecoilTimeline__UpdateFunc();
    void ADS_Zoom_Timeline__FinishedFunc();
    void ADS_Zoom_Timeline__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void WindUpDamageTimeline__FinishedFunc();
    void WindUpDamageTimeline__UpdateFunc();
    void ScreenColorFlashTimeline__FinishedFunc();
    void ScreenColorFlashTimeline__UpdateFunc();
    void FlashlightFlickerTimeline__FinishedFunc();
    void FlashlightFlickerTimeline__UpdateFunc();
    void InpActEvt_ToggleHUD_K2Node_InputActionEvent_49(FKey Key);
    void InpActEvt_AutoMove_K2Node_InputActionEvent_48(FKey Key);
    void OnNotifyEnd_2B9D8A6D42F9A71A0D19028CCB72563A(FName NotifyName);
    void OnNotifyBegin_2B9D8A6D42F9A71A0D19028CCB72563A(FName NotifyName);
    void OnInterrupted_2B9D8A6D42F9A71A0D19028CCB72563A(FName NotifyName);
    void OnBlendOut_2B9D8A6D42F9A71A0D19028CCB72563A(FName NotifyName);
    void OnCompleted_2B9D8A6D42F9A71A0D19028CCB72563A(FName NotifyName);
    void OnLoaded_9938F99E45BB6A11360C9AAE396331F5(class UObject* Loaded);
    void OnLoaded_B0D915FC491F2A693B723C896F9C800A(UClass* Loaded);
    void OnLoaded_39DD499F406F08BD09CACA8A3180F3BB(class UObject* Loaded);
    void OnNotifyEnd_BBD5D9B8442376048FA24DB23317A44B(FName NotifyName);
    void OnNotifyBegin_BBD5D9B8442376048FA24DB23317A44B(FName NotifyName);
    void OnInterrupted_BBD5D9B8442376048FA24DB23317A44B(FName NotifyName);
    void OnBlendOut_BBD5D9B8442376048FA24DB23317A44B(FName NotifyName);
    void OnCompleted_BBD5D9B8442376048FA24DB23317A44B(FName NotifyName);
    void OnNotifyEnd_FDB459344455A86356DCD3BBA7B6AD95(FName NotifyName);
    void OnNotifyBegin_FDB459344455A86356DCD3BBA7B6AD95(FName NotifyName);
    void OnInterrupted_FDB459344455A86356DCD3BBA7B6AD95(FName NotifyName);
    void OnBlendOut_FDB459344455A86356DCD3BBA7B6AD95(FName NotifyName);
    void OnCompleted_FDB459344455A86356DCD3BBA7B6AD95(FName NotifyName);
    void OnLoaded_A0E0ABAC4DEFEA9620A80F8918A0708E(class UObject* Loaded);
    void OnNotifyEnd_F47423BB4AB8B3DA23C05CBB410263D4(FName NotifyName);
    void OnNotifyBegin_F47423BB4AB8B3DA23C05CBB410263D4(FName NotifyName);
    void OnInterrupted_F47423BB4AB8B3DA23C05CBB410263D4(FName NotifyName);
    void OnBlendOut_F47423BB4AB8B3DA23C05CBB410263D4(FName NotifyName);
    void OnCompleted_F47423BB4AB8B3DA23C05CBB410263D4(FName NotifyName);
    void OnNotifyEnd_C43FA06D4769D5BD983E2E9BB1D546F8(FName NotifyName);
    void OnNotifyBegin_C43FA06D4769D5BD983E2E9BB1D546F8(FName NotifyName);
    void OnInterrupted_C43FA06D4769D5BD983E2E9BB1D546F8(FName NotifyName);
    void OnBlendOut_C43FA06D4769D5BD983E2E9BB1D546F8(FName NotifyName);
    void OnCompleted_C43FA06D4769D5BD983E2E9BB1D546F8(FName NotifyName);
    void OnLoaded_2ADD28F447634840D068C4815BFF2C5A(class UObject* Loaded);
    void OnNotifyEnd_4C6689304F32775F431E1298A535B886(FName NotifyName);
    void OnNotifyBegin_4C6689304F32775F431E1298A535B886(FName NotifyName);
    void OnInterrupted_4C6689304F32775F431E1298A535B886(FName NotifyName);
    void OnBlendOut_4C6689304F32775F431E1298A535B886(FName NotifyName);
    void OnCompleted_4C6689304F32775F431E1298A535B886(FName NotifyName);
    void OnNotifyEnd_C6C1DED04D4FE89859006381B62BDF86(FName NotifyName);
    void OnNotifyBegin_C6C1DED04D4FE89859006381B62BDF86(FName NotifyName);
    void OnInterrupted_C6C1DED04D4FE89859006381B62BDF86(FName NotifyName);
    void OnBlendOut_C6C1DED04D4FE89859006381B62BDF86(FName NotifyName);
    void OnCompleted_C6C1DED04D4FE89859006381B62BDF86(FName NotifyName);
    void InpActEvt_AltFire_K2Node_InputActionEvent_47(FKey Key);
    void InpActEvt_AltFire_K2Node_InputActionEvent_46(FKey Key);
    void OnLoaded_38EF0B004471AE5E04F4CAA877976EBC(UClass* Loaded);
    void OnNotifyEnd_E97646A94B2A01A0DC6A828EB775D14E(FName NotifyName);
    void OnNotifyBegin_E97646A94B2A01A0DC6A828EB775D14E(FName NotifyName);
    void OnInterrupted_E97646A94B2A01A0DC6A828EB775D14E(FName NotifyName);
    void OnBlendOut_E97646A94B2A01A0DC6A828EB775D14E(FName NotifyName);
    void OnCompleted_E97646A94B2A01A0DC6A828EB775D14E(FName NotifyName);
    void OnLoaded_745173DE41443DD6EE5646A7D496BC56(class UObject* Loaded);
    void InpActEvt_RotateDeployable_K2Node_InputActionEvent_45(FKey Key);
    void InpActEvt_Fire_K2Node_InputActionEvent_44(FKey Key);
    void InpActEvt_Fire_K2Node_InputActionEvent_43(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_42(FKey Key);
    void InpActEvt_Jump_K2Node_InputActionEvent_41(FKey Key);
    void InpActEvt_InteractB_K2Node_InputActionEvent_40(FKey Key);
    void InpActEvt_InteractB_K2Node_InputActionEvent_39(FKey Key);
    void InpActEvt_InteractA_K2Node_InputActionEvent_38(FKey Key);
    void InpActEvt_InteractA_K2Node_InputActionEvent_37(FKey Key);
    void InpActEvt_InteractB_K2Node_InputActionEvent_36(FKey Key);
    void InpActEvt_InteractB_K2Node_InputActionEvent_35(FKey Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_34(FKey Key);
    void InpActEvt_Crouch_K2Node_InputActionEvent_33(FKey Key);
    void InpActEvt_Sprint_K2Node_InputActionEvent_32(FKey Key);
    void InpActEvt_Sprint_K2Node_InputActionEvent_31(FKey Key);
    void InpActEvt_Wristwatch_K2Node_InputActionEvent_30(FKey Key);
    void InpActEvt_Wristwatch_K2Node_InputActionEvent_29(FKey Key);
    void InpActEvt_Flashlight_K2Node_InputActionEvent_28(FKey Key);
    void InpActEvt_Flashlight_K2Node_InputActionEvent_27(FKey Key);
    void InpActEvt_ReloadWeapon_K2Node_InputActionEvent_26(FKey Key);
    void InpActEvt_ReloadWeapon_K2Node_InputActionEvent_25(FKey Key);
    void OnNotifyEnd_6D4E08B24AB9F4CA8DE16A9ABC70E719(FName NotifyName);
    void OnNotifyBegin_6D4E08B24AB9F4CA8DE16A9ABC70E719(FName NotifyName);
    void OnInterrupted_6D4E08B24AB9F4CA8DE16A9ABC70E719(FName NotifyName);
    void OnBlendOut_6D4E08B24AB9F4CA8DE16A9ABC70E719(FName NotifyName);
    void OnCompleted_6D4E08B24AB9F4CA8DE16A9ABC70E719(FName NotifyName);
    void OnLoaded_E5CB135C4BCA8C77425F6BB423D4B4A7(class UObject* Loaded);
    void OnLoaded_982B46AE4BEA2E8F8361C1983745A648(class UObject* Loaded);
    void InpActEvt_Emotes_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_Emotes_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_HotbarRadial_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_HotbarRadial_K2Node_InputActionEvent_21(FKey Key);
    void OnNotifyEnd_CC936B934512825D77A008983754EE1F(FName NotifyName);
    void OnNotifyBegin_CC936B934512825D77A008983754EE1F(FName NotifyName);
    void OnInterrupted_CC936B934512825D77A008983754EE1F(FName NotifyName);
    void OnBlendOut_CC936B934512825D77A008983754EE1F(FName NotifyName);
    void OnCompleted_CC936B934512825D77A008983754EE1F(FName NotifyName);
    void InpActEvt_Holster_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_Holster_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_CraftingPanel_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_SkillsPanel_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_HealthPanel_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_HealthPanel_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_HotbarSlot10_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_HotbarSlot9_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_Journal_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_DropItem_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_HotbarSlot8_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_HotbarSlot7_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_PreviousHotbarItem_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_NextHotbarItem_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_HotbarSlot6_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_HotbarSlot5_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_HotbarSlot4_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_HotbarSlot3_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_HotbarSlot2_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_HotbarSlot1_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Inventory_K2Node_InputActionEvent_0(FKey Key);
    void StopLaserHitUpdate(class ULaserComponent_C* Laser);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_B_LocalFX(bool Hold);
    void NPC_InteractWith(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void DeliverString(FString String, bool FromSave);
    void Actor Add to Cage(class AAbiotic_Character_ParentBP_C* OwningCharacter, class AActor* ActorToInteractWith, FAbiotic_InventoryItemSlotStruct SlotData);
    void Actor_RemoveFromCage(class AAbiotic_Character_ParentBP_C* OwningCharacter, FAbiotic_InventoryItemSlotStruct SlotData, FTransform ShootProjectileTransform, FTransform AttachedSocketTransform);
    void OnInteractHighlightStart(class UActorComponent* Component);
    void OnInteractHighlightEnd(class UActorComponent* Component);
    void DeliverInt(bool FromSave, const int32 New Int);
    void Set New Attached Power Cord(class UCableComponent* New Power Cord);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void DeliverDynamicProperty(bool FromSave, FDynamicProperty Property);
    void InteractTeleportUpdate(class AAbiotic_Character_ParentBP_C* InteractingCharacter, bool TryingToTeleport, bool TeleportSuccessful);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
    void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_181(float AxisValue);
    void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_192(float AxisValue);
    void Character_ToggleHUD(bool Show);
    void AutoRotateInventoryCam();
    void Client_DisplayWarningMessage(FText Text, TEnumAsByte<ECriticalityLevels::Type> Color, bool WarningBeep);
    void ToggleAimSway(bool Start);
    void TriggerRecoilTimelines(double Recoil);
    void Request_ModifyStamina(double StaminaChange, bool SetRecentlyExerted);
    void Client_Play2DSoundEffect(class USoundBase* Sound);
    void Client_AllowDeployAgain();
    void Request_Play3DSoundEffect(class USoundBase* Sound, bool Attached, FVector UnattachedLocation, bool PlayForLocalPlayer);
    void Client_TeleportFX(FLinearColor Color, double Duration, bool BetaEndNotice, bool NoSound);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void CheckForGearStateChange(int32 SlotIndex);
    void Client_EventDispatch_SkillUp(TEnumAsByte<E_CharacterSkills::Type> Skill, int32 NewLevel, bool GainedPerk);
    void ToggleGearVisibility(class UMeshComponent* GearMesh, FAbiotic_InventoryItemStruct ItemData);
    void SendPitchYawToServer();
    void Local_TryRandomHallucination(bool ForcePlay, TEnumAsByte<E_SanityLevels::Type> CurrentSanityLevel);
    void ReceiveUnpossessed(class AController* OldController);
    void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0(float AxisValue);
    void Client_DisplayItemErrorNotify(FText Text, bool WarningBeep);
    void BndEvt__Abiotic_PlayerCharacter_BuffDebuffComponent_K2Node_ComponentBoundEvent_1_OnCurrentBuffsUpdated__DelegateSignature(class UCharacterBuffComponent* BuffComponent);
    void Local_BeginPlay();
    void Server_OnLevelLoadUpdated(class ULevelStreaming* Level);
    void Owning_OnLevelLoadUpdated(class ULevelStreaming* Level);
    void EvaluatePlayerFreezeState();
    void Request_UpdateOwningLevelLoad(bool NewState);
    void Owning_EvaluateLoadingScreen();
    void UpdateDisabledState();
    void DestroyJail();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Server_LevelVolumesUpdated();
    void Owning_LevelVolumesUpdated();
    void OnNearbyCharacterTagsUpdated_Event();
    void DelayedTeleportCheck();
    void BndEvt__Abiotic_PlayerCharacter_BuffDebuffComponent_K2Node_ComponentBoundEvent_2_ReceivedNewBuff__DelegateSignature(FBuffDebuffRowHandle BuffDebuffRowHandle);
    void TryApplyVomitStainsDebuff();
    void Client_EvaluateLoadingScreen();
    void Client_RejectDeployPlacement(FText Text);
    void Request_InfectsPlayer();
    void CharacterVoiceStateChange(EAudioComponentPlayState PlayState);
    void FromVehicle_AutoMove();
    void PlayerRestart(class APawn* Pawn);
    void MoveForwardGamepad(float Val);
    void MoveRightGamepad(float Val);
    void PitchGamepad(float Val);
    void YawGamepad(float Val);
    void Request_UpdateInputTimestamp();
    void Local_TriggerAFKInput();
    void Radiation_Changed_Event();
    void Broadcast_ForcedRangedAttack(const TArray<FHitResult>& Hits, const TSubclassOf<class UDamageType> DamageType);
    void NotifyHitByHitscanRangedWeapon(const FHitResult& Hit, class AController* Instigator, class AActor* DamageCauser, double BaseDamage, TSubclassOf<class UDamageType> DamageType);
    void OverrideProjectileBlock(class AAbioticProjectile_ParentBP_C* Projectile, const FHitResult& Hit);
    void AltFire_PressedCheck();
    void Failsafe_ClearBurst();
    void CheckFireInputAfterAction();
    void Request_ClearPlugCableOnServer();
    void FireDelay_BeginMeleeAttack();
    void OnCharacterSpeakingStart();
    void Request_TryPlaceReroute(FTransform AtTransform, class APowerSocket_ParentBP_C* PowerSocket);
    void Local_CameraToggle_AimDownSights(double DesiredZoomFOV, bool ExitADS);
    void Request_UpdateScopeHoldBreath(bool HoldingBreath);
    void Stagger Target Stopping Power Chance(class AActor* Target);
    void ToggleShieldHeld(bool InHeld, bool TempHolster);
    void Request_ToggleShieldHeld(bool InHeld);
    void Local_WeaponThrowMontage(class AAbiotic_Item_ParentBP_C* Weapon);
    void Local_StopWindUpHeldItemMontage(bool ThrowableWeapon?);
    void Local_StartThrowCookableThrowable(bool Secondary Action);
    void Request_CookingThrowable(bool EnablePause, double MontageStartTime, double PauseAtTime, bool CanPlayForLocalPlayer);
    void Broadcast_CookingThrowableFX(bool EnablePause, double MontageStartTime, double PauseAtTime, bool CanPlayForLocalPlayer);
    void Local_PrepareToCookThrowable(bool SecondaryUse);
    void Request_MeleeAttackFX(TEnumAsByte<E_MeleeAction::Type> Type, int32 MontageIndex, double ThrowDistance);
    void TryLoad_ItemInHand_ScopeTexture(FName ItemRowName);
    void Local_Safe_EndWeaponZoom();
    void Broadcast_TryDeployItemFX(FVector FX Location, bool PlaySound);
    void Local_MeleeSwingMontage(class AAbiotic_Item_ParentBP_C* Weapon, bool Unarmed, bool WindupEnd);
    void Local_ThrowWeapon(bool StartThrow);
    void Safe_EndReadyToThrow();
    void Local_ReadyToThrowWeapon(class AAbiotic_Item_ParentBP_C* WeaponObject, bool SkipSkillCheck);
    void Server_ResetMeleeDurability();
    void Request_PlayThirdPersonMontage(bool LockInPlace, class UAnimMontage* MontageToPlay, bool HideHeldItemDuringAnim);
    void Local_DamageBlocked();
    void ClearFireDelayTimer();
    void RangedAttack_DelayEnd();
    void StartFireDelay(bool Melee, double Duration);
    void Request_UseItemOnTargetActor(class AAbiotic_Item_ParentBP_C* Item, class AActor* TargetActor);
    void BlockDamage_Event(double TotalDamageReceived, FVector DamageDirection, FHitResult Hit Result, class AActor* Instigator);
    void Request_ToggleShieldBlock(bool IsShieldBlocking);
    void Local Use Item(class AAbiotic_Item_ParentBP_C* Item To Use, bool Secondary Action, bool SkipCooldown, double ItemUseMontageStartTime);
    void TryUsingItem();
    void Local_DoSecondaryAction(const FAbiotic_InventoryItemSlotStruct& ItemSlotData, class AAbiotic_Item_ParentBP_C* Item To Use);
    void Broadcast_MeleeImpactFX(const FHitResult& Hit, bool Unarmed, TSubclassOf<class UAbiotic_DamageType_ParentBP_C> DamageHitType);
    void Broadcast_UseItem(class AAbioticActor_C* Item, class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void Safe_WindupEnd();
    void Request_FireProjectileWeapon(double Charge, int32 Pellets, FVector MuzzleFireLocation, FVector ForwardVector);
    void Local_DoMeleeAttack_Event(bool Unarmed, bool WindupEnd, bool HeavyGated);
    void Request_UseItem(class AAbiotic_Item_ParentBP_C* Item, FTransform Transform, bool Secondary Action, class AActor* TargetActor);
    void TryDeployItem(FTransform AtTransform, FInventorySlotSelected_Struct SlotSelected, const TArray<FVector>& Supports, class AActor* HitActor);
    void Broadcast_RangedAttack(const TArray<FHitResult>& Hits, class USoundBase* FireSound, const TSubclassOf<class UDamageType> DamageType, bool RequiresAmmo);
    void Request_RangedAttack(const TArray<FHitResult>& HitArray);
    void Try_AutoAttack();
    void Broadcast_MeleeSwingFX(bool Unarmed, int32 WeaponSwingMontage);
    void Request_MeleeAttackDamage(FHitResult Hit, bool Unarmed, double DamageMultiplier, bool ForceDurabilityLoss);
    void Request_DoubleJumpFX();
    void Broadcast_DoubleJumpFX();
    void OnJumped();
    void Request_ExitZipline();
    void Request_ExitLadder();
    void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    void OnLanded(const FHitResult& Hit);
    void Broadcast_Start_DBNO_WaypointPulse(class AAbiotic_PlayerCharacter_C* OwningVoice);
    void Request_DBNOTryCallForHelp(EVoiceLineType VoiceLine, TEnumAsByte<E_AudioImportance::Type> AudioImportance, const class AAbiotic_PlayerCharacter_C*& OwningVoice);
    void Request_Bleedout_GiveUp();
    void Client_FlashScreenColor(FLinearColor Color);
    void TryPlayDeathRattle();
    void StartOwnRespawn();
    void Client_TakeDamage(FVector DamageDirection, bool FatalBlow, FVector DamageLocation, const class UAbiotic_DamageType_ParentBP_C* DamageType);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Request_RespawnPlayerCharacter(bool RevivedOnSpot, bool UsePlayerStartOnly, FName DestinationID);
    void Revive_From_DBNO(bool RespawnedFromDeath);
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void PlugModeChanged(bool PlugModeActive);
    void Request_StopOfferItemState();
    void Server_TryTakeOfferableConsumable(class AAbiotic_PlayerCharacter_C* ReceivingCharacter);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Request_RadialWheelSelectionInteract(class AActor* Object, class UActorComponent* HitComponent, FName SelectionWheelContentName);
    void Server_TriggerPhysicsCheck(class AAbiotic_Item_Dropped_C* Item);
    void Request_SetInteractAnimationState(TEnumAsByte<E_AnimInteractState::Type> NewState);
    void Request_ServerLaunch(class ACharacter* Character, FVector LaunchVelocity);
    void Internal_Apply Force(class UPrimitiveComponent* Component, FVector AppliedForce);
    void Client_ApplyForce(class UPrimitiveComponent* Component, FVector AppliedForce);
    void Server_ApplyForce(class UPrimitiveComponent* Component, FVector AppliedForce);
    void Request_SetNewCableConnection(bool Attach, class AAbioticDeployed_ParentBP_C* DeployedActor, class APowerSocket_ParentBP_C* PowerSocket);
    void Local_Try_EndInteraction_Safe(bool Type A, bool ForceFailure, bool NoHoldCheck);
    void Local_Try_StartInteraction(bool Type A);
    void Local_Try_FinishHoldInteractionB();
    void Local_TryInteraction(bool Held, bool Interact Type A);
    void Local_Try_FinishHoldInteractionA();
    void Request_InteractB(class AActor* Object, class UActorComponent* HitComponent, bool HoldInteraction);
    void Request_InteractA(class AActor* Object, class UActorComponent* HitComponent, bool HoldInteraction);
    void Request_ChairMovement(FVector Direction);
    void ReceiveTick(float DeltaSeconds);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void StartSneakingXPTimer();
    void Timer_CheckForSneakingXP();
    void ForceEndCrouch();
    void StartCrouchRoll();
    void CheckForStaminaEvents();
    void OnSprintUpdated();
    void Server_SetRecentlyExertedSelf();
    void ForceStopViewingWristwatch_Safe();
    void ToggleWristwatchBeeps();
    void Request_SetWristwatchState(bool Viewing);
    void ToggleFlickering(bool Start);
    void Request_ToggleNVGHeadgearPowerState(bool PowerActive, class URechargeableComponent_C* RechargeableComponent);
    void Request_ToggleHeadlamp(bool On, class URechargeableComponent_C* RechargeableComponent);
    void Fire_TryToggleFlashlight();
    void Request_ToggleLanternLight(bool On, class URechargeableComponent_C* RechargableComponent);
    void Client_ForceFlashlightOff(bool ForceFlashlightOrLanternOff, bool ForceHeadlampOff);
    void Request_ToggleFlashlight(bool On, class URechargeableComponent_C* RechargeableComponent);
    void TryStartSleepMinigame();
    void Toggle_WristwatchBrightness();
    void Client_ToggleSleepState();
    void Client_ToggleDBNOState(class AAbiotic_Character_ParentBP_C* Character);
    void Client_SetupCharacter(bool FirstTimeSpawn);
    void ReceivePossessed(class AController* NewController);
    void SetupCharacterTimers();
    void ReloadWeapon();
    void FinishWeaponReload();
    void Local_InterruptReload();
    void Request_StartRechargeItemWithTool(FName ItemRow, class UAbiotic_InventoryComponent_C* ChargeToolLocation, int32 SlotIndex, class UAbiotic_InventoryComponent_C* Inventory, int32 ChargeAmount);
    void Client_ItemCrafted();
    void Server_Award XP Based On Recipe Category(TEnumAsByte<E_RecipeCategory::Type> Category);
    void InventoryChangedDuringCrafting(int32 SlotIndex);
    void Client_HighlightNewCraftedItemSlot(int32 SlotIndex);
    void Request_StartRepairItemWithTool(class UAbiotic_InventoryComponent_C* Inventory, class UAbiotic_InventoryComponent_C* RepairToolLocation, int32 SlotIndex, double DurabilityGainAmount, FName ItemRow);
    void Request_UnlockBenchUpgrade(class AAbioticDeployed_CraftingBench_ParentBP_C* Bench, const FBenchUpgradeRowHandle Upgrade);
    void Request_ShareRecipeWithLocalPlayers(FName RecipeRow);
    void Request_ScrapItem(class UAbiotic_InventoryComponent_C* Inventory, int32 SlotIndex);
    void Request_RepairItem(class UAbiotic_InventoryComponent_C* Inventory, int32 SlotIndex, double DurabilityGainAmount, bool ConsumeItemToRepair);
    void Request_CraftItem(FDataTableRowHandle ItemDataTableRow, const TArray<FAbioticItemCount_Struct>& ConsumeItems, int32 CountToCraft, double CraftDuration, class AAbioticDeployed_CraftingBench_ParentBP_C* CraftingBench, TEnumAsByte<E_RecipeCategory::Type> Recipe Category);
    void ResetCrouchBlock();
    void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void Server_ToggleTerminal(bool EnterTerminal, class AComputerTerminal_ParentBP_C* Terminal);
    void Client_ToggleTerminal(bool EnterTerminal, class AComputerTerminal_ParentBP_C* Terminal);
    void Client_BedDestroyedMessage();
    void Server_TryForceAwake(bool NotifyIfFail);
    void ReceivedNewBed();
    void SwitchCameraView(bool TP Camera);
    void ForceCloseRadialWasCalled(bool CommitAction);
    void ExecuteEmoteAction();
    void EnterRadialWheel(TSubclassOf<class UW_RadialWheel_ParentBP_C> Class);
    void Server_ForceEndEmote();
    void Local_BeginPlayEmote();
    void Request_StartEmote(FName Emote);
    void BndEvt__Abiotic_PlayerCharacter_TmogInventory_K2Node_ComponentBoundEvent_6_InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void BndEvt__Abiotic_PlayerCharacter_CharacterHotbarInventory_K2Node_ComponentBoundEvent_5_InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void BndEvt__Abiotic_PlayerCharacter_CharacterEquipSlotInventory_K2Node_ComponentBoundEvent_4_InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void BndEvt__Abiotic_PlayerCharacter_CharacterInventory_K2Node_ComponentBoundEvent_3_InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void Local_WashSelfFX();
    void HolsterItems();
    void UnHolsterItems();
    void Server_DelayedUpdateBackpackSize();
    void BndEvt__Abiotic_PlayerCharacter_CharacterInventory_K2Node_ComponentBoundEvent_4_RadiationUpdated__DelegateSignature(double RadiationAmount);
    void BndEvt__Abiotic_PlayerCharacter_CharacterHotbarInventory_K2Node_ComponentBoundEvent_3_RadiationUpdated__DelegateSignature(double RadiationAmount);
    void BndEvt__Abiotic_PlayerCharacter_CharacterEquipSlotInventory_K2Node_ComponentBoundEvent_2_RadiationUpdated__DelegateSignature(double RadiationAmount);
    void UpdateRadioactiveActor(bool SetActive);
    void Request_EmptyLiquidFromContainer(class UAbiotic_InventoryComponent_C* Inventory, int32 SlotIndex, TEnumAsByte<E_LiquidType::Type> LiquidType);
    void Request_DropInventorySlot(class UAbiotic_InventoryComponent_C* Inventory, int32 Index);
    void Client_ForceTryUseItem();
    void Client_ForceHotbarSelection(int32 Index);
    void Client_TryUseNonHotbarSlot(class UAbiotic_InventoryComponent_C* SlotInventory, int32 SlotIndex);
    void Client_EndNonHotbarUsage();
    void Request_TrySwapItems(class UAbiotic_InventoryComponent_C* Inventory1, int32 SlotIndex1, class UAbiotic_InventoryComponent_C* Inventory2, int32 SlotIndex2);
    void Client_UpdateUISound(TEnumAsByte<E_ResultState::Type> State, class USoundBase* Sound);
    void Request_TryTakeAllItemFromContainer(class UAbiotic_InventoryComponent_C* SourceInventoryComponent, class AAbioticCharacter* InteractingCharacter, class UAbiotic_InventoryComponent_C* ContainerInventoryComponent);
    void Request_TryQuickMoveItem(class UAbiotic_InventoryComponent_C* SourceInventoryComponent, class AAbioticCharacter* InteractingCharacter, int32 SlotIndex, bool EquippingGear, class UAbiotic_InventoryComponent_C* ContainerInventoryComponent, bool SingleOnly);
    void UseNonHotbarItemAfterSwap();
    void Request_TryPlaceInInventoryBySameItemType(const class UAbiotic_InventoryComponent_C*& TargetInventory, TArray<class UAbiotic_InventoryComponent_C*>& Source Inventories);
    void TryUseNonHotbarSlot(class UAbiotic_InventoryComponent_C* SlotInventory, int32 SlotIndex);
    void Request_RefreshEquipSlot();
    void Broadcast_TriggerPager(class AActor* LinkedActor);
    void Server_TriggerPager(class AActor* LinkedActor);
    void Request_TryUnloadingMagazine(FInventorySlotSelected_Struct ItemSlot);
    void Request_StopUsingContainer(class AActor* Container);
    void Request_DropOrDestroySpecificItem(class UAbiotic_InventoryComponent_C* Inventory, bool NoDropOnlyDestroy, int32 NumberOfItem, int32 Index);
    void Client_DisplayNewItemPickup(FName ItemRow, const FAbiotic_InventoryChangeableDataStruct ChangeableData);
    void Request_ModifyMoney(int32 MoneyToAdd);
    void TryShowFannyPack();
    void Request_UpdateCurrentHotbarItem(FInventorySlotSelected_Struct CurrentHotbarSlotSelected);
    void Request_TryPlaceItemInInventory(class UAbiotic_InventoryComponent_C* InventoryComponent, FDataTableRowHandle DataTableRowHandle, FAbiotic_InventoryChangeableDataStruct ChangeableData, bool CheckOnly, bool IsEquippingGear?, bool Place Leftover in the Same Inventory?);
    void Request_ApplyCustomizationChange(const FDataTableRowHandle& CustomizationDataRow, TEnumAsByte<E_CustomizationCategories::Type> CustomizationType, TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice);
    void Set_PlayerVoice(class UPlayerCharacterVoiceDataAsset* LoadedVoiceAsset);
    void Server_ApplyAllCustomizationData(TSoftObjectPtr<UPlayerCharacterVoiceDataAsset> Customization_Voice, FName Customization_Head, FName Customization_HairStyle, FName Customization_HairColor, FName Customization_HeadAccessory, FName Customization_UpperBody, FName Customization_LowerBody, FName Customization_ShirtColor, FName Customization_Belt, FName Customization_Shoes, FName Customization_Tie, FName Customization_Beard, FName Customization_Watch, FName Customization_IDCard);
    void Server_PoopOnFloor();
    void Request_ForceStaggerTarget(class AActor* Target);
    void PlayFirstPersonMontage(class UAnimMontage* MontageToPlay, bool HideHeldItemDuringAnim);
    void Request_DestroyCurrentChildComponent(class AAbiotic_PlayerCharacter_C* OwningCharacter, FName ComponentTag, bool IgnoreTag);
    void Broadcast_DestroyCurrentChildComponent(class AAbiotic_PlayerCharacter_C* OwningCharacter, FName ComponentTag, bool IgnoreTag);
    void Request_ApplyDamageToResource(float BaseDamage, class AController* EventInstigator, const FHitResult& HitInfo, class AActor* DamageCauser);
    void TryDestroyCurrentChildComponent(FName ComponentTag, bool IgnoreTag);
    void Request_UpdateAttachedComponent(class AAbiotic_PlayerCharacter_C* OwningCharacter, class ANPC_Base_ParentBP_C* ActorToAttach, bool DetachInstead?, FTransform CurrentSocketTransform, FTransform ProjectileTransform);
    void Request_UpdateDynamicProperty(FDynamicProperty Property, class AActor* Owner);
    void Request_UpdateIntContent(const int32 New Int, class AActor* Int Owner);
    void Request_UpdateStringContent(FString New String, class AActor* StringOwner);
    void Server_UpdateCurrentEquippedGearDurability(TEnumAsByte<E_InventorySlotType::Type> Gear Slot Type, double DurabilityLeft);
    void OnAimUpdated();
    void BndEvt__Abiotic_PlayerCharacter_BuffDebuffComponent_K2Node_ComponentBoundEvent_0_OnBuffTagContainerRefreshed__DelegateSignature();
    void Client_ThirstRestored(double NewThirstValue);
    void Client_HungerRestored(double NewHungerValue);
    void BndEvt__Abiotic_PlayerCharacter_ThermalReceiver_K2Node_ComponentBoundEvent_2_CurrentTemperatureUpdated__DelegateSignature(float NewTemperature);
    void Request_SetAmbientTemperature_LevelFX(double AmbientTemp);
    void OnStatModifiersUpdated();
    void GamepadXSensitivityCallback(float NewValue);
    void StaticInteractPromptCallback(bool NewValue);
    void ToggleSprintCallback(bool NewValue);
    void GamepadYSensitivityCallback(float NewValue);
    void MouseYSensitivityCallback(float NewValue);
    void FieldOfViewCallback(float NewValue);
    void InvertYAxisCallback(bool NewValue);
    void MouseXSensitivityCallback(float NewValue);
    void CameraShakeCallback(float NewValue);
    void BindSettings();
    void ExecuteUbergraph_Abiotic_PlayerCharacter(int32 EntryPoint);
    void AimDownSights_Changed__DelegateSignature(bool UsingSniperScope, bool IsSquinting);
    void OnGearVisualStatus_Updated__DelegateSignature();
    void OnShieldHeldUpdated__DelegateSignature(bool ShieldHeld);
    void OnCurrentSetBonusesUpdated__DelegateSignature(class AAbiotic_PlayerCharacter_C* OwningCharacter);
    void Character_Emoted__DelegateSignature(FName EmoteRow);
    void OnThirstRestored__DelegateSignature(double CurrentThirst);
    void OnHungerRestored__DelegateSignature(double CurrentHunger);
    void InventoryWeight_Changed__DelegateSignature();
    void TerminalUseState_Changed__DelegateSignature(bool UsingTerminal);
    void Sanity_Changed__DelegateSignature();
    void Money_Changed__DelegateSignature();
}; // Size: 0x2841

#endif
