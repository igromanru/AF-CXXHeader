#ifndef UE4SS_SDK_Deployed_PowerLever_HPP
#define UE4SS_SDK_Deployed_PowerLever_HPP

class ADeployed_PowerLever_C : public ADeployed_PowerStrip_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0950 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0958 (size: 0x8)
    class UChildActorComponent* PowerSocket;                                          // 0x0960 (size: 0x8)
    class UStaticMeshComponent* lever;                                                // 0x0968 (size: 0x8)
    float LeverTimeline_NewTrack_0_DDA4FA7344E7FE88BFF0D398819D5F0E;                  // 0x0970 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LeverTimeline__Direction_DDA4FA7344E7FE88BFF0D398819D5F0E; // 0x0974 (size: 0x1)
    class UTimelineComponent* LeverTimeline;                                          // 0x0978 (size: 0x8)
    FRotator Lever_On_Rot;                                                            // 0x0980 (size: 0x18)
    FRotator Lever_Off_Rot;                                                           // 0x0998 (size: 0x18)
    bool LeverOn;                                                                     // 0x09B0 (size: 0x1)

    void GetPluggedInDeviceCount(int32& Count);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void IsPowered(bool& PowerOn);
    void IsPowerSocket(bool& CanBePluggedInto);
    FText GetItemNameText();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void OnRep_LeverOn();
    void LeverTimeline__FinishedFunc();
    void LeverTimeline__UpdateFunc();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void TogglePowerFX();
    void UpdateLeverFX();
    void OnLoadedFromSave();
    void ExecuteUbergraph_Deployed_PowerLever(int32 EntryPoint);
}; // Size: 0x9B1

#endif
