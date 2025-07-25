#ifndef UE4SS_SDK_Deployed_LaserReflector_HPP
#define UE4SS_SDK_Deployed_LaserReflector_HPP

class ADeployed_LaserReflector_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UStaticMeshComponent* ReflectiveSurface;                                    // 0x0858 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0860 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0868 (size: 0x8)
    TArray<class UPrimitiveComponent*> ReflectiveSurfaces;                            // 0x0870 (size: 0x10)
    TArray<class ULaserComponent_C*> ReflectedLaserComponents;                        // 0x0880 (size: 0x10)

    void ValidateHitLasers();
    void GetPoweringActors(TArray<class AActor*>& PowerSourceParents);
    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Deployed_LaserReflector(int32 EntryPoint);
}; // Size: 0x890

#endif
