#ifndef UE4SS_SDK_Deployed_Refrigerator_HPP
#define UE4SS_SDK_Deployed_Refrigerator_HPP

class ADeployed_Refrigerator_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UNiagaraComponent* FreezerMist;                                             // 0x0928 (size: 0x8)
    class UPointLightComponent* InteriorFridgeLight;                                  // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Door2;                                                // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Door1;                                                // 0x0940 (size: 0x8)
    float Timeline_0_NewTrack_0_62671F4545A958FDB77DFDB1745CC944;                     // 0x0948 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_62671F4545A958FDB77DFDB1745CC944; // 0x094C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0950 (size: 0x8)

    void UpdateFridgePoweredFX(bool DoorsOpen);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_Refrigerator(int32 EntryPoint);
}; // Size: 0x958

#endif
