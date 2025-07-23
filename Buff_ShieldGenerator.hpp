#ifndef UE4SS_SDK_Buff_ShieldGenerator_HPP
#define UE4SS_SDK_Buff_ShieldGenerator_HPP

class UBuff_ShieldGenerator_C : public UBuffObject_ParentBP_C
{
    double MaxShieldHitPoints;                                                        // 0x0060 (size: 0x8)
    double ShieldRegenPerSecond;                                                      // 0x0068 (size: 0x8)
    double ShieldRegenTime;                                                           // 0x0070 (size: 0x8)
    double ShieldRegenTimeWhenZeroHP;                                                 // 0x0078 (size: 0x8)
    class UNiagaraSystem* ParticleShieldBrokeLoop;                                    // 0x0080 (size: 0x8)
    class UNiagaraSystem* ParticleShieldBroken;                                       // 0x0088 (size: 0x8)
    class UNiagaraSystem* ParticleShieldHit;                                          // 0x0090 (size: 0x8)
    class UNiagaraSystem* ParticleShieldRestore;                                      // 0x0098 (size: 0x8)
    class UMaterialInstance* MaterialOverride;                                        // 0x00A0 (size: 0x8)

}; // Size: 0xA8

#endif
