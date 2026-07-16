#ifndef UE4SS_SDK_Deployed_Crate_HMusicBox_HPP
#define UE4SS_SDK_Deployed_Crate_HMusicBox_HPP

class ADeployed_Crate_HMusicBox_C : public ADeployed_Crate_Hackable_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0AF8 (size: 0x8)
    class UNiagaraComponent* BigFog;                                                  // 0x0B00 (size: 0x8)
    class UNiagaraComponent* Fog4;                                                    // 0x0B08 (size: 0x8)
    class UNiagaraComponent* Fog3;                                                    // 0x0B10 (size: 0x8)
    class UNiagaraComponent* Fog2;                                                    // 0x0B18 (size: 0x8)
    class UNiagaraComponent* Fog1;                                                    // 0x0B20 (size: 0x8)
    class UStaticMeshComponent* LidRight;                                             // 0x0B28 (size: 0x8)
    float OpenMusicBoxTimeline_NewTrack_0_818CD2DF49D9862FACFE30BCD0119590;           // 0x0B30 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> OpenMusicBoxTimeline__Direction_818CD2DF49D9862FACFE30BCD0119590; // 0x0B34 (size: 0x1)
    class UTimelineComponent* OpenMusicBoxTimeline;                                   // 0x0B38 (size: 0x8)
    FTransform Lid1_Closed;                                                           // 0x0B40 (size: 0x60)
    FTransform Lid2_Close;                                                            // 0x0BA0 (size: 0x60)
    FTransform Lid1Open;                                                              // 0x0C00 (size: 0x60)
    FTransform Lid2Open;                                                              // 0x0C60 (size: 0x60)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void OpenMusicBoxTimeline__FinishedFunc();
    void OpenMusicBoxTimeline__UpdateFunc();
    void PlayChestTimeline(bool Open);
    void ExecuteUbergraph_Deployed_Crate_HMusicBox(int32 EntryPoint);
}; // Size: 0xCC0

#endif
