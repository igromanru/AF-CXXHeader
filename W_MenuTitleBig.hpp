#ifndef UE4SS_SDK_W_MenuTitleBig_HPP
#define UE4SS_SDK_W_MenuTitleBig_HPP

class UW_MenuTitleBig_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* BigTitle;                                                       // 0x02E8 (size: 0x8)
    FText TitleText;                                                                  // 0x02F0 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_W_MenuTitleBig(int32 EntryPoint);
}; // Size: 0x300

#endif
