#ifndef UE4SS_SDK_Vignette_Zone_HPP
#define UE4SS_SDK_Vignette_Zone_HPP

class AVignette_Zone_C : public ABuffZone_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    FWorldFlagRowHandle PortalSicknessWorldFlag;                                      // 0x0330 (size: 0x20)

    void DelayedPortalSicknessCheck();
    void BndEvt__RadiationZone_ParentBP_RadiationVolume_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__RadiationZone_ParentBP_RadiationVolume_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Vignette_Zone(int32 EntryPoint);
}; // Size: 0x350

#endif
