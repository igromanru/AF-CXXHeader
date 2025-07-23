#ifndef UE4SS_SDK_Deployed_DistributionPad_HPP
#define UE4SS_SDK_Deployed_DistributionPad_HPP

class ADeployed_DistributionPad_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UNiagaraComponent* Niagara_DistributionPad_Portal;                          // 0x0858 (size: 0x8)
    class UAudioComponent* InventoryActionAudio;                                      // 0x0860 (size: 0x8)
    class UAudioComponent* PoweredAudio;                                              // 0x0868 (size: 0x8)
    class UBoxComponent* PlayerOverlapSphere;                                         // 0x0870 (size: 0x8)
    class USphereComponent* ContainerOverlapSphere;                                   // 0x0878 (size: 0x8)
    TArray<class UAbiotic_InventoryComponent_C*> AdditionalInventories;               // 0x0880 (size: 0x10)
    int32 DistributeContainerIndex;                                                   // 0x0890 (size: 0x4)
    FTimerHandle DistributeTimer;                                                     // 0x0898 (size: 0x8)
    bool DistributionActive;                                                          // 0x08A0 (size: 0x1)
    class AActor* ActorToDistribute;                                                  // 0x08A8 (size: 0x8)

    void UpdateCompatibleContainers();
    void OnRep_DistributionActive();
    void DistributeItemTick();
    void Set Actor To Distribute(class AActor* OverlappedActor);
    void UpdateDistributeTimer();
    void RemoveContainer(const class UAbiotic_InventoryComponent_C*& Inventory);
    void AddContainer(const class UAbiotic_InventoryComponent_C*& Inventory);
    void SanitizeContainerArray();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void TogglePowerFX();
    void Broadcast_ItemTransportFX(FVector SourceLocation, FVector TargetLocation);
    void BndEvt__Deployed_DistributionPad_PlayerOverlapSphere_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__Deployed_DistributionPad_PlayerOverlapSphere_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Deployed_DistributionPad(int32 EntryPoint);
}; // Size: 0x8B0

#endif
