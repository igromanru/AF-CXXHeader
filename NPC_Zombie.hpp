#ifndef UE4SS_SDK_NPC_Zombie_HPP
#define UE4SS_SDK_NPC_Zombie_HPP

class ANPC_Zombie_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1F58 (size: 0x8)
    class UStaticMeshComponent* backpack;                                             // 0x1F60 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x1F68 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x1F70 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x1F78 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x1F80 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x1F88 (size: 0x8)
    bool Eating;                                                                      // 0x1F90 (size: 0x1)
    class UAudioComponent* EatingAudio;                                               // 0x1F98 (size: 0x8)
    bool HeadExplode;                                                                 // 0x1FA0 (size: 0x1)
    TArray<FName> ZombieHeads;                                                        // 0x1FA8 (size: 0x10)
    TArray<FName> ZombieTorsos;                                                       // 0x1FB8 (size: 0x10)
    TArray<FName> ZombieLegs;                                                         // 0x1FC8 (size: 0x10)
    TArray<FName> ZombieBelts;                                                        // 0x1FD8 (size: 0x10)
    TArray<FName> ZombieShoes;                                                        // 0x1FE8 (size: 0x10)
    TArray<FName> ZombieShirtColors;                                                  // 0x1FF8 (size: 0x10)
    TArray<FName> PotentialHats;                                                      // 0x2008 (size: 0x10)
    FName SelectedHat;                                                                // 0x2018 (size: 0x8)
    TArray<FName> PotentialBackpacks;                                                 // 0x2020 (size: 0x10)
    FName SelectedBackpack;                                                           // 0x2030 (size: 0x8)
    TArray<FName> ZombieHairTypes;                                                    // 0x2038 (size: 0x10)
    TArray<FName> ZombieHairColors;                                                   // 0x2048 (size: 0x10)
    FName HatTextureVariant;                                                          // 0x2058 (size: 0x8)
    FName BackpackTextureVariant;                                                     // 0x2060 (size: 0x8)
    TArray<FName> ZombieHeadAccessories;                                              // 0x2068 (size: 0x10)
    double HatDropRate;                                                               // 0x2078 (size: 0x8)
    double BackpackDropRate;                                                          // 0x2080 (size: 0x8)

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
    void ExecuteUbergraph_NPC_Zombie(int32 EntryPoint);
}; // Size: 0x2088

#endif
