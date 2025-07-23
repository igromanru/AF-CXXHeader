#ifndef UE4SS_SDK_Abiotic_TransmogInventoryComp_HPP
#define UE4SS_SDK_Abiotic_TransmogInventoryComp_HPP

class UAbiotic_TransmogInventoryComp_C : public UAbiotic_InventoryComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0320 (size: 0x8)
    TArray<bool> TransmogVisibility;                                                  // 0x0328 (size: 0x10)
    TArray<bool> DisableTransmogArray;                                                // 0x0338 (size: 0x10)

    void OnRep_DisableTransmogArray();
    void OnRep_TransmogVisibility();
    void Request_ChangeDisableTransmogArray(int32 Index, const bool& Item);
    void Request_ChangeTransmogVisibilityFlag(int32 Index, const bool& Item);
    void Local_Delayed_SuitRefresh();
    void ExecuteUbergraph_Abiotic_TransmogInventoryComp(int32 EntryPoint);
}; // Size: 0x348

#endif
