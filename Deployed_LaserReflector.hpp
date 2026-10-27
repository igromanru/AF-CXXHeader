#ifndef UE4SS_SDK_Deployed_LaserReflector_HPP
#define UE4SS_SDK_Deployed_LaserReflector_HPP

class ADeployed_LaserReflector_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0860 (size: 0x8)
    class UStaticMeshComponent* ReflectiveSurface;                                    // 0x0868 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0870 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0878 (size: 0x8)
    TArray<UPrimitiveComponent*> ReflectiveSurfaces;                                  // 0x0880 (size: 0x10)
    TArray<ULaserComponent_C*> ReflectedLaserComponents;                              // 0x0890 (size: 0x10)

    void ValidateHitLasers();
    void GetPoweringActors(TArray<AActor*>& PowerSourceParents);
    void ReceiveLaserHit(class ULaserComponent_C* Laser, int32 CurrentBounce, FHitResult& HitResult, bool& Handled);
    void GetHighlightComponents(TArray<UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Local_AltFireInput();
    void Local_InteractInput();
    void Server_StartMount(class AAbiotic_Character_ParentBP_C* Character);
    void Server_EndMount(class AAbiotic_Character_ParentBP_C* Character);
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Local_FireInput();
    void Server_TickRotation(class AAbiotic_Character_ParentBP_C* Character, double DeltaTime, FRotator ControlRotation);
    void Owner_StartMount();
    void Owner_EndMount();
    void Local_InteractInputEnd();
    void ExecuteUbergraph_Deployed_LaserReflector(int32 EntryPoint);
}; // Size: 0x8A0

#endif
