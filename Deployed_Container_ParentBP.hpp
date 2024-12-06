#ifndef UE4SS_SDK_Deployed_Container_ParentBP_HPP
#define UE4SS_SDK_Deployed_Container_ParentBP_HPP

class ADeployed_Container_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UChildActorComponent* RadioactiveActor;                                     // 0x0928 (size: 0x8)
    class UTextRenderComponent* ContainerLabelText;                                   // 0x0930 (size: 0x8)
    class UBoxComponent* InteractionBlocker;                                          // 0x0938 (size: 0x8)
    class UAbiotic_InventoryComponent_C* ContainerInventory;                          // 0x0940 (size: 0x8)
    bool IsContainerBeingUsed;                                                        // 0x0948 (size: 0x1)
    TSoftObjectPtr<USoundBase> OpenCue;                                               // 0x0950 (size: 0x28)
    TSoftObjectPtr<USoundBase> CloseCue;                                              // 0x0978 (size: 0x28)
    FDataTableRowHandle InitialContainerLoot;                                         // 0x09A0 (size: 0x10)
    TArray<class AAbiotic_Character_ParentBP_C*> ContainerUsers;                      // 0x09B0 (size: 0x10)
    bool CloseFullyWhenEmpty;                                                         // 0x09C0 (size: 0x1)
    FDeployed_Container_ParentBP_CContainerIsSaving ContainerIsSaving;                // 0x09C8 (size: 0x10)
    void ContainerIsSaving();
    FDeployed_Container_ParentBP_CContainerDestroyed ContainerDestroyed;              // 0x09D8 (size: 0x10)
    void ContainerDestroyed();

    bool IsRadioactive();
    void TriggerFoundByPlayer(bool SkipSave);
    void GetInteractionBlocker(class UBoxComponent*& Blocker);
    FText GetItemNameText();
    void NewPlayerMadeString();
    void CheckContainerExistingData();
    void OnRep_IsContainerBeingUsed();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void OnLoaded_D6DAF47B40AC12868384A5949C1F81FB(class UObject* Loaded);
    void InteractWith_A_LocalFX(bool Hold);
    void ReceiveBeginPlay();
    void ToggleOpenFX(bool Open);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_UserLeftContainer(const class AAbiotic_Character_ParentBP_C*& ContainerUser);
    void PlayOpenCloseSound(TSoftObjectPtr<UObject> Asset);
    void DeliverString(FString String, bool FromSave);
    void UpdateRadioactiveActor(bool SetActive);
    void BndEvt__Deployed_Container_ParentBP_ContainerInventory_K2Node_ComponentBoundEvent_1_RadiationUpdated__DelegateSignature(double RadiationAmount);
    void OnLoadedFromSave();
    void OnContainerInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void ReceiveDestroyed();
    void TryRegenerateContainerLoot();
    void ExecuteUbergraph_Deployed_Container_ParentBP(int32 EntryPoint);
    void ContainerDestroyed__DelegateSignature();
    void ContainerIsSaving__DelegateSignature();
}; // Size: 0x9E8

#endif
