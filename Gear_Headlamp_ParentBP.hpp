#ifndef UE4SS_SDK_Gear_Headlamp_ParentBP_HPP
#define UE4SS_SDK_Gear_Headlamp_ParentBP_HPP

class AGear_Headlamp_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B18 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B20 (size: 0x8)
    class UMeshComponent* Headlamp;                                                   // 0x0B28 (size: 0x8)
    class UMaterialInstanceDynamic* LightEmissiveMaterial;                            // 0x0B30 (size: 0x8)
    double OriginalEmissiveGlow;                                                      // 0x0B38 (size: 0x8)
    FPostProcessSettings PostProcess;                                                 // 0x0B40 (size: 0x6F0)
    bool CreateNightVisionLight;                                                      // 0x1230 (size: 0x1)
    class UPointLightComponent* NVG_PointLight;                                       // 0x1238 (size: 0x8)
    bool AssetLoaded;                                                                 // 0x1240 (size: 0x1)
    double CurrentBatteryPercentage;                                                  // 0x1248 (size: 0x8)

    TArray<FItemActionRowHandle> GetPrimaryItemActionArray();
    void OnRep_CurrentBatteryPercentage();
    void AttachHeadlampToSocket(FName SocketName);
    void FindGearCosmeticData(bool CheckForTransmog, TEnumAsByte<E_InventorySlotType::Type> InventorySlot, bool& Success, FItemCosmetics_Struct& ItemCosmeticData);
    void TrySpawnNVGLight(class AAbiotic_PlayerCharacter_C* PlayerCharacter);
    void AdjustCharacterHeadlampSpotlight(class AAbiotic_PlayerCharacter_C* Character, FName HeadlampSocket);
    void UpdateLightMeshEmissive(bool On, class UMeshComponent*& MeshComponent);
    void Setup Light Emissive Material(class UMeshComponent*& Target);
    void OnLoaded_356DDC6246691980D348B9A03E598CB3(class UObject* Loaded);
    void OnLoaded_E1DE8713464C18B9D80AD88EF70AA41F(class UObject* Loaded);
    void StartAttachHeadlamp(bool ShowHeadlamp);
    void Update Gear State(bool Equipped);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void SetNewHeadlampAsset();
    void Update Current Item Data();
    void ExecuteUbergraph_Gear_Headlamp_ParentBP(int32 EntryPoint);
}; // Size: 0x1250

#endif
