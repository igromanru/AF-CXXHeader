#ifndef UE4SS_SDK_Deployed_FloorTrap_ParentBP_HPP
#define UE4SS_SDK_Deployed_FloorTrap_ParentBP_HPP

class ADeployed_FloorTrap_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0878 (size: 0x8)
    class UBoxComponent* ColliderBox;                                                 // 0x0880 (size: 0x8)
    TSubclassOf<class UDamageType> TrapDamageType;                                    // 0x0888 (size: 0x8)
    TArray<FName> TrapDebuffs;                                                        // 0x0890 (size: 0x10)
    float TrapInitialDamage;                                                          // 0x08A0 (size: 0x4)
    int32 BatteryAmountUsedOnTrigger;                                                 // 0x08A4 (size: 0x4)
    bool IsActive;                                                                    // 0x08A8 (size: 0x1)

    void OnRep_IsActive();
    void CanUse(bool& CanUse);
    void Can Use_Secondary(bool& Can Use, class AActor*& TargetActor);
    void BndEvt__Deployed_ShockTrap_ColliderBox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Broadcast_TrapFX();
    void ReceiveBeginPlay();
    void OnLoadedFromSave(double NewLifespan);
    void Local_UpdateCurrentTrapState();
    void Server_TrapNewStateUpdate();
    void ExecuteUbergraph_Deployed_FloorTrap_ParentBP(int32 EntryPoint);
}; // Size: 0x8A9

#endif
