#ifndef UE4SS_SDK_I_Powerable_HPP
#define UE4SS_SDK_I_Powerable_HPP

class II_Powerable_C : public IInterface
{

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void PowerParent(class AActor*& ParentPowerSource);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void IsPowerSocket(bool& CanBePluggedInto);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void GetPowerParentIndex(int32& Index);
    void TogglePowerFX();
    void IsPowered(bool& PowerOn);
}; // Size: 0x28

#endif
