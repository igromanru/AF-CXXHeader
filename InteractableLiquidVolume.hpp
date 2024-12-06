#ifndef UE4SS_SDK_InteractableLiquidVolume_HPP
#define UE4SS_SDK_InteractableLiquidVolume_HPP

class AInteractableLiquidVolume_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x09F8 (size: 0x8)
    class UBoxComponent* LiquidInteractVolume;                                        // 0x0A00 (size: 0x8)
    FVector LiquidVolumeSize;                                                         // 0x0A08 (size: 0x18)
    bool DisallowWashing;                                                             // 0x0A20 (size: 0x1)
    FFishingZoneRowHandle FishingZone;                                                // 0x0A28 (size: 0x20)

    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void SaveDeployable(bool RemoveFromSave);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void ShowPotentialInteraction(bool& Show);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void RefreshAllLiquidStateFX();
    void ExecuteUbergraph_InteractableLiquidVolume(int32 EntryPoint);
}; // Size: 0xA48

#endif
