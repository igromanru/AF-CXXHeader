#ifndef UE4SS_SDK_Deployed_TeleporterPad_HPP
#define UE4SS_SDK_Deployed_TeleporterPad_HPP

class ADeployed_TeleporterPad_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UBoxComponent* InteractHelper;                                              // 0x0878 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0880 (size: 0x8)
    class UChildActorComponent* TeleporterBP;                                         // 0x0888 (size: 0x8)
    bool HasTeleporterLink;                                                           // 0x0890 (size: 0x1)

    void AttemptSaveUpgrade();
    void SetupPaintAndTexture();
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void OnRep_TeleporterActive();
    void Set New Location ID(FString SyncedLocationID, bool Force);
    void FindCorrespondingTeleporterLink(bool& Success);
    void TogglePowerFX();
    void ReceiveBeginPlay();
    void OnLoadedFromSave(double NewLifespan);
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void DeliverString(FString String, bool FromSave);
    void YesClicked_Event();
    void NoClicked_Event();
    void InteractWith_B_LocalFX(bool Hold);
    void UpdateTeleporterActiveState(bool NewActiveState);
    void ExecuteUbergraph_Deployed_TeleporterPad(int32 EntryPoint);
}; // Size: 0x891

#endif
