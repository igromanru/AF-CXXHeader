#ifndef UE4SS_SDK_GenericKlaxon_HPP
#define UE4SS_SDK_GenericKlaxon_HPP

class AGenericKlaxon_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x02A0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Spinner;                                              // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* LightHousing;                                         // 0x02B8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02C0 (size: 0x8)
    bool LightOn;                                                                     // 0x02C8 (size: 0x1)
    FRotator RotationRate;                                                            // 0x02D0 (size: 0x18)

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void PowerParent(class AActor*& ParentPowerSource);
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void OnRep_LightOn();
    void TogglePowerFX();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_GenericKlaxon(int32 EntryPoint);
}; // Size: 0x2E8

#endif
