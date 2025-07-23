#ifndef UE4SS_SDK_Deployed_JumpPad_ParentBP_HPP
#define UE4SS_SDK_Deployed_JumpPad_ParentBP_HPP

class ADeployed_JumpPad_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UBoxComponent* JumpZone;                                                    // 0x0858 (size: 0x8)
    float JumpPadWooshAnim_NewTrack_0_6CA810E4424A3C530346A79F5C10579C;               // 0x0860 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> JumpPadWooshAnim__Direction_6CA810E4424A3C530346A79F5C10579C; // 0x0864 (size: 0x1)
    class UTimelineComponent* JumpPadWooshAnim;                                       // 0x0868 (size: 0x8)
    double LaunchVelocity;                                                            // 0x0870 (size: 0x8)
    FVector MeshScaleDefault;                                                         // 0x0878 (size: 0x18)
    FVector MeshScaleMaxBounce;                                                       // 0x0890 (size: 0x18)
    class USoundBase* JumpPadSound;                                                   // 0x08A8 (size: 0x8)
    bool AllowCrouchCanceling;                                                        // 0x08B0 (size: 0x1)
    bool AnimateJumppad;                                                              // 0x08B1 (size: 0x1)
    bool IgnoreIncomingVelocity;                                                      // 0x08B2 (size: 0x1)
    bool NoFallDamage;                                                                // 0x08B3 (size: 0x1)

    void ApplyEffectOnJump(class ACharacter* Character);
    void JumpPadWooshAnim__FinishedFunc();
    void JumpPadWooshAnim__UpdateFunc();
    void BndEvt__Deployed_JumpPad_ParentBP_JumpZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Broadcast_TriggerJumpPad();
    void DropPackagedItem(bool HasDoubleDropChance, bool FromDestruction);
    void ExecuteUbergraph_Deployed_JumpPad_ParentBP(int32 EntryPoint);
}; // Size: 0x8B4

#endif
