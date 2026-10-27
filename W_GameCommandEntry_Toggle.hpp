#ifndef UE4SS_SDK_W_GameCommandEntry_Toggle_HPP
#define UE4SS_SDK_W_GameCommandEntry_Toggle_HPP

class UW_GameCommandEntry_Toggle_C : public UW_GameCommandEntry_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UCheckBox* CheckBox_155;                                                    // 0x0308 (size: 0x8)
    bool HasForceOverride;                                                            // 0x0310 (size: 0x1)
    bool ForceState;                                                                  // 0x0311 (size: 0x1)

    void RefreshState();
    void ModifyFirstParam(FString InParam, bool HasSecondParam);
    void TriggerCommand();
    void BndEvt__W_GameCommandEntry_Toggle_CheckBox_155_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_GameCommandEntry_Toggle(int32 EntryPoint);
}; // Size: 0x312

#endif
