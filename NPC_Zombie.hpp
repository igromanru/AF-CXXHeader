#ifndef UE4SS_SDK_NPC_Zombie_HPP
#define UE4SS_SDK_NPC_Zombie_HPP

class ANPC_Zombie_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20A8 (size: 0x8)
    class UStaticMeshComponent* backpack;                                             // 0x20B0 (size: 0x8)
    class USkeletalMeshComponent* hair;                                               // 0x20B8 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x20C0 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x20C8 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x20D0 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x20D8 (size: 0x8)
    bool Eating;                                                                      // 0x20E0 (size: 0x1)
    class UAudioComponent* EatingAudio;                                               // 0x20E8 (size: 0x8)
    bool HeadExplode;                                                                 // 0x20F0 (size: 0x1)
    TArray<FName> ZombieHeads;                                                        // 0x20F8 (size: 0x10)
    TArray<FName> ZombieTorsos;                                                       // 0x2108 (size: 0x10)
    TArray<FName> ZombieLegs;                                                         // 0x2118 (size: 0x10)
    TArray<FName> ZombieBelts;                                                        // 0x2128 (size: 0x10)
    TArray<FName> ZombieShoes;                                                        // 0x2138 (size: 0x10)
    TArray<FName> ZombieShirtColors;                                                  // 0x2148 (size: 0x10)
    TArray<FName> PotentialHats;                                                      // 0x2158 (size: 0x10)
    FName SelectedHat;                                                                // 0x2168 (size: 0x8)
    TArray<FName> PotentialBackpacks;                                                 // 0x2170 (size: 0x10)
    FName SelectedBackpack;                                                           // 0x2180 (size: 0x8)
    TArray<FName> ZombieHairTypes;                                                    // 0x2188 (size: 0x10)
    TArray<FName> ZombieHairColors;                                                   // 0x2198 (size: 0x10)
    FName HatTextureVariant;                                                          // 0x21A8 (size: 0x8)
    FName BackpackTextureVariant;                                                     // 0x21B0 (size: 0x8)
    TArray<FName> ZombieHeadAccessories;                                              // 0x21B8 (size: 0x10)
    double HatDropRate;                                                               // 0x21C8 (size: 0x8)
    double BackpackDropRate;                                                          // 0x21D0 (size: 0x8)

    void OnRep_HatTextureVariant();
    void DropZombieLoot();
    void OnRep_SelectedBackpack();
    void OnRep_SelectedHat();
    void SelectLootableClothing();
    void ExplodeMyHead();
    void SetupZombieCustomization();
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void GetBuffOverlayMeshes(TArray<class UMeshComponent*>& Meshes);
    void OnRep_HeadExplode();
    void OnRep_Eating();
    void UserConstructionScript();
    void OnLoaded_1D22E704465A43B53CEE29A754A7E9D6(class UObject* Loaded);
    void OnLoaded_BAC9BE2D4D4F7E4654382D96DFE61183(class UObject* Loaded);
    void OnLoaded_77AFDA0A41125BBCA9E61F96EA72F837(class UObject* Loaded);
    void Broadcast_DoSuccessfulGrabAnimation();
    void Broadcast_DoFailedGrabAnimation();
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void ReceiveBeginPlay();
    void SetupHat();
    void SetupBackpack();
    void Server_PerformDeathSequence();
    void All_PerformDeathSequence();
    void BndEvt__NPC_Zombie_HumanCustomizationComponent_K2Node_ComponentBoundEvent_0_OnCustomizationComplete__DelegateSignature();
    void ExecuteUbergraph_NPC_Zombie(int32 EntryPoint);
}; // Size: 0x21D8

#endif
