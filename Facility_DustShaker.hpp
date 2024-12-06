#ifndef UE4SS_SDK_Facility_DustShaker_HPP
#define UE4SS_SDK_Facility_DustShaker_HPP

class AFacility_DustShaker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02A0 (size: 0x8)
    class UNiagaraComponent* NiagaraEffect;                                           // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    bool BigDust;                                                                     // 0x02B8 (size: 0x1)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void EarthquakeDetected();
    void ExecuteUbergraph_Facility_DustShaker(int32 EntryPoint);
}; // Size: 0x2B9

#endif
