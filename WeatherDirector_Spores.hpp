#ifndef UE4SS_SDK_WeatherDirector_Spores_HPP
#define UE4SS_SDK_WeatherDirector_Spores_HPP

class AWeatherDirector_Spores_C : public AWeatherDirector_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    float SporeCheckFrequency;                                                        // 0x02A8 (size: 0x4)
    FTimerHandle SporeTimerHandle;                                                    // 0x02B0 (size: 0x8)
    double SporeChance;                                                               // 0x02B8 (size: 0x8)
    FBuffDebuffRowHandle SporeDebuff;                                                 // 0x02C0 (size: 0x20)

    void ReceiveBeginPlay();
    void SporeTimer();
    void ExecuteUbergraph_WeatherDirector_Spores(int32 EntryPoint);
}; // Size: 0x2E0

#endif
