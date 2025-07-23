#ifndef UE4SS_SDK_KrasueDirectorComponent_HPP
#define UE4SS_SDK_KrasueDirectorComponent_HPP

class UKrasueDirectorComponent_C : public ULeyakDirectorComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0148 (size: 0x8)
    class ADayNightManager_C* DayNight;                                               // 0x0150 (size: 0x8)
    FWeatherEventRowHandle ColdSnapWeather;                                           // 0x0158 (size: 0x20)

    bool IsValidTarget(class AAbioticCharacter* Player, bool AllowDuringCombat);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_KrasueDirectorComponent(int32 EntryPoint);
}; // Size: 0x178

#endif
