#ifndef UE4SS_SDK_InventoryData_Parent_HPP
#define UE4SS_SDK_InventoryData_Parent_HPP

class UInventoryData_Parent_C : public UPrimaryDataAsset
{
    TMap<int32, TEnumAsByte<E_InventorySlotAppearance::Type>> SlotAppearanceOverrides; // 0x0030 (size: 0x50)
    TArray<int32> RefrigeratedSlots;                                                  // 0x0080 (size: 0x10)
    TArray<int32> FreezerSlots;                                                       // 0x0090 (size: 0x10)
    TArray<int32> ShieldedSlots;                                                      // 0x00A0 (size: 0x10)
    TArray<int32> WarmerSlots;                                                        // 0x00B0 (size: 0x10)

}; // Size: 0xC0

#endif
