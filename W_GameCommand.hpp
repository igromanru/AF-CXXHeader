#ifndef UE4SS_SDK_W_GameCommand_HPP
#define UE4SS_SDK_W_GameCommand_HPP

class UW_GameCommand_C : public UGameCommandWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F0 (size: 0x8)
    class UCheckBox* CheckBox_Pinned;                                                 // 0x02F8 (size: 0x8)
    class UTextBlock* CommandDescription;                                             // 0x0300 (size: 0x8)
    class UTextBlock* CommandTitle;                                                   // 0x0308 (size: 0x8)
    class UNamedSlot* ContentSlot;                                                    // 0x0310 (size: 0x8)

    void SetContentFromCommandType(EGameCommandType CommandType);
    void RefreshState();
    void OnCommandUnfocused();
    void ModifySecondParam(FString InParam, bool HasSecondParam);
    void ModifyFirstParam(FString InParam, bool HasSecondParam);
    void TriggerCommand();
    void Construct();
    void BndEvt__W_GameCommand_CheckBox_Pinned_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_W_GameCommand(int32 EntryPoint);
}; // Size: 0x318

#endif
