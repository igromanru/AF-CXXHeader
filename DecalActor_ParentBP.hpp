#ifndef UE4SS_SDK_DecalActor_ParentBP_HPP
#define UE4SS_SDK_DecalActor_ParentBP_HPP

class ADecalActor_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02D8 (size: 0x8)
    FVector DecalSize;                                                                // 0x02E0 (size: 0x18)
    class UMaterialInterface* DecalMaterial;                                          // 0x02F8 (size: 0x8)
    float DecalLifespan;                                                              // 0x0300 (size: 0x4)
    bool IsBlood;                                                                     // 0x0304 (size: 0x1)
    TEnumAsByte<EBloodSplatterType::Type> BloodColor;                                 // 0x0305 (size: 0x1)
    bool RandomYawRotation;                                                           // 0x0306 (size: 0x1)

    void OnRep_IsBlood();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DecalActor_ParentBP(int32 EntryPoint);
}; // Size: 0x307

#endif
