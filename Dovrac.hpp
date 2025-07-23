#ifndef UE4SS_SDK_Dovrac_HPP
#define UE4SS_SDK_Dovrac_HPP

struct FDovracInput
{
    FString ActionName;                                                               // 0x0000 (size: 0x10)
    FKey Key;                                                                         // 0x0010 (size: 0x18)
    FString KeyAsString;                                                              // 0x0028 (size: 0x10)
    uint8 bShift;                                                                     // 0x0038 (size: 0x1)
    uint8 bCtrl;                                                                      // 0x0038 (size: 0x1)
    uint8 bAlt;                                                                       // 0x0038 (size: 0x1)
    uint8 bCmd;                                                                       // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FDovracInputAxis
{
    FString AxisName;                                                                 // 0x0000 (size: 0x10)
    FString KeyAsString;                                                              // 0x0010 (size: 0x10)
    FKey Key;                                                                         // 0x0020 (size: 0x18)
    float Scale;                                                                      // 0x0038 (size: 0x4)

}; // Size: 0x40

class UDovracBPLibrary : public UBlueprintFunctionLibrary
{

    bool WorldType__InPIEWorld(class UObject* WorldContextObject);
    bool WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
    bool WorldType__InEditorWorld(class UObject* WorldContextObject);
    class UUserWidget* WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
    void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<class UUserWidget*>& ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
    int32 WeightedRandomRoll(const TArray<float>& Weights);
    bool Viewport_SetMousePosition(const class APlayerController* ThePC, const float& PosX, const float& PosY);
    bool Viewport_GetMousePosition(const class APlayerController* ThePC, float& PosX, float& PosY);
    bool StringIsEmpty(FString Target);
    void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero);
    bool SoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
    void SortTextArray(TArray<FText>& TextArray, bool bAscendingOrder);
    void SortStringArray(TArray<FString>& StringArray, bool bAscendingOrder);
    void SortNameArray(TArray<FName>& NameArray, bool bAscendingOrder);
    TArray<class AActor*> SortActorsByDistanceFromOrigin(const TArray<class AActor*>& Actors, const FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);
    bool MergeRecipeNames(const TSet<FName>& GlobalRecipeSet, const TSet<FName>& GlobalResearchSet, const TSet<FName>& PlayerRecipeSet, const TArray<FName>& PlayerResearchArray, const TArray<FName>& PlayerNewestRecipes, const TSet<FName>& BlacklistRecipes, TSet<FName>& OutRecipeSet, TSet<FName>& OutResearchSet, TArray<FName>& OutRequiresResearchArray, TSet<FName>& OutPlayerRecipeSet, TSet<FName>& OutPlayerResearchSet, TArray<FName>& OutPlayerRequiresResearchArray, TArray<FName>& OutNewRecipesForPlayer);
    bool MergeNameSetsExtra(const TSet<FName>& Set1, const TSet<FName>& Set2, const TArray<FName>& CullArray, TSet<FName>& Outset, TArray<FName>& OutCullArray);
    bool MergeNameSetsCond(const TSet<FName>& Set1, const TSet<FName>& Set2, const TArray<FName>& SkipArray, TSet<FName>& Outset);
    bool MergeNameSets(const TSet<FName>& Set1, const TSet<FName>& Set2, TSet<FName>& Outset);
    bool MergeNameArrays(const TArray<FName>& Array1, const TArray<FName>& Array2, TArray<FName>& OutArray);
    bool HasSubstring(FString SearchIn, FString Substring, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    float GetSoundVolume(class USoundClass* SoundClassObject);
    bool GetMaterialDomain(class UMaterialInterface* Material, TEnumAsByte<EMaterialDomain>& OutDomain);
    class UUserWidget* GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
    bool GetFilesInRootAndAllSubFolders(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);
    FString GetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, TArray<class UUserWidget*>& FoundWidgets, bool TopLevelOnly);
    void GetAllFoldersFromDirectory(FString FolderPath, int32& Count, TArray<FString>& Folders);
    void GetAllAxisKeyBindings(TArray<FDovracInputAxis>& Bindings);
    void GetAllAxisAndActionMappingsForKey(FKey Key, TArray<FDovracInput>& ActionBindings, TArray<FDovracInputAxis>& AxisBindings);
    void GetAllAssetsOfClass(UClass* AssetClass, TArray<class UObject*>& OutAssets, bool bIncludeDerived);
    void GetAllActionKeyBindings(TArray<FDovracInput>& Bindings);
    void GetActorSubclasses(TSubclassOf<class AActor> BaseClass, TArray<class TSubclassOf<AActor>>& OutClasses, bool bIncludeAbstract);
    bool DoesMaterialSupportSpline(class UMaterialInterface* Material);
    bool DoesMaterialSupportSkeletal(class UMaterialInterface* Material);
    bool DoesMaterialSupportInstancedMesh(class UMaterialInterface* Material);
    bool DoesMaterialSupportCloth(class UMaterialInterface* Material);
    bool DeleteFolder(FString FolderPath);
    TArray<int32> CreateRandomIndexArray(int32 ArraySize);
    bool ConvertWorldLocationToScreenSpace(const class APlayerController* Controller, const FVector& WorldLocation, FVector2D& ScreenSpaceLocation, FVector2D& ScreenDirection, bool& bNotOnScreen, bool& bBehindView);
}; // Size: 0x28

#endif
