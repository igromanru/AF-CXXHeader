#ifndef UE4SS_SDK_Gear_Jumppack_HPP
#define UE4SS_SDK_Gear_Jumppack_HPP

class AGear_JumpPack_C : public AGear_Backpack_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B78 (size: 0x8)
    class UAudioComponent* Audio_JumpPackLaunch;                                      // 0x0B80 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B88 (size: 0x8)
    double AirControlMultiplier;                                                      // 0x0B90 (size: 0x8)
    double JetpackThrustPower;                                                        // 0x0B98 (size: 0x8)
    class UAudioComponent* JetpackNozzleSFX;                                          // 0x0BA0 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX;                                        // 0x0BA8 (size: 0x8)
    class UNiagaraSystem* JetpackVFX;                                                 // 0x0BB0 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX_R;                                      // 0x0BB8 (size: 0x8)
    class UNiagaraSystem* JetpackCentralVFX;                                          // 0x0BC0 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX_Center;                                 // 0x0BC8 (size: 0x8)
    bool JetpackBeingUsed;                                                            // 0x0BD0 (size: 0x1)
    bool Overheating;                                                                 // 0x0BD1 (size: 0x1)
    double CurrentOverheatLevel;                                                      // 0x0BD8 (size: 0x8)
    double OverheatMaximum;                                                           // 0x0BE0 (size: 0x8)
    double OverheatAmountOnUse;                                                       // 0x0BE8 (size: 0x8)
    double CooloffRate;                                                               // 0x0BF0 (size: 0x8)
    class UNiagaraComponent* JetpackGroundVFX;                                        // 0x0BF8 (size: 0x8)
    double HorizontalLaunchSpeed;                                                     // 0x0C00 (size: 0x8)
    double VerticalLaunchSpeed;                                                       // 0x0C08 (size: 0x8)
    float FallingDurationBeforeReuse;                                                 // 0x0C10 (size: 0x4)

    void CanJumpPackBeUsed();
    void CalculateLaunchVelocity(FVector Direction);
    void UpdateJumpPackHUDInfo();
    void FindAndSetGroundDustLocation(bool& FoundLocation);
    void HasBattery();
    void InpActEvt_Jump_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void Update Current Item Data();
    void PlayJetpackFX();
    void Jetpack_OverheatFX();
    void ReceiveDestroyed();
    void Jump(FVector LaunchDirection);
    void Server_Jump(FVector LaunchYaw);
    void Broadcast_PlayJetpackVFX();
    void LandedDelegate_Event(const FHitResult& Hit);
    void Update Gear State(bool Equipped);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Gear_JumpPack(int32 EntryPoint);
}; // Size: 0xC14

#endif
