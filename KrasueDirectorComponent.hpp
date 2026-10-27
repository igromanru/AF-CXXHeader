#ifndef UE4SS_SDK_KrasueDirectorComponent_HPP
#define UE4SS_SDK_KrasueDirectorComponent_HPP

class UKrasueDirectorComponent_C : public ULeyakDirectorComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    class ADayNightManager_C* DayNight;                                               // 0x0168 (size: 0x8)
    FWeatherEventRowHandle ColdSnapWeather;                                           // 0x0170 (size: 0x10)

    void IsValidTarget(class AAbioticCharacter* Player, bool AllowDuringCombat);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_KrasueDirectorComponent(int32 EntryPoint);
}; // Size: 0x180

#endif
