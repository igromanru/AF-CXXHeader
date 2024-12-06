#ifndef UE4SS_SDK_Deployed_Furniture_Desk_Office_02_HPP
#define UE4SS_SDK_Deployed_Furniture_Desk_Office_02_HPP

class ADeployed_Furniture_Desk_Office_02_C : public ADeployed_Container_ParentBP_C
{
    class UStaticMeshComponent* SM_Desk_Drawer_04;                                    // 0x09E8 (size: 0x8)
    class UStaticMeshComponent* SM_Desk_Drawer_03;                                    // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* SM_Desk_Drawer_02;                                    // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* SM_Desk_Drawer_01;                                    // 0x0A00 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
}; // Size: 0xA08

#endif
