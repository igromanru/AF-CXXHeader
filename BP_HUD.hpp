#ifndef UE4SS_SDK_BP_HUD_HPP
#define UE4SS_SDK_BP_HUD_HPP

class ABP_HUD_C : public AHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0390 (size: 0x8)

    void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
    void ExecuteUbergraph_BP_HUD(int32 EntryPoint);
}; // Size: 0x398

#endif
