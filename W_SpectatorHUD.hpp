#ifndef UE4SS_SDK_W_SpectatorHUD_HPP
#define UE4SS_SDK_W_SpectatorHUD_HPP

class UW_SpectatorHUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02E8 (size: 0x8)
    class UW_ItemAction_C* W_ItemAction;                                              // 0x02F0 (size: 0x8)
    class UW_ItemAction_C* W_ItemAction_1;                                            // 0x02F8 (size: 0x8)
    class UW_ItemAction_C* W_ItemAction_2;                                            // 0x0300 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_SpectatorHUD(int32 EntryPoint);
}; // Size: 0x308

#endif
