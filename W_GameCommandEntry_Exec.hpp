#ifndef UE4SS_SDK_W_GameCommandEntry_Exec_HPP
#define UE4SS_SDK_W_GameCommandEntry_Exec_HPP

class UW_GameCommandEntry_Exec_C : public UW_GameCommandEntry_Parent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UButton* Button_69;                                                         // 0x0308 (size: 0x8)

    void TriggerCommand();
    void BndEvt__W_GameCommandEntry_Exec_Button_69_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_W_GameCommandEntry_Exec(int32 EntryPoint);
}; // Size: 0x310

#endif
