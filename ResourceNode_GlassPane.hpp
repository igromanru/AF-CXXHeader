#ifndef UE4SS_SDK_ResourceNode_GlassPane_HPP
#define UE4SS_SDK_ResourceNode_GlassPane_HPP

class AResourceNode_GlassPane_C : public AResourceNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)
    class UBoxComponent* NavVolume;                                                   // 0x04F0 (size: 0x8)
    int32 GlassShape;                                                                 // 0x04F8 (size: 0x4)
    int32 GlassScrapToDrop;                                                           // 0x04FC (size: 0x4)
    bool CustomMaterial;                                                              // 0x0500 (size: 0x1)
    class UMaterialInterface* MaterialOverride;                                       // 0x0508 (size: 0x8)

    void UserConstructionScript();
    void RefreshDepletedStateFX();
    void DropLoot(bool TryToPlaceInInventory, class AAbiotic_PlayerCharacter_C* inventoryOwner, bool IsNotReceivingDamage);
    void ExecuteUbergraph_ResourceNode_GlassPane(int32 EntryPoint);
}; // Size: 0x510

#endif
