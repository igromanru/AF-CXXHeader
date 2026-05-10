#ifndef UE4SS_SDK_W_HUD_GadgetBar_Companion_HPP
#define UE4SS_SDK_W_HUD_GadgetBar_Companion_HPP

class UW_HUD_GadgetBar_Companion_C : public UW_HUD_GadgetBar_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class ABuffActor_Tamed_C* TamedBuff;                                              // 0x0350 (size: 0x8)
    FInventorySlotSelected_Struct SelectedSlot;                                       // 0x0358 (size: 0x10)
    FString Guid;                                                                     // 0x0368 (size: 0x10)
    float ReplicationCheckDelay;                                                      // 0x0378 (size: 0x4)

    void ResetExistingTamedBuff();
    void TryBindOnHealthUpdated();
    void OnOwnerInventoryUpdated(class UAbiotic_InventoryComponent_C* Inventory);
    void SetOwningBuffActor(class ABuffActor_Tamed_C* NewTamedBuff, bool ForceUpdate);
    void UpdateHealthInfo();
    void Construct();
    void CheckForGarbageHUD();
    void ExecuteUbergraph_W_HUD_GadgetBar_Companion(int32 EntryPoint);
}; // Size: 0x37C

#endif
