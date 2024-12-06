#ifndef UE4SS_SDK_TramSystem_StopPoint_HPP
#define UE4SS_SDK_TramSystem_StopPoint_HPP

class ATramSystem_StopPoint_C : public AActor
{
    class USceneComponent* DefaultSceneRoot;                                          // 0x0298 (size: 0x8)

    void TramReachedLocation(class ATram_ParentBP_C* Tram, bool PositiveDirection, bool& ContinueMoving);
}; // Size: 0x2A0

#endif
