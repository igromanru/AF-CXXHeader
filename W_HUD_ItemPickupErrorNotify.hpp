#ifndef UE4SS_SDK_W_HUD_ItemPickupErrorNotify_HPP
#define UE4SS_SDK_W_HUD_ItemPickupErrorNotify_HPP

class UW_HUD_ItemPickupErrorNotify_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* Popin;                                                    // 0x02F0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UTextBlock* WarningText;                                                    // 0x0308 (size: 0x8)
    FText Text;                                                                       // 0x0310 (size: 0x10)
    TSoftObjectPtr<UTexture2D> IconTexture;                                           // 0x0320 (size: 0x28)
    bool AnimateFaster;                                                               // 0x0348 (size: 0x1)
    bool Interrupted;                                                                 // 0x0349 (size: 0x1)

    void OnLoaded_1183DCAB4C243D83A2958CB3F36B649E(class UObject* Loaded);
    void Construct();
    void ResetPopup();
    void ExecuteUbergraph_W_HUD_ItemPickupErrorNotify(int32 EntryPoint);
}; // Size: 0x34A

#endif
