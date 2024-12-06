#ifndef UE4SS_SDK_DeployProxy_ParentBP_HPP
#define UE4SS_SDK_DeployProxy_ParentBP_HPP

class ADeployProxy_ParentBP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* ArrowMesh;                                            // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* DeployableHologramMesh;                               // 0x02A8 (size: 0x8)
    class UBoxComponent* DeployableOverlapBox;                                        // 0x02B0 (size: 0x8)
    FRotator CurrentDeployableRotation;                                               // 0x02B8 (size: 0x18)
    class AActor* HitActor;                                                           // 0x02D0 (size: 0x8)
    TArray<FVector> Supports;                                                         // 0x02D8 (size: 0x10)
    class UStaticMesh* HologramArrowMesh;                                             // 0x02E8 (size: 0x8)
    bool OnlyFlatPlacement;                                                           // 0x02F0 (size: 0x1)
    float ForwardPlacementOffset;                                                     // 0x02F4 (size: 0x4)
    float UpPlacementOffset;                                                          // 0x02F8 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> Overlap Object Types Allowed;               // 0x0300 (size: 0x10)

    void Can Place In Vignette(bool& VignettePlaceable, bool& Placeable);
    void RunOverlapChecks(TArray<class UPrimitiveComponent*>& Components to Overlap, bool& PlacementBlocked, TArray<class AActor*>& OverlappedActors);
    void AdditionalDeployCheck(bool& Success, FText& FailMessage);
    TArray<class UPrimitiveComponent*> GetDeployableCollisions();
    void TryUpdateDeployableHologram(bool Show, TEnumAsByte<E_DeployableOrientations::Type> PlacementOrienationsAllowed, class USceneComponent* QueryComponent, bool HeldFire, bool& CanPlaceDeployable);
    void ChangeDeployHologramMaterials(bool CanPlace);
    void Get New Location And Rotation from Hologram Component(FVector& FinalLocation, FRotator& FinalRotation);
    void CalculatePlacementOrientation(TEnumAsByte<E_DeployableOrientations::Type> PlacementOrienationsAllowed, class USceneComponent* QueryComponent, TEnumAsByte<ETraceTypeQuery> TraceChannel, bool& IsHit, FVector& Location, FRotator& Rotation, FVector& TraceEnd, bool& CanBePlaced?, FVector& Normal);
    void ReceiveBeginPlay();
    void SetupHologramArrow(TEnumAsByte<E_DeployableOrientations::Type> Orientation);
    void ExecuteUbergraph_DeployProxy_ParentBP(int32 EntryPoint);
}; // Size: 0x310

#endif
