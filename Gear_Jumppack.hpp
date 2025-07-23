#ifndef UE4SS_SDK_Gear_Jumppack_HPP
#define UE4SS_SDK_Gear_Jumppack_HPP

class AGear_JumpPack_C : public AGear_Backpack_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B18 (size: 0x8)
    class UAudioComponent* Audio_JumpPackLaunch;                                      // 0x0B20 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B28 (size: 0x8)
    double AirControlMultiplier;                                                      // 0x0B30 (size: 0x8)
    double JetpackThrustPower;                                                        // 0x0B38 (size: 0x8)
    class UAudioComponent* JetpackNozzleSFX;                                          // 0x0B40 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX;                                        // 0x0B48 (size: 0x8)
    class UNiagaraSystem* JetpackVFX;                                                 // 0x0B50 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX_R;                                      // 0x0B58 (size: 0x8)
    class UNiagaraSystem* JetpackCentralVFX;                                          // 0x0B60 (size: 0x8)
    class UNiagaraComponent* JetpackNozzleVFX_Center;                                 // 0x0B68 (size: 0x8)
    bool JetpackBeingUsed;                                                            // 0x0B70 (size: 0x1)
    bool Overheating;                                                                 // 0x0B71 (size: 0x1)
    double CurrentOverheatLevel;                                                      // 0x0B78 (size: 0x8)
    double OverheatMaximum;                                                           // 0x0B80 (size: 0x8)
    double OverheatAmountOnUse;                                                       // 0x0B88 (size: 0x8)
    double CooloffRate;                                                               // 0x0B90 (size: 0x8)
    class UNiagaraComponent* JetpackGroundVFX;                                        // 0x0B98 (size: 0x8)
    double HorizontalLaunchSpeed;                                                     // 0x0BA0 (size: 0x8)
    double VerticalLaunchSpeed;                                                       // 0x0BA8 (size: 0x8)
    float FallingDurationBeforeReuse;                                                 // 0x0BB0 (size: 0x4)

    bool CanJumpPackBeUsed();
    FVector CalculateLaunchVelocity(FVector Direction);
    void UpdateJumpPackHUDInfo();
    void FindAndSetGroundDustLocation(bool& FoundLocation);
    bool HasBattery();
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
}; // Size: 0xBB4

#endif
