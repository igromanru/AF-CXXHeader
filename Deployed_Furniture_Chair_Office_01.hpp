#ifndef UE4SS_SDK_Deployed_Furniture_Chair_Office_01_HPP
#define UE4SS_SDK_Deployed_Furniture_Chair_Office_01_HPP

class ADeployed_Furniture_Chair_Office_01_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class USceneComponent* ChairAttach;                                               // 0x0858 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x0860 (size: 0x8)
    class UStaticMeshComponent* ChairTop;                                             // 0x0868 (size: 0x8)
    float SpinChairTimeline_NewTrack_0_5DD43E714E18FDB87F0D12B32F5963E7;              // 0x0870 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpinChairTimeline__Direction_5DD43E714E18FDB87F0D12B32F5963E7; // 0x0874 (size: 0x1)
    class UTimelineComponent* SpinChairTimeline;                                      // 0x0878 (size: 0x8)
    TSubclassOf<class ADeployed_Furniture_Chair_Office_01_C> ReplacementVersion;      // 0x0880 (size: 0x8)

    class USceneComponent* GetSeatAttachComponent();
    class ADeployed_Furniture_Chair_Office_01_C* SpawnReplacementChair();
    void CheckForWorldPlacedChair();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void CanLongInteractWith_A(bool& Success);
    void SpinChairTimeline__FinishedFunc();
    void SpinChairTimeline__UpdateFunc();
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Broadcast_SpinChair();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_RevertChairClass();
    void ExecuteUbergraph_Deployed_Furniture_Chair_Office_01(int32 EntryPoint);
}; // Size: 0x888

#endif
