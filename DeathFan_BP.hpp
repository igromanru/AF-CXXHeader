#ifndef UE4SS_SDK_DeathFan_BP_HPP
#define UE4SS_SDK_DeathFan_BP_HPP

class ADeathFan_BP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02D8 (size: 0x8)
    class UBoxComponent* DeathBox;                                                    // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x02E8 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x02F0 (size: 0x8)
    bool FanActive;                                                                   // 0x02F8 (size: 0x1)
    bool FanOnlyNoDeath;                                                              // 0x02F9 (size: 0x1)
    bool TurnOffAtNight;                                                              // 0x02FA (size: 0x1)

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void PowerParent(class AActor*& ParentPowerSource);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void IsPowerSocket(bool& CanBePluggedInto);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void TogglePowerFX();
    void ReceiveBeginPlay();
    void ChangePowerState();
    void ExecuteUbergraph_DeathFan_BP(int32 EntryPoint);
}; // Size: 0x2FB

#endif
