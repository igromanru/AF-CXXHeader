#ifndef UE4SS_SDK_Deployed_LaserPrism_HPP
#define UE4SS_SDK_Deployed_LaserPrism_HPP

class ADeployed_LaserPrism_C : public ADeployed_LaserReflector_C
{
    class UArrowComponent* Arrow2;                                                    // 0x0970 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0978 (size: 0x8)
    class ULaserComponent_C* LaserComponent2;                                         // 0x0980 (size: 0x8)
    class ULaserComponent_C* LaserComponent1;                                         // 0x0988 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
}; // Size: 0x990

#endif
