#ifndef UE4SS_SDK_Abiotic_Projectile_Dropped_HPP
#define UE4SS_SDK_Abiotic_Projectile_Dropped_HPP

class AAbiotic_Projectile_Dropped_C : public AAbiotic_Item_Dropped_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AA0 (size: 0x8)
    class USphereComponent* PickupOverlap;                                            // 0x0AA8 (size: 0x8)
    class AActor* ProjectileOwner;                                                    // 0x0AB0 (size: 0x8)
    FHitResult LastHitInfo;                                                           // 0x0AB8 (size: 0xF8)

    void ItemDroppedMeshSetup(TSoftObjectPtr<UObject> MeshObjectRef, class UStaticMesh*& OutMeshAsset);
    void ServerTryAutoPickupItem(class AActor*& InteractingActor);
    void ReceiveBeginPlay();
    void BndEvt__Abiotic_Projectile_Dropped_PickupOverlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void OnBuffTagContainerRefreshed_Event();
    void ExecuteUbergraph_Abiotic_Projectile_Dropped(int32 EntryPoint);
}; // Size: 0xBB0

#endif
