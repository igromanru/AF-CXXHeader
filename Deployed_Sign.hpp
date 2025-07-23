#ifndef UE4SS_SDK_Deployed_Sign_HPP
#define UE4SS_SDK_Deployed_Sign_HPP

class ADeployed_Sign_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0858 (size: 0x8)
    class UW_PlayerSign_C* As W Player Sign;                                          // 0x0860 (size: 0x8)

    void GetStoredString(FString& String);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void OnFailure_F3C7D2F745A84A822A1961902B4A6B86(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void OnSuccess_F3C7D2F745A84A822A1961902B4A6B86(bool bSuccess, const TArray<FString>& SanitizedMessages);
    void ReceiveBeginPlay();
    void DeliverString(FString String, bool FromSave);
    void InteractWith_B_LocalFX(bool Hold);
    void NewPlayerMadeString();
    void OnLoadedFromSave(double NewLifespan);
    void ExecuteUbergraph_Deployed_Sign(int32 EntryPoint);
}; // Size: 0x868

#endif
