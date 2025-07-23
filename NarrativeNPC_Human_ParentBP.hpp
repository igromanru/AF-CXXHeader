#ifndef UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP
#define UE4SS_SDK_NarrativeNPC_Human_ParentBP_HPP

class ANarrativeNPC_Human_ParentBP_C : public ANarrativeNPC_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1780 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x1788 (size: 0x8)
    class UStaticMeshComponent* RightHandItem;                                        // 0x1790 (size: 0x8)
    class UStaticMeshComponent* LeftHandItem;                                         // 0x1798 (size: 0x8)
    class USkeletalMeshComponent* Beard;                                              // 0x17A0 (size: 0x8)
    class USkeletalMeshComponent* Armor_Arms;                                         // 0x17A8 (size: 0x8)
    class USkeletalMeshComponent* Armor_Legs;                                         // 0x17B0 (size: 0x8)
    class USkeletalMeshComponent* ArmorSuit_Chest;                                    // 0x17B8 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x17C0 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x17C8 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x17D0 (size: 0x8)
    class USkeletalMeshComponent* Glasses;                                            // 0x17D8 (size: 0x8)
    class USkeletalMeshComponent* pants;                                              // 0x17E0 (size: 0x8)
    TEnumAsByte<EBloodSplatterType::Type> NarrativeNPC_BloodColor;                    // 0x17E8 (size: 0x1)
    bool CombineMeshes;                                                               // 0x17E9 (size: 0x1)
    FName CachedMeshName;                                                             // 0x17EC (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NarrativeNPC_Human_ParentBP(int32 EntryPoint);
}; // Size: 0x17F4

#endif
