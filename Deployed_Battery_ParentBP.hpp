#ifndef UE4SS_SDK_Deployed_Battery_ParentBP_HPP
#define UE4SS_SDK_Deployed_Battery_ParentBP_HPP

class ADeployed_Battery_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UTextRenderComponent* DeviceText;                                           // 0x0858 (size: 0x8)
    class UTextRenderComponent* BatteryText;                                          // 0x0860 (size: 0x8)
    class UTextRenderComponent* PoweredText;                                          // 0x0868 (size: 0x8)
    class UChildActorComponent* PowerSocket1;                                         // 0x0870 (size: 0x8)
    class USceneComponent* PowerSocketContainer;                                      // 0x0878 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0880 (size: 0x8)
    TArray<class APowerSocket_ChildOfActor_C*> PlugStripPowerSockets;                 // 0x0888 (size: 0x10)
    bool HasBatteryPower;                                                             // 0x0898 (size: 0x1)
    FTimerHandle BatteryTickHandle;                                                   // 0x08A0 (size: 0x8)
    TEnumAsByte<E_PowerTimerModes::Type> TimerMode;                                   // 0x08A8 (size: 0x1)
    FTimerHandle PowerModeTimerHandle;                                                // 0x08B0 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x08B8 (size: 0x8)
    bool PowerTimerActive;                                                            // 0x08C0 (size: 0x1)
    double BatteryPercentage;                                                         // 0x08C8 (size: 0x8)
    int32 DevicesPullingPower;                                                        // 0x08D0 (size: 0x4)
    class UMaterialInstanceDynamic* DynMat_BatteryLevel;                              // 0x08D8 (size: 0x8)
    class UMaterialInstanceDynamic* DynMat_PowerDraw;                                 // 0x08E0 (size: 0x8)
    int32 MaxBattery;                                                                 // 0x08E8 (size: 0x4)
    bool FreezeBatteryDrain;                                                          // 0x08EC (size: 0x1)
    int32 BatteryChargeSpeed;                                                         // 0x08F0 (size: 0x4)

    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    bool CheckPowerSocketsValid();
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void UpdatePullingPowerLevelFX();
    void UpdateBatteryLevelFX();
    void OnLoadedFromSave(double NewLifespan);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CreateBatteryLevelMaterials();
    void OnRep_DevicesPullingPower();
    void OnRep_BatteryPercentage();
    void OnRep_PowerTimerActive();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void SetNewPowerTimerState(TEnumAsByte<E_PowerTimerModes::Type> Mode);
    void FlipPowerTimerState();
    void ClearPowerTimerEvents();
    void CheckPowerTimer_TimeOfDayUpdate(double TimeInSeconds);
    void UpdatePowerTimerActiveState(bool PowerTimerActive);
    void OnRep_HasBatteryPower();
    void UpdateBatteryState();
    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    bool IsPoweredFromSocket();
    void BatteryTick();
    void IsPowered(bool& PowerOn);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void TryPerformBatteryChangeOnUse();
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItem_OnTarget(class AActor* TargetActor);
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Update Current Item Data();
    void OnLevelLoaded(class ULevelStreaming* Level);
    void OnLevelUnloaded(class ULevelStreaming* Level);
    void DelayedSave();
    void ReconnectPowerSockets();
    void ExecuteUbergraph_Deployed_Battery_ParentBP(int32 EntryPoint);
}; // Size: 0x8F4

#endif
