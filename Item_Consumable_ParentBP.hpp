#ifndef UE4SS_SDK_Item_Consumable_ParentBP_HPP
#define UE4SS_SDK_Item_Consumable_ParentBP_HPP

class AItem_Consumable_ParentBP_C : public AAbiotic_Item_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B50 (size: 0x8)
    class UDrinkableComponent_C* DrinkableComponent;                                  // 0x0B58 (size: 0x8)
    bool HasBeenUsed;                                                                 // 0x0B60 (size: 0x1)
    bool Is Liquid Container;                                                         // 0x0B61 (size: 0x1)
    bool Useable On Others;                                                           // 0x0B62 (size: 0x1)
    TArray<EBodyLimbs> On Limbs;                                                      // 0x0B68 (size: 0x10)
    bool TransferrableToOthers;                                                       // 0x0B78 (size: 0x1)
    FInventorySlotSelected_Struct LastKnownItemSlot;                                  // 0x0B80 (size: 0x10)
    FString LastKnownID;                                                              // 0x0B90 (size: 0x10)
    FGuid Consume Delay GUID;                                                         // 0x0BA0 (size: 0x10)

    void GetTPMontage(bool Secondary);
    void GetSecondaryItemActionArray();
    void GetPrimaryItemActionArray();
    void GetFPArmsUseMontageOverride(bool SecondaryUse, TSoftObjectPtr<class UAnimMontage>& Montage);
    void GetBroadcastedTPMontageOverride(bool Secondary, class UAnimMontage*& Montage);
    void GetUseSFXOverride(bool Use Override In TP, class APawn* Instigator, bool SecondaryAction, bool& Override, class USoundCue*& Sound Cue);
    void GetFPUseMontageOverride(bool Secondary, TSoftObjectPtr<class UAnimMontage>& Montage);
    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    void Get Buff Debuff to be Removed(class AAbiotic_Character_ParentBP_C* AffectedCharacter, TArray<FBuffDebuffRowHandle>& BuffsToCheck, bool& Exist, EBodyLimbs& Limb, FBuffDebuffRowHandle& BuffDebuffToBeRemoved);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void Set Or Compare Current Item Slot Location(class AAbiotic_Character_ParentBP_C*& UsingCharacter, bool SetOnly, bool& Is Found);
    void GetNewConsumedAction(FString SourceString, FString& Receiver, FString& Giver);
    void Get New Stat Gain Modifier(double BaseValue, class AAbioticCharacter*& AffectedCharacter, FAbioticInventoryItem& In Item Data);
    void TriggerAnalytics(bool UsedOnOther);
    void Get Item Consume Duration(class AAbioticCharacter* UsingCharacter, bool SecondaryUse, class AAbiotic_Character_ParentBP_C* AffectedCharacter);
    void CanTransferItemToTargetPlayer?(class AAbiotic_PlayerCharacter_C* TargetPlayer, bool& Success);
    void GetOptionalLiquidItemRow();
    void ApplyStatsFromItemData(class AAbiotic_Character_ParentBP_C* AffectedCharacter, class AAbiotic_PlayerCharacter_C* UsingCharacter, FAbioticInventoryItem& InItemData, bool AlreadyRefilledThirst, double StatMultiplier);
    void IsApplyingSplintBuff(class AAbiotic_Character_ParentBP_C* UsingCharacter, FBuffDebuffRowHandle Buff to be applied, bool& Success, double& SplintDuration);
    void Server_Consumed_Trigger(class AAbiotic_Character_ParentBP_C* AffectedCharacter, bool& Success);
    void PlayTPMontage(class AAbiotic_PlayerCharacter_C* Player, bool Secondary, float PlayRate);
    void Check Item Tag Query(class AActor* TargetActor, bool& Success, FText& PopupText);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void Update Owning Character Inventory(class AAbiotic_PlayerCharacter_C* UsingCharacter);
    void IsCurrentlyDrinkableLiquidContainer();
    void TryApplyConsumableStats(class AAbiotic_Character_ParentBP_C* AffectedCharacter, class AAbiotic_PlayerCharacter_C* UsingCharacter);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void Broadcast_UseFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void ReceiveBeginPlay();
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void ShareableItemInteractionText(class AAbiotic_Character_ParentBP_C* TargetCharacter, class AAbiotic_PlayerCharacter_C* UsingCharacter);
    void Server_OnLiquidValueUpdated();
    void ExecuteUbergraph_Item_Consumable_ParentBP(int32 EntryPoint);
}; // Size: 0xBB0

#endif
