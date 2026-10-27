#ifndef UE4SS_SDK_W_GameCommand_ShortcutBase_HPP
#define UE4SS_SDK_W_GameCommand_ShortcutBase_HPP

class UW_GameCommand_ShortcutBase_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UScaleBox* ScaleBox_Image;                                                  // 0x02F8 (size: 0x8)
    class UScaleBox* ScaleBox_Text;                                                   // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_35;                                                   // 0x0308 (size: 0x8)
    FGameCommandRowHandle GameCommandRow;                                             // 0x0310 (size: 0x10)
    FString Params;                                                                   // 0x0320 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0330 (size: 0x8)
    bool ShowCurrentState;                                                            // 0x0338 (size: 0x1)
    bool ShowText;                                                                    // 0x0339 (size: 0x1)
    bool itemicon;                                                                    // 0x033A (size: 0x1)
    FString LastArg;                                                                  // 0x0340 (size: 0x10)

    void Init();
    void SlowTick();
    void GetVisibility_Text();
    void UpdateIcon();
    void UpdateTooltip();
    void GetCurrentState(FString& OutState);
    void UpdateTint();
    void ParseStringIntoCommand(FString InString, bool& Success, FGameCommandRowHandle& GameCommandRow, FString& FirstParam, FString& SeccondParam);
    void OnLoaded_574A4BDE4EC45A5B075E118AD1A4F997(class UObject* Loaded);
    void BndEvt__W_GameCommand_Shortcut_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void AsyncLoadIcon(TSoftObjectPtr<class UObject> IconAsset, bool itemicon);
    void SetFromItem(FGlobalItemRowHandle ItemRow);
    void ExecuteUbergraph_W_GameCommand_ShortcutBase(int32 EntryPoint);
}; // Size: 0x350

#endif
