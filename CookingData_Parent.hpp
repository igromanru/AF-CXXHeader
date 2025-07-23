#ifndef UE4SS_SDK_CookingData_Parent_HPP
#define UE4SS_SDK_CookingData_Parent_HPP

class UCookingData_Parent_C : public UPrimaryDataAsset
{
    FTransform PanCookingTransform;                                                   // 0x0030 (size: 0x60)
    TSoftObjectPtr<UStaticMesh> SoupMesh;                                             // 0x0090 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> LiquidMaterial;                                // 0x00B8 (size: 0x28)
    TArray<TSoftObjectPtr<UMaterialInterface>> ChunkMaterials;                        // 0x00E0 (size: 0x10)
    FLinearColor SoupColor;                                                           // 0x00F0 (size: 0x10)
    TArray<FLinearColor> ChunkTints;                                                  // 0x0100 (size: 0x10)

}; // Size: 0x110

#endif
