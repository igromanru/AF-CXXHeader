#ifndef UE4SS_SDK_Item_ThrowableBP_HPP
#define UE4SS_SDK_Item_ThrowableBP_HPP

class AItem_ThrowableBP_C : public AAbiotic_Item_Held_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class USplineComponent* ProjectileArc;                                            // 0x0B00 (size: 0x8)
    float ThrowingArcTimeline_NewTrack_0_9C510F444F19A91567F3F9A54A3D7EB5;            // 0x0B08 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ThrowingArcTimeline__Direction_9C510F444F19A91567F3F9A54A3D7EB5; // 0x0B0C (size: 0x1)
    class UTimelineComponent* ThrowingArcTimeline;                                    // 0x0B10 (size: 0x8)
    bool HasBeenUsed;                                                                 // 0x0B18 (size: 0x1)
    int32 LastKnownHotbarSlot;                                                        // 0x0B1C (size: 0x4)
    bool About ToThrow;                                                               // 0x0B20 (size: 0x1)
    double ThrowableMontagePauseDelay;                                                // 0x0B28 (size: 0x8)
    int32 FuseCountdown;                                                              // 0x0B30 (size: 0x4)
    FTimerHandle ThrowableCookingTimer;                                               // 0x0B38 (size: 0x8)
    double FuseStartTime;                                                             // 0x0B40 (size: 0x8)

    double GetNewFuseTime(bool ItemHasBeenCooked);
    void Set Throwable Changeable Data(int32 Value, FAbiotic_InventoryChangeableDataStruct& NewChangeableData);
    void OnRep_FuseCountdown();
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void OnRep_About ToThrow();
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void ThrowingArcTimeline__FinishedFunc();
    void ThrowingArcTimeline__UpdateFunc();
    void OnLoaded_A40D05AD483CDB6F3CBF1C8E89D0F2BD(UClass* Loaded);
    void OnLoaded_23417C194DB983E451B09BA67EA38698(UClass* Loaded);
    void Fire_Throwable_Projectile(class APawn* Owner, FDataTableRowHandle ProjectileDataRowHandle, double DamageFromItem, FTransform SpawnTransform, double ProjectileSpeedMultiplier, bool SimulateProjectile, bool GrantXPToOwner, bool ZeroVelocity);
    void Server_Process_UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, bool Alt Action, bool ZeroVelocity, bool GrantXPToOwner);
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void ReceiveTick(float DeltaSeconds);
    void SetupItem();
    void ReceiveBeginPlay();
    void Local_TryCookThrowable(class AAbiotic_PlayerCharacter_C* InteractingCharacter, bool SecondaryUse);
    void Server_StartCookingThrowable();
    void StartFuseCountdown();
    void OwningBuffTagsRefreshed();
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void TriggerThrowingArcPulse();
    void ExecuteUbergraph_Item_ThrowableBP(int32 EntryPoint);
}; // Size: 0xB48

#endif
