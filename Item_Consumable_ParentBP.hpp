#ifndef UE4SS_SDK_Item_Consumable_ParentBP_HPP
#define UE4SS_SDK_Item_Consumable_ParentBP_HPP

class AItem_Consumable_ParentBP_C : public AAbiotic_Item_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B10 (size: 0x8)
    class UDrinkableComponent_C* DrinkableComponent;                                  // 0x0B18 (size: 0x8)
    bool HasBeenUsed;                                                                 // 0x0B20 (size: 0x1)
    bool Is Liquid Container;                                                         // 0x0B21 (size: 0x1)
    bool Useable On Others;                                                           // 0x0B22 (size: 0x1)
    TArray<EBodyLimbs> On Limbs;                                                      // 0x0B28 (size: 0x10)
    bool TransferrableToOthers;                                                       // 0x0B38 (size: 0x1)
    FInventorySlotSelected_Struct LastKnownItemSlot;                                  // 0x0B40 (size: 0x10)
    FString LastKnownID;                                                              // 0x0B50 (size: 0x10)
    FGuid Consume Delay GUID;                                                         // 0x0B60 (size: 0x10)

    bool GetFPArmsUseMontageOverride(bool SecondaryUse, TSoftObjectPtr<UAnimMontage>& Montage);
    bool GetBroadcastedTPMontageOverride(bool Secondary, class UAnimMontage*& Montage);
    void GetUseSFXOverride(bool Use Override In TP, class APawn* Instigator, bool& Override, class USoundCue*& Sound Cue);
    bool GetFPUseMontageOverride(bool Secondary, TSoftObjectPtr<UAnimMontage>& Montage);
    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    void Get Buff Debuff to be Removed(class AAbiotic_Character_ParentBP_C* AffectedCharacter, TArray<FName>& BuffsToCheck, bool& Exist, EBodyLimbs& Limb, FBuffDebuffRowHandle& BuffDebuffToBeRemoved);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void Set Or Compare Current Item Slot Location(class AAbiotic_Character_ParentBP_C*& UsingCharacter, bool SetOnly, bool& Is Found);
    void GetNewConsumedAction(FString SourceString, FString& Receiver, FString& Giver);
    double Get New Stat Gain Modifier(double BaseValue, class AAbioticCharacter*& AffectedCharacter, FAbiotic_InventoryItemStruct& In Item Data);
    void TriggerAnalytics(bool UsedOnOther);
    double Get Item Consume Duration(class AAbioticCharacter* UsingCharacter, bool SecondaryUse, class AAbiotic_Character_ParentBP_C* AffectedCharacter);
    void CanTransferItemToTargetPlayer?(class AAbiotic_PlayerCharacter_C* TargetPlayer, bool& Success);
    FName GetOptionalLiquidItemRow();
    void ApplyStatsFromItemData(class AAbiotic_Character_ParentBP_C* AffectedCharacter, class AAbiotic_PlayerCharacter_C* UsingCharacter, FAbiotic_InventoryItemStruct& InItemData, bool AlreadyRefilledThirst, double StatMultiplier);
    void IsApplyingSplintBuff(class AAbiotic_Character_ParentBP_C* UsingCharacter, FBuffDebuffRowHandle Buff to be applied, bool& Success, double& SplintDuration);
    void Server_Consumed_Trigger(class AAbiotic_Character_ParentBP_C* AffectedCharacter, bool& Success);
    TArray<FItemActionRowHandle> GetItemActionArray();
    void PlayTPMontage(class AAbiotic_PlayerCharacter_C* Player, bool Secondary, float PlayRate);
    class UAnimMontage* GetTPMontage(bool Secondary);
    void Check Item Tag Query(class AActor* TargetActor, bool& Success, FText& PopupText);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void Update Owning Character Inventory(class AAbiotic_PlayerCharacter_C* UsingCharacter);
    bool IsCurrentlyDrinkableLiquidContainer();
    void TryApplyConsumableStats(class AAbiotic_Character_ParentBP_C* AffectedCharacter, class AAbiotic_PlayerCharacter_C* UsingCharacter);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void Broadcast_UseFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void ReceiveBeginPlay();
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void ShareableItemInteractionText(class AAbiotic_PlayerCharacter_C* TargetCharacter, class AAbiotic_PlayerCharacter_C* UsingCharacter);
    void Server_OnLiquidValueUpdated();
    void ExecuteUbergraph_Item_Consumable_ParentBP(int32 EntryPoint);
}; // Size: 0xB70

#endif
