#ifndef UE4SS_SDK_CoworkerDirectorComponent_HPP
#define UE4SS_SDK_CoworkerDirectorComponent_HPP

class UCoworkerDirectorComponent_C : public UStalkingNpcDirector_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0118 (size: 0x8)
    class ADayNightManager_C* DayNightManager;                                        // 0x0120 (size: 0x8)
    TSet<FWeatherEventRowHandle> WeatherToAvoid;                                      // 0x0128 (size: 0x50)

    void IsTodayAssaultDay(bool& LateArrival);
    void CanSpawn();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CoworkerDirectorComponent(int32 EntryPoint);
}; // Size: 0x178

#endif
