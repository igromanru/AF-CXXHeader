#ifndef UE4SS_SDK_Deployed_Furniture_CouchMed_Office_HPP
#define UE4SS_SDK_Deployed_Furniture_CouchMed_Office_HPP

class ADeployed_Furniture_CouchMed_Office_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    class USceneComponent* SitSpot2;                                                  // 0x0920 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x0928 (size: 0x8)

    void HasSitLocations(bool& IsSittable);
}; // Size: 0x930

#endif
