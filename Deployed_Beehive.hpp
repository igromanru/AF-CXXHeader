#ifndef UE4SS_SDK_Deployed_Beehive_HPP
#define UE4SS_SDK_Deployed_Beehive_HPP

class ADeployed_Beehive_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class USceneComponent* BeehiveItemDropPoint;                                      // 0x0878 (size: 0x8)
    class USceneComponent* BeehivePrompt;                                             // 0x0880 (size: 0x8)
    class UAbiotic_InventoryComponent_C* HiveInventory;                               // 0x0888 (size: 0x8)
    class UNiagaraComponent* Bees;                                                    // 0x0890 (size: 0x8)
    class UStaticMeshComponent* beehive_goo;                                          // 0x0898 (size: 0x8)
    class UAudioComponent* BeeAudio;                                                  // 0x08A0 (size: 0x8)
    class UStaticMeshComponent* beehive;                                              // 0x08A8 (size: 0x8)
    int32 ProductAvailable;                                                           // 0x08B0 (size: 0x4)
    bool ProximityFailure;                                                            // 0x08B4 (size: 0x1)
    bool NutrientsAvailable;                                                          // 0x08B5 (size: 0x1)
    int32 LiquidConsumedPerHoney;                                                     // 0x08B8 (size: 0x4)
    TEnumAsByte<E_LiquidType::Type> LiquidRequiredForHive;                            // 0x08BC (size: 0x1)
    bool Local_LastBeehiveState;                                                      // 0x08BD (size: 0x1)
    bool HiveActive;                                                                  // 0x08BE (size: 0x1)
    TMap<FName, int32> Map_ItemTypes_Max;                                             // 0x08C0 (size: 0x50)
    float AntejuiceSearchRadius;                                                      // 0x0910 (size: 0x4)

    void DropAllProduceOnGround(class AAbioticCharacter* DamageCauser);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    void Server_CheckForAvailableProduct(int32 InventoryIndex, int32 StackCount);
    void OnRep_ProductAvailable();
    void PlaceItemsInHiveInventory();
    void TryProduction();
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void OnRep_HiveActive();
    void CheckHiveProductionState(class ADeployed_LiquidContainer_ParentBP_C*& AvailableLiquidContainer);
    void SetBeeActivityFX();
    TArray<FText> CalculateBeehiveMessage();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void UserConstructionScript();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void CheckHiveHasRequirements();
    void NewDayUpdate();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void OnLoadedFromSave(double NewLifespan);
    void ExecuteUbergraph_Deployed_Beehive(int32 EntryPoint);
}; // Size: 0x914

#endif
