#ifndef UE4SS_SDK_Container_LaserCollector_HPP
#define UE4SS_SDK_Container_LaserCollector_HPP

class AContainer_LaserCollector_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UStaticMeshComponent* Battery8;                                             // 0x0928 (size: 0x8)
    class UStaticMeshComponent* Battery7;                                             // 0x0930 (size: 0x8)
    class UStaticMeshComponent* Battery6;                                             // 0x0938 (size: 0x8)
    class UStaticMeshComponent* Battery5;                                             // 0x0940 (size: 0x8)
    class UStaticMeshComponent* Battery4;                                             // 0x0948 (size: 0x8)
    class UStaticMeshComponent* Battery3;                                             // 0x0950 (size: 0x8)
    class UStaticMeshComponent* Battery2;                                             // 0x0958 (size: 0x8)
    class UStaticMeshComponent* Battery1;                                             // 0x0960 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0968 (size: 0x8)
    class UStaticMeshComponent* ReceiverPort;                                         // 0x0970 (size: 0x8)
    TEnumAsByte<E_LaserCollectorState::Type> CollectionState;                         // 0x0978 (size: 0x1)
    int32 CurrentLaserInContainer;                                                    // 0x097C (size: 0x4)
    int32 MaxLaser;                                                                   // 0x0980 (size: 0x4)
    int32 LaserGainRate;                                                              // 0x0984 (size: 0x4)
    FTimerHandle LaserCollectionTimer;                                                // 0x0988 (size: 0x8)

    class UPrimitiveComponent* GetLaserReceiverPort();
    void ValidateHitLasers();
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void UpdateHeldWeaponChangeableData(class AAbiotic_Item_ParentBP_C* Weapon, FAbiotic_InventoryChangeableDataStruct ChangeableData);
    void Server Fill Laser Into Weapon(class AAbiotic_Item_ParentBP_C* Weapon);
    void OnRep_CurrentLaserInContainer();
    void LaserCollectorTimer();
    void UpdateLaserLevelFX();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void OnRep_CollectionState();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void DelayedSave();
    void OnLoadedFromSave();
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void Broadcast_TakeLaser();
    void ExecuteUbergraph_Container_LaserCollector(int32 EntryPoint);
}; // Size: 0x990

#endif
