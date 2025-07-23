#ifndef UE4SS_SDK_W_PlayerSign_HPP
#define UE4SS_SDK_W_PlayerSign_HPP

class UW_PlayerSign_C : public UUserWidget
{
    class UTextBlock* PlayerText1;                                                    // 0x02E0 (size: 0x8)
    class UTextBlock* PlayerText2;                                                    // 0x02E8 (size: 0x8)
    class UTextBlock* PlayerText3;                                                    // 0x02F0 (size: 0x8)
    FString PlayerText;                                                               // 0x02F8 (size: 0x10)

    void SetPlayerText(FString SourceString);
}; // Size: 0x308

#endif
