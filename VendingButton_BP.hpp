#ifndef UE4SS_SDK_VendingButton_BP_HPP
#define UE4SS_SDK_VendingButton_BP_HPP

class UVendingButton_BP_C : public UStaticMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E0 (size: 0x8)
    FDataTableRowHandle ItemDataRow;                                                  // 0x05E8 (size: 0x10)

    void ReceiveBeginPlay();
    void UpdateAvailableButtonFX(bool Available);
    void ExecuteUbergraph_VendingButton_BP(int32 EntryPoint);
}; // Size: 0x5F8

#endif
