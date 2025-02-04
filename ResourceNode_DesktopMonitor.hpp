#ifndef UE4SS_SDK_ResourceNode_DesktopMonitor_HPP
#define UE4SS_SDK_ResourceNode_DesktopMonitor_HPP

class AResourceNode_DesktopMonitor_C : public AResourceNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    bool NonGATEPC;                                                                   // 0x04D8 (size: 0x1)
    class UObject* CurrentAnimatedTexture;                                            // 0x04E0 (size: 0x8)
    FTimerHandle AnimatedTextureTimer;                                                // 0x04E8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ResourceNode_DesktopMonitor(int32 EntryPoint);
}; // Size: 0x4F0

#endif
