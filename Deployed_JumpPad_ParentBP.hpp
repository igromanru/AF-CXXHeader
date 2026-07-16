#ifndef UE4SS_SDK_Deployed_JumpPad_ParentBP_HPP
#define UE4SS_SDK_Deployed_JumpPad_ParentBP_HPP

class ADeployed_JumpPad_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UBoxComponent* JumpZone;                                                    // 0x0878 (size: 0x8)
    float JumpPadWooshAnim_NewTrack_0_6CA810E4424A3C530346A79F5C10579C;               // 0x0880 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> JumpPadWooshAnim__Direction_6CA810E4424A3C530346A79F5C10579C; // 0x0884 (size: 0x1)
    class UTimelineComponent* JumpPadWooshAnim;                                       // 0x0888 (size: 0x8)
    double LaunchVelocity;                                                            // 0x0890 (size: 0x8)
    FVector MeshScaleDefault;                                                         // 0x0898 (size: 0x18)
    FVector MeshScaleMaxBounce;                                                       // 0x08B0 (size: 0x18)
    class USoundBase* JumpPadSound;                                                   // 0x08C8 (size: 0x8)
    bool AllowCrouchCanceling;                                                        // 0x08D0 (size: 0x1)
    bool AnimateJumppad;                                                              // 0x08D1 (size: 0x1)
    bool IgnoreIncomingVelocity;                                                      // 0x08D2 (size: 0x1)
    bool NoFallDamage;                                                                // 0x08D3 (size: 0x1)
    bool NoAirControl;                                                                // 0x08D4 (size: 0x1)
    bool GravityCompensation;                                                         // 0x08D5 (size: 0x1)

    void ShowLandingLocation();
    void ApplyEffectOnJump(class ACharacter* Character);
    void JumpPadWooshAnim__FinishedFunc();
    void JumpPadWooshAnim__UpdateFunc();
    void BndEvt__Deployed_JumpPad_ParentBP_JumpZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Broadcast_TriggerJumpPad();
    void DropPackagedItem(bool HasDoubleDropChance, bool FromDestruction);
    void ExecuteUbergraph_Deployed_JumpPad_ParentBP(int32 EntryPoint);
}; // Size: 0x8D6

#endif
