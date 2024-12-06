#ifndef UE4SS_SDK_Deployed_PestTrap_HPP
#define UE4SS_SDK_Deployed_PestTrap_HPP

class ADeployed_PestTrap_C : public ADeployed_PetContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09B8 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanLongInteractWith_A(bool& Success);
    void Can Contain Pest(class ANPC_Monster_Pest_C*& IncomingPest, bool& Return);
    void InteractWith_A_LocalFX(bool Hold);
    void PestFeedingStateUpdate();
    void OnTextChanged_Event(const FText& Text);
    void YesClicked_Event();
    void NoClicked_Event();
    void ExecuteUbergraph_Deployed_PestTrap(int32 EntryPoint);
}; // Size: 0x9C0

#endif
