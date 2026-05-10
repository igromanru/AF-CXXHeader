#ifndef UE4SS_SDK_Trigger_WeatherBlocker_HPP
#define UE4SS_SDK_Trigger_WeatherBlocker_HPP

class ATrigger_WeatherBlocker_C : public AAbiotic_TriggerVolume_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    TArray<FWeatherEventRowHandle> WeatherAllowList;                                  // 0x0370 (size: 0x10)

    void OnTrigger();
    void ExecuteUbergraph_Trigger_WeatherBlocker(int32 EntryPoint);
}; // Size: 0x380

#endif
