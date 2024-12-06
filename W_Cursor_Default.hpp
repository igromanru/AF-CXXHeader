#ifndef UE4SS_SDK_W_Cursor_Default_HPP
#define UE4SS_SDK_W_Cursor_Default_HPP

class UW_Cursor_Default_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)

    void Construct();
    void InputChanged(bool bUsingGamepad);
    void ExecuteUbergraph_W_Cursor_Default(int32 EntryPoint);
}; // Size: 0x2F0

#endif
