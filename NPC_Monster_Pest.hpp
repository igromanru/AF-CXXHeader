#ifndef UE4SS_SDK_NPC_Monster_Pest_HPP
#define UE4SS_SDK_NPC_Monster_Pest_HPP

class ANPC_Monster_Pest_C : public ANPC_Base_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x20A8 (size: 0x8)
    class UAudioComponent* LungeLoopAudio;                                            // 0x20B0 (size: 0x8)
    double PestLeapVelocity;                                                          // 0x20B8 (size: 0x8)
    bool IsLungingInAir;                                                              // 0x20C0 (size: 0x1)
    FVector LastPestLeapAtLocation;                                                   // 0x20C8 (size: 0x18)
    bool ExecutedWithStomp;                                                           // 0x20E0 (size: 0x1)
    double CurrentCableLength;                                                        // 0x20E8 (size: 0x8)
    FNPC_Monster_Pest_COnPestJumpLiftoff OnPestJumpLiftoff;                           // 0x20F0 (size: 0x10)
    void OnPestJumpLiftoff();
    FNPC_Monster_Pest_COnPestCollideWithObject OnPestCollideWithObject;               // 0x2100 (size: 0x10)
    void OnPestCollideWithObject(FHitResult HitInfo);
    FText PetName;                                                                    // 0x2110 (size: 0x10)
    double FeedingStartTime;                                                          // 0x2120 (size: 0x8)
    double FeedingDuration;                                                           // 0x2128 (size: 0x8)
    FString Guid;                                                                     // 0x2130 (size: 0x10)
    bool ServerLevelLoaded;                                                           // 0x2140 (size: 0x1)
    class AActor* FollowingOwner;                                                     // 0x2148 (size: 0x8)
    FName PestSpineSocket;                                                            // 0x2150 (size: 0x8)
    TArray<FDynamicProperty> DynamicProperties;                                       // 0x2158 (size: 0x10)
    FString SanitizedName;                                                            // 0x2168 (size: 0x10)
    class USoundBase* PestLungeSound;                                                 // 0x2178 (size: 0x8)

    void OnRep_PetName();
    void CanLongInteractWith_A(bool& Success);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    FText GetItemNameText();
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetFactionTeam(TEnumAsByte<E_Factions::Type>& Faction);
    void Server_PerformDeathSequence();
    void ApplyPestHitDamageToTarget(class AActor* DamagedActor, const FHitResult& HitInfo);
    void GetSpottablePoints(TArray<FVector>& SpottablePoints);
    void BuffTagsUpdated();
    void CanBeCarbuncled(bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void OnRep_IsLungingInAir();
    void OnFailure_7AE02E05435DE01DD5CB0BBBE3B389C3(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_7AE02E05435DE01DD5CB0BBBE3B389C3(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnLanded(const FHitResult& Hit);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void Broadcast_SplatOnSurface();
    void All_PerformDeathSequence();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ProcessDamage(double Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneHitName, FVector DirectionOfSource, class AActor* Instigator, class AActor* DamageCauser, FHitResult HitInfo);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Broadcast_DoMeleeAttackFX(TEnumAsByte<E_NPC_MeleeTypes::Type> MeleeAttackType);
    void OnSpawnFXStarted();
    void Server_DoMeleeAttack(class AActor* SwingAtActor, FVector SwingAtLocation);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void LocalSetupNewPetName();
    void DelayedPetLoad();
    void ExecuteUbergraph_NPC_Monster_Pest(int32 EntryPoint);
    void OnPestCollideWithObject__DelegateSignature(FHitResult HitInfo);
    void OnPestJumpLiftoff__DelegateSignature();
}; // Size: 0x2180

#endif
