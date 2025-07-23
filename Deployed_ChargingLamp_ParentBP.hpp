#ifndef UE4SS_SDK_Deployed_ChargingLamp_ParentBP_HPP
#define UE4SS_SDK_Deployed_ChargingLamp_ParentBP_HPP

class ADeployed_ChargingLamp_ParentBP_C : public AAbioticDeployed_Lamp_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x08C0 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x08C8 (size: 0x8)
    FTimerHandle DrainBatteryTimer;                                                   // 0x08D0 (size: 0x8)

    void Timer_ModifyLampBattery();
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_CheckForLampStatus(bool RechargeableActive);
    void ExecuteUbergraph_Deployed_ChargingLamp_ParentBP(int32 EntryPoint);
}; // Size: 0x8D8

#endif
