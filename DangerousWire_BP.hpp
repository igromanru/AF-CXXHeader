#ifndef UE4SS_SDK_DangerousWire_BP_HPP
#define UE4SS_SDK_DangerousWire_BP_HPP

class ADangerousWire_BP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class USphereComponent* DamageSphere;                                             // 0x02C8 (size: 0x8)
    class UAudioComponent* SparkAudio;                                                // 0x02D0 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x02D8 (size: 0x8)
    class UCableComponent* Cable;                                                     // 0x02E0 (size: 0x8)
    float Cable Length;                                                               // 0x02E8 (size: 0x4)
    float WireZapDamage;                                                              // 0x02EC (size: 0x4)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_DangerousWire_BP(int32 EntryPoint);
}; // Size: 0x2F0

#endif
