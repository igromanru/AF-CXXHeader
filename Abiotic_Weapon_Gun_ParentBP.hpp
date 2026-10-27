#ifndef UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP

class AAbiotic_Weapon_Gun_ParentBP_C : public AAbiotic_Weapon_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0C08 (size: 0x8)
    class UNiagaraSystem* BulletTracerEffect;                                         // 0x0C10 (size: 0x8)
    class UNiagaraSystem* MuzzleFlashEffect;                                          // 0x0C18 (size: 0x8)
    double TimeLastDisplayedMuzzleFlash;                                              // 0x0C20 (size: 0x8)
    FString BulletTracerBeamEnd;                                                      // 0x0C28 (size: 0x10)
    bool ShouldOverrideHitscanLogic;                                                  // 0x0C38 (size: 0x1)
    int32 ShotsUntilTracer;                                                           // 0x0C3C (size: 0x4)
    TSubclassOf<class ABP_BulletTracer_C> Tracer Class;                               // 0x0C40 (size: 0x8)
    bool DoLocalMuzzleLightFlash;                                                     // 0x0C48 (size: 0x1)
    FLinearColor LocalMuzzleFlashColor;                                               // 0x0C4C (size: 0x10)
    FLinearColor MuzzleParticleTint;                                                  // 0x0C5C (size: 0x10)

    void GetPrimaryItemActionArray();
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
}; // Size: 0xC6C

#endif
