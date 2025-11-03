#ifndef UE4SS_SDK_CinematicCameraTool_Instance_HPP
#define UE4SS_SDK_CinematicCameraTool_Instance_HPP

class ACinematicCameraTool_Instance_C : public ACameraActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09B0 (size: 0x8)
    bool TrackPlayer;                                                                 // 0x09B8 (size: 0x1)

    void CycleMode();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_CinematicCameraTool_Instance(int32 EntryPoint);
}; // Size: 0x9B9

#endif
