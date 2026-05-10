#ifndef UE4SS_SDK_NPC_Coworker_HPP
#define UE4SS_SDK_NPC_Coworker_HPP

class ANPC_Coworker_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x21B0 (size: 0x8)
    class UStaticMeshComponent* IDCardMesh;                                           // 0x21B8 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x21C0 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x21C8 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x21D0 (size: 0x8)
    bool Eating;                                                                      // 0x21D8 (size: 0x1)
    class UAudioComponent* EatingAudio;                                               // 0x21E0 (size: 0x8)
    int32 FedCount;                                                                   // 0x21E8 (size: 0x4)
    TArray<FName> FoodEaten;                                                          // 0x21F0 (size: 0x10)
    bool DroppedStapler;                                                              // 0x2200 (size: 0x1)
    bool CoworkerDayTime;                                                             // 0x2201 (size: 0x1)

    void Does Award Sneaking XP to Player(bool& Return, double& XP Gained);
    bool VisibleToPlayers();
    void TargetableByNPCs(bool Maintain, class AActor* TargetingNPC, bool& Targetable);
    FText GetItemNameText();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    void UserConstructionScript();
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void Morning_Event();
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void ExecuteUbergraph_NPC_Coworker(int32 EntryPoint);
}; // Size: 0x2202

#endif
