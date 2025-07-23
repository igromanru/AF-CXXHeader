#ifndef UE4SS_SDK_Deployed_Beacon_HPP
#define UE4SS_SDK_Deployed_Beacon_HPP

class ADeployed_Beacon_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)

    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void ReceiveBeginPlay();
    void InteractWith_A_LocalFX(bool Hold);
    void DeliverString(FString String, bool FromSave);
    void OnLoadedFromSave(double NewLifespan);
    void NewPlayerMadeString();
    void ExecuteUbergraph_Deployed_Beacon(int32 EntryPoint);
}; // Size: 0x858

#endif
