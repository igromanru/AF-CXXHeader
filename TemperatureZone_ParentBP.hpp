#ifndef UE4SS_SDK_TemperatureZone_ParentBP_HPP
#define UE4SS_SDK_TemperatureZone_ParentBP_HPP

class ATemperatureZone_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UThermalEmitterComponent* ThermalEmitter;                                   // 0x02A0 (size: 0x8)
    class UBoxComponent* TemperatureVolume;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    int32 CurrentZoneTemperature;                                                     // 0x02B8 (size: 0x4)
    int32 Day_ZoneTemperature;                                                        // 0x02BC (size: 0x4)
    int32 Night_ZoneTemperature;                                                      // 0x02C0 (size: 0x4)
    class ADayNightManager_C* DayNightManager;                                        // 0x02C8 (size: 0x8)
    FVector VolumeExtent;                                                             // 0x02D0 (size: 0x18)

    float GetAmbientTemperature();
    void GetThermalOverlapPrimitives(TArray<class UPrimitiveComponent*>& OutPrimitives);
    void UserConstructionScript();
    void ApplyNewTemperature(float NewTemperature);
    void ThermalEmitterActiveUpdated(bool bActive);
    void ReceiveBeginPlay();
    void DayNightChange();
    void ExecuteUbergraph_TemperatureZone_ParentBP(int32 EntryPoint);
}; // Size: 0x2E8

#endif
