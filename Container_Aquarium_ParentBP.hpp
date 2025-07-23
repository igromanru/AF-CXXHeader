#ifndef UE4SS_SDK_Container_Aquarium_ParentBP_HPP
#define UE4SS_SDK_Container_Aquarium_ParentBP_HPP

class AContainer_Aquarium_ParentBP_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UAudioComponent* AmbientWater;                                              // 0x0928 (size: 0x8)
    class UNiagaraComponent* Niagara_Bubbler;                                         // 0x0930 (size: 0x8)
    class UNiagaraComponent* Niagara_WaterDebris;                                     // 0x0938 (size: 0x8)
    class UAudioComponent* BubblerAudio;                                              // 0x0940 (size: 0x8)
    TArray<class UBP_FishTankMesh_C*> FishMeshes;                                     // 0x0948 (size: 0x10)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UpdateInventoryFish();
    void InitFishSplines();
    void ReceiveBeginPlay();
    void BndEvt__Container_Aquarium_ParentBP_ContainerInventory_K2Node_ComponentBoundEvent_0_InventoryUpdated__DelegateSignature(class UAbiotic_InventoryComponent_C* Inventory);
    void TogglePowerFX();
    void RefreshConstructionModeStateFX();
    void ExecuteUbergraph_Container_Aquarium_ParentBP(int32 EntryPoint);
}; // Size: 0x958

#endif
