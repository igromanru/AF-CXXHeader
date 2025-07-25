#ifndef UE4SS_SDK_AbioticDeployed_Lamp_ParentBP_HPP
#define UE4SS_SDK_AbioticDeployed_Lamp_ParentBP_HPP

class AAbioticDeployed_Lamp_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0858 (size: 0x8)
    class UAudioComponent* PoweredHum;                                                // 0x0860 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0868 (size: 0x8)
    float FadeOutLight_NewTrack_0_7C05B27445434E119530A681E2E1751C;                   // 0x0870 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FadeOutLight__Direction_7C05B27445434E119530A681E2E1751C; // 0x0874 (size: 0x1)
    class UTimelineComponent* FadeOutLight;                                           // 0x0878 (size: 0x8)
    float ElectricalFlickerTimeline_NewTrack_0_2CB46D1143FFDEC778282A9214D1A849;      // 0x0880 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ElectricalFlickerTimeline__Direction_2CB46D1143FFDEC778282A9214D1A849; // 0x0884 (size: 0x1)
    class UTimelineComponent* ElectricalFlickerTimeline;                              // 0x0888 (size: 0x8)
    bool SwitchOn;                                                                    // 0x0890 (size: 0x1)
    float DefaultPointLightIntensity;                                                 // 0x0894 (size: 0x4)
    TEnumAsByte<ELightSourceTypes::Type> Light Source Type;                           // 0x0898 (size: 0x1)
    TArray<class UMaterialInstanceDynamic*> LightDynamicMaterials;                    // 0x08A0 (size: 0x10)
    FLinearColor DefaultLightColor;                                                   // 0x08B0 (size: 0x10)

    void IsPowered(bool& PowerOn);
    void SetupPaintAndTexture();
    void Server_ToggleLight(bool On, bool SkipSave);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetPowerParentIndex(int32& Index);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void OnRep_SwitchOn();
    void UserConstructionScript();
    void ElectricalFlickerTimeline__FinishedFunc();
    void ElectricalFlickerTimeline__UpdateFunc();
    void FadeOutLight__FinishedFunc();
    void FadeOutLight__UpdateFunc();
    void ReceiveBeginPlay();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_ShowElectricalDisturbance();
    void TogglePowerFX();
    void Broadcast_LightswitchSound();
    void OnLoadedFromSave(double NewLifespan);
    void ExecuteUbergraph_AbioticDeployed_Lamp_ParentBP(int32 EntryPoint);
}; // Size: 0x8C0

#endif
