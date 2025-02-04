#ifndef UE4SS_SDK_WorldFlagFX_FallTree_HPP
#define UE4SS_SDK_WorldFlagFX_FallTree_HPP

class AWorldFlagFX_FallTree_C : public AWorldFlagFX_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0348 (size: 0x8)

    void Local_ToggleFX(bool Activated);
    void ExecuteUbergraph_WorldFlagFX_FallTree(int32 EntryPoint);
}; // Size: 0x350

#endif
