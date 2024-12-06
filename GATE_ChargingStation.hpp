#ifndef UE4SS_SDK_GATE_ChargingStation_HPP
#define UE4SS_SDK_GATE_ChargingStation_HPP

class AGATE_ChargingStation_C : public ADeployed_ChargingStation_ParentBP_C
{
    class UStaticMeshComponent* ChargingPadPulse;                                     // 0x09A0 (size: 0x8)

    void UpdatePercentageChargeFX();
}; // Size: 0x9A8

#endif
