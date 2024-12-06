#ifndef UE4SS_SDK_AI_PatrolPath_HPP
#define UE4SS_SDK_AI_PatrolPath_HPP

class AAI_PatrolPath_C : public AActor
{
    class USplineComponent* PatrolSpline;                                             // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    bool SplineClosedLoop;                                                            // 0x02A8 (size: 0x1)

    void UserConstructionScript();
}; // Size: 0x2A9

#endif
