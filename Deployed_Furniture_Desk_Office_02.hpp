#ifndef UE4SS_SDK_Deployed_Furniture_Desk_Office_02_HPP
#define UE4SS_SDK_Deployed_Furniture_Desk_Office_02_HPP

class ADeployed_Furniture_Desk_Office_02_C : public ADeployed_Container_ParentBP_C
{
    class UStaticMeshComponent* SM_Desk_Drawer_04;                                    // 0x0940 (size: 0x8)
    class UStaticMeshComponent* SM_Desk_Drawer_03;                                    // 0x0948 (size: 0x8)
    class UStaticMeshComponent* SM_Desk_Drawer_02;                                    // 0x0950 (size: 0x8)
    class UStaticMeshComponent* SM_Desk_Drawer_01;                                    // 0x0958 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
}; // Size: 0x960

#endif
