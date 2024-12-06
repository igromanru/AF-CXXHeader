#ifndef UE4SS_SDK_CommonLoadingScreen_HPP
#define UE4SS_SDK_CommonLoadingScreen_HPP

class ILoadingProcessInterface : public IInterface
{

    bool K2_ShouldShowLoadingScreen(FString& OutDebugReason);
}; // Size: 0x28

class ULoadingProcessTask : public UObject
{

    void Unregister();
    void SetShowLoadingScreenReason(FString InDebugReason);
    class ULoadingProcessTask* CreateLoadingScreenProcessTask(class UObject* WorldContextObject, FString ShowLoadingScreenReason);
}; // Size: 0x40

class ULoadingScreenManager : public UGameInstanceSubsystem
{
    FLoadingScreenManagerOnShowLoadingScreenAdditionalSecsTriggered OnShowLoadingScreenAdditionalSecsTriggered; // 0x0038 (size: 0x10)
    void OnShowLoadingScreenAdditionalSecsTriggered(bool bIsActive);
    FLoadingScreenManagerOnPreLoadMapTriggered OnPreLoadMapTriggered;                 // 0x0048 (size: 0x10)
    void OnPreLoadMapTriggered(FString MapName);
    FLoadingScreenManagerOnPostLoadMapTriggered OnPostLoadMapTriggered;               // 0x0058 (size: 0x10)
    void OnPostLoadMapTriggered();
    FLoadingScreenManagerOnSeamlessTravelStart OnSeamlessTravelStart;                 // 0x0068 (size: 0x10)
    void OnSeamlessTravelStart(FString MapName);

    void RemoveLoadingScreenWatcher(class UObject* Object);
    void K2_SetLoadingScreenCustomText(class UWorld* WorldContextObject, FString NewText);
    FString GetLoadingScreenCustomText();
    FString GetDebugReasonForShowingOrHidingLoadingScreen();
    FString GetCurrentLoadingMap();
    void AddLoadingScreenWatcher(class UObject* Object);
}; // Size: 0x120

#endif
