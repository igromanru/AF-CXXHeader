#ifndef UE4SS_SDK_W_PlayerHUD_WarningMessage_HPP
#define UE4SS_SDK_W_PlayerHUD_WarningMessage_HPP

class UW_PlayerHUD_WarningMessage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Popin;                                                    // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UTextBlock* MessageText;                                                    // 0x0300 (size: 0x8)
    FText Text;                                                                       // 0x0308 (size: 0x10)
    TEnumAsByte<ECriticalityLevels::Type> Color;                                      // 0x0318 (size: 0x1)
    FLinearColor CustomColor;                                                         // 0x031C (size: 0x10)

    void Construct();
    void ExecuteUbergraph_W_PlayerHUD_WarningMessage(int32 EntryPoint);
}; // Size: 0x32C

#endif
