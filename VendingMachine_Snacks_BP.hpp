#ifndef UE4SS_SDK_VendingMachine_Snacks_BP_HPP
#define UE4SS_SDK_VendingMachine_Snacks_BP_HPP

class AVendingMachine_Snacks_BP_C : public AVendingMachine_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B00 (size: 0x8)
    class UStaticMeshComponent* SpiralA3;                                             // 0x0B08 (size: 0x8)
    class UStaticMeshComponent* SpiralB3;                                             // 0x0B10 (size: 0x8)
    class UStaticMeshComponent* SpiralA1;                                             // 0x0B18 (size: 0x8)
    class UStaticMeshComponent* SpiralA2;                                             // 0x0B20 (size: 0x8)
    class USceneComponent* ItemB3;                                                    // 0x0B28 (size: 0x8)
    class USceneComponent* ItemC1;                                                    // 0x0B30 (size: 0x8)
    class USceneComponent* ItemC2;                                                    // 0x0B38 (size: 0x8)
    class USceneComponent* ItemC3;                                                    // 0x0B40 (size: 0x8)
    class USceneComponent* ItemB2;                                                    // 0x0B48 (size: 0x8)
    class USceneComponent* ItemD1;                                                    // 0x0B50 (size: 0x8)
    class USceneComponent* ItemD3;                                                    // 0x0B58 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0B60 (size: 0x8)
    class USceneComponent* ItemA2;                                                    // 0x0B68 (size: 0x8)
    class USceneComponent* ItemD2;                                                    // 0x0B70 (size: 0x8)
    class USceneComponent* ItemA3;                                                    // 0x0B78 (size: 0x8)
    class USceneComponent* ItemB1;                                                    // 0x0B80 (size: 0x8)
    class UStaticMeshComponent* SpiralB2;                                             // 0x0B88 (size: 0x8)
    class UStaticMeshComponent* SpiralB1;                                             // 0x0B90 (size: 0x8)
    class UStaticMeshComponent* SpiralC1;                                             // 0x0B98 (size: 0x8)
    class UStaticMeshComponent* SpiralD1;                                             // 0x0BA0 (size: 0x8)
    class UStaticMeshComponent* SpiralD2;                                             // 0x0BA8 (size: 0x8)
    class UStaticMeshComponent* SpiralC2;                                             // 0x0BB0 (size: 0x8)
    class UStaticMeshComponent* SpiralC3;                                             // 0x0BB8 (size: 0x8)
    class UStaticMeshComponent* SpiralD3;                                             // 0x0BC0 (size: 0x8)
    class USceneComponent* ItemA1;                                                    // 0x0BC8 (size: 0x8)
    class UStaticMeshComponent* InteriorLightMesh;                                    // 0x0BD0 (size: 0x8)
    TArray<class UStaticMeshComponent*> SpiralMeshes;                                 // 0x0BD8 (size: 0x10)
    TArray<class USceneComponent*> ItemSlots;                                         // 0x0BE8 (size: 0x10)
    class UStaticMeshComponent* RandomItemComponent;                                  // 0x0BF8 (size: 0x8)

    void UpdateVendingMachineVisibleItems();
    void ReceiveBeginPlay();
    void LocalFX_UpdateButtonStates();
    void SetVendingMachineNewMesh(class UStaticMesh* NewMesh);
    void ExecuteUbergraph_VendingMachine_Snacks_BP(int32 EntryPoint);
}; // Size: 0xC00

#endif
