#ifndef UE4SS_SDK_ChargedProxy_BP_HPP
#define UE4SS_SDK_ChargedProxy_BP_HPP

class AChargedProxy_BP_C : public AItemProxyParent_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0358 (size: 0x8)

    void ProxyMeshLoaded();
    void ExecuteUbergraph_ChargedProxy_BP(int32 EntryPoint);
}; // Size: 0x360

#endif
