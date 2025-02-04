#ifndef UE4SS_SDK_Weapon_FishingRod_HPP
#define UE4SS_SDK_Weapon_FishingRod_HPP

class AWeapon_FishingRod_C : public AAbiotic_Weapon_Gun_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BB0 (size: 0x8)
    class UAudioComponent* TensionAudio;                                              // 0x0BB8 (size: 0x8)
    class UAudioComponent* ReelAudio;                                                 // 0x0BC0 (size: 0x8)
    class UStaticMeshComponent* BobberMesh;                                           // 0x0BC8 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x0BD0 (size: 0x8)
    FVector FishingLocation;                                                          // 0x0BD8 (size: 0x18)
    FVector ActiveFishingLocation;                                                    // 0x0BF0 (size: 0x18)
    class UNiagaraComponent* FishingParticle;                                         // 0x0C08 (size: 0x8)
    FVector ActiveCompletionZone;                                                     // 0x0C10 (size: 0x18)
    FRotator ActiveFishingDirection;                                                  // 0x0C28 (size: 0x18)
    FVector ActiveFishLocation;                                                       // 0x0C40 (size: 0x18)
    FVector ActivePlayerLocation;                                                     // 0x0C58 (size: 0x18)
    double ActiveRodTension;                                                          // 0x0C70 (size: 0x8)
    double NextDirectionChangeTime;                                                   // 0x0C78 (size: 0x8)
    FVector2D ActiveFishDirection;                                                    // 0x0C80 (size: 0x10)
    FVector2D FishDirectionCooldownRange;                                             // 0x0C90 (size: 0x10)
    FVector2D FishMovementLengthRange;                                                // 0x0CA0 (size: 0x10)
    FVector2D TargetFishDirection;                                                    // 0x0CB0 (size: 0x10)
    double NextCooldownTime;                                                          // 0x0CC0 (size: 0x8)
    FVector2D FishCooldownRange;                                                      // 0x0CC8 (size: 0x10)
    double FishCaptureProgress;                                                       // 0x0CD8 (size: 0x8)
    double FishCaptureDistance;                                                       // 0x0CE0 (size: 0x8)
    int32 FishCaptureStage;                                                           // 0x0CE8 (size: 0x4)
    double ActiveFishSpeed;                                                           // 0x0CF0 (size: 0x8)
    double TimeToStartMinigame;                                                       // 0x0CF8 (size: 0x8)
    FVector2D FishStartTimeRange;                                                     // 0x0D00 (size: 0x10)
    bool HasActiveFish;                                                               // 0x0D10 (size: 0x1)
    FFishingZoneRowHandle PossibleFishingZone;                                        // 0x0D18 (size: 0x20)
    FFishingZoneRowHandle ActiveFishingZone;                                          // 0x0D38 (size: 0x20)
    double ReelAnimTime;                                                              // 0x0D58 (size: 0x8)
    bool Reeling;                                                                     // 0x0D60 (size: 0x1)
    bool HotspotActive;                                                               // 0x0D61 (size: 0x1)
    double LastTimeFishingEnded;                                                      // 0x0D68 (size: 0x8)
    FVector2D FishShadowDelay;                                                        // 0x0D70 (size: 0x10)
    class UAudioComponent* FishSwimSound;                                             // 0x0D80 (size: 0x8)
    bool CatchingJunk;                                                                // 0x0D88 (size: 0x1)
    FDataTableRowHandle JunkReward;                                                   // 0x0D90 (size: 0x10)
    FFishRowHandle FishReward;                                                        // 0x0DA0 (size: 0x20)
    int32 RequiredCaptures;                                                           // 0x0DC0 (size: 0x4)
    bool TackleboxActive;                                                             // 0x0DC4 (size: 0x1)
    bool LuckyHat;                                                                    // 0x0DC5 (size: 0x1)
    int32 OwnerLastKnownLevel;                                                        // 0x0DC8 (size: 0x4)
    FAchievementRowHandle FirstTimeFishAchievement;                                   // 0x0DD0 (size: 0x20)
    FAchievementRowHandle RareFishAchievement;                                        // 0x0DF0 (size: 0x20)
    bool BlockElectricalDamage;                                                       // 0x0E10 (size: 0x1)
    class UNiagaraSystem* DirectionalParticle;                                        // 0x0E18 (size: 0x8)
    double ReelingSpeed;                                                              // 0x0E20 (size: 0x8)

    void GetPlayerFishingInput(double& AxisRight, double& AxisForward);
    void GetMissingAmmoText(FText ammo type, FText& Return);
    void Local_DetermineReward(bool& ReadyToMinigame);
    void ApplyAmmoVisualMaterials(class UStaticMeshComponent* MeshComponent);
    void GetBaitTags(class AAbiotic_PlayerCharacter_C* Player, bool UsingBait, FGameplayTagContainer& BaitTags);
    void CanFireAmmoWeapon(bool& CanFire);
    void GetCastZLevel(bool& Success, double& ZLevel);
    void FishingSuccess();
    void GatherJunkRows(FName SalvageRow, TArray<FName>& Rows, TArray<double>& Chances);
    void Server_GrantJunkReward(class AAbiotic_PlayerCharacter_C* Player, FDataTableRowHandle Reward);
    void CaclulateFishMovement(FVector2D& Direction);
    void TriggerCooldown();
    void ChooseNewDirection(bool AngleOnly);
    void DebugDrawOnHUD(class AHUD* HUD, int32 SizeX, int32 SizeY);
    TArray<FItemActionRowHandle> GetItemActionArray();
    void EndFishingMinigame(bool Fail);
    bool IsConsumingPlayerInput();
    void IsFishingActive(bool& Active);
    void SetupCableComponent();
    void Local_FirePressed(bool& ConsumedByWeapon);
    void TickMinigame(double DeltaTime);
    void TickChargeCast();
    void Start Fishing Minigame(FVector InLocation);
    void OnRep_ActiveFishingLocation();
    void Request_SetActiveFishingZone(FVector InLocation);
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void GunStartFiring();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void Request_FishingReward(FFishRowHandle Reward, bool Lucky);
    void Request_TriggerBaitUsage();
    void DelayedFishShadow();
    void ReceiveTick(float DeltaSeconds);
    void Request_JunkReward(FDataTableRowHandle Reward);
    void Request_ElectricalStun();
    void Delayed_TriggerFishEffects();
    void Request_UseHotspot(class ABP_FishingHotspot_C* Hotspot Used);
    void ExecuteUbergraph_Weapon_FishingRod(int32 EntryPoint);
}; // Size: 0xE28

#endif
