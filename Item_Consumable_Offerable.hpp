#ifndef UE4SS_SDK_Item_Consumable_Offerable_HPP
#define UE4SS_SDK_Item_Consumable_Offerable_HPP

class AItem_Consumable_Offerable_C : public AItem_Consumable_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B68 (size: 0x8)
    class UAnimMontage* TPOfferItemMontage;                                           // 0x0B70 (size: 0x8)

    TArray<FItemActionRowHandle> GetSecondaryItemActionArray();
    void RemoveItemAfterOffer(class AAbiotic_PlayerCharacter_C* UsingCharacter);
    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    class UAnimMontage* GetTPMontage(bool Secondary);
    void Check Item Tag Query(class AActor* TargetActor, bool& Success, FText& PopupText);
    void CanUseSharedInteraction(bool& Can Use);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void SupportedSharedInteraction(bool& Supported);
    void Server_SharedInteraction(class AAbiotic_PlayerCharacter_C* ItemOwner, class AAbiotic_PlayerCharacter_C* Receiver);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void StopOfferMontage();
    void LocalUpdateSharedInteraction();
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void ExecuteUbergraph_Item_Consumable_Offerable(int32 EntryPoint);
}; // Size: 0xB78

#endif
