#ifndef UE4SS_SDK_Abiotic_TransmogInventoryComp_HPP
#define UE4SS_SDK_Abiotic_TransmogInventoryComp_HPP

class UAbiotic_TransmogInventoryComp_C : public UAbiotic_InventoryComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    TArray<bool> TransmogVisibility;                                                  // 0x02C8 (size: 0x10)

    void OnRep_TransmogVisibility();
    void Request_ChangeTransmogVisibilityFlag(int32 Index, const bool& Item);
    void ExecuteUbergraph_Abiotic_TransmogInventoryComp(int32 EntryPoint);
}; // Size: 0x2D8

#endif
