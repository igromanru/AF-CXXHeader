#ifndef UE4SS_SDK_Deployed_Furniture_Bench_LockerRoom_HPP
#define UE4SS_SDK_Deployed_Furniture_Bench_LockerRoom_HPP

class ADeployed_Furniture_Bench_LockerRoom_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    class USceneComponent* SitSpot3;                                                  // 0x0850 (size: 0x8)
    class USceneComponent* SitSpot2;                                                  // 0x0858 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x0860 (size: 0x8)

    void CanLongInteractWith_A(bool& Success);
}; // Size: 0x868

#endif
