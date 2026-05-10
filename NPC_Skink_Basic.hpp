#ifndef UE4SS_SDK_NPC_Skink_Basic_HPP
#define UE4SS_SDK_NPC_Skink_Basic_HPP

class ANPC_Skink_Basic_C : public ANPC_Monster_Pest_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x22C0 (size: 0x8)
    FDataTableRowHandle ProjectileRow;                                                // 0x22C8 (size: 0x10)
    FVector PoopLocation;                                                             // 0x22D8 (size: 0x18)

    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FVector GetPoopLocation();
    void CanEnterDBNO(bool& Allowed);
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void Server_DoRangedAttack(class AActor* ShootAtTarget, FVector ShootAtLocation, int32 BurstCount);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void OnLanded(const FHitResult& Hit);
    void Broadcast_DoRangedAttackFX();
    void ReceiveBeginPlay();
    void Server_PoopOnFloor();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ExecuteUbergraph_NPC_Skink_Basic(int32 EntryPoint);
}; // Size: 0x22F0

#endif
