#ifndef UE4SS_SDK_VictoryBPLibrary_HPP
#define UE4SS_SDK_VictoryBPLibrary_HPP

class UVictoryBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    void WorldType__InPIEWorld(class UObject* WorldContextObject);
    void WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
    void WorldType__InEditorWorld(class UObject* WorldContextObject);
    void WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
    void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
    void VictorySoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
    void VictoryGetSoundVolume(class USoundClass* SoundClassObject);
    void StringIsEmpty(FString Target);
    void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero);
    void HasSubstring(FString SearchIn, FString Substring, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    void GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly);
}; // Size: 0x28

#endif
