#ifndef UE4SS_SDK_Deployed_Battery_ParentBP_HPP
#define UE4SS_SDK_Deployed_Battery_ParentBP_HPP

class ADeployed_Battery_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UTextRenderComponent* DeviceText;                                           // 0x0928 (size: 0x8)
    class UTextRenderComponent* BatteryText;                                          // 0x0930 (size: 0x8)
    class UTextRenderComponent* PoweredText;                                          // 0x0938 (size: 0x8)
    class UChildActorComponent* PowerSocket1;                                         // 0x0940 (size: 0x8)
    class USceneComponent* PowerSocketContainer;                                      // 0x0948 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0950 (size: 0x8)
    TArray<class APowerSocket_ChildOfActor_C*> PlugStripPowerSockets;                 // 0x0958 (size: 0x10)
    bool HasBatteryPower;                                                             // 0x0968 (size: 0x1)
    FTimerHandle BatteryTickHandle;                                                   // 0x0970 (size: 0x8)
    TEnumAsByte<E_PowerTimerModes::Type> TimerMode;                                   // 0x0978 (size: 0x1)
    FTimerHandle PowerModeTimerHandle;                                                // 0x0980 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x0988 (size: 0x8)
    bool PowerTimerActive;                                                            // 0x0990 (size: 0x1)
    double BatteryPercentage;                                                         // 0x0998 (size: 0x8)
    int32 DevicesPullingPower;                                                        // 0x09A0 (size: 0x4)
    class UMaterialInstanceDynamic* DynMat_BatteryLevel;                              // 0x09A8 (size: 0x8)
    class UMaterialInstanceDynamic* DynMat_PowerDraw;                                 // 0x09B0 (size: 0x8)
    int32 MaxBattery;                                                                 // 0x09B8 (size: 0x4)
    bool FreezeBatteryDrain;                                                          // 0x09BC (size: 0x1)
    int32 BatteryChargeSpeed;                                                         // 0x09C0 (size: 0x4)

    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void GetPowerCordHighlightColor(class UActorComponent*& Cable, int32& Color);
    void UpdatePullingPowerLevelFX();
    void UpdateBatteryLevelFX();
    void OnLoadedFromSave();
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
    void ExecuteUbergraph_Deployed_Battery_ParentBP(int32 EntryPoint);
}; // Size: 0x9C4

#endif
