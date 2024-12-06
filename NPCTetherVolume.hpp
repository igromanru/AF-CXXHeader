#ifndef UE4SS_SDK_NPCTetherVolume_HPP
#define UE4SS_SDK_NPCTetherVolume_HPP

class ANPCTetherVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A0 (size: 0x8)
    class UBoxComponent* TetherVolume;                                                // 0x02A8 (size: 0x8)
    FVector ZoneSize;                                                                 // 0x02B0 (size: 0x18)
    FBuffDebuffRowHandle BuffToApply;                                                 // 0x02C8 (size: 0x20)
    FNPCTetherVolume_CCharacterLeftVolume CharacterLeftVolume;                        // 0x02E8 (size: 0x10)
    void CharacterLeftVolume(class AAbiotic_Character_ParentBP_C* Character);
    FNPCTetherVolume_CCharacterEnteredVolume CharacterEnteredVolume;                  // 0x02F8 (size: 0x10)
    void CharacterEnteredVolume(class AAbiotic_Character_ParentBP_C* Character);

    void UserConstructionScript();
    void ExecuteUbergraph_NPCTetherVolume(int32 EntryPoint);
    void CharacterEnteredVolume__DelegateSignature(class AAbiotic_Character_ParentBP_C* Character);
    void CharacterLeftVolume__DelegateSignature(class AAbiotic_Character_ParentBP_C* Character);
}; // Size: 0x308

#endif
