#ifndef UE4SS_SDK_Elevator_ParentBP_HPP
#define UE4SS_SDK_Elevator_ParentBP_HPP

class AElevator_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UChildActorComponent* TeleportZone;                                         // 0x02A0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02A8 (size: 0x8)
    class USceneComponent* TeleportLocations;                                         // 0x02B0 (size: 0x8)
    class UChildActorComponent* LoadIgnoreZone;                                       // 0x02B8 (size: 0x8)
    class UChildActorComponent* LightFixture;                                         // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* RailingsMesh;                                         // 0x02C8 (size: 0x8)
    class UBillboardComponent* Billboard1;                                            // 0x02D0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02D8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* HologramStopPoint;                                    // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* ElevatorMesh;                                         // 0x02F0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02F8 (size: 0x8)
    FVector ElevatorTopPosition;                                                      // 0x0300 (size: 0x18)
    TArray<class AButton_Generic_C*> Buttons_Top;                                     // 0x0318 (size: 0x10)
    bool AttachTop_Idx_0_ButtonToLift;                                                // 0x0328 (size: 0x1)
    TArray<class AButton_Generic_C*> Buttons_Bottom;                                  // 0x0330 (size: 0x10)
    bool AttachBottom_Idx_0_ButtonToLift;                                             // 0x0340 (size: 0x1)
    bool StartAtTop;                                                                  // 0x0341 (size: 0x1)
    FVector ElevatorServerRelativePosition;                                           // 0x0348 (size: 0x18)
    TEnumAsByte<E_ElevatorMovementTypes::Type> ElevatorCurrentMode;                   // 0x0360 (size: 0x1)
    double ElevatorSpeed;                                                             // 0x0368 (size: 0x8)
    class UStaticMesh* ElevatorVisualMesh;                                            // 0x0370 (size: 0x8)
    bool Automatic;                                                                   // 0x0378 (size: 0x1)
    double AutomaticDelay;                                                            // 0x0380 (size: 0x8)
    class UStaticMesh* ElevatorRailingsMesh;                                          // 0x0388 (size: 0x8)
    bool HasVisibleLight;                                                             // 0x0390 (size: 0x1)
    FElevator_ParentBP_CReachedTop ReachedTop;                                        // 0x0398 (size: 0x10)
    void ReachedTop();
    FElevator_ParentBP_CReachedBottom ReachedBottom;                                  // 0x03A8 (size: 0x10)
    void ReachedBottom();
    FElevator_ParentBP_CStartedMoving StartedMoving;                                  // 0x03B8 (size: 0x10)
    void StartedMoving();
    class USoundBase* SFX_ElevatorStop;                                               // 0x03C8 (size: 0x8)
    class USoundBase* SFX_ElevatorMovingLoop;                                         // 0x03D0 (size: 0x8)
    class USoundBase* SFX_ElevatorStart;                                              // 0x03D8 (size: 0x8)
    bool TeleportFallProtection;                                                      // 0x03E0 (size: 0x1)
    FVector TeleportVolumeSize;                                                       // 0x03E8 (size: 0x18)
    bool SilentElevator;                                                              // 0x0400 (size: 0x1)

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void PowerParent(class AActor*& ParentPowerSource);
    void OnRep_ElevatorServerRelativePosition();
    void IsLocationWithinHorizontalBounds(FVector Location, bool& WithinBounds);
    bool IsElevatorMoving();
    void CharacterEnteredElevator(class AAbiotic_Character_ParentBP_C* Character);
    void CharacterLeftElevator(class AAbiotic_Character_ParentBP_C* Character);
    void SaveElevatorStateToWorldSave();
    void OnRep_ElevatorCurrentMode();
    void UserConstructionScript();
    void TogglePowerFX();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void TryPressTopButton(bool Activated);
    void TryPressBottomButton(bool Activated);
    void Broadcast_StartMovingElevatorNoise();
    void OnLoadedFromSave(bool Top);
    void CheckInitialSetup();
    void ExecuteUbergraph_Elevator_ParentBP(int32 EntryPoint);
    void StartedMoving__DelegateSignature();
    void ReachedBottom__DelegateSignature();
    void ReachedTop__DelegateSignature();
}; // Size: 0x401

#endif
