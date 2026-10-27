#ifndef UE4SS_SDK_WBP_ModioDefaultPlatformUsername_HPP
#define UE4SS_SDK_WBP_ModioDefaultPlatformUsername_HPP

class UWBP_ModioDefaultPlatformUsername_C : public UModioUserDisplay
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UModioDefaultTextBlock* ModioUserNameTextBlock;                             // 0x0350 (size: 0x8)
    class UModioDefaultTextBlock* PlatformUserNameTextBlock;                          // 0x0358 (size: 0x8)
    FText PlatformUserNameFormat;                                                     // 0x0360 (size: 0x10)

    void GetPlatformUserNameTextWidget(TScriptInterface<class IModioUIHasTextWidget>& Widget);
    void OnSetDataSource(class UObject* InDataSource);
    void GetModioUserNameTextWidget(TScriptInterface<class IModioUIHasTextWidget>& Widget);
    void PreConstruct(bool IsDesignTime);
    void SetDataSource(class UObject* InDataSource);
    void ExecuteUbergraph_WBP_ModioDefaultPlatformUsername(int32 EntryPoint);
}; // Size: 0x370

#endif
