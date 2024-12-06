#ifndef UE4SS_SDK_RadioactiveZone_ParentBP_HPP
#define UE4SS_SDK_RadioactiveZone_ParentBP_HPP

class ARadioactiveZone_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    double ZoneRadiationPerTick;                                                      // 0x02A8 (size: 0x8)

    void GetZoneRadiation(double& RadiationPerTick);
    class UPrimitiveComponent* GetOverlapVolume();
    void ReceiveBeginPlay();
    void OnVolumeOverlapStart(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnVolumeOverlapEnd(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_RadioactiveZone_ParentBP(int32 EntryPoint);
}; // Size: 0x2B0

#endif
