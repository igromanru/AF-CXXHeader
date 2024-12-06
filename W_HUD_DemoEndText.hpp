#ifndef UE4SS_SDK_W_HUD_DemoEndText_HPP
#define UE4SS_SDK_W_HUD_DemoEndText_HPP

class UW_HUD_DemoEndText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02E8 (size: 0x8)
    class UImage* ABFLogo;                                                            // 0x02F0 (size: 0x8)
    class UImage* DFLogo;                                                             // 0x02F8 (size: 0x8)

    void OnFailure_FDEDA8D84A154298004337BA9486B8A7();
    void OnSuccess_FDEDA8D84A154298004337BA9486B8A7();
    void Construct();
    void ExecuteUbergraph_W_HUD_DemoEndText(int32 EntryPoint);
}; // Size: 0x300

#endif
