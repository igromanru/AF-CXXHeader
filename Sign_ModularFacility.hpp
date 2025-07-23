#ifndef UE4SS_SDK_Sign_ModularFacility_HPP
#define UE4SS_SDK_Sign_ModularFacility_HPP

class ASign_ModularFacility_C : public AActor
{
    class UStaticMeshComponent* Border;                                               // 0x0298 (size: 0x8)
    class UTextRenderComponent* SignText;                                             // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TEnumAsByte<EModularSignDirections::Type> ArrowDirection;                         // 0x02B8 (size: 0x1)
    FString DisplayText;                                                              // 0x02C0 (size: 0x10)
    class UMaterialInterface* Icon;                                                   // 0x02D0 (size: 0x8)
    bool ShowFrame;                                                                   // 0x02D8 (size: 0x1)
    class UMaterialInterface* FrameMaterial;                                          // 0x02E0 (size: 0x8)
    double HorizontalOffset;                                                          // 0x02E8 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2F0

#endif
