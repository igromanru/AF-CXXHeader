#ifndef UE4SS_SDK_ABF_Vehicle_SUV_HPP
#define UE4SS_SDK_ABF_Vehicle_SUV_HPP

class AABF_Vehicle_SUV_C : public AABF_Vehicle_ParentBP_C
{
    class UStaticMeshComponent* Siderunners;                                          // 0x0568 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0570 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0578 (size: 0x8)
    class UStaticMeshComponent* Door_RR;                                              // 0x0580 (size: 0x8)
    class UStaticMeshComponent* Door_FR;                                              // 0x0588 (size: 0x8)
    class UStaticMeshComponent* Door_RL;                                              // 0x0590 (size: 0x8)
    class UStaticMeshComponent* Door_FL;                                              // 0x0598 (size: 0x8)
    class UPointLightComponent* DashLight;                                            // 0x05A0 (size: 0x8)
    class UBoxComponent* ImpactBox;                                                   // 0x05A8 (size: 0x8)
    class UChildActorComponent* RearSeat_Right;                                       // 0x05B0 (size: 0x8)
    class UChildActorComponent* RearSeat_Left;                                        // 0x05B8 (size: 0x8)
    class UChildActorComponent* FrontSeat_R;                                          // 0x05C0 (size: 0x8)
    class UChildActorComponent* RearSeat_Center;                                      // 0x05C8 (size: 0x8)

    void ToggleHeadlightsFX(bool On);
}; // Size: 0x5D0

#endif
