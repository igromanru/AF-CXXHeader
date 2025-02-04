#ifndef UE4SS_SDK_Abiotic_Weapon_Melee_LaserKatana_HPP
#define UE4SS_SDK_Abiotic_Weapon_Melee_LaserKatana_HPP

class AAbiotic_Weapon_Melee_LaserKatana_C : public AAbiotic_Weapon_Melee_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B80 (size: 0x8)
    class UNiagaraComponent* Niagara_LaserEmitterBeam;                                // 0x0B88 (size: 0x8)
    class ULaserComponent_C* LaserComponent;                                          // 0x0B90 (size: 0x8)
    bool LastHitWasLaserPowered;                                                      // 0x0B98 (size: 0x1)

    void GetOverrideHitscanDamageType(bool& Override, TSubclassOf<class UDamageType>& DamageType);
    void GetOverrideSwingTrace(bool& Override, FDataTableRowHandle& MeleeSwingData);
    void HasLaserLiquid(bool& HasLaser);
    void DrainLaser();
    void ShouldApplyTraditionalDamage(bool& Apply);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Local_OnMeleeTraceCosmetic(const FHitResult HitResult);
    void Server_OnHit(FHitResult HitResult);
    void TryPerformBatteryChangeOnUse();
    void Broadcast_OnMeleeSwing();
    void ReceiveDestroyed();
    void ExecuteUbergraph_Abiotic_Weapon_Melee_LaserKatana(int32 EntryPoint);
}; // Size: 0xB99

#endif
