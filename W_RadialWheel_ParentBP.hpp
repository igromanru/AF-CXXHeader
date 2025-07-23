#ifndef UE4SS_SDK_W_RadialWheel_ParentBP_HPP
#define UE4SS_SDK_W_RadialWheel_ParentBP_HPP

class UW_RadialWheel_ParentBP_C : public UAbioticWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FFBasicIconSettings Available Icon Style;                                         // 0x02E8 (size: 0x28)
    FName SelectedWheelContentName;                                                   // 0x0310 (size: 0x8)
    FFBasicIconSettings Non Available Icon Style;                                     // 0x0318 (size: 0x28)
    FW_RadialWheel_ParentBP_CForceCloseRadial ForceCloseRadial;                       // 0x0340 (size: 0x10)
    void ForceCloseRadial(bool CommitAction);
    bool Use Item Material;                                                           // 0x0350 (size: 0x1)
    bool DisplayRadialNumber;                                                         // 0x0351 (size: 0x1)

    void UpdateRadialNumberLocation(class UUMG_BasicRadialIcon_C* RadialIcon, int32 Index);
    void GetRadialWheel(class UUMG_RadialMenu_C*& RadialWheel);
    void Get Wheel Data(FName Data Name, FPTCategory& CategoryData, bool& DataExists, FFBasicIconSettings& CustomIconStyle);
    void Get Wheel Categories(TArray<FName>& EntryList, bool& HasList);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PopulateWheel();
    void AddWheelContent(FName Data Name, int32 Index);
    void ExitRadialWheelUpdate(bool CommitAction);
    void SelectionChanged(int32 NewSelection, int32 OldSelection);
    void Construct();
    void ExecuteUbergraph_W_RadialWheel_ParentBP(int32 EntryPoint);
    void ForceCloseRadial__DelegateSignature(bool CommitAction);
}; // Size: 0x352

#endif
