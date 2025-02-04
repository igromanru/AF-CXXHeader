#ifndef UE4SS_SDK_PlatformCart_Storage_Default_HPP
#define UE4SS_SDK_PlatformCart_Storage_Default_HPP

class APlatformCart_Storage_Default_C : public APlatformCart_Storage_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A08 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_16;                                       // 0x0A10 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_15;                                       // 0x0A18 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_14;                                       // 0x0A20 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_13;                                       // 0x0A28 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_12;                                       // 0x0A30 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_11;                                       // 0x0A38 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_10;                                       // 0x0A40 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_9;                                        // 0x0A48 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_8;                                        // 0x0A50 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_7;                                        // 0x0A58 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_6;                                        // 0x0A60 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_5;                                        // 0x0A68 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_4;                                        // 0x0A70 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_3;                                        // 0x0A78 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_2;                                        // 0x0A80 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_1;                                        // 0x0A88 (size: 0x8)
    TArray<class UStaticMeshComponent*> VisualCrates;                                 // 0x0A90 (size: 0x10)

    void RefreshContainerVisuals();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PlatformCart_Storage_Default(int32 EntryPoint);
}; // Size: 0xAA0

#endif
