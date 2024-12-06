#ifndef UE4SS_SDK_VendingMachine_BP_HPP
#define UE4SS_SDK_VendingMachine_BP_HPP

class AVendingMachine_BP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UVendingButton_BP_C* Button_2;                                              // 0x0928 (size: 0x8)
    class UVendingButton_BP_C* Button_4;                                              // 0x0930 (size: 0x8)
    class UVendingButton_BP_C* Button_3;                                              // 0x0938 (size: 0x8)
    class UStaticMeshComponent* DollarMesh;                                           // 0x0940 (size: 0x8)
    class USceneComponent* SodaSpawn;                                                 // 0x0948 (size: 0x8)
    class UVendingButton_BP_C* Button_0;                                              // 0x0950 (size: 0x8)
    class UVendingButton_BP_C* Button_1;                                              // 0x0958 (size: 0x8)
    class UAudioComponent* Hum;                                                       // 0x0960 (size: 0x8)
    class URectLightComponent* ItemMouthLight;                                        // 0x0968 (size: 0x8)
    float BillRejectedTimeline_NewTrack_0_F71CA1854F3B6E7AC69AB69FD604092B;           // 0x0970 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BillRejectedTimeline__Direction_F71CA1854F3B6E7AC69AB69FD604092B; // 0x0974 (size: 0x1)
    class UTimelineComponent* BillRejectedTimeline;                                   // 0x0978 (size: 0x8)
    float ShakeVendingMachineTimeline_NewTrack_0_87E26631494654469D1726A8756DF017;    // 0x0980 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ShakeVendingMachineTimeline__Direction_87E26631494654469D1726A8756DF017; // 0x0984 (size: 0x1)
    class UTimelineComponent* ShakeVendingMachineTimeline;                            // 0x0988 (size: 0x8)
    float BillAcceptedTimeline_NewTrack_0_562EBB7846B62B99331FD1A2778814B6;           // 0x0990 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> BillAcceptedTimeline__Direction_562EBB7846B62B99331FD1A2778814B6; // 0x0994 (size: 0x1)
    class UTimelineComponent* BillAcceptedTimeline;                                   // 0x0998 (size: 0x8)
    float ButtonPressTimeline_NewTrack_0_428D6DCA4922D632272A598403529F9F;            // 0x09A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ButtonPressTimeline__Direction_428D6DCA4922D632272A598403529F9F; // 0x09A4 (size: 0x1)
    class UTimelineComponent* ButtonpressTimeline;                                    // 0x09A8 (size: 0x8)
    FVector DollarBill_In;                                                            // 0x09B0 (size: 0x18)
    FVector DollarBill_Out;                                                           // 0x09C8 (size: 0x18)
    bool IsBusyWithAction;                                                            // 0x09E0 (size: 0x1)
    double ButtonOutDepth;                                                            // 0x09E8 (size: 0x8)
    double ButtonInDepth;                                                             // 0x09F0 (size: 0x8)
    int32 ItemCost;                                                                   // 0x09F8 (size: 0x4)
    class UDataTable* ItemStockTable;                                                 // 0x0A00 (size: 0x8)
    TMap<FName, int32> ItemsInStock;                                                  // 0x0A08 (size: 0x50)
    TArray<bool> ButtonStates;                                                        // 0x0A58 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> DynamicButtonMaterials;                   // 0x0A68 (size: 0x10)
    double RefillCooldownTime;                                                        // 0x0A78 (size: 0x8)
    int32 MaxSodas;                                                                   // 0x0A80 (size: 0x4)
    FTimerHandle RefillCooldownTimer;                                                 // 0x0A88 (size: 0x8)
    FText Item Name;                                                                  // 0x0A90 (size: 0x10)
    FText BuyFormatText;                                                              // 0x0AA0 (size: 0x10)
    bool Infinite;                                                                    // 0x0AB0 (size: 0x1)
    bool NeverFail;                                                                   // 0x0AB1 (size: 0x1)
    bool NoCost;                                                                      // 0x0AB2 (size: 0x1)
    bool CanShake;                                                                    // 0x0AB3 (size: 0x1)
    bool HasDispensedThisSession;                                                     // 0x0AB4 (size: 0x1)
    FVector PromptDefaultLocation;                                                    // 0x0AB8 (size: 0x18)
    bool WholeMachineInteraction;                                                     // 0x0AD0 (size: 0x1)
    class UActorComponent* LastHitComponent;                                          // 0x0AD8 (size: 0x8)
    TArray<class UVendingButton_BP_C*> ButtonList;                                    // 0x0AE0 (size: 0x10)
    double StartingDurability;                                                        // 0x0AF0 (size: 0x8)
    int32 CurrentButtonIndex;                                                         // 0x0AF8 (size: 0x4)
    bool HasSpillOutItems;                                                            // 0x0AFC (size: 0x1)
    bool KIZZ;                                                                        // 0x0AFD (size: 0x1)
    bool NextSodaBadSoda;                                                             // 0x0AFE (size: 0x1)

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
    void ShowPotentialInteraction(bool& Show);
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
    void ButtonpressTimeline__FinishedFunc();
    void ButtonpressTimeline__UpdateFunc();
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
    void OnLoadedFromSave();
    void Local_TookDamage(bool PlayDamageSound);
    void SetVendingMachineNewMesh(class UStaticMesh* NewMesh);
    void RefreshIsBrokenState();
    void SpillAllVendingMachineContents();
    void Broadcast_SpillingItemSound();
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void ExecuteUbergraph_VendingMachine_BP(int32 EntryPoint);
}; // Size: 0xAFF

#endif
