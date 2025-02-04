#ifndef UE4SS_SDK_WorldFlagFX_MFPipeLaser_HPP
#define UE4SS_SDK_WorldFlagFX_MFPipeLaser_HPP

class AWorldFlagFX_MFPipeLaser_C : public AWorldFlagFX_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    double BeamLength;                                                                // 0x0348 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_WorldFlagFX_MFPipeLaser(int32 EntryPoint);
}; // Size: 0x350

#endif
