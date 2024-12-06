#ifndef UE4SS_SDK_W_HUD_BuffIcon_HPP
#define UE4SS_SDK_W_HUD_BuffIcon_HPP

class UW_HUD_BuffIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* StackBump;                                                // 0x02E8 (size: 0x8)
    class UWidgetAnimation* AppearBump;                                               // 0x02F0 (size: 0x8)
    class UImage* BuffBG;                                                             // 0x02F8 (size: 0x8)
    class UTextBlock* CountText;                                                      // 0x0300 (size: 0x8)
    class UImage* Image_Icon;                                                         // 0x0308 (size: 0x8)
    class UTextBlock* TextDesc;                                                       // 0x0310 (size: 0x8)
    class UTextBlock* TextName;                                                       // 0x0318 (size: 0x8)
    FBuffDebuffRowHandle BuffID;                                                      // 0x0320 (size: 0x20)
    int32 StackCount;                                                                 // 0x0340 (size: 0x4)
    bool Removed;                                                                     // 0x0344 (size: 0x1)

    void ModifyStack(int32 StackSize);
    void OnLoaded_981F94BB41F2AE3ABEBFE987F9FF1AB3(class UObject* Loaded);
    void Finished_8F6F77BA419E37C682F7B2852C3EEE3E();
    void Construct();
    void UpdateStackAnim();
    void PlayRemoveAnim();
    void ExecuteUbergraph_W_HUD_BuffIcon(int32 EntryPoint);
}; // Size: 0x345

#endif
