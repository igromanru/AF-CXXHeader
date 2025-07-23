#ifndef UE4SS_SDK_SinkProxy_BP_HPP
#define UE4SS_SDK_SinkProxy_BP_HPP

class ASinkProxy_BP_C : public AItemProxyParent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UStaticMeshComponent* LiquidLevel;                                          // 0x0358 (size: 0x8)
    int32 NewLiquidLevel;                                                             // 0x0360 (size: 0x4)
    TEnumAsByte<E_LiquidType::Type> LiquidType;                                       // 0x0364 (size: 0x1)
    FVector Liquid_FillLocationMin;                                                   // 0x0368 (size: 0x18)
    FVector Liquid_FillLocationMax;                                                   // 0x0380 (size: 0x18)

    void Set Liquid Levels();
    void OnRep_NewLiquidLevel();
    void RefreshLiquidLevelAppearance();
    void ReceiveBeginPlay();
    void RefreshContainerAppearance();
    void ExecuteUbergraph_SinkProxy_BP(int32 EntryPoint);
}; // Size: 0x398

#endif
