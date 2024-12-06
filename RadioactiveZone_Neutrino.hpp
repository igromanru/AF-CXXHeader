#ifndef UE4SS_SDK_RadioactiveZone_Neutrino_HPP
#define UE4SS_SDK_RadioactiveZone_Neutrino_HPP

class ARadioactiveZone_Neutrino_C : public ARadioactiveZone_ParentBP_C
{
    class USphereComponent* Sphere;                                                   // 0x02B0 (size: 0x8)
    bool Powered;                                                                     // 0x02B8 (size: 0x1)

    void GetZoneRadiation(double& RadiationPerTick);
    class UPrimitiveComponent* GetOverlapVolume();
}; // Size: 0x2B9

#endif
