#ifndef UE4SS_SDK_Deployed_LandingCushion_HPP
#define UE4SS_SDK_Deployed_LandingCushion_HPP

class ADeployed_LandingCushion_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UBoxComponent* LandingZone;                                                 // 0x0858 (size: 0x8)

    void Landing Damage Multiplier(double Damage, double& DamageMultiplier);
    void BndEvt__Deployed_LandingCushion_LandingZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_Deployed_LandingCushion(int32 EntryPoint);
}; // Size: 0x860

#endif
