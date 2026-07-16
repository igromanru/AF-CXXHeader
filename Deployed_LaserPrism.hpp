#ifndef UE4SS_SDK_Deployed_LaserPrism_HPP
#define UE4SS_SDK_Deployed_LaserPrism_HPP

class ADeployed_LaserPrism_C : public ADeployed_LaserReflector_C
{
    class UArrowComponent* Arrow2;                                                    // 0x08B0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x08B8 (size: 0x8)
    class ULaserComponent_C* LaserComponent2;                                         // 0x08C0 (size: 0x8)
    class ULaserComponent_C* LaserComponent1;                                         // 0x08C8 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
}; // Size: 0x8D0

#endif
