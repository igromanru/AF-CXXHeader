#ifndef UE4SS_SDK_NPC_Coworker_HPP
#define UE4SS_SDK_NPC_Coworker_HPP

class ANPC_Coworker_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1EC8 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x1ED0 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x1ED8 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x1EE0 (size: 0x8)
    bool Eating;                                                                      // 0x1EE8 (size: 0x1)
    class UAudioComponent* EatingAudio;                                               // 0x1EF0 (size: 0x8)
    int32 FedCount;                                                                   // 0x1EF8 (size: 0x4)
    TArray<FName> FoodEaten;                                                          // 0x1F00 (size: 0x10)
    bool DroppedStapler;                                                              // 0x1F10 (size: 0x1)
    bool CoworkerDayTime;                                                             // 0x1F11 (size: 0x1)

    void Does Award Sneaking XP to Player(bool& Return, double& XP Gained);
    bool VisibleToPlayers();
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    FText GetItemNameText();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    void UserConstructionScript();
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void Morning_Event();
    void ExecuteUbergraph_NPC_Coworker(int32 EntryPoint);
}; // Size: 0x1F12

#endif
