#ifndef UE4SS_SDK_Deployed_PowerStrip_ParentBP_HPP
#define UE4SS_SDK_Deployed_PowerStrip_ParentBP_HPP

class ADeployed_PowerStrip_ParentBP_C : public AAbioticDeployed_Furniture_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0930 (size: 0x8)
    TArray<class APowerSocket_ChildOfActor_C*> PlugStripPowerSockets;                 // 0x0938 (size: 0x10)
    int32 PowerSocketCount;                                                           // 0x0948 (size: 0x4)

    void IsPowerCord(class UActorComponent*& Cable, bool& Return, TEnumAsByte<E_OutlineMode::Type>& CableInteractionType);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void GetPluggedInDeviceCount(int32& Count);
    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void ReceiveBeginPlay();
    void TogglePowerFX();
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void ExecuteUbergraph_Deployed_PowerStrip_ParentBP(int32 EntryPoint);
}; // Size: 0x94C

#endif
