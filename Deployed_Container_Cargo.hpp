#ifndef UE4SS_SDK_Deployed_Container_Cargo_HPP
#define UE4SS_SDK_Deployed_Container_Cargo_HPP

class ADeployed_Container_Cargo_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_Deployed_Container_Cargo(int32 EntryPoint);
}; // Size: 0x928

#endif
