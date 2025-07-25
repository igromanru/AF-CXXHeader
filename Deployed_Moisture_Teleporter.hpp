#ifndef UE4SS_SDK_Deployed_Moisture_Teleporter_HPP
#define UE4SS_SDK_Deployed_Moisture_Teleporter_HPP

class ADeployed_Moisture_Teleporter_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0858 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0860 (size: 0x8)
    class UStaticMeshComponent* Spinner;                                              // 0x0868 (size: 0x8)
    TArray<class ADeployed_LiquidContainer_ParentBP_C*> FoundContainers;              // 0x0870 (size: 0x10)
    int32 MaxLiquidLevel;                                                             // 0x0880 (size: 0x4)

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
}; // Size: 0x884

#endif
