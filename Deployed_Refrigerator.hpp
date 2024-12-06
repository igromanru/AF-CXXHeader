#ifndef UE4SS_SDK_Deployed_Refrigerator_HPP
#define UE4SS_SDK_Deployed_Refrigerator_HPP

class ADeployed_Refrigerator_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09E8 (size: 0x8)
    class UNiagaraComponent* FreezerMist;                                             // 0x09F0 (size: 0x8)
    class UPointLightComponent* InteriorFridgeLight;                                  // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* Door2;                                                // 0x0A00 (size: 0x8)
    class UStaticMeshComponent* Door1;                                                // 0x0A08 (size: 0x8)
    float Timeline_0_NewTrack_0_62671F4545A958FDB77DFDB1745CC944;                     // 0x0A10 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_62671F4545A958FDB77DFDB1745CC944; // 0x0A14 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0A18 (size: 0x8)

    void UpdateFridgePoweredFX(bool DoorsOpen);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ToggleOpenFX(bool Open);
    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_Refrigerator(int32 EntryPoint);
}; // Size: 0xA20

#endif
