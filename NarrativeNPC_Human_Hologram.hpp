#ifndef UE4SS_SDK_NarrativeNPC_Human_Hologram_HPP
#define UE4SS_SDK_NarrativeNPC_Human_Hologram_HPP

class ANarrativeNPC_Human_Hologram_C : public ANarrativeNPC_Human_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1910 (size: 0x8)
    class UStaticMeshComponent* HoloStand1;                                           // 0x1918 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x1920 (size: 0x8)
    class UStaticMeshComponent* HoloStand;                                            // 0x1928 (size: 0x8)
    class UStaticMeshComponent* HoloBeam;                                             // 0x1930 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanLongInteractWith_A(bool& Success);
    void Create Blood Splatter Decal(FVector ActorHitLocation, FRotator ActorHitAngle, double MaxDistance, bool& Created);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Broadcast_ShutUpHologram();
    void ReceiveBeginPlay();
    void DoHitReaction();
    void AudioStartStop(EAudioComponentPlayState PlayState);
    void CharacterIsSpeaking_Changed_Event(bool IsSpeaking, class AAbiotic_Character_ParentBP_C* Character);
    void ExecuteUbergraph_NarrativeNPC_Human_Hologram(int32 EntryPoint);
}; // Size: 0x1938

#endif
