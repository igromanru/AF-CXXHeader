#ifndef UE4SS_SDK_Deployed_Furniture_Couch_Office_HPP
#define UE4SS_SDK_Deployed_Furniture_Couch_Office_HPP

class ADeployed_Furniture_Couch_Office_C : public ADeployed_Furniture_Bed_ParentBP_C
{
    class USceneComponent* SitSpot3;                                                  // 0x08F8 (size: 0x8)
    class USceneComponent* SitSpot2;                                                  // 0x0900 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x0908 (size: 0x8)

    void CanLongInteractWith_A(bool& Success);
    void HasSitLocations(bool& IsSittable);
}; // Size: 0x910

#endif
