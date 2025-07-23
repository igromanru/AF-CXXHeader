#ifndef UE4SS_SDK_Container_LootSpillBag_HPP
#define UE4SS_SDK_Container_LootSpillBag_HPP

class AContainer_LootSpillBag_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)

    void ReceiveBeginPlay();
    void UpdateDurabilityVisualFX();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Container_LootSpillBag(int32 EntryPoint);
}; // Size: 0x928

#endif
