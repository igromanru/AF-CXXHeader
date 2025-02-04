#ifndef UE4SS_SDK_Deployed_ChargingLamp_ParentBP_HPP
#define UE4SS_SDK_Deployed_ChargingLamp_ParentBP_HPP

class ADeployed_ChargingLamp_ParentBP_C : public AAbioticDeployed_Lamp_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09A0 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x09A8 (size: 0x8)
    FTimerHandle DrainBatteryTimer;                                                   // 0x09B0 (size: 0x8)

    void Timer_ModifyLampBattery();
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_CheckForLampStatus(bool RechargeableActive);
    void ExecuteUbergraph_Deployed_ChargingLamp_ParentBP(int32 EntryPoint);
}; // Size: 0x9B8

#endif
