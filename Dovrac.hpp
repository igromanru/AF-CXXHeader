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

    void WorldType__InPIEWorld(class UObject* WorldContextObject);
    void WorldType__InGameInstanceWorld(class UObject* WorldContextObject);
    void WorldType__InEditorWorld(class UObject* WorldContextObject);
    void WidgetGetParentOfClass(class UWidget* ChildWidget, TSubclassOf<class UUserWidget> WidgetClass);
    void WidgetGetChildrenOfClass(class UWidget* ParentWidget, TArray<UUserWidget*>& ChildWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool bImmediateOnly);
    void WeightedRandomRoll(const TArray<float>& Weights);
    void Viewport_SetMousePosition(const class APlayerController* ThePC, const float& PosX, const float& PosY);
    void Viewport_GetMousePosition(const class APlayerController* ThePC, float& PosX, float& PosY);
    void StringIsEmpty(FString Target);
    void StringConversion__GetFloatAsStringWithPrecision(float TheFloat, FString& TheString, int32 Precision, bool IncludeLeadingZero);
    void SoundVolumeChange(class USoundClass* SoundClassObject, float NewVolume);
    void SortTextArray(TArray<FText>& TextArray, bool bAscendingOrder);
    void SortStringArray(TArray<FString>& StringArray, bool bAscendingOrder);
    void SortNameArray(TArray<FName>& NameArray, bool bAscendingOrder);
    void SortActorsByDistanceFromOrigin(const TArray<AActor*>& Actors, const FVector& Origin, bool bUseMinDistance, float MinDistance, bool bUseMaxDistance, float MaxDistance, bool bIgnoreZ);
    void MergeRecipeNames(const TSet<FName>& GlobalRecipeSet, const TSet<FName>& GlobalResearchSet, const TSet<FName>& PlayerRecipeSet, const TArray<FName>& PlayerResearchArray, const TArray<FName>& PlayerNewestRecipes, const TSet<FName>& BlacklistRecipes, TSet<FName>& OutRecipeSet, TSet<FName>& OutResearchSet, TArray<FName>& OutRequiresResearchArray, TSet<FName>& OutPlayerRecipeSet, TSet<FName>& OutPlayerResearchSet, TArray<FName>& OutPlayerRequiresResearchArray, TArray<FName>& OutNewRecipesForPlayer);
    void MergeNameSetsExtra(const TSet<FName>& Set1, const TSet<FName>& Set2, const TArray<FName>& CullArray, TSet<FName>& Outset, TArray<FName>& OutCullArray);
    void MergeNameSetsCond(const TSet<FName>& Set1, const TSet<FName>& Set2, const TArray<FName>& SkipArray, TSet<FName>& Outset);
    void MergeNameSets(const TSet<FName>& Set1, const TSet<FName>& Set2, TSet<FName>& Outset);
    void MergeNameArrays(const TArray<FName>& Array1, const TArray<FName>& Array2, TArray<FName>& OutArray);
    void HasSubstring(FString SearchIn, FString Substring, TEnumAsByte<ESearchCase::Type> SearchCase, TEnumAsByte<ESearchDir::Type> SearchDir);
    void GetSoundVolume(class USoundClass* SoundClassObject);
    void GetMaterialDomain(class UMaterialInterface* Material, TEnumAsByte<EMaterialDomain>& OutDomain);
    void GetFirstWidgetOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly);
    void GetFilesInRootAndAllSubFolders(TArray<FString>& Files, FString RootFolderFullPath, FString Ext);
    void GetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);
    void GetAllWidgetsOfClass(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetClass, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly);
    void GetAllFoldersFromDirectory(FString FolderPath, int32& Count, TArray<FString>& Folders);
    void GetAllAxisKeyBindings(TArray<FDovracInputAxis>& Bindings);
    void GetAllAxisAndActionMappingsForKey(FKey Key, TArray<FDovracInput>& ActionBindings, TArray<FDovracInputAxis>& AxisBindings);
    void GetAllAssetsOfClass(UClass* AssetClass, TArray<UObject*>& OutAssets, bool bIncludeDerived);
    void GetAllActionKeyBindings(TArray<FDovracInput>& Bindings);
    void GetActorSubclasses(TSubclassOf<class AActor> BaseClass, TArray<TSubclassOf<class AActor>>& OutClasses, bool bIncludeAbstract);
    void DoesMaterialSupportSpline(class UMaterialInterface* Material);
    void DoesMaterialSupportSkeletal(class UMaterialInterface* Material);
    void DoesMaterialSupportInstancedMesh(class UMaterialInterface* Material);
    void DoesMaterialSupportCloth(class UMaterialInterface* Material);
    void DeleteFolder(FString FolderPath);
    void CreateRandomIndexArray(int32 ArraySize);
    void ConvertWorldLocationToScreenSpace(const class APlayerController* Controller, const FVector& WorldLocation, FVector2D& ScreenSpaceLocation, FVector2D& ScreenDirection, bool& bNotOnScreen, bool& bBehindView);
}; // Size: 0x28

#endif
