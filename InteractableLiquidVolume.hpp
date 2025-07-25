#ifndef UE4SS_SDK_InteractableLiquidVolume_HPP
#define UE4SS_SDK_InteractableLiquidVolume_HPP

class AInteractableLiquidVolume_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0928 (size: 0x8)
    class UBoxComponent* LiquidInteractVolume;                                        // 0x0930 (size: 0x8)
    FVector LiquidVolumeSize;                                                         // 0x0938 (size: 0x18)
    bool DisallowWashing;                                                             // 0x0950 (size: 0x1)
    FFishingZoneRowHandle FishingZone;                                                // 0x0958 (size: 0x20)

    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanLongInteractWith_A(bool& Success);
    void SaveDeployable(bool RemoveFromSave);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void RefreshAllLiquidStateFX();
    void ExecuteUbergraph_InteractableLiquidVolume(int32 EntryPoint);
}; // Size: 0x978

#endif
