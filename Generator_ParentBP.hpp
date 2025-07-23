#ifndef UE4SS_SDK_Generator_ParentBP_HPP
#define UE4SS_SDK_Generator_ParentBP_HPP

class AGenerator_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    int32 GeneratorIndex;                                                             // 0x02D8 (size: 0x4)
    bool GeneratorPoweredOn;                                                          // 0x02DC (size: 0x1)
    FGenerator_ParentBP_CGeneratorStateChanged GeneratorStateChanged;                 // 0x02E0 (size: 0x10)
    void GeneratorStateChanged();

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void PowerParent(class AActor*& ParentPowerSource);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void IsPowerSocket(bool& CanBePluggedInto);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowered(bool& PowerOn);
    void GetPowerParentIndex(int32& Index);
    void TogglePowerFX();
    void ExecuteUbergraph_Generator_ParentBP(int32 EntryPoint);
    void GeneratorStateChanged__DelegateSignature();
}; // Size: 0x2F0

#endif
