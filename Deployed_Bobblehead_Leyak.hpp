#ifndef UE4SS_SDK_Deployed_Bobblehead_Leyak_HPP
#define UE4SS_SDK_Deployed_Bobblehead_Leyak_HPP

class ADeployed_Bobblehead_Leyak_C : public ADeployed_Bobblehead_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0950 (size: 0x8)

    void Broadcast_BobbleMyHead();
    void Broadcast_LeyakSFX(int32 Index);
    void ExecuteUbergraph_Deployed_Bobblehead_Leyak(int32 EntryPoint);
}; // Size: 0x958

#endif
