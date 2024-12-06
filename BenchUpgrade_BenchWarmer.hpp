#ifndef UE4SS_SDK_BenchUpgrade_BenchWarmer_HPP
#define UE4SS_SDK_BenchUpgrade_BenchWarmer_HPP

class ABenchUpgrade_BenchWarmer_C : public ABenchUpgrade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UThermalEmitterComponent* ThermalEmitter;                                   // 0x02D0 (size: 0x8)
    class USphereComponent* HeatRadiusSphere;                                         // 0x02D8 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Warmer;                                               // 0x02E8 (size: 0x8)
    float Timeline_Light_51BA83C84A4F69D959E32CBAACDC5FE2;                            // 0x02F0 (size: 0x4)
    float Timeline_Coils_51BA83C84A4F69D959E32CBAACDC5FE2;                            // 0x02F4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_51BA83C84A4F69D959E32CBAACDC5FE2; // 0x02F8 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0300 (size: 0x8)
    bool Switch On;                                                                   // 0x0308 (size: 0x1)

    float GetAmbientTemperature();
    void GetThermalOverlapPrimitives(TArray<class UPrimitiveComponent*>& OutPrimitives);
    class UMeshComponent* GetInteractMesh();
    void OnRep_Switch On();
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void ThermalEmitterActiveUpdated(bool bActive);
    void HeaterSlowToggle(bool On);
    void ApplyNewTemperature(float NewTemperature);
    void TogglePowerFX();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void LoadBenchUpgradeStatesFromSave();
    void ExecuteUbergraph_BenchUpgrade_BenchWarmer(int32 EntryPoint);
}; // Size: 0x309

#endif
