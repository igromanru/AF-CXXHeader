#ifndef UE4SS_SDK_WBP_ModioTagCounterIcon_HPP
#define UE4SS_SDK_WBP_ModioTagCounterIcon_HPP

class UWBP_ModioTagCounterIcon_C : public UModioTagCounterIcon
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0358 (size: 0x8)
    class UModioDefaultBorder* Background;                                            // 0x0360 (size: 0x8)
    class UModioDefaultTextBlock* CounterTextBlock;                                   // 0x0368 (size: 0x8)
    FLinearColorRef BackgroundColor;                                                  // 0x0370 (size: 0x18)

    void GetBackgroundWidget(TScriptInterface<class IModioUIHasConfigurableColor>& Background);
    void GetCounterLabelWidget();
    void OnTagSelectionChanged();
    void SetDataSource(class UObject* InDataSource);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_ModioTagCounterIcon(int32 EntryPoint);
}; // Size: 0x388

#endif
