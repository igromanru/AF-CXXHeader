#ifndef UE4SS_SDK_NarrativeNPC_Human_ChefTrader_HPP
#define UE4SS_SDK_NarrativeNPC_Human_ChefTrader_HPP

class ANarrativeNPC_Human_ChefTrader_C : public ANarrativeNPC_Human_TravelingTrader_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1800 (size: 0x8)
    class UStaticMeshComponent* Plant;                                                // 0x1808 (size: 0x8)
    class UStaticMeshComponent* Pan;                                                  // 0x1810 (size: 0x8)
    class UStaticMeshComponent* backpack;                                             // 0x1818 (size: 0x8)

    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_NarrativeNPC_Human_ChefTrader(int32 EntryPoint);
}; // Size: 0x1820

#endif
