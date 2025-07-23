#ifndef UE4SS_SDK_Deployed_Furniture_Stool_Office_01_HPP
#define UE4SS_SDK_Deployed_Furniture_Stool_Office_01_HPP

class ADeployed_Furniture_Stool_Office_01_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    class USceneComponent* SitSpot;                                                   // 0x0850 (size: 0x8)

    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
}; // Size: 0x858

#endif
