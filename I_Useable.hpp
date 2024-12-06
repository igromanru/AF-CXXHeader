#ifndef UE4SS_SDK_I_Useable_HPP
#define UE4SS_SDK_I_Useable_HPP

class II_Useable_C : public IInterface
{

    void GetItemUseSpeed(bool SecondaryUse, class AAbiotic_Character_ParentBP_C* UsingCharacter, class AAbiotic_Character_ParentBP_C* TargetCharacter, double BaseSpeed, double& Speed);
    void CanLoseDurabilityOnUse(bool Secondary, bool& CanLose);
    void Update Current Item Data();
    void UseItem_OnTarget(class AActor* TargetActor);
    void UseItemSecondary_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void TryPerformBatteryChangeOnUse();
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor, bool& OverrideLogic);
    void Use Item_Secondary(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void UseItem_BroadcastFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, bool SecondaryUse);
    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
}; // Size: 0x28

#endif
