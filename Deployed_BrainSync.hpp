#ifndef UE4SS_SDK_Deployed_BrainSync_HPP
#define UE4SS_SDK_Deployed_BrainSync_HPP

class ADeployed_BrainSync_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UNiagaraComponent* SyncParticle;                                            // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Brain01;                                              // 0x0940 (size: 0x8)
    class UAudioComponent* SyncAudio;                                                 // 0x0948 (size: 0x8)
    class USceneComponent* SitSpot;                                                   // 0x0950 (size: 0x8)
    int32 TransferState;                                                              // 0x0958 (size: 0x4)
    class AAbiotic_Survival_GameState_C* GameState;                                   // 0x0960 (size: 0x8)

    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void SitLocations(TArray<FVector>& Locations);
    void HasSitLocations(bool& IsSittable);
    void ReceiveBeginPlay();
    void BeginTransfer();
    void Broadcast_TransferFX();
    void ExecuteUbergraph_Deployed_BrainSync(int32 EntryPoint);
}; // Size: 0x968

#endif
