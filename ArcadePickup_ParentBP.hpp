#ifndef UE4SS_SDK_ArcadePickup_ParentBP_HPP
#define UE4SS_SDK_ArcadePickup_ParentBP_HPP

class AArcadePickup_ParentBP_C : public AResourceNode_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04E8 (size: 0x8)
    class UAudioComponent* AudioLure;                                                 // 0x04F0 (size: 0x8)
    class UBoxComponent* PickupOverlapBox;                                            // 0x04F8 (size: 0x8)
    TArray<FBuffDebuffRowHandle> BuffsToGrantOnPickup;                                // 0x0500 (size: 0x10)
    TArray<FName> ItemsGrantedOnPickup;                                               // 0x0510 (size: 0x10)

    void OnPickupByCharacter(class AAbioticCharacter* Character);
    void RefreshDepletedStateFX();
    void BndEvt__ArcadePickup_ParentBP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_ArcadePickup_ParentBP(int32 EntryPoint);
}; // Size: 0x520

#endif
