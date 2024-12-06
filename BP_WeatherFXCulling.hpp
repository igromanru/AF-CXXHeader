#ifndef UE4SS_SDK_BP_WeatherFXCulling_HPP
#define UE4SS_SDK_BP_WeatherFXCulling_HPP

class ABP_WeatherFXCulling_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_WeatherFXCulling(int32 EntryPoint);
}; // Size: 0x2B0

#endif
