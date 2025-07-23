#ifndef UE4SS_SDK_W_Cursor_Repair_HPP
#define UE4SS_SDK_W_Cursor_Repair_HPP

class UW_Cursor_Repair_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x02F0 (size: 0x8)
    double CursorScale;                                                               // 0x02F8 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_W_Cursor_Repair(int32 EntryPoint);
}; // Size: 0x300

#endif
