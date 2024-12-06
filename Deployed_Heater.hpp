#ifndef UE4SS_SDK_Deployed_Heater_HPP
#define UE4SS_SDK_Deployed_Heater_HPP

class ADeployed_Heater_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UThermalEmitterComponent* ThermalEmitter;                                   // 0x0928 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0930 (size: 0x8)
    class USphereComponent* HeatRadiusSphere;                                         // 0x0938 (size: 0x8)
    float TimelineToggle_Light_E19629D541759C1A9691E59274F6DBD3;                      // 0x0940 (size: 0x4)
    float TimelineToggle_Coils_E19629D541759C1A9691E59274F6DBD3;                      // 0x0944 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TimelineToggle__Direction_E19629D541759C1A9691E59274F6DBD3; // 0x0948 (size: 0x1)
    class UTimelineComponent* TimelineToggle;                                         // 0x0950 (size: 0x8)
    double HeatRadius;                                                                // 0x0958 (size: 0x8)

    float GetAmbientTemperature();
    void GetThermalOverlapPrimitives(TArray<class UPrimitiveComponent*>& OutPrimitives);
    void UserConstructionScript();
    void TimelineToggle__FinishedFunc();
    void TimelineToggle__UpdateFunc();
    void TogglePowerFX();
    void HeaterSlowToggle(bool On);
    void ApplyNewTemperature(float NewTemperature);
    void ThermalEmitterActiveUpdated(bool bActive);
    void ExecuteUbergraph_Deployed_Heater(int32 EntryPoint);
}; // Size: 0x960

#endif
