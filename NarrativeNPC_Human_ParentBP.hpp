#ifndef UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP
#define UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP

class ANarrativeNPC_Human_ParentBP_C : public ANarrativeNPC_ParentBP_C
{
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x1610 (size: 0x8)
    class UStaticMeshComponent* RightHandItem;                                        // 0x1618 (size: 0x8)
    class UStaticMeshComponent* LeftHandItem;                                         // 0x1620 (size: 0x8)
    class USkeletalMeshComponent* Beard;                                              // 0x1628 (size: 0x8)
    class USkeletalMeshComponent* Armor_Arms;                                         // 0x1630 (size: 0x8)
    class USkeletalMeshComponent* Armor_Legs;                                         // 0x1638 (size: 0x8)
    class USkeletalMeshComponent* ArmorSuit_Chest;                                    // 0x1640 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x1648 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x1650 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x1658 (size: 0x8)
    class USkeletalMeshComponent* Glasses;                                            // 0x1660 (size: 0x8)
    class USkeletalMeshComponent* pants;                                              // 0x1668 (size: 0x8)
    TEnumAsByte<EBloodSplatterType::Type> NarrativeNPC_BloodColor;                    // 0x1670 (size: 0x1)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
}; // Size: 0x1671

#endif
