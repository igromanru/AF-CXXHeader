#ifndef UE4SS_SDK_Deployed_DistributionPad_HPP
#define UE4SS_SDK_Deployed_DistributionPad_HPP

class ADeployed_DistributionPad_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UNiagaraComponent* Niagara_DistributionPad_Portal;                          // 0x0928 (size: 0x8)
    class UAudioComponent* InventoryActionAudio;                                      // 0x0930 (size: 0x8)
    class UAudioComponent* PoweredAudio;                                              // 0x0938 (size: 0x8)
    class UBoxComponent* PlayerOverlapSphere;                                         // 0x0940 (size: 0x8)
    class USphereComponent* ContainerOverlapSphere;                                   // 0x0948 (size: 0x8)
    TArray<class UAbiotic_InventoryComponent_C*> AdditionalInventories;               // 0x0950 (size: 0x10)
    int32 DistributeContainerIndex;                                                   // 0x0960 (size: 0x4)
    FTimerHandle DistributeTimer;                                                     // 0x0968 (size: 0x8)
    bool DistributionActive;                                                          // 0x0970 (size: 0x1)
    class AActor* ActorToDistribute;                                                  // 0x0978 (size: 0x8)

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
}; // Size: 0x980

#endif
