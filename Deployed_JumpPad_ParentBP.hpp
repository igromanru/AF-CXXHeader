#ifndef UE4SS_SDK_Deployed_JumpPad_ParentBP_HPP
#define UE4SS_SDK_Deployed_JumpPad_ParentBP_HPP

class ADeployed_JumpPad_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UBoxComponent* JumpZone;                                                    // 0x0928 (size: 0x8)
    float JumpPadWooshAnim_NewTrack_0_6CA810E4424A3C530346A79F5C10579C;               // 0x0930 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> JumpPadWooshAnim__Direction_6CA810E4424A3C530346A79F5C10579C; // 0x0934 (size: 0x1)
    class UTimelineComponent* JumpPadWooshAnim;                                       // 0x0938 (size: 0x8)
    double LaunchVelocity;                                                            // 0x0940 (size: 0x8)
    FVector MeshScaleDefault;                                                         // 0x0948 (size: 0x18)
    FVector MeshScaleMaxBounce;                                                       // 0x0960 (size: 0x18)
    class USoundBase* JumpPadSound;                                                   // 0x0978 (size: 0x8)
    bool AllowCrouchCanceling;                                                        // 0x0980 (size: 0x1)

    void ApplyEffectOnJump(class ACharacter* Character);
    void JumpPadWooshAnim__FinishedFunc();
    void JumpPadWooshAnim__UpdateFunc();
    void BndEvt__Deployed_JumpPad_ParentBP_JumpZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Broadcast_TriggerJumpPad();
    void DropPackagedItem(bool HasDoubleDropChance);
    void ExecuteUbergraph_Deployed_JumpPad_ParentBP(int32 EntryPoint);
}; // Size: 0x981

#endif
