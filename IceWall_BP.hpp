#ifndef UE4SS_SDK_IceWall_BP_HPP
#define UE4SS_SDK_IceWall_BP_HPP

class AIceWall_BP_C : public AAbiotic_GenericDestructible_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FText ObjectName;                                                                 // 0x0378 (size: 0x10)
    double MaxHealth;                                                                 // 0x0388 (size: 0x8)

    void HealthUpdated();
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetItemNameText();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_IceWall_BP(int32 EntryPoint);
}; // Size: 0x390

#endif
