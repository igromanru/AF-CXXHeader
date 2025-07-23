#ifndef UE4SS_SDK_W_Cursor_Default_HPP
#define UE4SS_SDK_W_Cursor_Default_HPP

class UW_Cursor_Default_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UScaleBox* ScaleBox_154;                                                    // 0x02F0 (size: 0x8)
    double CursorScale;                                                               // 0x02F8 (size: 0x8)

    void Construct();
    void InputChanged(bool bUsingGamepad);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Cursor_Default(int32 EntryPoint);
}; // Size: 0x300

#endif
