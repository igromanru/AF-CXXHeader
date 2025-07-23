#ifndef UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP

class AAbiotic_Weapon_Gun_ParentBP_C : public AAbiotic_Weapon_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B60 (size: 0x8)
    class UNiagaraSystem* BulletTracerEffect;                                         // 0x0B68 (size: 0x8)
    class UNiagaraSystem* MuzzleFlashEffect;                                          // 0x0B70 (size: 0x8)
    double TimeLastDisplayedMuzzleFlash;                                              // 0x0B78 (size: 0x8)
    FString BulletTracerBeamEnd;                                                      // 0x0B80 (size: 0x10)
    bool ShouldOverrideHitscanLogic;                                                  // 0x0B90 (size: 0x1)
    int32 ShotsUntilTracer;                                                           // 0x0B94 (size: 0x4)
    TSubclassOf<class ABP_BulletTracer_C> Tracer Class;                               // 0x0B98 (size: 0x8)
    bool DoLocalMuzzleLightFlash;                                                     // 0x0BA0 (size: 0x1)
    FLinearColor LocalMuzzleFlashColor;                                               // 0x0BA4 (size: 0x10)

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
    void ExecuteUbergraph_Abiotic_Weapon_Gun_ParentBP(int32 EntryPoint);
}; // Size: 0xBB4

#endif
