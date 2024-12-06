#ifndef UE4SS_SDK_PostProcess_Underwater_HPP
#define UE4SS_SDK_PostProcess_Underwater_HPP

class UPostProcess_Underwater_C : public UUnderwaterPostProcessComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0940 (size: 0x8)
    FDataTableRowHandle UnderwaterFX;                                                 // 0x0948 (size: 0x10)
    class UCharacterBuffComponent* LocalBuffComponent;                                // 0x0958 (size: 0x8)
    bool PlayerWearingGoggles;                                                        // 0x0960 (size: 0x1)

    void FindCorrectRow(bool& Found, FName& RowName);
    void ApplyPPSettings();
    void RefreshPPSettings();
    void ReceiveBeginPlay();
    void OnBuffTagContainerRefreshed_Event();
    void ExecuteUbergraph_PostProcess_Underwater(int32 EntryPoint);
}; // Size: 0x961

#endif
