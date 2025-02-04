#ifndef UE4SS_SDK_Faucet_ParentBP_HPP
#define UE4SS_SDK_Faucet_ParentBP_HPP

class AFaucet_ParentBP_C : public ADeployed_LiquidContainer_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A00 (size: 0x8)
    class UAudioComponent* FaucetDrip;                                                // 0x0A08 (size: 0x8)
    double FaucetCooldown;                                                            // 0x0A10 (size: 0x8)
    TEnumAsByte<E_LiquidType::Type> Liquid Type;                                      // 0x0A18 (size: 0x1)
    bool Sink Contains Container;                                                     // 0x0A19 (size: 0x1)
    class UStaticMeshComponent* ContainerItem;                                        // 0x0A20 (size: 0x8)
    bool PlayerIsHoldingContainer;                                                    // 0x0A28 (size: 0x1)
    FText ContainerName;                                                              // 0x0A30 (size: 0x10)
    FTimerHandle RefillFaucetWaterTimer;                                              // 0x0A40 (size: 0x8)
    bool CanFitContainerIntoBasin;                                                    // 0x0A48 (size: 0x1)
    TArray<class ASinkProxy_BP_C*> ContainerProxies;                                  // 0x0A50 (size: 0x10)
    FSaveData_ItemProxy_Struct ItemProxy;                                             // 0x0A60 (size: 0x1D0)
    bool FaucetRefilling;                                                             // 0x0C30 (size: 0x1)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    double GetSinkRefillCooldown();
    void OnRep_FaucetRefilling();
    void RefillFaucetWater();
    void SetInitialRandomFill(TEnumAsByte<E_LiquidType::Type> Liquid Type);
    void StartRefillCountdown();
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ReceiveBeginPlay();
    void OnLoadedFromSave();
    void ExecuteUbergraph_Faucet_ParentBP(int32 EntryPoint);
}; // Size: 0xC31

#endif
