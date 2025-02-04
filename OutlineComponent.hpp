#ifndef UE4SS_SDK_OutlineComponent_HPP
#define UE4SS_SDK_OutlineComponent_HPP

class UOutlineComponent_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00A8 (size: 0x8)
    int32 OutlineMask;                                                                // 0x00B0 (size: 0x4)
    TArray<class UActorComponent*> RegisteredComponents;                              // 0x00B8 (size: 0x10)
    bool ComponentEnabled;                                                            // 0x00C8 (size: 0x1)

    void UnregisterInteractionOverlays();
    void RegisterPossibleInteractableOutlineOverlay(TArray<class UActorComponent*>& NewComponentsToOutline, bool& Registered);
    void UpdateOutlineOverlays(TEnumAsByte<E_OutlineMode::Type> Mode, bool Add);
    void UpdateHighlightedComponents();
    void FindEnabledOutline(bool& Enabled, TEnumAsByte<E_OutlineMode::Type>& OutlinePriority);
    void IsOutlineEnabled(TEnumAsByte<E_OutlineMode::Type> Mode, bool& Enabled);
    void ReceiveBeginPlay();
    void ToggleOutlineOverlay(TEnumAsByte<E_OutlineMode::Type> Mode, double Duration, bool NoExpiration);
    void ExecuteUbergraph_OutlineComponent(int32 EntryPoint);
}; // Size: 0xC9

#endif
