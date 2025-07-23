#ifndef UE4SS_SDK_Deployed_PlantRope_HPP
#define UE4SS_SDK_Deployed_PlantRope_HPP

class ADeployed_PlantRope_C : public ADeployed_Ladder_ParentBP_C
{
    class USkeletalMeshComponent* BulbMesh;                                           // 0x0908 (size: 0x8)

    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
}; // Size: 0x910

#endif
