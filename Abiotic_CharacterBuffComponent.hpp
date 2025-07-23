#ifndef UE4SS_SDK_Abiotic_CharacterBuffComponent_HPP
#define UE4SS_SDK_Abiotic_CharacterBuffComponent_HPP

class UAbiotic_CharacterBuffComponent_C : public UCharacterBuffComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    FAbiotic_CharacterBuffComponent_CReceivedNewBuff ReceivedNewBuff;                 // 0x02A0 (size: 0x10)
    void ReceivedNewBuff(FBuffDebuffRowHandle BuffDebuffRowHandle);
    FAbiotic_CharacterBuffComponent_CRemovedBuff RemovedBuff;                         // 0x02B0 (size: 0x10)
    void RemovedBuff(FBuffDebuffRowHandle BuffDebuffRowHandle);

    class UActorComponent* SpawnBuffParticle(FBuffDebuffRowHandle BuffRow);
    void Server_RemoveAllTraits(TEnumAsByte<E_BuffTypes::Type> Trait Type);
    void RemoveBuffsIncompatibleWithFullHealthLimb();
    void Server_RemoveAllBuffs(TEnumAsByte<E_BuffTypes::Type> BuffType);
    void Server_RemoveSpecificBuffRows(TArray<FBuffDebuffRowHandle>& BuffsToRemove, bool SpecificLimbs, TArray<EBodyLimbs>& Limbs);
    void HasBuff?(FName BuffID, FBuffDebuffRowHandle BuffRow, bool MustBeOnSameLimb, EBodyLimbs Limb, int32 CountRequired, bool& FoundBuff, TArray<EBodyLimbs>& OnLimbs);
    void OnLoaded_BB38A8534C1918978E75D38B16588133(class UObject* Loaded);
    void Server_TryApplyBuff(FName BuffID, FBuffDebuffRowHandle BuffRow, bool OverrideDefaultDuration, double NewDuration, EBodyLimbs Limb, class AActor* LinkedActor);
    void Server_ForceRemoveBuff(FName BuffID, FBuffDebuffRowHandle BuffRow, bool RemoveEntireStack, EBodyLimbs Limb, bool ForceRemoveTraits);
    void BuffReceived(FBuffDebuffRowHandle BuffRow);
    void BuffRemoved(FBuffDebuffRowHandle BuffRow);
    void PlayDialogLine(FBuffDebuffRowHandle BuffRow);
    void ApplyBuffMaterial(FBuffDebuffRowHandle BuffRow);
    void RemoveBuffMaterial(FBuffDebuffRowHandle BuffRow);
    void ExecuteUbergraph_Abiotic_CharacterBuffComponent(int32 EntryPoint);
    void RemovedBuff__DelegateSignature(FBuffDebuffRowHandle BuffDebuffRowHandle);
    void ReceivedNewBuff__DelegateSignature(FBuffDebuffRowHandle BuffDebuffRowHandle);
}; // Size: 0x2C0

#endif
