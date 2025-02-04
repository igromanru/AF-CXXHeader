#ifndef UE4SS_SDK_Deployed_ChargingStation_ParentBP_HPP
#define UE4SS_SDK_Deployed_ChargingStation_ParentBP_HPP

class ADeployed_ChargingStation_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UNiagaraComponent* ChargingParticle;                                        // 0x0938 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0940 (size: 0x8)
    class UAbiotic_InventoryComponent_C* ChargeStationInventory;                      // 0x0948 (size: 0x8)
    float Timeline_NewTrack_0_2970AB954481CD0A5EE5A6B0C726E9CA;                       // 0x0950 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_2970AB954481CD0A5EE5A6B0C726E9CA; // 0x0954 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0958 (size: 0x8)
    bool Local_HoldingChargeableItem;                                                 // 0x0960 (size: 0x1)
    bool IsChargingItem;                                                              // 0x0961 (size: 0x1)
    class AAbiotic_Item_ParentBP_C* ChargingItem;                                     // 0x0968 (size: 0x8)
    double ChargingInterval;                                                          // 0x0970 (size: 0x8)
    FTimerHandle ChargingTimer;                                                       // 0x0978 (size: 0x8)
    double ChargingIncreasePerTick;                                                   // 0x0980 (size: 0x8)
    double CurrentChargePercent;                                                      // 0x0988 (size: 0x8)
    TArray<class AChargedProxy_BP_C*> ChargingProxies;                                // 0x0990 (size: 0x10)
    int32 LastLightElement;                                                           // 0x09A0 (size: 0x4)
    bool BlinkOn;                                                                     // 0x09A4 (size: 0x1)
    FTimerHandle BeepTimer;                                                           // 0x09A8 (size: 0x8)

    void CanLongInteractWith_A(bool& Success);
    void OnLoadedFromSave();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void Get Item Proxies Data();
    void LoadChargedItemProxies(TArray<FSaveData_ItemProxy_Struct>& ItemProxies);
    void UpdatePercentageChargeFX();
    void OnRep_CurrentChargePercent();
    void TryStartChargingItemTimer(int32 SpotIndex);
    void RemoveItemStopCharging(int32 Index);
    void Timer_ChargeCurrentItem();
    void OnRep_IsChargingItem();
    void TryPickupChargingItem(int32 Index, class AAbiotic_PlayerCharacter_C* PlayerCharacter);
    void Place Item and Try Start Charging(class AAbiotic_PlayerCharacter_C* PlayerCharacter, int32 Index, FInventorySlotSelected_Struct SourceInventorySlot);
    void IsCharacterHoldingChargeableItem(class AAbiotic_PlayerCharacter_C* PlayerCharacter, bool& Rechargeable, double& Current BatteryPercentage);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void TogglePowerFX();
    void ReceiveBeginPlay();
    void Update Deployable Proxies(const TArray<FSaveData_ItemProxy_Struct>& Item Proxies);
    void Broadcast_ShowElectricalDisturbance();
    void InteractWith_A_LocalFX(bool Hold);
    void RadialWheelInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed, FName SelectionWheelContentName);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void SetTimer_BeepPeriodically(bool End);
    void PlayBeep();
    void ExecuteUbergraph_Deployed_ChargingStation_ParentBP(int32 EntryPoint);
}; // Size: 0x9B0

#endif
