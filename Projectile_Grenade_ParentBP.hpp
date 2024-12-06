#ifndef UE4SS_SDK_Projectile_Grenade_ParentBP_HPP
#define UE4SS_SDK_Projectile_Grenade_ParentBP_HPP

class AProjectile_Grenade_ParentBP_C : public AAbioticProjectile_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0790 (size: 0x8)
    bool FirstBounce;                                                                 // 0x0798 (size: 0x1)
    float FuseAfterFirstBounce;                                                       // 0x079C (size: 0x4)
    bool FuseStartsImmediately;                                                       // 0x07A0 (size: 0x1)
    bool HasDetonated;                                                                // 0x07A1 (size: 0x1)
    float Base Damage;                                                                // 0x07A4 (size: 0x4)
    bool ExplodesOnContact;                                                           // 0x07A8 (size: 0x1)
    bool ExplodesOnContactWithCharacter;                                              // 0x07A9 (size: 0x1)

    void Detonate();
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__Projectile_Grenade_ParentBP_ProjectileCollision_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Update Current State();
    void BndEvt__Projectile_Grenade_ParentBP_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ProjectileOverlap(class AActor* OtherActor);
    void ExecuteUbergraph_Projectile_Grenade_ParentBP(int32 EntryPoint);
}; // Size: 0x7AA

#endif
