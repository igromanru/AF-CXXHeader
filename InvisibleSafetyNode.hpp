#ifndef UE4SS_SDK_InvisibleSafetyNode_HPP
#define UE4SS_SDK_InvisibleSafetyNode_HPP

class AInvisibleSafetyNode_C : public AAbioticDeployed_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0570 (size: 0x8)
    class USphereComponent* RangeVisualizer;                                          // 0x0578 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0580 (size: 0x8)
    double ForcedSafetyValue;                                                         // 0x0588 (size: 0x8)
    bool ActAsLightForVisibility;                                                     // 0x0590 (size: 0x1)
    double ForcedLightValue;                                                          // 0x0598 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_InvisibleSafetyNode(int32 EntryPoint);
}; // Size: 0x5A0

#endif
