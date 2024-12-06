#ifndef UE4SS_SDK_Deployed_Container_ForkliftCargo_HPP
#define UE4SS_SDK_Deployed_Container_ForkliftCargo_HPP

class ADeployed_Container_ForkliftCargo_C : public ADeployed_Container_Cargo_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    FRotator LidClosedRot;                                                            // 0x09F8 (size: 0x18)
    FRotator LidOpenRot;                                                              // 0x0A10 (size: 0x18)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void ToggleOpenFX(bool Open);
    void ExecuteUbergraph_Deployed_Container_ForkliftCargo(int32 EntryPoint);
}; // Size: 0xA28

#endif
