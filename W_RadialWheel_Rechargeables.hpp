#ifndef UE4SS_SDK_W_RadialWheel_Rechargeables_HPP
#define UE4SS_SDK_W_RadialWheel_Rechargeables_HPP

class UW_RadialWheel_Rechargeables_C : public UW_RadialWheel_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UTextBlock* CancelText;                                                     // 0x0360 (size: 0x8)
    class UImage* Centre;                                                             // 0x0368 (size: 0x8)
    class UTextBlock* EntryName;                                                      // 0x0370 (size: 0x8)
    class UUMG_RadialMenu_C* SelectionWheel;                                          // 0x0378 (size: 0x8)
    class UW_Keybind_C* W_Keybind;                                                    // 0x0380 (size: 0x8)

    void GetRadialWheel(class UUMG_RadialMenu_C*& RadialWheel);
    void Get Wheel Categories(TArray<FName>& EntryList, bool& HasList);
    void Get Wheel Data(FName Data Name, FPTCategory& CategoryData, bool& DataExists, FFBasicIconSettings& CustomIconStyle);
    void ExitRadialWheelUpdate(bool CommitAction);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__W_RadialWheel_Medical_SelectionWheel_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32 NewSelection, int32 OldSelection);
    void SelectionChanged(int32 NewSelection, int32 OldSelection);
    void ExecuteUbergraph_W_RadialWheel_Rechargeables(int32 EntryPoint);
}; // Size: 0x388

#endif
