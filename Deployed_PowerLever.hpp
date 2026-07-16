#ifndef UE4SS_SDK_Deployed_PowerLever_HPP
#define UE4SS_SDK_Deployed_PowerLever_HPP

class ADeployed_PowerLever_C : public ADeployed_PowerStrip_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0890 (size: 0x8)
    class UMaterialBillboardComponent* MaterialBillboard;                             // 0x0898 (size: 0x8)
    class UChildActorComponent* PowerSocket;                                          // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* lever;                                                // 0x08A8 (size: 0x8)
    float LeverTimeline_NewTrack_0_DDA4FA7344E7FE88BFF0D398819D5F0E;                  // 0x08B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> LeverTimeline__Direction_DDA4FA7344E7FE88BFF0D398819D5F0E; // 0x08B4 (size: 0x1)
    class UTimelineComponent* LeverTimeline;                                          // 0x08B8 (size: 0x8)
    FRotator Lever_On_Rot;                                                            // 0x08C0 (size: 0x18)
    FRotator Lever_Off_Rot;                                                           // 0x08D8 (size: 0x18)
    bool LeverOn;                                                                     // 0x08F0 (size: 0x1)

    void GetPluggedInDeviceCount(int32& Count);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void IsPowered(bool& PowerOn);
    void IsPowerSocket(bool& CanBePluggedInto);
    FText GetItemNameText();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void OnRep_LeverOn();
    void LeverTimeline__FinishedFunc();
    void LeverTimeline__UpdateFunc();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void TogglePowerFX();
    void UpdateLeverFX();
    void OnLoadedFromSave(double NewLifespan);
    void ExecuteUbergraph_Deployed_PowerLever(int32 EntryPoint);
}; // Size: 0x8F1

#endif
