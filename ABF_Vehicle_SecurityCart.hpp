#ifndef UE4SS_SDK_ABF_Vehicle_SecurityCart_HPP
#define UE4SS_SDK_ABF_Vehicle_SecurityCart_HPP

class AABF_Vehicle_SecurityCart_C : public AABF_Vehicle_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0568 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0570 (size: 0x8)
    class UBoxComponent* ImpactBox;                                                   // 0x0578 (size: 0x8)
    class USpotLightComponent* KlaxonSpinnerLight;                                    // 0x0580 (size: 0x8)
    class UChildActorComponent* RearSeat_R;                                           // 0x0588 (size: 0x8)
    class UChildActorComponent* FrontSeat_R;                                          // 0x0590 (size: 0x8)
    class UChildActorComponent* RearSeat_L;                                           // 0x0598 (size: 0x8)
    class UMaterialInterface* Klaxon_OnMaterial;                                      // 0x05A0 (size: 0x8)
    class UMaterialInterface* Klaxon_OffMaterial;                                     // 0x05A8 (size: 0x8)
    FTimerHandle KlaxonSpinnerTimer;                                                  // 0x05B0 (size: 0x8)
    float KlaxonSpinSpeed;                                                            // 0x05B8 (size: 0x4)

    void ToggleHeadlightsFX(bool On);
    void ReceiveBeginPlay();
    void SpinKlaxon();
    void ExecuteUbergraph_ABF_Vehicle_SecurityCart(int32 EntryPoint);
}; // Size: 0x5BC

#endif
