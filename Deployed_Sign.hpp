#ifndef UE4SS_SDK_Deployed_Sign_HPP
#define UE4SS_SDK_Deployed_Sign_HPP

class ADeployed_Sign_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0928 (size: 0x8)
    class UW_PlayerSign_C* As W Player Sign;                                          // 0x0930 (size: 0x8)

    void GetStoredString(FString& String);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void ReceiveBeginPlay();
    void DeliverString(FString String, bool FromSave);
    void InteractWith_B_LocalFX(bool Hold);
    void NewPlayerMadeString();
    void OnLoadedFromSave();
    void ExecuteUbergraph_Deployed_Sign(int32 EntryPoint);
}; // Size: 0x938

#endif
