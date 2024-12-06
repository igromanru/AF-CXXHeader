#ifndef UE4SS_SDK_Deployable_FishingTrap_T1_HPP
#define UE4SS_SDK_Deployable_FishingTrap_T1_HPP

class ADeployable_FishingTrap_T1_C : public AContainer_Aquarium_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A20 (size: 0x8)
    class UBP_FishTankMesh_C* TrappedFish;                                            // 0x0A28 (size: 0x8)
    FFishingZoneRowHandle PossibleFishingZone;                                        // 0x0A30 (size: 0x20)
    class ADayNightManager_C* DayNightManager;                                        // 0x0A50 (size: 0x8)

    void TargetableByTurrets(bool& Targetable);
    void TargetableByNPCs(bool Maintain, bool& Targetable);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void UpdateInventoryFish();
    void SetupFishingZoneForTrap(bool& Can Trap Fish);
    void Trap Fish(int32 DayNumber, bool& Success);
    void GetBaitTags(FGameplayTagContainer& BaitData, FAbiotic_InventoryItemSlotStruct& SlotData);
    void DetermineFishingReward(FFishRowHandle& Reward, FDataTableRowHandle& BaitToConsume);
    void InitFishSplines();
    void ReceiveBeginPlay();
    void TryTrapFish(int32 DayNumber);
    void InteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Local_PlayNewFishTrapFX();
    void DamagingLiquid_SelfDestruct();
    void Broadcast_DestroyedByLiquid();
    void ExecuteUbergraph_Deployable_FishingTrap_T1(int32 EntryPoint);
}; // Size: 0xA58

#endif
