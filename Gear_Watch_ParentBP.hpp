#ifndef UE4SS_SDK_Gear_Watch_ParentBP_HPP
#define UE4SS_SDK_Gear_Watch_ParentBP_HPP

class AGear_Watch_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B78 (size: 0x8)
    bool ViewingWatch;                                                                // 0x0B80 (size: 0x1)
    bool OnlyApplyBuffsWhileViewing;                                                  // 0x0B81 (size: 0x1)
    bool DrainBatteryWhileViewing;                                                    // 0x0B82 (size: 0x1)
    class UW_HUD_GadgetBar_C* HUDWidget;                                              // 0x0B88 (size: 0x8)
    FTimerHandle HudTimer;                                                            // 0x0B90 (size: 0x8)
    FName WatchScreenSocket;                                                          // 0x0B98 (size: 0x8)
    bool UsingWatch;                                                                  // 0x0BA0 (size: 0x1)
    class UAudioComponent* UseSoundComponent;                                         // 0x0BA8 (size: 0x8)
    class USoundBase* UseSound;                                                       // 0x0BB0 (size: 0x8)
    class USoundBase* EndUseSound;                                                    // 0x0BB8 (size: 0x8)
    class UNiagaraSystem* UsingVFX;                                                   // 0x0BC0 (size: 0x8)
    class UNiagaraComponent* UseVfxComponent;                                         // 0x0BC8 (size: 0x8)

    void GetBuffsToRemove(TArray<FBuffDebuffRowHandle>& BuffsToAdd);
    void GetBuffsToAdd(TArray<FBuffDebuffRowHandle>& BuffsToAdd);
    void SpawnWatchSound(class USoundBase* Sound);
    void UpdateUsingWatch(bool UsingWatch);
    void OnRep_UsingWatch();
    void TryStartHudTick();
    void CanShowHudInfo();
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
}; // Size: 0xBD0

#endif
