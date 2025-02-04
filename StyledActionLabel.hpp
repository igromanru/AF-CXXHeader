#ifndef UE4SS_SDK_StyledActionLabel_HPP
#define UE4SS_SDK_StyledActionLabel_HPP

class UStyledActionLabel_C : public UActionLabel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)

    void Construct();
    void OnInputTypeChanged(bool bUsingGamepad);
    void ExecuteUbergraph_StyledActionLabel(int32 EntryPoint);
}; // Size: 0x380

#endif
