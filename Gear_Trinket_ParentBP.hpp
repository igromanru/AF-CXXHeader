#ifndef UE4SS_SDK_Gear_Trinket_ParentBP_HPP
#define UE4SS_SDK_Gear_Trinket_ParentBP_HPP

class AGear_Trinket_ParentBP_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B38 (size: 0x8)
    class UStaticMeshComponent* TrinketMesh;                                          // 0x0B40 (size: 0x8)

    void Check for Similar Gear Item in Slot(TEnumAsByte<E_InventorySlotType::Type> Slot Type To Check, bool& Same);
    void OnLoaded_D6F1497949B17F15A4FB5B8472A51F4E(class UObject* Loaded);
    void StartAttachTrinket(class AAbiotic_PlayerCharacter_C* AttachedCharacter, FName TrinketSlot);
    void OnTrinketAttachComplete();
    void ExecuteUbergraph_Gear_Trinket_ParentBP(int32 EntryPoint);
}; // Size: 0xB48

#endif
