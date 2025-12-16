#ifndef UE4SS_SDK_BenchUpgrade_PortalSupressionField_HPP
#define UE4SS_SDK_BenchUpgrade_PortalSupressionField_HPP

class ABenchUpgrade_PortalSupressionField_C : public ABenchUpgrade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Rings2;                                               // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Rings1;                                               // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* Tower;                                                // 0x02F8 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void TogglePowerFX();
    void UpdatePoweredState();
    void ExecuteUbergraph_BenchUpgrade_PortalSupressionField(int32 EntryPoint);
}; // Size: 0x300

#endif
