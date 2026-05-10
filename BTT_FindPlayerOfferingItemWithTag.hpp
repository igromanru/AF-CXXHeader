#ifndef UE4SS_SDK_BTT_FindPlayerOfferingItemWithTag_HPP
#define UE4SS_SDK_BTT_FindPlayerOfferingItemWithTag_HPP

class UBTT_FindPlayerOfferingItemWithTag_C : public UBTTask_BlueprintBase
{
    double SearchRange;                                                               // 0x00A8 (size: 0x8)
    FGameplayTagContainer FallbackItemTags;                                           // 0x00B0 (size: 0x20)

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    bool IsPlayerOfferingValidItem(class ANPC_Base_ParentBP_C* OwningNPC, class AAbiotic_PlayerCharacter_C* Player);
}; // Size: 0xD0

#endif
