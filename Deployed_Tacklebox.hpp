#ifndef UE4SS_SDK_Deployed_Tacklebox_HPP
#define UE4SS_SDK_Deployed_Tacklebox_HPP

class ADeployed_Tacklebox_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    class USceneComponent* SitSpot;                                                   // 0x0850 (size: 0x8)

    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void HasSitLocations(bool& IsSittable);
}; // Size: 0x858

#endif
