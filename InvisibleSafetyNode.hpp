#ifndef UE4SS_SDK_InvisibleSafetyNode_HPP
#define UE4SS_SDK_InvisibleSafetyNode_HPP

class AInvisibleSafetyNode_C : public AAbioticDeployed_ParentBP_C
{
    class USphereComponent* RangeVisualizer;                                          // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x05E0 (size: 0x8)
    double ForcedSafetyValue;                                                         // 0x05E8 (size: 0x8)
    bool ActAsLightForVisibility;                                                     // 0x05F0 (size: 0x1)
    double ForcedLightValue;                                                          // 0x05F8 (size: 0x8)

}; // Size: 0x600

#endif
