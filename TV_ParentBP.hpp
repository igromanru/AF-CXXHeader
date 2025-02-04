#ifndef UE4SS_SDK_TV_ParentBP_HPP
#define UE4SS_SDK_TV_ParentBP_HPP

class ATV_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    class UStaticMeshComponent* ScreenMesh;                                           // 0x0938 (size: 0x8)
    class UTextRenderComponent* TVDebug;                                              // 0x0940 (size: 0x8)
    class UAudioComponent* TV_Audio;                                                  // 0x0948 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0950 (size: 0x8)
    bool TV_PoweredOn;                                                                // 0x0958 (size: 0x1)
    double DelayBetweenPlays;                                                         // 0x0960 (size: 0x8)
    int32 AudioPlayIndex;                                                             // 0x0968 (size: 0x4)
    double CurrentAudioStartTime;                                                     // 0x0970 (size: 0x8)
    double CurrentAudioDuration;                                                      // 0x0978 (size: 0x8)
    TEnumAsByte<E_TVColors::Type> TV Style;                                           // 0x0980 (size: 0x1)
    bool IgnoreStyle;                                                                 // 0x0981 (size: 0x1)
    FTimerHandle TVChannelHandle;                                                     // 0x0988 (size: 0x8)

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
    void OnLoadedFromSave();
    void ExecuteUbergraph_TV_ParentBP(int32 EntryPoint);
}; // Size: 0x990

#endif
