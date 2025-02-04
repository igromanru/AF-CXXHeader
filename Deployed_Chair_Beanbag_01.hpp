#ifndef UE4SS_SDK_Deployed_Chair_Beanbag_01_HPP
#define UE4SS_SDK_Deployed_Chair_Beanbag_01_HPP

class ADeployed_Chair_Beanbag_01_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    class USceneComponent* SitSpot;                                                   // 0x0930 (size: 0x8)

    void HasSitLocations(bool& IsSittable);
}; // Size: 0x938

#endif
