#ifndef UE4SS_SDK_Deployable_TransmogDresser_HPP
#define UE4SS_SDK_Deployable_TransmogDresser_HPP

class ADeployable_TransmogDresser_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class USceneComponent* TmogButtonPrompt1;                                         // 0x0858 (size: 0x8)
    class USceneComponent* TmogButtonPrompt;                                          // 0x0860 (size: 0x8)
    class UStaticMeshComponent* TmogMesh;                                             // 0x0868 (size: 0x8)
    class UStaticMeshComponent* CustomizeMesh;                                        // 0x0870 (size: 0x8)
    class UChildActorComponent* CharacterCustomization;                               // 0x0878 (size: 0x8)
    class UActorComponent* LastHitComponent;                                          // 0x0880 (size: 0x8)
    bool UsingTransmog;                                                               // 0x0888 (size: 0x1)
    TMap<TEnumAsByte<E_InventorySlotType::Type>, bool> GearVisibilityStatus;          // 0x0890 (size: 0x50)
    TMap<TEnumAsByte<E_InventorySlotType::Type>, bool> BodyMeshVisibilityStatus;      // 0x08E0 (size: 0x50)
    bool HeadAccessoryEnabled;                                                        // 0x0930 (size: 0x1)

    void StoreInitialVisibilities(class AAbiotic_PlayerCharacter_C* InteractingCharacter, bool& FinishedSetup);
    void SetEquippedGearsVisibility(class AAbiotic_PlayerCharacter_C* InteractingCharacter, bool Visible);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void InteractWith_A_LocalFX(bool Hold);
    void ShowCharacterCustomization();
    void OnInventoryClosed_Event();
    void LocalHolsterUpdate(bool Holster);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_Deployable_TransmogDresser(int32 EntryPoint);
}; // Size: 0x931

#endif
