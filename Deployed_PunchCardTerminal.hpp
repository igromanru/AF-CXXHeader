#ifndef UE4SS_SDK_Deployed_PunchCardTerminal_HPP
#define UE4SS_SDK_Deployed_PunchCardTerminal_HPP

class ADeployed_PunchCardTerminal_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UChildActorComponent* TutorialTrigger;                                      // 0x0938 (size: 0x8)
    class UChildActorComponent* NoBuildZone;                                          // 0x0940 (size: 0x8)
    class UStaticMeshComponent* SidePanel01;                                          // 0x0948 (size: 0x8)
    class UStaticMeshComponent* SidePanel02;                                          // 0x0950 (size: 0x8)
    class UStaticMeshComponent* SidePanel03;                                          // 0x0958 (size: 0x8)
    class UStaticMeshComponent* Keyboard;                                             // 0x0960 (size: 0x8)
    class UStaticMeshComponent* Monitor;                                              // 0x0968 (size: 0x8)
    FText LocationName;                                                               // 0x0970 (size: 0x10)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void UserConstructionScript();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_SaveSound();
    void ExecuteUbergraph_Deployed_PunchCardTerminal(int32 EntryPoint);
}; // Size: 0x980

#endif
