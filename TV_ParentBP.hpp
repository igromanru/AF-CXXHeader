#ifndef UE4SS_SDK_TV_ParentBP_HPP
#define UE4SS_SDK_TV_ParentBP_HPP

class ATV_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UStaticMeshComponent* ScreenMesh;                                           // 0x0858 (size: 0x8)
    class UTextRenderComponent* TVDebug;                                              // 0x0860 (size: 0x8)
    class UAudioComponent* TV_Audio;                                                  // 0x0868 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0870 (size: 0x8)
    bool TV_PoweredOn;                                                                // 0x0878 (size: 0x1)
    double DelayBetweenPlays;                                                         // 0x0880 (size: 0x8)
    int32 AudioPlayIndex;                                                             // 0x0888 (size: 0x4)
    double CurrentAudioStartTime;                                                     // 0x0890 (size: 0x8)
    double CurrentAudioDuration;                                                      // 0x0898 (size: 0x8)
    TEnumAsByte<E_TVColors::Type> TV Style;                                           // 0x08A0 (size: 0x1)
    bool IgnoreStyle;                                                                 // 0x08A1 (size: 0x1)
    FTimerHandle TVChannelHandle;                                                     // 0x08A8 (size: 0x8)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetTVContent(TArray<TSoftObjectPtr<UMaterialInterface>>& OnScreenMaterials, TArray<TSoftObjectPtr<USoundBase>>& AudioLoops);
    void IsPowered(bool& PowerOn);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void OnRep_AudioPlayIndex();
    void OnRep_TV_PoweredOn();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void TV_Flicker();
    void TogglePowerFX();
    void ServerPlayNextAudioLoop(bool JustRefresh);
    void InitTVData(int32 ScreenIndex);
    void SetNewTVScreenAndAudioContent();
    void ChannelSurf();
    void StartChannelSurfTimer();
    void OnLoadedFromSave(double NewLifespan);
    void ExecuteUbergraph_TV_ParentBP(int32 EntryPoint);
}; // Size: 0x8B0

#endif
