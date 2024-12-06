#ifndef UE4SS_SDK_W_HUD_DamageIndicator_HPP
#define UE4SS_SDK_W_HUD_DamageIndicator_HPP

class UW_HUD_DamageIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02E8 (size: 0x8)
    FVector WorldLocationOfHit;                                                       // 0x02F0 (size: 0x18)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_W_HUD_DamageIndicator(int32 EntryPoint);
}; // Size: 0x308

#endif
