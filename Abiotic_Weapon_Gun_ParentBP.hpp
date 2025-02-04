#ifndef UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP
#define UE4SS_SDK_Abiotic_Weapon_Gun_ParentBP_HPP

class AAbiotic_Weapon_Gun_ParentBP_C : public AAbiotic_Weapon_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B78 (size: 0x8)
    class UNiagaraSystem* BulletTracerEffect;                                         // 0x0B80 (size: 0x8)
    class UNiagaraSystem* MuzzleFlashEffect;                                          // 0x0B88 (size: 0x8)
    double TimeLastDisplayedMuzzleFlash;                                              // 0x0B90 (size: 0x8)
    FString BulletTracerBeamEnd;                                                      // 0x0B98 (size: 0x10)
    bool ShouldOverrideHitscanLogic;                                                  // 0x0BA8 (size: 0x1)
    int32 ShotsUntilTracer;                                                           // 0x0BAC (size: 0x4)

    void CheckForTracers(TArray<FHitResult>& Array);
    TArray<FItemActionRowHandle> GetItemActionArray();
    void TryCreateMuzzleFlash();
    void CreateBeamsOrTracers(TArray<FHitResult>& Array, class UNiagaraSystem* BeamEffect);
    void SetupItem();
    void GunFireResult(const TArray<FHitResult>& Hit Result);
    void GunStartFiring();
    void Server_OnHit(FHitResult HitResult);
    void Broadcast_DisplayMuzzleFlashAndTracer(TArray<FHitResult>& Array);
    void ExecuteUbergraph_Abiotic_Weapon_Gun_ParentBP(int32 EntryPoint);
}; // Size: 0xBB0

#endif
