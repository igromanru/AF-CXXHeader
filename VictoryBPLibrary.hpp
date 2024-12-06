#ifndef UE4SS_SDK_VictoryBPLibrary_HPP
#define UE4SS_SDK_VictoryBPLibrary_HPP

class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool WorldType__InPIEWorld(class UObject* WorldContextObject);
    bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
    bool WorldType__InEditorWorld(class UObject* WorldContextObject);
    class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
    void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>& ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
    bool VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
    float VictoryGetSoundVolume(class USoundClass* SoundClassObject);
    bool StringIsEmpty(FString Target);
    void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero);
    bool HasSubstring(FString SearchIn, FString Substring, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, TArray<class UUserWidget*>& FoundWidgets, bool TopLevelOnly);
}; // Size: 0x28

#endif
