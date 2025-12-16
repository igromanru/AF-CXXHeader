#ifndef UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP
#define UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP

class ANarrativeNPC_Human_ParentBP_C : public ANarrativeNPC_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x17E8 (size: 0x8)
    class UStaticMeshComponent* IDCardMesh;                                           // 0x17F0 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x17F8 (size: 0x8)
    class UStaticMeshComponent* RightHandItem;                                        // 0x1800 (size: 0x8)
    class UStaticMeshComponent* LeftHandItem;                                         // 0x1808 (size: 0x8)
    class USkeletalMeshComponent* Beard;                                              // 0x1810 (size: 0x8)
    class USkeletalMeshComponent* Armor_Arms;                                         // 0x1818 (size: 0x8)
    class USkeletalMeshComponent* Armor_Legs;                                         // 0x1820 (size: 0x8)
    class USkeletalMeshComponent* ArmorSuit_Chest;                                    // 0x1828 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x1830 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x1838 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x1840 (size: 0x8)
    class USkeletalMeshComponent* Glasses;                                            // 0x1848 (size: 0x8)
    class USkeletalMeshComponent* pants;                                              // 0x1850 (size: 0x8)
    TEnumAsByte<EBloodSplatterType::Type> NarrativeNPC_BloodColor;                    // 0x1858 (size: 0x1)
    bool CombineMeshes;                                                               // 0x1859 (size: 0x1)
    FName CachedMeshName;                                                             // 0x185C (size: 0x8)
    TSubclassOf<class UAnimInstance> AnimBPBeforeMerge;                               // 0x1868 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NarrativeNPC_Human_ParentBP(int32 EntryPoint);
}; // Size: 0x1870

#endif
