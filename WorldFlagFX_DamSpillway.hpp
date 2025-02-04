#ifndef UE4SS_SDK_WorldFlagFX_DamSpillway_HPP
#define UE4SS_SDK_WorldFlagFX_DamSpillway_HPP

class AWorldFlagFX_DamSpillway_C : public AWorldFlagFX_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Waterfall;                                            // 0x0348 (size: 0x8)

    void Local_ToggleFX(bool Activated);
    void ExecuteUbergraph_WorldFlagFX_DamSpillway(int32 EntryPoint);
}; // Size: 0x350

#endif
