#ifndef UE4SS_SDK_Deployed_IS0012_HPP
#define UE4SS_SDK_Deployed_IS0012_HPP

class ADeployed_IS0012_C : public ADeployed_Figurine_Composer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0928 (size: 0x8)
    class UStaticMeshComponent* BellTop;                                              // 0x0930 (size: 0x8)
    bool BellDinging;                                                                 // 0x0938 (size: 0x1)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_BellDing(int32 RingType);
    void ExecuteUbergraph_Deployed_IS0012(int32 EntryPoint);
}; // Size: 0x939

#endif
