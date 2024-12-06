#ifndef UE4SS_SDK_BenchUpgrade_MatterSynthesizer_HPP
#define UE4SS_SDK_BenchUpgrade_MatterSynthesizer_HPP

class ABenchUpgrade_MatterSynthesizer_C : public ABenchUpgrade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class USceneComponent* NewLootFX;                                                 // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Drawer;                                               // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* MailFlag;                                             // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* FurnitureMesh;                                        // 0x02E8 (size: 0x8)
    class USceneComponent* ButtonPrompt;                                              // 0x02F0 (size: 0x8)
    class UAbiotic_InventoryComponent_C* ContainerInventory;                          // 0x02F8 (size: 0x8)
    float ContainerFlagRotation_NewTrack_0_43CB3D0D4CD0A447EE1A169D3353121D;          // 0x0300 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ContainerFlagRotation__Direction_43CB3D0D4CD0A447EE1A169D3353121D; // 0x0304 (size: 0x1)
    class UTimelineComponent* ContainerFlagRotation;                                  // 0x0308 (size: 0x8)
    float DrawerTimeline_NewTrack_0_9F5B20B449DC046EECD61C8431815430;                 // 0x0310 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> DrawerTimeline__Direction_9F5B20B449DC046EECD61C8431815430; // 0x0314 (size: 0x1)
    class UTimelineComponent* DrawerTimeline;                                         // 0x0318 (size: 0x8)
    FDataTableRowHandle SalvageDropDataRow;                                           // 0x0320 (size: 0x10)
    bool IsContainerBeingUsed;                                                        // 0x0330 (size: 0x1)
    TArray<class AAbiotic_Character_ParentBP_C*> ContainerUsers;                      // 0x0338 (size: 0x10)
    TSoftObjectPtr<USoundBase> OpenCue;                                               // 0x0348 (size: 0x28)
    TSoftObjectPtr<USoundBase> CloseCue;                                              // 0x0370 (size: 0x28)
    TMap<class FWorldFlagRowHandle, class FDataTableRowHandle> LootByWorldFlag;       // 0x0398 (size: 0x50)
    FVector Drawer_Closed;                                                            // 0x03E8 (size: 0x18)
    FVector Drawer_Open;                                                              // 0x0400 (size: 0x18)
    bool NewLootUpdated;                                                              // 0x0418 (size: 0x1)
    bool IsContainerNotEmpty;                                                         // 0x0419 (size: 0x1)

    void OnRep_IsContainerNotEmpty();
    void OnRep_NewLootUpdated();
    class UMeshComponent* GetInteractMesh();
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    FText GetItemNameText();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void OnRep_IsContainerBeingUsed();
    void Populate Random Loot(bool& Success);
    void DrawerTimeline__FinishedFunc();
    void DrawerTimeline__UpdateFunc();
    void ContainerFlagRotation__FinishedFunc();
    void ContainerFlagRotation__UpdateFunc();
    void OnLoaded_05DCBD4C4AEE34A3AB4D0BBF6A64BFE2(class UObject* Loaded);
    void ReceiveBeginPlay();
    void OnContainerInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void InteractWith_A_LocalFX(bool Hold);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Server_UserLeftContainer(const class AAbiotic_Character_ParentBP_C*& ContainerUser);
    void PlayOpenCloseSound(TSoftObjectPtr<UObject> Asset);
    void PopulateLootInMorning();
    void ToggleOpenFX(bool Open);
    void FlagRotationUpdate(bool RotateFlag);
    void TogglePowerFX();
    void UpdateContainerVisuals(bool NewLootAdded);
    void ExecuteUbergraph_BenchUpgrade_MatterSynthesizer(int32 EntryPoint);
}; // Size: 0x41A

#endif
