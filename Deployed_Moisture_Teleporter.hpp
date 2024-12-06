#ifndef UE4SS_SDK_Deployed_Moisture_Teleporter_HPP
#define UE4SS_SDK_Deployed_Moisture_Teleporter_HPP

class ADeployed_Moisture_Teleporter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0928 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Spinner;                                              // 0x0938 (size: 0x8)
    TArray<class ADeployed_LiquidContainer_ParentBP_C*> FoundContainers;              // 0x0940 (size: 0x10)
    int32 MaxLiquidLevel;                                                             // 0x0950 (size: 0x4)

    void Start Dispense Water to Container();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void TogglePowerFX();
    void CheckForNearbyContainers();
    void Get Eligible Nearby Container(class ADeployed_LiquidContainer_ParentBP_C* PotentialContainer);
    void Broadcast_DispenseFX();
    void Try Dispense Water(int32 NewHour, int32 PreviousHour);
    void ExecuteUbergraph_Deployed_Moisture_Teleporter(int32 EntryPoint);
}; // Size: 0x954

#endif
