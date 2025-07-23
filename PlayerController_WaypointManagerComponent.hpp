#ifndef UE4SS_SDK_PlayerController_WaypointManagerComponent_HPP
#define UE4SS_SDK_PlayerController_WaypointManagerComponent_HPP

class UPlayerController_WaypointManagerComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_PlayerController_WaypointManagerComponent(int32 EntryPoint);
}; // Size: 0xB0

#endif
