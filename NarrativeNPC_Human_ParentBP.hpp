#ifndef UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP
#define UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP

class ANarrativeNPC_Human_ParentBP_C : public ANarrativeNPC_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1700 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x1708 (size: 0x8)
    class UStaticMeshComponent* RightHandItem;                                        // 0x1710 (size: 0x8)
    class UStaticMeshComponent* LeftHandItem;                                         // 0x1718 (size: 0x8)
    class USkeletalMeshComponent* Beard;                                              // 0x1720 (size: 0x8)
    class USkeletalMeshComponent* Armor_Arms;                                         // 0x1728 (size: 0x8)
    class USkeletalMeshComponent* Armor_Legs;                                         // 0x1730 (size: 0x8)
    class USkeletalMeshComponent* ArmorSuit_Chest;                                    // 0x1738 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x1740 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x1748 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x1750 (size: 0x8)
    class USkeletalMeshComponent* Glasses;                                            // 0x1758 (size: 0x8)
    class USkeletalMeshComponent* pants;                                              // 0x1760 (size: 0x8)
    TEnumAsByte<EBloodSplatterType::Type> NarrativeNPC_BloodColor;                    // 0x1768 (size: 0x1)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NarrativeNPC_Human_ParentBP(int32 EntryPoint);
}; // Size: 0x1769

#endif
