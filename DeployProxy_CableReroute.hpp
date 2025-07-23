#ifndef UE4SS_SDK_DeployProxy_CableReroute_HPP
#define UE4SS_SDK_DeployProxy_CableReroute_HPP

class ADeployProxy_CableReroute_C : public ADeployProxy_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)

    bool CanPlaceRerouteProxy();
    void ChangeDeployHologramMaterials(bool CanPlace);
    void TryUpdateDeployableHologram(bool Show, TEnumAsByte<E_DeployableOrientations::Type> PlacementOrienationsAllowed, class USceneComponent* QueryComponent, bool HeldFire, bool& CanPlaceDeployable);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_DeployProxy_CableReroute(int32 EntryPoint);
}; // Size: 0x348

#endif
