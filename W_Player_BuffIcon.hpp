#ifndef UE4SS_SDK_W_Player_BuffIcon_HPP
#define UE4SS_SDK_W_Player_BuffIcon_HPP

class UW_Player_BuffIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* BuffBG;                                                             // 0x02E8 (size: 0x8)
    class UTextBlock* CountText;                                                      // 0x02F0 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x02F8 (size: 0x8)
    FBuffDebuffRowHandle BuffID;                                                      // 0x0300 (size: 0x20)
    int32 StackCount;                                                                 // 0x0320 (size: 0x4)
    bool Removed;                                                                     // 0x0324 (size: 0x1)

    void ModifyStack(int32 StackSize);
    void OnLoaded_AA8257D14B48B37746EE9E8644F3E37E(class UObject* Loaded);
    void Construct();
    void RemoveBuffIcon();
    void ExecuteUbergraph_W_Player_BuffIcon(int32 EntryPoint);
}; // Size: 0x325

#endif
