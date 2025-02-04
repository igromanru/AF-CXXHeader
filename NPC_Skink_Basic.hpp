#ifndef UE4SS_SDK_NPC_Skink_Basic_HPP
#define UE4SS_SDK_NPC_Skink_Basic_HPP

class ANPC_Skink_Basic_C : public ANPC_Monster_Pest_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x2018 (size: 0x8)
    FDataTableRowHandle ProjectileRow;                                                // 0x2020 (size: 0x10)
    FDataTableRowHandle SkinkItem;                                                    // 0x2030 (size: 0x10)

    void CanEnterDBNO(bool& Allowed);
    void CreateSkinkItem();
    void IsStompable(class AAbiotic_Character_ParentBP_C* AskingCharacter, bool& IsStompable);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Server_DoRangedAttack(class AActor* ShootAtTarget, FVector ShootAtLocation, int32 BurstCount);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void InteractWith_A_LocalFX(bool Hold);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void OnLanded(const FHitResult& Hit);
    void Broadcast_DoRangedAttackFX();
    void ExecuteUbergraph_NPC_Skink_Basic(int32 EntryPoint);
}; // Size: 0x2040

#endif
