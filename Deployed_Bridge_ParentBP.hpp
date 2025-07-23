#ifndef UE4SS_SDK_Deployed_Bridge_ParentBP_HPP
#define UE4SS_SDK_Deployed_Bridge_ParentBP_HPP

class ADeployed_Bridge_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    class USceneComponent* Support_BL;                                                // 0x0850 (size: 0x8)
    class USceneComponent* Support_BR;                                                // 0x0858 (size: 0x8)
    class USceneComponent* Support_FL;                                                // 0x0860 (size: 0x8)
    class USceneComponent* Support_FR;                                                // 0x0868 (size: 0x8)
    class USceneComponent* SnapLocation;                                              // 0x0870 (size: 0x8)
    double SupportMeshStretchMultiplier;                                              // 0x0878 (size: 0x8)
    double SupportMeshLength;                                                         // 0x0880 (size: 0x8)

    void Get Support Socket Location(int32 Index, TEnumAsByte<ERelativeTransformSpace> TransformSpace, FName OptionalSocketName, FVector& Return);
    void Try_ApplyTextureOverrides(TArray<TSoftObjectPtr<UMaterialInterface>>& Texture Variants, bool ContainsPaintTextures, bool& Applied);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UpdateGroundPosition();
    void UpdateSupports();
}; // Size: 0x888

#endif
