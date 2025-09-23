#ifndef UE4SS_SDK_WeatherDirector_RadLeak_HPP
#define UE4SS_SDK_WeatherDirector_RadLeak_HPP

class AWeatherDirector_RadLeak_C : public AWeatherDirector_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    double RadiationPerTick;                                                          // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_WeatherDirector_RadLeak(int32 EntryPoint);
}; // Size: 0x2B0

#endif
