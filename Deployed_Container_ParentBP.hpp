#ifndef UE4SS_SDK_Deployed_Container_ParentBP_HPP
#define UE4SS_SDK_Deployed_Container_ParentBP_HPP

class ADeployed_Container_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UChildActorComponent* RadioactiveActor;                                     // 0x0858 (size: 0x8)
    class UTextRenderComponent* ContainerLabelText;                                   // 0x0860 (size: 0x8)
    class UBoxComponent* InteractionBlocker;                                          // 0x0868 (size: 0x8)
    class UAbiotic_InventoryComponent_C* ContainerInventory;                          // 0x0870 (size: 0x8)
    bool IsContainerBeingUsed;                                                        // 0x0878 (size: 0x1)
    TSoftObjectPtr<USoundBase> OpenCue;                                               // 0x0880 (size: 0x28)
    TSoftObjectPtr<USoundBase> CloseCue;                                              // 0x08A8 (size: 0x28)
    FDataTableRowHandle InitialContainerLoot;                                         // 0x08D0 (size: 0x10)
    TArray<class AAbiotic_Character_ParentBP_C*> ContainerUsers;                      // 0x08E0 (size: 0x10)
    bool CloseFullyWhenEmpty;                                                         // 0x08F0 (size: 0x1)
    FDeployed_Container_ParentBP_CContainerIsSaving ContainerIsSaving;                // 0x08F8 (size: 0x10)
    void ContainerIsSaving();
    FDeployed_Container_ParentBP_CContainerDestroyed ContainerDestroyed;              // 0x0908 (size: 0x10)
    void ContainerDestroyed();
    bool CanItemTransport;                                                            // 0x0918 (size: 0x1)
    bool RemainOpenAfterEmpty;                                                        // 0x0919 (size: 0x1)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void SaveDeployable(bool RemoveFromSave);
    void ValidateContainerUsage();
    void OnContainerBeingUsed();
    void GetContainerInventory(class UAbiotic_InventoryComponent_C*& Inventory);
    void UpdateNoResetVignette();
    void OnInventoriesLoadedFromSave(TArray<FSaveData_Inventories_Struct>& Data);
    bool IsRadioactive();
    void TriggerFoundByPlayer(bool SkipSave);
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    FText GetItemNameText();
    void CheckContainerExistingData();
    void OnRep_IsContainerBeingUsed();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void OnLoaded_D6DAF47B40AC12868384A5949C1F81FB(class UObject* Loaded);
    void OnFailure_04B86A7E48290A19505F30B8D724E19F(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_04B86A7E48290A19505F30B8D724E19F(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void InteractWith_A_LocalFX(bool Hold);
    void ReceiveBeginPlay();
    void ToggleOpenFX(bool Open);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_UserLeftContainer(const class AAbiotic_Character_ParentBP_C*& ContainerUser);
    void PlayOpenCloseSound(TSoftObjectPtr<UObject> Asset);
    void DeliverString(FString String, bool FromSave);
    void UpdateRadioactiveActor(bool SetActive);
    void OnLoadedFromSave(double NewLifespan);
    void OnContainerInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void ReceiveDestroyed();
    void TryRegenerateContainerLoot();
    void Server_CheckContainerUsage();
    void NewPlayerMadeString();
    void OnRadiationUpdated(double NewRadiation);
    void ExecuteUbergraph_Deployed_Container_ParentBP(int32 EntryPoint);
    void ContainerDestroyed__DelegateSignature();
    void ContainerIsSaving__DelegateSignature();
}; // Size: 0x91A

#endif
