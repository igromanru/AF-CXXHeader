#ifndef UE4SS_SDK_W_HUD_NewRecipeNotify_HPP
#define UE4SS_SDK_W_HUD_NewRecipeNotify_HPP

class UW_HUD_NewRecipeNotify_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Pulse;                                                    // 0x02E8 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x02F0 (size: 0x8)
    class UWidgetAnimation* Popin;                                                    // 0x02F8 (size: 0x8)
    class UImage* Icon;                                                               // 0x0300 (size: 0x8)
    class UW_Keybind_C* Keybind_Recipe;                                               // 0x0308 (size: 0x8)
    class UTextBlock* RecipeText;                                                     // 0x0310 (size: 0x8)
    class UTextBlock* RecipeTitleText;                                                // 0x0318 (size: 0x8)
    class UImage* UnlockBGImage;                                                      // 0x0320 (size: 0x8)
    FLinearColor TextColor;                                                           // 0x0328 (size: 0x10)
    FText RecipeName;                                                                 // 0x0338 (size: 0x10)
    FLinearColor TitleTextColor;                                                      // 0x0348 (size: 0x10)
    FText TitleText;                                                                  // 0x0358 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x0368 (size: 0x10)
    TSoftObjectPtr<UTexture2D> IconTexture;                                           // 0x0378 (size: 0x28)
    class USoundBase* Sound;                                                          // 0x03A0 (size: 0x8)
    FW_HUD_NewRecipeNotify_CJournalIconVisibility JournalIconVisibility;              // 0x03A8 (size: 0x10)
    void JournalIconVisibility();
    bool ShowHUDJournalNotify;                                                        // 0x03B8 (size: 0x1)
    FKeybindSettingRowHandle KeyBind;                                                 // 0x03C0 (size: 0x20)
    bool UseIconBlueprintMaterial;                                                    // 0x03E0 (size: 0x1)
    FW_HUD_NewRecipeNotify_COnNotifyRemoved OnNotifyRemoved;                          // 0x03E8 (size: 0x10)
    void OnNotifyRemoved();
    TEnumAsByte<E_HUDNotifyType::Type> NotifyAppearance;                              // 0x03F8 (size: 0x1)

    void SetRecipeName();
    void OnLoaded_B47F808444A51BF5A5DBB48A0626228D(class UObject* Loaded);
    void OnLoaded_8362351B4DFE72A2774BAAA81638F23B(class UObject* Loaded);
    void Construct();
    void Journal Stop Notify();
    void ExecuteUbergraph_W_HUD_NewRecipeNotify(int32 EntryPoint);
    void OnNotifyRemoved__DelegateSignature();
    void JournalIconVisibility__DelegateSignature();
}; // Size: 0x3F9

#endif
