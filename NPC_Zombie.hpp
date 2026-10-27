#ifndef UE4SS_SDK_NPC_Zombie_HPP
#define UE4SS_SDK_NPC_Zombie_HPP

class ANPC_Zombie_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x21C8 (size: 0x8)
    class UStaticMeshComponent* IDCardMesh;                                           // 0x21D0 (size: 0x8)
    class UStaticMeshComponent* backpack;                                             // 0x21D8 (size: 0x8)
    class USkeletalMeshComponent* Hair;                                               // 0x21E0 (size: 0x8)
    class USkeletalMeshComponent* Hat;                                                // 0x21E8 (size: 0x8)
    class UHumanCustomizationComponent_C* HumanCustomizationComponent;                // 0x21F0 (size: 0x8)
    class USkeletalMeshComponent* Legs;                                               // 0x21F8 (size: 0x8)
    class USkeletalMeshComponent* Chest;                                              // 0x2200 (size: 0x8)
    bool Eating;                                                                      // 0x2208 (size: 0x1)
    class UAudioComponent* EatingAudio;                                               // 0x2210 (size: 0x8)
    bool HeadExplode;                                                                 // 0x2218 (size: 0x1)
    TArray<FCustomizationHeadRowHandle> ZombieHeadRows;                               // 0x2220 (size: 0x10)
    TArray<FCustomizationUpperBodyRowHandle> ZombieTorsoRows;                         // 0x2230 (size: 0x10)
    TArray<FCustomizationLowerBodyRowHandle> ZombieLegRows;                           // 0x2240 (size: 0x10)
    TArray<FCustomizationBeltRowHandle> ZombieBeltRows;                               // 0x2250 (size: 0x10)
    TArray<FCustomizationShoesRowHandle> ZombieShoeRows;                              // 0x2260 (size: 0x10)
    TArray<FCustomizationShirtColorRowHandle> ZombieShirtColorRows;                   // 0x2270 (size: 0x10)
    TArray<FGlobalItemRowHandle> PotentialHatRows;                                    // 0x2280 (size: 0x10)
    FGlobalItemRowHandle SelectedHat;                                                 // 0x2290 (size: 0x10)
    TArray<FGlobalItemRowHandle> PotentialBackpackRows;                               // 0x22A0 (size: 0x10)
    FGlobalItemRowHandle SelectedBackpack;                                            // 0x22B0 (size: 0x10)
    TArray<FCustomizationHairStyleRowHandle> ZombieHairTypeRows;                      // 0x22C0 (size: 0x10)
    TArray<FCustomizationHairColorRowHandle> ZombieHairColorRows;                     // 0x22D0 (size: 0x10)
    FTextureVariantRowHandle HatTextureVariant;                                       // 0x22E0 (size: 0x10)
    FTextureVariantRowHandle BackpackTextureVariant;                                  // 0x22F0 (size: 0x10)
    TArray<FCustomizationHeadAccessoryRowHandle> ZombieHeadAccessoryRows;             // 0x2300 (size: 0x10)
    double HatDropRate;                                                               // 0x2310 (size: 0x8)
    double BackpackDropRate;                                                          // 0x2318 (size: 0x8)

    void OnRep_HatTextureVariant();
    void DropZombieLoot();
    void OnRep_SelectedBackpack();
    void OnRep_SelectedHat();
    void SelectLootableClothing();
    void ExplodeMyHead();
    void SetupZombieCustomization();
    void FindBestMeleeAttack(class AActor* SwingAtActor, FVector SwingAtTarget, bool& TurnToFaceTarget);
    void GetBuffOverlayMeshes(TArray<UMeshComponent*>& Meshes);
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
}; // Size: 0x2320

#endif
