#ifndef UE4SS_SDK_Gear_Trinket_Balloon_HPP
#define UE4SS_SDK_Gear_Trinket_Balloon_HPP

class AGear_Trinket_Balloon_C : public AGear_Trinket_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B98 (size: 0x8)
    double TestVar;                                                                   // 0x0BA0 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* AttachedCharacter;                              // 0x0BA8 (size: 0x8)
    FName TrinketSlot;                                                                // 0x0BB0 (size: 0x8)

    void OnRep_TestVar();
    void ReceiveTick(float DeltaSeconds);
    void StartAttachTrinket(class AAbiotic_PlayerCharacter_C* AttachedCharacter, FName TrinketSlot, bool SecondaryTrinket?);
    void OnTrinketAttachComplete();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_Gear_Trinket_Balloon(int32 EntryPoint);
}; // Size: 0xBB8

#endif
