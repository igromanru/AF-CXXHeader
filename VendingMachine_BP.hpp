#ifndef UE4SS_SDK_VendingMachine_BP_HPP
#define UE4SS_SDK_VendingMachine_BP_HPP

class AVendingMachine_BP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0850 (size: 0x8)
    class UVendingButton_BP_C* Button_2;                                              // 0x0858 (size: 0x8)
    class UVendingButton_BP_C* Button_4;                                              // 0x0860 (size: 0x8)
    class UVendingButton_BP_C* Button_3;                                              // 0x0868 (size: 0x8)
    class UStaticMeshComponent* DollarMesh;                                           // 0x0870 (size: 0x8)
    class USceneComponent* SodaSpawn;                                                 // 0x0878 (size: 0x8)
    class UVendingButton_BP_C* Button_0;                                              // 0x0880 (size: 0x8)
    class UVendingButton_BP_C* Button_1;                                              // 0x0888 (size: 0x8)
    class UAudioComponent* Hum;                                                       // 0x0890 (size: 0x8)
    class URectLightComponent* ItemMouthLight;                                        // 0x0898 (size: 0x8)
    float BillRejectedTimeline_NewTrack_0_F71CA1854F3B6E7AC69AB69FD604092B;           // 0x08A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BillRejectedTimeline__Direction_F71CA1854F3B6E7AC69AB69FD604092B; // 0x08A4 (size: 0x1)
    class UTimelineComponent* BillRejectedTimeline;                                   // 0x08A8 (size: 0x8)
    float ShakeVendingMachineTimeline_NewTrack_0_87E26631494654469D1726A8756DF017;    // 0x08B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShakeVendingMachineTimeline__Direction_87E26631494654469D1726A8756DF017; // 0x08B4 (size: 0x1)
    class UTimelineComponent* ShakeVendingMachineTimeline;                            // 0x08B8 (size: 0x8)
    float BillAcceptedTimeline_NewTrack_0_562EBB7846B62B99331FD1A2778814B6;           // 0x08C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BillAcceptedTimeline__Direction_562EBB7846B62B99331FD1A2778814B6; // 0x08C4 (size: 0x1)
    class UTimelineComponent* BillAcceptedTimeline;                                   // 0x08C8 (size: 0x8)
    float ButtonPressTimeline_NewTrack_0_428D6DCA4922D632272A598403529F9F;            // 0x08D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ButtonPressTimeline__Direction_428D6DCA4922D632272A598403529F9F; // 0x08D4 (size: 0x1)
    class UTimelineComponent* ButtonPressTimeline;                                    // 0x08D8 (size: 0x8)
    FVector DollarBill_In;                                                            // 0x08E0 (size: 0x18)
    FVector DollarBill_Out;                                                           // 0x08F8 (size: 0x18)
    bool IsBusyWithAction;                                                            // 0x0910 (size: 0x1)
    double ButtonOutDepth;                                                            // 0x0918 (size: 0x8)
    double ButtonInDepth;                                                             // 0x0920 (size: 0x8)
    int32 ItemCost;                                                                   // 0x0928 (size: 0x4)
    class UDataTable* ItemStockTable;                                                 // 0x0930 (size: 0x8)
    TMap<FName, int32> ItemsInStock;                                                  // 0x0938 (size: 0x50)
    TArray<bool> ButtonStates;                                                        // 0x0988 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> DynamicButtonMaterials;                   // 0x0998 (size: 0x10)
    double RefillCooldownTime;                                                        // 0x09A8 (size: 0x8)
    int32 MaxSodas;                                                                   // 0x09B0 (size: 0x4)
    FTimerHandle RefillCooldownTimer;                                                 // 0x09B8 (size: 0x8)
    FText Item Name;                                                                  // 0x09C0 (size: 0x10)
    FText BuyFormatText;                                                              // 0x09D0 (size: 0x10)
    bool Infinite;                                                                    // 0x09E0 (size: 0x1)
    bool NeverFail;                                                                   // 0x09E1 (size: 0x1)
    bool NoCost;                                                                      // 0x09E2 (size: 0x1)
    bool CanShake;                                                                    // 0x09E3 (size: 0x1)
    bool HasDispensedThisSession;                                                     // 0x09E4 (size: 0x1)
    FVector PromptDefaultLocation;                                                    // 0x09E8 (size: 0x18)
    bool WholeMachineInteraction;                                                     // 0x0A00 (size: 0x1)
    class UActorComponent* LastHitComponent;                                          // 0x0A08 (size: 0x8)
    TArray<class UVendingButton_BP_C*> ButtonList;                                    // 0x0A10 (size: 0x10)
    double StartingDurability;                                                        // 0x0A20 (size: 0x8)
    int32 CurrentButtonIndex;                                                         // 0x0A28 (size: 0x4)
    bool HasSpillOutItems;                                                            // 0x0A2C (size: 0x1)
    bool KIZZ;                                                                        // 0x0A2D (size: 0x1)
    bool NextSodaBadSoda;                                                             // 0x0A2E (size: 0x1)
    class USoundBase* SFX_Dispense;                                                   // 0x0A30 (size: 0x8)
    float PreShakeDelay;                                                              // 0x0A38 (size: 0x4)
    double RecentExplosiveDamage;                                                     // 0x0A40 (size: 0x8)

    void Try Apply New Durability Value After Hit(double TotalDurabilityToBeApplied, const class UAbiotic_DamageType_ParentBP_C* DamageType, bool& Applied);
    void UpdateDurabilityVisualFX();
    void GetPluggedInDeviceCount(int32& Count);
    bool HasBatteryInParentChain();
    void RestoresSanityNearbyWhenPowered(bool& RestoresSanity);
    void PowerParent(class AActor*& ParentPowerSource);
    void PlugCordAttachLocation(FVector& RelativeLocation);
    void IsPowerSocket(bool& CanBePluggedInto);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void GetPowerParentIndex(int32& Index);
    void IsPowered(bool& PowerOn);
    void GetInteractText(FText& InteractText, FText& LongInteractText, FText& PackageText, FText& LongPackageText);
    FText GetItemNameText();
    void ShowPotentialInteraction(class UActorComponent*& AlternateHitComponent, bool& Show);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void CanLongInteractWith_A(bool& Success);
    void Refill Random Empty Slot(int32 SlotsToRefill);
    void LocalFX_UpdateButtonStates();
    void FindFirstAvailableStock(bool& Success, int32& ButtonIndex);
    void Server_CheckButtonStates();
    void OnRep_ButtonStates();
    void SetupRandomVendingMachineStock();
    void ProduceItem(int32 ButtonIndex);
    void FindButtonPressed(class UActorComponent* PressedComponent, bool& WasButton, class UActorComponent*& Button, int32& ButtonIndex);
    void ResetAllButtonPositions();
    void ButtonPressTimeline__FinishedFunc();
    void ButtonPressTimeline__UpdateFunc();
    void BillAcceptedTimeline__FinishedFunc();
    void BillAcceptedTimeline__UpdateFunc();
    void BillRejectedTimeline__FinishedFunc();
    void BillRejectedTimeline__UpdateFunc();
    void ShakeVendingMachineTimeline__FinishedFunc();
    void ShakeVendingMachineTimeline__UpdateFunc();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void Broadcast_VendingMachine_ButtonPressed(int32 ButtonIndex, bool MoneyProvided, bool BillRejected);
    void LongInteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ReceiveBeginPlay();
    void Server_TryDispenseDrink(int32 ButtonIndex, bool MoneyProvided, bool BillRejected, class AAbiotic_PlayerCharacter_C* Purchaser);
    void Broadcast_ShakeVendingMachine();
    void TryRefillVendingMachine();
    void StartRefillCooldown();
    void Process Damage(float Damage, class UObject* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class UObject* DamageCauser, FHitResult HitInfo);
    void OnLoadedFromSave(double NewLifespan);
    void Local_TookDamage(bool PlayDamageSound);
    void SetVendingMachineNewMesh(class UStaticMesh* NewMesh);
    void RefreshIsBrokenState();
    void SpillAllVendingMachineContents();
    void Broadcast_SpillingItemSound();
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void Broadcast_ProduceItemSound();
    void ExecuteUbergraph_VendingMachine_BP(int32 EntryPoint);
}; // Size: 0xA48

#endif
