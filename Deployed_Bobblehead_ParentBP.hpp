#ifndef UE4SS_SDK_Deployed_Bobblehead_ParentBP_HPP
#define UE4SS_SDK_Deployed_Bobblehead_ParentBP_HPP

class ADeployed_Bobblehead_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class USphereComponent* HeadCollider;                                             // 0x0858 (size: 0x8)
    class UStaticMeshComponent* BobbleHead;                                           // 0x0860 (size: 0x8)
    float BobbleheadTimeline_NewTrack_1_47CD43754A87751A7EF7FA9DFACD3D8D;             // 0x0868 (size: 0x4)
    float BobbleheadTimeline_NewTrack_0_47CD43754A87751A7EF7FA9DFACD3D8D;             // 0x086C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BobbleheadTimeline__Direction_47CD43754A87751A7EF7FA9DFACD3D8D; // 0x0870 (size: 0x1)
    class UTimelineComponent* BobbleheadTimeline;                                     // 0x0878 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void BobbleheadTimeline__FinishedFunc();
    void BobbleheadTimeline__UpdateFunc();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_BobbleMyHead();
    void ExecuteUbergraph_Deployed_Bobblehead_ParentBP(int32 EntryPoint);
}; // Size: 0x880

#endif
