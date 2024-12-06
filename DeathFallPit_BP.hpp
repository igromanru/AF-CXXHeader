#ifndef UE4SS_SDK_DeathFallPit_BP_HPP
#define UE4SS_SDK_DeathFallPit_BP_HPP

class ADeathFallPit_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Visualizer;                                           // 0x02A0 (size: 0x8)
    class UTextRenderComponent* Text;                                                 // 0x02A8 (size: 0x8)
    class UBoxComponent* Deathvolume;                                                 // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    FVector VolumeSize;                                                               // 0x02C0 (size: 0x18)
    TSubclassOf<class UDamageType_DeathPit_C> DeathType;                              // 0x02D8 (size: 0x8)

    void DealDamage(class AAbiotic_Character_ParentBP_C* ActorToDamage, const FHitResult& HitInfo);
    void UserConstructionScript();
    void BndEvt__Deathvolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_DeathFallPit_BP(int32 EntryPoint);
}; // Size: 0x2E0

#endif
