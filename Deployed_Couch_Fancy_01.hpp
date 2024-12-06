#ifndef UE4SS_SDK_Deployed_Couch_Fancy_01_HPP
#define UE4SS_SDK_Deployed_Couch_Fancy_01_HPP

class ADeployed_Couch_Fancy_01_C : public ADeployed_Furniture_Bed_ParentBP_C
{
    class USceneComponent* SitSpot3;                                                  // 0x0990 (size: 0x8)
    class USceneComponent* SitSpot2;                                                  // 0x0998 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x09A0 (size: 0x8)

    void CanLongInteractWith_A(bool& Success);
    void HasSitLocations(bool& IsSittable);
}; // Size: 0x9A8

#endif
