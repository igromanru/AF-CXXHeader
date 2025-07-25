#ifndef UE4SS_SDK_W_Cursor_InvItem_HPP
#define UE4SS_SDK_W_Cursor_InvItem_HPP

class UW_Cursor_InvItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* CursorImage;                                                        // 0x02E8 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x02F0 (size: 0x8)
    class UTextBlock* StackText;                                                      // 0x02F8 (size: 0x8)
    class UTexture2D* itemicon;                                                       // 0x0300 (size: 0x8)
    int32 StackSize;                                                                  // 0x0308 (size: 0x4)
    double CursorScale;                                                               // 0x0310 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Cursor_InvItem(int32 EntryPoint);
}; // Size: 0x318

#endif
