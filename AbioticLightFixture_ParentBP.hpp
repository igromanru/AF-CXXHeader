#ifndef UE4SS_SDK_AbioticLightFixture_ParentBP_HPP
#define UE4SS_SDK_AbioticLightFixture_ParentBP_HPP

class AAbioticLightFixture_ParentBP_C : public AAbioticActor_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBillboardComponent* AlwaysOnIndicator;                                     // 0x02D8 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* LightBeamMesh;                                        // 0x02E8 (size: 0x8)
    class UAudioComponent* PassiveAudio;                                              // 0x02F0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* LightMesh;                                            // 0x0300 (size: 0x8)
    float FlickerLight_Timeline_NewTrack_0_8ED2930D43A4EB8B94ED329CEEE80D83;          // 0x0308 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> FlickerLight_Timeline__Direction_8ED2930D43A4EB8B94ED329CEEE80D83; // 0x030C (size: 0x1)
    class UTimelineComponent* FlickerLight_Timeline;                                  // 0x0310 (size: 0x8)
    int32 LightStyle;                                                                 // 0x0318 (size: 0x4)
    bool ShowLightBeam;                                                               // 0x031C (size: 0x1)
    int32 LightBeamStyle;                                                             // 0x0320 (size: 0x4)
    bool FlickeringLight;                                                             // 0x0324 (size: 0x1)
    bool FlickerAffectsAudioVolume;                                                   // 0x0325 (size: 0x1)
    bool ShadowCasting;                                                               // 0x0326 (size: 0x1)
    bool EmissiveOnly;                                                                // 0x0327 (size: 0x1)
    bool IgnorePawnCollision;                                                         // 0x0328 (size: 0x1)
    double DefaultIntensity;                                                          // 0x0330 (size: 0x8)
    double DefaultLightRadius;                                                        // 0x0338 (size: 0x8)
    double Spotlight_InnerAngle;                                                      // 0x0340 (size: 0x8)
    double Spotlight_OuterAngle;                                                      // 0x0348 (size: 0x8)
    FLinearColor LightColor;                                                          // 0x0350 (size: 0x10)
    TSoftObjectPtr<UMaterialInterface> TextureOverride;                               // 0x0360 (size: 0x28)
    double FlickeringIntensityLow;                                                    // 0x0388 (size: 0x8)
    double FlickerSpeed;                                                              // 0x0390 (size: 0x8)
    bool FlickerAffectsColor;                                                         // 0x0398 (size: 0x1)
    FLinearColor FlickerColor;                                                        // 0x039C (size: 0x10)
    bool UniqueNightState;                                                            // 0x03AC (size: 0x1)
    FLinearColor NighttimeLightColor;                                                 // 0x03B0 (size: 0x10)
    double MaxLightMeshDistance;                                                      // 0x03C0 (size: 0x8)
    TSoftObjectPtr<USoundCue> LoopingAudio;                                           // 0x03C8 (size: 0x28)
    double DefaultAudioVolume;                                                        // 0x03F0 (size: 0x8)
    int32 ParentGeneratorIndex;                                                       // 0x03F8 (size: 0x4)
    class AGenerator_ParentBP_C* ParentGenerator;                                     // 0x0400 (size: 0x8)
    class UMaterialInstanceDynamic* LightEmissiveMaterial;                            // 0x0408 (size: 0x8)
    double OriginalEmissiveGlow;                                                      // 0x0410 (size: 0x8)
    bool ReversePowerLogic;                                                           // 0x0418 (size: 0x1)
    int32 Element Index;                                                              // 0x041C (size: 0x4)
    bool AlwaysPowered;                                                               // 0x0420 (size: 0x1)
    class AButton_Generic_C* ParentLightswitch;                                       // 0x0428 (size: 0x8)
    TEnumAsByte<E_LightTypes::Type> Light Type;                                       // 0x0430 (size: 0x1)
    bool TempFlickering;                                                              // 0x0431 (size: 0x1)
    float FlickerAlpha;                                                               // 0x0434 (size: 0x4)
    bool FlickerOptimized;                                                            // 0x0438 (size: 0x1)

    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void PowerParent(class AActor*& ParentPowerSource);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void IsPowerSocket(bool& CanBePluggedInto);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void GetPowerParentIndex(int32& Index);
    void IsPowered(bool& PowerOn);
    void DestroyUnusedComponents();
    void SetupLightEmissiveMaterial();
    void Set Flicker State(float Alpha, class ULocalLightComponent*& Light Component);
    void Update Light State(bool Power On, bool Light is Active, class ULocalLightComponent*& Local Light Object);
    void UserConstructionScript();
    void FlickerLight_Timeline__FinishedFunc();
    void FlickerLight_Timeline__UpdateFunc();
    void TogglePowerFX();
    void ChangePowerState();
    void ToggleFlickering(bool Start);
    void LightswitchPressed(bool Activated);
    void ReceiveBeginPlay();
    void DisruptLight();
    void FlickerDistanceCulling();
    void SetupLightStateUpdate(bool PowerOn);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ExecuteUbergraph_AbioticLightFixture_ParentBP(int32 EntryPoint);
}; // Size: 0x439

#endif
