#ifndef UE4SS_SDK_Resource_MicroNode_ParentBP_HPP
#define UE4SS_SDK_Resource_MicroNode_ParentBP_HPP

class AResource_MicroNode_ParentBP_C : public AResourceNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04D8 (size: 0x8)
    class ACharacterCorpse_ParentBP_C* CorpseBlockingNode;                            // 0x04E0 (size: 0x8)

    void SpawnDebrisFX();
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void UpdateDurabilityFX();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void CorpseBlock_EnableCollision();
    void ExecuteUbergraph_Resource_MicroNode_ParentBP(int32 EntryPoint);
}; // Size: 0x4E8

#endif
