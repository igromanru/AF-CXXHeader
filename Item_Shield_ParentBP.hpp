#ifndef UE4SS_SDK_Item_Shield_ParentBP_HPP
#define UE4SS_SDK_Item_Shield_ParentBP_HPP

class AItem_Shield_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B38 (size: 0x8)
    double LastBlockTime;                                                             // 0x0B40 (size: 0x8)
    double CounterAttackWindow;                                                       // 0x0B48 (size: 0x8)
    double CounterAttackDamageMultiplier;                                             // 0x0B50 (size: 0x8)
    double BlockTimeWindow;                                                           // 0x0B58 (size: 0x8)

    bool CanCurrentlyShieldBlock();
    bool GetFPUseMontageOverride(bool Secondary, TSoftObjectPtr<UAnimMontage>& Montage);
    bool CanCounterAttack();
    double GetDamageMultiplier(FHitResult HitResult);
    void Local_ApplyCounterAttack(class AActor* Target);
    void Local_OnMeleeHit_1(FHitResult HitResult);
    void Local_DamagedBlockedByWeapon();
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void Broadcast_ParticleEffectAndSound(class UNiagaraSystem* NiagaraParticle, FVector Location, class USoundBase* OptionalSound);
    void ExecuteUbergraph_Item_Shield_ParentBP(int32 EntryPoint);
}; // Size: 0xB60

#endif
