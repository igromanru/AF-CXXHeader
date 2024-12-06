#ifndef UE4SS_SDK_Deployed_LaserEmitter_HPP
#define UE4SS_SDK_Deployed_LaserEmitter_HPP

class ADeployed_LaserEmitter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0928 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0930 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void SetupPaintAndTexture();
    void ExecuteUbergraph_Deployed_LaserEmitter(int32 EntryPoint);
}; // Size: 0x938

#endif
