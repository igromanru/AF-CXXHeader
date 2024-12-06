#ifndef UE4SS_SDK_Trinket_GlowLight_ParentBP_HPP
#define UE4SS_SDK_Trinket_GlowLight_ParentBP_HPP

class ATrinket_GlowLight_ParentBP_C : public AGear_Trinket_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B48 (size: 0x8)
    EPaintColor LightColor;                                                           // 0x0B50 (size: 0x1)

    void StartAttachTrinket(class AAbiotic_PlayerCharacter_C* AttachedCharacter, FName TrinketSlot);
    void ExecuteUbergraph_Trinket_GlowLight_ParentBP(int32 EntryPoint);
}; // Size: 0xB51

#endif
