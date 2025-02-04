#ifndef UE4SS_SDK_Gear_Jetpack_BP_HPP
#define UE4SS_SDK_Gear_Jetpack_BP_HPP

class AGear_Jetpack_BP_C : public AGear_Backpack_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B40 (size: 0x8)
    class UAudioComponent* Audio_JetpackLoop;                                         // 0x0B48 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B50 (size: 0x8)
    FTimerHandle BatteryDrainTimer;                                                   // 0x0B58 (size: 0x8)
    bool JetpackEquipped;                                                             // 0x0B60 (size: 0x1)
    double AirControlMultiplier;                                                      // 0x0B68 (size: 0x8)
    double JetpackThrustPower;                                                        // 0x0B70 (size: 0x8)
    class USoundBase* JetpackSFX;                                                     // 0x0B78 (size: 0x8)
    class UAudioComponent* JetpackNozzleSFX;                                          // 0x0B80 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX;                                        // 0x0B88 (size: 0x8)
    class UNiagaraSystem* JetpackVFX;                                                 // 0x0B90 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX_R;                                      // 0x0B98 (size: 0x8)
    class UNiagaraSystem* JetpackCentralVFX;                                          // 0x0BA0 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX_Center;                                 // 0x0BA8 (size: 0x8)
    double OverheatMaximum;                                                           // 0x0BB0 (size: 0x8)
    double CurrentOverheatLevel;                                                      // 0x0BB8 (size: 0x8)
    double OverheatRate;                                                              // 0x0BC0 (size: 0x8)
    double CooloffRate;                                                               // 0x0BC8 (size: 0x8)
    bool JetpackBeingUsed;                                                            // 0x0BD0 (size: 0x1)
    class UNiagaraComponent* JetpackGroundVFX;                                        // 0x0BD8 (size: 0x8)
    bool Overheat;                                                                    // 0x0BE0 (size: 0x1)

    void Is Jetpack Overheat?(bool& Overheat);
    void UpdateJetpackHUDInfo();
    void FindAndSetGroundDustLocation(bool& FoundLocation);
    void StopJetpackDrain();
    void UpdateJetpackState();
    bool HasBattery();
    void Start Drain Battery();
    void TryPerformBatteryChangeOnUse();
    void ToggleJetpackSFX(bool On);
    void Toggle_JetpackVFX(bool On);
    void Update Current Item Data();
    void Jetpack_OverheatFX();
    void Update Gear State(bool Equipped);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_Gear_Jetpack_BP(int32 EntryPoint);
}; // Size: 0xBE1

#endif
