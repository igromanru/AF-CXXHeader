#ifndef UE4SS_SDK_Deployed_WaterCooler_HPP
#define UE4SS_SDK_Deployed_WaterCooler_HPP

class ADeployed_WaterCooler_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UStaticMeshComponent* FurnitureMesh1;                                       // 0x09F8 (size: 0x8)
    class UStaticMeshComponent* WaterJugMesh;                                         // 0x0A00 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void RefreshLiquidLevelAppearance();
    void ExecuteUbergraph_Deployed_WaterCooler(int32 EntryPoint);
}; // Size: 0xA08

#endif
