#ifndef UE4SS_SDK_Deployed_LiquidContainer_Barrel_HPP
#define UE4SS_SDK_Deployed_LiquidContainer_Barrel_HPP

class ADeployed_LiquidContainer_Barrel_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Lid;                                                  // 0x0930 (size: 0x8)
    class UMaterialInterface* Option 0;                                               // 0x0938 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void RefreshAllLiquidStateFX();
    void ExecuteUbergraph_Deployed_LiquidContainer_Barrel(int32 EntryPoint);
}; // Size: 0x940

#endif
