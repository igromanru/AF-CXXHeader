#ifndef UE4SS_SDK_EditorSkylight_HPP
#define UE4SS_SDK_EditorSkylight_HPP

class AEditorSkylight_C : public ASkyLight
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_EditorSkylight(int32 EntryPoint);
}; // Size: 0x2B0

#endif
