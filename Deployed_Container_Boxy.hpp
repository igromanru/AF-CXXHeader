#ifndef UE4SS_SDK_Deployed_Container_Boxy_HPP
#define UE4SS_SDK_Deployed_Container_Boxy_HPP

class ADeployed_Container_Boxy_C : public ADeployed_Container_Cargo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0930 (size: 0x8)
    FRotator LidClosedRot;                                                            // 0x0938 (size: 0x18)
    FRotator LidOpenRot;                                                              // 0x0950 (size: 0x18)
    class UAbiotic_InventoryComponent_C* RemoteInventoryReference;                    // 0x0968 (size: 0x8)
    FDeployed_Container_Boxy_COnContainerOpened OnContainerOpened;                    // 0x0970 (size: 0x10)
    void OnContainerOpened();

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void IsBoxAsleep(bool& Asleep);
    void OnContainerBeingUsed();
    void SaveDeployable(bool RemoveFromSave);
    void GetContainerInventory(class UAbiotic_InventoryComponent_C*& Inventory);
    FText GetItemNameText();
    void ToggleOpenFX(bool Open);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_Deployed_Container_Boxy(int32 EntryPoint);
    void OnContainerOpened__DelegateSignature();
}; // Size: 0x980

#endif
