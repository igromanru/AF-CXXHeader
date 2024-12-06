#ifndef UE4SS_SDK_RadioactiveZone_Container_HPP
#define UE4SS_SDK_RadioactiveZone_Container_HPP

class ARadioactiveZone_Container_C : public ARadioactiveZone_ParentBP_C
{
    class USphereComponent* Sphere;                                                   // 0x02B0 (size: 0x8)

    class UPrimitiveComponent* GetOverlapVolume();
}; // Size: 0x2B8

#endif
