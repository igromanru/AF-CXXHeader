#ifndef UE4SS_SDK_Gear_Trinket_GeigerCounter_HPP
#define UE4SS_SDK_Gear_Trinket_GeigerCounter_HPP

class AGear_Trinket_GeigerCounter_C : public AGear_Trinket_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B48 (size: 0x8)
    class UAudioComponent* GeigerTickingAudio3;                                       // 0x0B50 (size: 0x8)
    class UAudioComponent* GeigerTickingAudio;                                        // 0x0B58 (size: 0x8)
    class UAudioComponent* GeigerTickingAudio2;                                       // 0x0B60 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* TrinketWearer;                                  // 0x0B68 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void StartAttachTrinket(class AAbiotic_PlayerCharacter_C* AttachedCharacter, FName TrinketSlot);
    void ReceiveDestroyed();
    void ExecuteUbergraph_Gear_Trinket_GeigerCounter(int32 EntryPoint);
}; // Size: 0xB70

#endif
