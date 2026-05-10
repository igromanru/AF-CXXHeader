#ifndef UE4SS_SDK_Gear_Watch_ParentBP_HPP
#define UE4SS_SDK_Gear_Watch_ParentBP_HPP

class AGear_Watch_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B18 (size: 0x8)
    bool ViewingWatch;                                                                // 0x0B20 (size: 0x1)
    bool OnlyApplyBuffsWhileViewing;                                                  // 0x0B21 (size: 0x1)
    bool DrainBatteryWhileViewing;                                                    // 0x0B22 (size: 0x1)
    class UW_HUD_GadgetBar_C* HUDWidget;                                              // 0x0B28 (size: 0x8)
    FTimerHandle HudTimer;                                                            // 0x0B30 (size: 0x8)
    FName WatchScreenSocket;                                                          // 0x0B38 (size: 0x8)
    bool UsingWatch;                                                                  // 0x0B40 (size: 0x1)
    class UAudioComponent* UseSoundComponent;                                         // 0x0B48 (size: 0x8)
    class USoundBase* UseSound;                                                       // 0x0B50 (size: 0x8)
    class USoundBase* EndUseSound;                                                    // 0x0B58 (size: 0x8)

    class UAudioComponent* SpawnWatchSound(class USoundBase* Sound);
    void UpdateUsingWatch(bool UsingWatch);
    void OnRep_UsingWatch();
    void RemoveGearBuffs();
    void ApplyGearBuffs();
    void TryStartHudTick();
    bool CanShowHudInfo();
    void RemoveHudInfo();
    void UpdateHudInfo();
    void UpdateWatchWidgetFP(class UW_Wristwatch_C* WatchWidget, class UWidgetComponent* WidgetComponent, class USkeletalMeshComponent* WatchMeshComponent);
    void GetWatchWidget(class UW_Wristwatch_C*& WristwatchWidget, class UWidgetComponent*& WidgetComponent);
    void Server_DrainBatteryWhileActive(bool Using);
    void Server_UpdateBuffsWhileActive(bool Using);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void Server_ViewWatch(bool Viewing);
    void TryPerformBatteryChangeOnUse();
    void Update Current Item Data();
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void Local_ViewWatch(bool Viewing);
    void StopUsingItem(class AAbiotic_Character_ParentBP_C* UsingCharacter);
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Gear_Watch_ParentBP(int32 EntryPoint);
}; // Size: 0xB60

#endif
