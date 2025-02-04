#ifndef UE4SS_SDK_Deployed_FloorPoop_HPP
#define UE4SS_SDK_Deployed_FloorPoop_HPP

class ADeployed_FloorPoop_C : public AAbioticDeployed_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05D8 (size: 0x8)
    class UNiagaraComponent* Niagara_Stench_Small;                                    // 0x05E0 (size: 0x8)
    class USphereComponent* SmellySphere;                                             // 0x05E8 (size: 0x8)
    class UStaticMeshComponent* PoopMesh;                                             // 0x05F0 (size: 0x8)
    FName ItemClass;                                                                  // 0x05F8 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void BndEvt__Deployed_FloorPoop_SmellySphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void EmitSmell();
    void ExecuteUbergraph_Deployed_FloorPoop(int32 EntryPoint);
}; // Size: 0x600

#endif
