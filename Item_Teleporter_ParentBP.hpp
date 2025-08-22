#ifndef UE4SS_SDK_Item_Teleporter_ParentBP_HPP
#define UE4SS_SDK_Item_Teleporter_ParentBP_HPP

class AItem_Teleporter_ParentBP_C : public AAbiotic_Item_Held_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B00 (size: 0x8)
    int32 CostPerUse;                                                                 // 0x0B08 (size: 0x4)
    double TeleportDelay;                                                             // 0x0B10 (size: 0x8)
    FTimerHandle TeleportDelayTimer;                                                  // 0x0B18 (size: 0x8)
    bool CraftingBenchFound;                                                          // 0x0B20 (size: 0x1)

    void GetPossibleTeleportDestination(class AActor* ActorToTeleport, class AActor* DestinationActor, double CapsuleRadius, double CapsuleHalfHeight, bool& Location is Found?, FVector& FInal Location);
    void Update Current Item Data();
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void Request_TeleportToLinkedCraftingBench(class AAbiotic_PlayerCharacter_C* Using Character);
    void ExecuteUbergraph_Item_Teleporter_ParentBP(int32 EntryPoint);
}; // Size: 0xB21

#endif
