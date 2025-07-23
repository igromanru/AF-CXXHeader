#ifndef UE4SS_SDK_Deployed_Container_ForkliftCargo_HPP
#define UE4SS_SDK_Deployed_Container_ForkliftCargo_HPP

class ADeployed_Container_ForkliftCargo_C : public ADeployed_Container_Cargo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0928 (size: 0x8)
    FRotator LidClosedRot;                                                            // 0x0930 (size: 0x18)
    FRotator LidOpenRot;                                                              // 0x0948 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_ForkliftCargo(int32 EntryPoint);
}; // Size: 0x960

#endif
