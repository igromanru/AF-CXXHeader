#ifndef UE4SS_SDK_Projectile_Grenade_ParentBP_HPP
#define UE4SS_SDK_Projectile_Grenade_ParentBP_HPP

class AProjectile_Grenade_ParentBP_C : public AAbioticProjectile_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0710 (size: 0x8)
    bool FirstBounce;                                                                 // 0x0718 (size: 0x1)
    float FuseAfterFirstBounce;                                                       // 0x071C (size: 0x4)
    bool FuseStartsImmediately;                                                       // 0x0720 (size: 0x1)
    bool HasDetonated;                                                                // 0x0721 (size: 0x1)
    float Base Damage;                                                                // 0x0724 (size: 0x4)
    bool ExplodesOnContact;                                                           // 0x0728 (size: 0x1)
    bool ExplodesOnContactWithCharacter;                                              // 0x0729 (size: 0x1)

    void Detonate();
    void ReceiveBeginPlay();
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Update Current State();
    void BndEvt__Projectile_Grenade_ParentBP_ProjectileMovement_K2Node_ComponentBoundEvent_1_OnProjectileBounceDelegate__DelegateSignature(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    void ProjectileOverlap(class AActor* OtherActor, class UPrimitiveComponent* OtherComp);
    void ExecuteUbergraph_Projectile_Grenade_ParentBP(int32 EntryPoint);
}; // Size: 0x72A

#endif
