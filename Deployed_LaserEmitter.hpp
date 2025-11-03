#ifndef UE4SS_SDK_Deployed_LaserEmitter_HPP
#define UE4SS_SDK_Deployed_LaserEmitter_HPP

class ADeployed_LaserEmitter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0858 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0860 (size: 0x8)
    float ImaginaryPlaneDistance;                                                     // 0x0868 (size: 0x4)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Local_AltFireInput();
    void TogglePowerFX();
    void SetupPaintAndTexture();
    void Local_FireInput();
    void Server_TickRotation(class AAbiotic_Character_ParentBP_C* Character, double DeltaTime, FRotator ControlRotation);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void Server_EndMount(class AAbiotic_Character_ParentBP_C* Character);
    void Local_InteractInput();
    void Server_StartMount(class AAbiotic_Character_ParentBP_C* Character);
    void Owner_StartMount();
    void Owner_EndMount();
    void ExecuteUbergraph_Deployed_LaserEmitter(int32 EntryPoint);
}; // Size: 0x86C

#endif
