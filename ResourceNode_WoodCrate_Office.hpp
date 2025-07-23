#ifndef UE4SS_SDK_ResourceNode_WoodCrate_Office_HPP
#define UE4SS_SDK_ResourceNode_WoodCrate_Office_HPP

class AResourceNode_WoodCrate_Office_C : public AResourceNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x04E0 (size: 0x8)
    bool LargeCrate;                                                                  // 0x04E8 (size: 0x1)

    void UserConstructionScript();
    void RefreshDepletedStateFX();
    void ExecuteUbergraph_ResourceNode_WoodCrate_Office(int32 EntryPoint);
}; // Size: 0x4E9

#endif
