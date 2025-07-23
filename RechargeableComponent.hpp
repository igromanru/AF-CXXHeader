#ifndef UE4SS_SDK_RechargeableComponent_HPP
#define UE4SS_SDK_RechargeableComponent_HPP

class URechargeableComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    TEnumAsByte<ELightSourceTypes::Type> LightSourceType;                             // 0x00B0 (size: 0x1)
    bool RechargeableActive;                                                          // 0x00B1 (size: 0x1)
    FTimerHandle Timer_BatteryDrain;                                                  // 0x00B8 (size: 0x8)
    int32 LastBatteryLevel;                                                           // 0x00C0 (size: 0x4)
    int32 DrainPerTick;                                                               // 0x00C4 (size: 0x4)
    double ChargeMultiplier;                                                          // 0x00C8 (size: 0x8)
    bool Headlamp;                                                                    // 0x00D0 (size: 0x1)
    int32 HeadlampIndex;                                                              // 0x00D4 (size: 0x4)
    double LastItemChargePercentage;                                                  // 0x00D8 (size: 0x8)
    bool BatteryNotRequiredToFireWeapon;                                              // 0x00E0 (size: 0x1)
    TEnumAsByte<E_InventorySlotType::Type> OwnerSlotType;                             // 0x00E1 (size: 0x1)
    bool PlayerOwned;                                                                 // 0x00E2 (size: 0x1)
    class USoundBase* OffSound;                                                       // 0x00E8 (size: 0x8)
    class USoundBase* OnSound;                                                        // 0x00F0 (size: 0x8)
    TEnumAsByte<E_LiquidType::Type> CompatibleLiquidType;                             // 0x00F8 (size: 0x1)
    FText NoBatteryWarningOverride;                                                   // 0x0100 (size: 0x10)

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void PowerParent(class AActor*& ParentPowerSource);
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void Local Owner Try Toggle Light Gadget Bar(bool ToggleOn);
    int32 Get New Battery Drain Amount();
    void ShowBatteryWarning(class AAbiotic_PlayerCharacter_C* LocalCharacter);
    void GetCorrectPlayerInventory(class UAbiotic_InventoryComponent_C*& Inventory, int32& Slot);
    void Server_ModifyBattery(int32 Amount, bool NotOwnedByPlayer);
    void SetCurrentItemDynamicState(FAbiotic_InventoryChangeableDataStruct& ItemChangeableData, bool NewDynamicState, FAbiotic_InventoryChangeableDataStruct& OutChangeableData);
    void ModifyBatteryLevel(int32 Amount, const FAbiotic_InventoryChangeableDataStruct& ChangeableData, const FAbiotic_InventoryItemStruct& ItemData, FAbiotic_InventoryChangeableDataStruct& ChangeableDataOut, int32& LastBatteryLevel);
    void Has Sufficient Battery to Operate(TEnumAsByte<E_BatteryUseType::Type> BatteryUsageType, bool& Sufficient, int32& CurrentBatteryAmount);
    void Server_TogglePowerState(bool RechargeableActive, bool NotOwnedByPlayer);
    void Server_DrainBattery();
    void LocalOwner_ToggleLight();
    void TogglePowerFX();
    void Request_ToggleNVGHeadgearPowerState(class AGear_Headlamp_NVG_C* NVGs, bool PowerActive);
    void ExecuteUbergraph_RechargeableComponent(int32 EntryPoint);
}; // Size: 0x110

#endif
