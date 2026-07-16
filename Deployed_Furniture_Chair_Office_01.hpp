#ifndef UE4SS_SDK_Deployed_Furniture_Chair_Office_01_HPP
#define UE4SS_SDK_Deployed_Furniture_Chair_Office_01_HPP

class ADeployed_Furniture_Chair_Office_01_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class USceneComponent* ChairAttach;                                               // 0x0878 (size: 0x8)
    class USceneComponent* SitSpot1;                                                  // 0x0880 (size: 0x8)
    class UStaticMeshComponent* ChairTop;                                             // 0x0888 (size: 0x8)
    float SpinChairTimeline_NewTrack_0_5DD43E714E18FDB87F0D12B32F5963E7;              // 0x0890 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> SpinChairTimeline__Direction_5DD43E714E18FDB87F0D12B32F5963E7; // 0x0894 (size: 0x1)
    class UTimelineComponent* SpinChairTimeline;                                      // 0x0898 (size: 0x8)
    TSubclassOf<class ADeployed_Furniture_Chair_Office_01_C> ReplacementVersion;      // 0x08A0 (size: 0x8)
    TSubclassOf<class AChairPawn_ParentBP_C> ChairPawnClass;                          // 0x08A8 (size: 0x8)

    TSubclassOf<class AAbioticDeployed_ParentBP_C> GetSaveClass();
    class USceneComponent* GetSeatAttachComponent();
    class ADeployed_Furniture_Chair_Office_01_C* SpawnReplacementChair();
    void CheckForWorldPlacedChair();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void SitLocationParent(class USceneComponent*& ParentComponent);
    void CanLongInteractWith_A(bool& Success);
    void SpinChairTimeline__FinishedFunc();
    void SpinChairTimeline__UpdateFunc();
    void Broadcast_SpinChair();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Server_RevertChairClass();
    void PushFX(class AChairPawn_ParentBP_C* Chair);
    void ReceiveDestroyed();
    void ExecuteUbergraph_Deployed_Furniture_Chair_Office_01(int32 EntryPoint);
}; // Size: 0x8B0

#endif
