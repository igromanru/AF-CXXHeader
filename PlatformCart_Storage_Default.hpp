#ifndef UE4SS_SDK_PlatformCart_Storage_Default_HPP
#define UE4SS_SDK_PlatformCart_Storage_Default_HPP

class APlatformCart_Storage_Default_C : public APlatformCart_Storage_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_16;                                       // 0x0938 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_15;                                       // 0x0940 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_14;                                       // 0x0948 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_13;                                       // 0x0950 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_12;                                       // 0x0958 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_11;                                       // 0x0960 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_10;                                       // 0x0968 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_9;                                        // 0x0970 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_8;                                        // 0x0978 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_7;                                        // 0x0980 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_6;                                        // 0x0988 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_5;                                        // 0x0990 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_4;                                        // 0x0998 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_3;                                        // 0x09A0 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_2;                                        // 0x09A8 (size: 0x8)
    class UStaticMeshComponent* VisualCrate_1;                                        // 0x09B0 (size: 0x8)
    TArray<class UStaticMeshComponent*> VisualCrates;                                 // 0x09B8 (size: 0x10)

    void RefreshContainerVisuals();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PlatformCart_Storage_Default(int32 EntryPoint);
}; // Size: 0x9C8

#endif
