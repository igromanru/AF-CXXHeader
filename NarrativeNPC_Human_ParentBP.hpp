#ifndef UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP
#define UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP

class ANarrativeNPC_Human_ParentBP_C : public ANarrativeNPC_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1888 (size: 0x8)
    class UStaticMeshComponent* IDCardMesh;                                           // 0x1890 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x1898 (size: 0x8)
    class UStaticMeshComponent* RightHandItem;                                        // 0x18A0 (size: 0x8)
    class UStaticMeshComponent* LeftHandItem;                                         // 0x18A8 (size: 0x8)
    class USkeletalMeshComponent* Beard;                                              // 0x18B0 (size: 0x8)
    class USkeletalMeshComponent* Armor_Arms;                                         // 0x18B8 (size: 0x8)
    class USkeletalMeshComponent* Armor_Legs;                                         // 0x18C0 (size: 0x8)
    class USkeletalMeshComponent* ArmorSuit_Chest;                                    // 0x18C8 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x18D0 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x18D8 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x18E0 (size: 0x8)
    class USkeletalMeshComponent* Glasses;                                            // 0x18E8 (size: 0x8)
    class USkeletalMeshComponent* pants;                                              // 0x18F0 (size: 0x8)
    TEnumAsByte<EBloodSplatterType::Type> NarrativeNPC_BloodColor;                    // 0x18F8 (size: 0x1)
    bool CombineMeshes;                                                               // 0x18F9 (size: 0x1)
    FName CachedMeshName;                                                             // 0x18FC (size: 0x8)
    TSubclassOf<class UAnimInstance> AnimBPBeforeMerge;                               // 0x1908 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NarrativeNPC_Human_ParentBP(int32 EntryPoint);
}; // Size: 0x1910

#endif
