#ifndef UE4SS_SDK_CharacterCorpse_Human_BP_HPP
#define UE4SS_SDK_CharacterCorpse_Human_BP_HPP

class ACharacterCorpse_Human_BP_C : public ACharacterCorpse_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)
    class USkeletalMeshComponent* Beard;                                              // 0x03F8 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x0400 (size: 0x8)
    class USkeletalMeshComponent* HeadAccessory;                                      // 0x0408 (size: 0x8)
    class USkeletalMeshComponent* Helmet;                                             // 0x0410 (size: 0x8)
    class USkeletalMeshComponent* ArmArmor;                                           // 0x0418 (size: 0x8)
    class USkeletalMeshComponent* LegArmor;                                           // 0x0420 (size: 0x8)
    class USkeletalMeshComponent* ChestArmor;                                         // 0x0428 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x0430 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x0438 (size: 0x8)
    class USkeletalMeshComponent* Torso;                                              // 0x0440 (size: 0x8)
    bool CombineMeshes;                                                               // 0x0448 (size: 0x1)
    FName CachedMeshName;                                                             // 0x044C (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_CharacterCorpse_Human_BP(int32 EntryPoint);
}; // Size: 0x454

#endif
