#ifndef UE4SS_SDK_BP_NearbyCharactersSphere_HPP
#define UE4SS_SDK_BP_NearbyCharactersSphere_HPP

class ABP_NearbyCharactersSphere_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class USphereComponent* OverlapSphere;                                            // 0x02A0 (size: 0x8)

    void BndEvt__BP_NearbyCharactersSphere_OverlapSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__BP_NearbyCharactersSphere_OverlapSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_BP_NearbyCharactersSphere(int32 EntryPoint);
}; // Size: 0x2A8

#endif
