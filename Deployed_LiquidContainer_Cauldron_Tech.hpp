#ifndef UE4SS_SDK_Deployed_LiquidContainer_Cauldron_Tech_HPP
#define UE4SS_SDK_Deployed_LiquidContainer_Cauldron_Tech_HPP

class ADeployed_LiquidContainer_Cauldron_Tech_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UNiagaraComponent* BubblingEffect;                                          // 0x0928 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0930 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0938 (size: 0x8)

    void SetupPaintAndTexture();
    void RefreshAllLiquidStateFX();
    void UpdatePaint_NoLiquidRefresh();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Deployed_LiquidContainer_Cauldron_Tech(int32 EntryPoint);
}; // Size: 0x940

#endif
