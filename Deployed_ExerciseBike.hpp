#ifndef UE4SS_SDK_Deployed_ExerciseBike_HPP
#define UE4SS_SDK_Deployed_ExerciseBike_HPP

class ADeployed_ExerciseBike_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0878 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0880 (size: 0x8)
    class UChildActorComponent* PowerOutput;                                          // 0x0888 (size: 0x8)
    class USceneComponent* SitSpot;                                                   // 0x0890 (size: 0x8)
    FBuffDebuffRowHandle SkillXpBuffRow;                                              // 0x0898 (size: 0x20)
    FBuffDebuffRowHandle TiringBuffRow;                                               // 0x08B8 (size: 0x20)
    FBuffDebuffRowHandle LacticAcidBuffRow;                                           // 0x08D8 (size: 0x20)
    class AAbiotic_Character_ParentBP_C* SeatOccupier;                                // 0x08F8 (size: 0x8)
    class AAbiotic_Character_ParentBP_C* LastSeatOccupier;                            // 0x0900 (size: 0x8)
    class UAnimMontage* WeakPlayerAnim;                                               // 0x0908 (size: 0x8)
    class UAnimMontage* StrongPlayerAnim;                                             // 0x0910 (size: 0x8)
    class UAnimSequence* WeakMachineAnim;                                             // 0x0918 (size: 0x8)
    class UAnimSequence* StrongMachineAnim;                                           // 0x0920 (size: 0x8)
    bool IsStrongAnim;                                                                // 0x0928 (size: 0x1)

    void OnRep_SeatOccupier();
    void Local_SeatOccupierChanged();
    bool ShouldPlayStrongAnimation();
    FBuffDebuffRowHandle GetSeatRestBuff(class AAbiotic_Character_ParentBP_C* Character);
    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void IsPowered(bool& PowerOn);
    void GetAttachedPowerCord(TArray<class UCableComponent*>& Power Cord Found);
    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void HasSitLocations(bool& IsSittable);
    void OnNotifyEnd_A3CB8E814EFE51D18728648CF166AF25(FName NotifyName);
    void OnNotifyBegin_A3CB8E814EFE51D18728648CF166AF25(FName NotifyName);
    void OnInterrupted_A3CB8E814EFE51D18728648CF166AF25(FName NotifyName);
    void OnBlendOut_A3CB8E814EFE51D18728648CF166AF25(FName NotifyName);
    void OnCompleted_A3CB8E814EFE51D18728648CF166AF25(FName NotifyName);
    void PlayLinkedAnimation(bool PlayStrongAnim);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_ExerciseBike(int32 EntryPoint);
}; // Size: 0x929

#endif
