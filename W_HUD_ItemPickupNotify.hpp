#ifndef UE4SS_SDK_W_HUD_ItemPickupNotify_HPP
#define UE4SS_SDK_W_HUD_ItemPickupNotify_HPP

class UW_HUD_ItemPickupNotify_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02E8 (size: 0x8)
    class UWidgetAnimation* PopIn;                                                    // 0x02F0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UTextBlock* ItemCountText;                                                  // 0x0308 (size: 0x8)
    class UTextBlock* ItemText;                                                       // 0x0310 (size: 0x8)
    FText ItemName;                                                                   // 0x0318 (size: 0x10)
    int32 Count;                                                                      // 0x0328 (size: 0x4)
    TSoftObjectPtr<UTexture2D> IconTexture;                                           // 0x0330 (size: 0x28)
    FName ItemRowName;                                                                // 0x0358 (size: 0x8)

    void OnLoaded_EB1E0D9E41155C7437981DAE32EF56F4(class UObject* Loaded);
    void Construct();
    void ExecuteUbergraph_W_HUD_ItemPickupNotify(int32 EntryPoint);
}; // Size: 0x360

#endif
