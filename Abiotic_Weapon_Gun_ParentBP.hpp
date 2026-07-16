#ifndef UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP

class AAbiotic_Weapon_Gun_ParentBP_C : public AAbiotic_Weapon_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0BB8 (size: 0x8)
    class UNiagaraSystem* BulletTracerEffect;                                         // 0x0BC0 (size: 0x8)
    class UNiagaraSystem* MuzzleFlashEffect;                                          // 0x0BC8 (size: 0x8)
    double TimeLastDisplayedMuzzleFlash;                                              // 0x0BD0 (size: 0x8)
    FString BulletTracerBeamEnd;                                                      // 0x0BD8 (size: 0x10)
    bool ShouldOverrideHitscanLogic;                                                  // 0x0BE8 (size: 0x1)
    int32 ShotsUntilTracer;                                                           // 0x0BEC (size: 0x4)
    TSubclassOf<class ABP_BulletTracer_C> Tracer Class;                               // 0x0BF0 (size: 0x8)
    bool DoLocalMuzzleLightFlash;                                                     // 0x0BF8 (size: 0x1)
    FLinearColor LocalMuzzleFlashColor;                                               // 0x0BFC (size: 0x10)
    FLinearColor MuzzleParticleTint;                                                  // 0x0C0C (size: 0x10)

    TArray<FItemActionRowHandle> GetPrimaryItemActionArray();
    void CheckForTracers(TArray<FHitResult>& Array);
    void TryCreateMuzzleFlash();
    void CreateBeamsOrTracers(TArray<FHitResult>& Array, class UNiagaraSystem* BeamEffect);
    void SetupItem();
    void GunFireResult(const TArray<FHitResult>& Hit Result);
    void GunStartFiring();
    void Server_OnHit(FHitResult HitResult);
    void Broadcast_DisplayMuzzleFlashAndTracer(TArray<FHitResult>& Array);
    void GunSpawnProjectile(FVector MuzzleLocation, FVector ForwardDirection);
    void Server_OnProjectilesSpawned();
    void Broadcast_DisplayMuzzleFlashOnly();
    void ExecuteUbergraph_Abiotic_Weapon_Gun_ParentBP(int32 EntryPoint);
}; // Size: 0xC1C

#endif
