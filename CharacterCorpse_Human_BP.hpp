#ifndef UE4SS_SDK_CharacterCorpse_Human_BP_HPP
#define UE4SS_SDK_CharacterCorpse_Human_BP_HPP

class ACharacterCorpse_Human_BP_C : public ACharacterCorpse_ParentBP_C
{
    class USkeletalMeshComponent* Beard;                                              // 0x03C0 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x03C8 (size: 0x8)
    class USkeletalMeshComponent* HeadAccessory;                                      // 0x03D0 (size: 0x8)
    class USkeletalMeshComponent* Helmet;                                             // 0x03D8 (size: 0x8)
    class USkeletalMeshComponent* ArmArmor;                                           // 0x03E0 (size: 0x8)
    class USkeletalMeshComponent* LegArmor;                                           // 0x03E8 (size: 0x8)
    class USkeletalMeshComponent* ChestArmor;                                         // 0x03F0 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x03F8 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x0400 (size: 0x8)
    class USkeletalMeshComponent* Torso;                                              // 0x0408 (size: 0x8)

    void UserConstructionScript();
}; // Size: 0x410

#endif
