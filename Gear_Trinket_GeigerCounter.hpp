#ifndef UE4SS_SDK_Gear_Trinket_GeigerCounter_HPP
#define UE4SS_SDK_Gear_Trinket_GeigerCounter_HPP

class AGear_Trinket_GeigerCounter_C : public AGear_Trinket_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B60 (size: 0x8)
    class UAudioComponent* GeigerTickingAudio3;                                       // 0x0B68 (size: 0x8)
    class UAudioComponent* GeigerTickingAudio;                                        // 0x0B70 (size: 0x8)
    class UAudioComponent* GeigerTickingAudio2;                                       // 0x0B78 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* TrinketWearer;                                  // 0x0B80 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void StartAttachTrinket(class AAbiotic_PlayerCharacter_C* AttachedCharacter, FName TrinketSlot, bool SecondaryTrinket?);
    void ReceiveDestroyed();
    void ExecuteUbergraph_Gear_Trinket_GeigerCounter(int32 EntryPoint);
}; // Size: 0xB88

#endif
