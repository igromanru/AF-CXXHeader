#ifndef UE4SS_SDK_W_Settings_SliderBar_HPP
#define UE4SS_SDK_W_Settings_SliderBar_HPP

class UW_Settings_SliderBar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class USpinBox* SettingSpinBox;                                                   // 0x02E8 (size: 0x8)

    void Construct();
    void Destruct();
    void InputTypeChanged(bool bUnusedParam);
    void BndEvt__W_Settings_SliderBar_SettingSpinBox_K2Node_ComponentBoundEvent_0_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_W_Settings_SliderBar(int32 EntryPoint);
}; // Size: 0x2F0

#endif
