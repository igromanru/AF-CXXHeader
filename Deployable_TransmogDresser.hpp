#ifndef UE4SS_SDK_Deployable_TransmogDresser_HPP
#define UE4SS_SDK_Deployable_TransmogDresser_HPP

class ADeployable_TransmogDresser_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class USceneComponent* TmogButtonPrompt1;                                         // 0x0928 (size: 0x8)
    class USceneComponent* TmogButtonPrompt;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* TmogMesh;                                             // 0x0938 (size: 0x8)
    class UStaticMeshComponent* CustomizeMesh;                                        // 0x0940 (size: 0x8)
    class UChildActorComponent* CharacterCustomization;                               // 0x0948 (size: 0x8)
    class UActorComponent* LastHitComponent;                                          // 0x0950 (size: 0x8)
    bool UsingTransmog;                                                               // 0x0958 (size: 0x1)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A_LocalFX(bool Hold);
    void ShowCharacterCustomization();
    void OnInventoryClosed_Event();
    void LocalHolsterUpdate(bool Holster);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Deployable_TransmogDresser(int32 EntryPoint);
}; // Size: 0x959

#endif
