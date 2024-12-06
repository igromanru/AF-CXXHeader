#ifndef UE4SS_SDK_SubFXZone_HPP
#define UE4SS_SDK_SubFXZone_HPP

class ASubFXZone_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    class UBoxComponent* FXVolume;                                                    // 0x02A8 (size: 0x8)
    FVector FXZoneSize;                                                               // 0x02B0 (size: 0x18)
    FDataTableRowHandle FXRow;                                                        // 0x02C8 (size: 0x10)
    int32 Priority;                                                                   // 0x02D8 (size: 0x4)

    void UserConstructionScript();
    void BndEvt__RadiationZone_ParentBP_RadiationVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__RadiationZone_ParentBP_RadiationVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_SubFXZone(int32 EntryPoint);
}; // Size: 0x2DC

#endif
