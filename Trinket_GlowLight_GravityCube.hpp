#ifndef UE4SS_SDK_Trinket_GlowLight_GravityCube_HPP
#define UE4SS_SDK_Trinket_GlowLight_GravityCube_HPP

class ATrinket_GlowLight_GravityCube_C : public ATrinket_GlowLight_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B48 (size: 0x8)
    FBuffDebuffRowHandle BuffToAdd;                                                   // 0x0B50 (size: 0x20)

    void ApplyBuffs();
    void CheckForBuffApply();
    void RemoveBuffs();
    void CheckForHeldBuffRemoval();
    void ReceiveDestroyed();
    void SetupItem();
    void RemovedBuff_Event(FBuffDebuffRowHandle BuffDebuffRowHandle);
    void TryReapplyTrinketGearBuff();
    void ExecuteUbergraph_Trinket_GlowLight_GravityCube(int32 EntryPoint);
}; // Size: 0xB70

#endif
