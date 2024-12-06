#ifndef UE4SS_SDK_DebugTeleport_HPP
#define UE4SS_SDK_DebugTeleport_HPP

class ADebugTeleport_C : public AActor
{
    class UTextRenderComponent* TextRender;                                           // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x2A8

#endif
