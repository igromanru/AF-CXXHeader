#ifndef UE4SS_SDK_NPC_Zombie_HPP
#define UE4SS_SDK_NPC_Zombie_HPP

class ANPC_Zombie_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x21B0 (size: 0x8)
    class UStaticMeshComponent* IDCardMesh;                                           // 0x21B8 (size: 0x8)
    class UStaticMeshComponent* Backpack;                                             // 0x21C0 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x21C8 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x21D0 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x21D8 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x21E0 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x21E8 (size: 0x8)
    bool Eating;                                                                      // 0x21F0 (size: 0x1)
    class UAudioComponent* EatingAudio;                                               // 0x21F8 (size: 0x8)
    bool HeadExplode;                                                                 // 0x2200 (size: 0x1)
    TArray<FName> ZombieHeads;                                                        // 0x2208 (size: 0x10)
    TArray<FName> ZombieTorsos;                                                       // 0x2218 (size: 0x10)
    TArray<FName> ZombieLegs;                                                         // 0x2228 (size: 0x10)
    TArray<FName> ZombieBelts;                                                        // 0x2238 (size: 0x10)
    TArray<FName> ZombieShoes;                                                        // 0x2248 (size: 0x10)
    TArray<FName> ZombieShirtColors;                                                  // 0x2258 (size: 0x10)
    TArray<FName> PotentialHats;                                                      // 0x2268 (size: 0x10)
    FName SelectedHat;                                                                // 0x2278 (size: 0x8)
    TArray<FName> PotentialBackpacks;                                                 // 0x2280 (size: 0x10)
    FName SelectedBackpack;                                                           // 0x2290 (size: 0x8)
    TArray<FName> ZombieHairTypes;                                                    // 0x2298 (size: 0x10)
    TArray<FName> ZombieHairColors;                                                   // 0x22A8 (size: 0x10)
    FName HatTextureVariant;                                                          // 0x22B8 (size: 0x8)
    FName BackpackTextureVariant;                                                     // 0x22C0 (size: 0x8)
    TArray<FName> ZombieHeadAccessories;                                              // 0x22C8 (size: 0x10)
    double HatDropRate;                                                               // 0x22D8 (size: 0x8)
    double BackpackDropRate;                                                          // 0x22E0 (size: 0x8)

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
}; // Size: 0x22E8

#endif
