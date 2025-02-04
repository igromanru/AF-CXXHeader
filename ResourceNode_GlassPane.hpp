#ifndef UE4SS_SDK_ResourceNode_GlassPane_HPP
#define UE4SS_SDK_ResourceNode_GlassPane_HPP

class AResourceNode_GlassPane_C : public AResourceNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D0 (size: 0x8)
    int32 GlassShape;                                                                 // 0x04D8 (size: 0x4)
    int32 GlassScrapToDrop;                                                           // 0x04DC (size: 0x4)

    void RefreshDepletedStateFX();
    void DropLoot(bool TryToPlaceInInventory, class AAbiotic_PlayerCharacter_C* inventoryOwner, bool IsNotReceivingDamage);
    void ExecuteUbergraph_ResourceNode_GlassPane(int32 EntryPoint);
}; // Size: 0x4E0

#endif
