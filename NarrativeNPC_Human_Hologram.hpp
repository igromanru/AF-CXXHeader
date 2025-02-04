#ifndef UE4SS_SDK_NarrativeNPC_Human_Hologram_HPP
#define UE4SS_SDK_NarrativeNPC_Human_Hologram_HPP

class ANarrativeNPC_Human_Hologram_C : public ANarrativeNPC_Human_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1770 (size: 0x8)
    class UStaticMeshComponent* HoloStand1;                                           // 0x1778 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x1780 (size: 0x8)
    class UStaticMeshComponent* HoloStand;                                            // 0x1788 (size: 0x8)
    class UStaticMeshComponent* HoloBeam;                                             // 0x1790 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanLongInteractWith_A(bool& Success);
    void Create Blood Splatter Decal(FVector ActorHitLocation, FRotator ActorHitAngle, double MaxDistance, bool& Created);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void DoHitReaction();
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Broadcast_ShutUpHologram();
    void ExecuteUbergraph_NarrativeNPC_Human_Hologram(int32 EntryPoint);
}; // Size: 0x1798

#endif
