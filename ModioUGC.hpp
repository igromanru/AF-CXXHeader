#ifndef UE4SS_SDK_ModioUGC_HPP
#define UE4SS_SDK_ModioUGC_HPP

#include "ModioUGC_enums.hpp"

struct FGenericModID
{
    int64 ModId;                                                                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FModUGCPathMap
{
    TMap<FString, FGenericModID> PathToModIDMap;                                      // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FMutatorHandle
{
}; // Size: 0x10

struct FMutatorPriorityBucket
{
    TArray<UUGCMutator*> Contents;                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPostPawnSpawned_Params
{
    class APawn* Pawn;                                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FPostPlayerInit_Params
{
    class AController* Controller;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FUGCPackage
{
    TWeakObjectPtr<class UUGC_Metadata> PackageMetaData;                              // 0x0000 (size: 0x8)
    FString DescriptorPath;                                                           // 0x0008 (size: 0x10)
    FString PackagePath;                                                              // 0x0018 (size: 0x10)
    FString ContentPath;                                                              // 0x0028 (size: 0x10)
    FString EngineVersion;                                                            // 0x0038 (size: 0x10)
    FString Author;                                                                   // 0x0048 (size: 0x10)
    FString Description;                                                              // 0x0058 (size: 0x10)
    FString FriendlyName;                                                             // 0x0068 (size: 0x10)
    TArray<FString> MountedPakFilePaths;                                              // 0x0078 (size: 0x10)
    EUGCPackageMountState MountState;                                                 // 0x0088 (size: 0x1)
    TArray<FPrimaryAssetTypeInfo> RegisteredPrimaryAssetTypes;                        // 0x00B0 (size: 0x10)

}; // Size: 0xE0

struct FUGCRejection
{
    EUGCRejectionReason Reason;                                                       // 0x0000 (size: 0x1)
    FText Argument;                                                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

class IModEnabledStateProvider : public IInterface
{

    void RequestModEnabledStateChange(FGenericModID ID, bool bNewEnabledState);
    void QueryIsModEnabled(FGenericModID ModId);
}; // Size: 0x28

class IUGCProvider : public IInterface
{

    void IsProviderEnabled();
    void InitializeProvider(const FInitializeProviderHandler& Handler);
    void GetInstalledUGCPaths();
    void DeinitializeProvider(const FDeinitializeProviderHandler& Handler);
}; // Size: 0x28

class UModioUGCProvider : public UObject
{
}; // Size: 0x38

class UModioUGCSettings : public UDeveloperSettings
{
    bool bAutoInitializeUGCProvider;                                                  // 0x0038 (size: 0x1)
    bool bEnableModEnableDisableFeature;                                              // 0x0039 (size: 0x1)
    bool bPerformUGCCheckVersion;                                                     // 0x003A (size: 0x1)
    bool bPerformUGCCheckVersionComponentMajor;                                       // 0x003B (size: 0x1)
    bool bPerformUGCCheckVersionComponentMinor;                                       // 0x003C (size: 0x1)
    bool bPerformUGCCheckVersionComponentPatch;                                       // 0x003D (size: 0x1)
    bool bPerformUGCCheckVersionComponentChangelist;                                  // 0x003E (size: 0x1)
    bool bPerformUGCCheckVersionVersionComponentBranch;                               // 0x003F (size: 0x1)

}; // Size: 0x40

class USideLoadUGCProvider : public UObject
{
}; // Size: 0x30

class UUGCLibrary : public UBlueprintFunctionLibrary
{

    void NotEqual_GenericModID(const FGenericModID& A, const FGenericModID& B);
    void GetModID(const FUGCPackage& UGCPackage, FGenericModID& ModId);
    void EqualEqual_GenericModID(const FGenericModID& A, const FGenericModID& B);
}; // Size: 0x28

class UUGCMutator : public UObject
{
    TMap<FGameplayTag, TSoftObjectPtr<class UObject>> AssetOverrides;                 // 0x0028 (size: 0x50)

    void PostPlayerInit(FPostPlayerInit_Params Params);
    void PostPawnSpawned(FPostPawnSpawned_Params Params);
    void Initialised();
}; // Size: 0x78

class UUGCMutatorSubsystem : public UGameInstanceSubsystem
{
    TMap<int32, FMutatorPriorityBucket> MutatorRegistry;                              // 0x0030 (size: 0x50)
    TArray<TSubclassOf<class UUGCMutator>> MutatorCache;                              // 0x0080 (size: 0x10)

    void RegisterMutator(TSubclassOf<class UUGCMutator> Type, int32 Priority, FMutatorHandle& OutHandle);
    void PostPlayerInit();
    void PostPawnSpawned();
    void Mutator_PostPlayerInit(FPostPlayerInit_Params Params);
    void Mutator_PostPawnSpawned(FPostPawnSpawned_Params Params);
    void IsRegistered(TSubclassOf<class UUGCMutator> Type);
    void GetMutatorClassList(TArray<TSubclassOf<class UUGCMutator>>& OutMutators, bool bUseCache);
    void GetAsset(FGameplayTag AssetTag, class UObject* DefaultValue);
    void DeregisterMutator(FMutatorHandle& Handle);
}; // Size: 0x98

class UUGCPackageWrapper : public UObject
{
    FUGCPackage Underlying;                                                           // 0x0028 (size: 0xE0)

}; // Size: 0x108

class UUGCSubsystem : public UEngineSubsystem
{
    TScriptInterface<class IUGCProvider> UGCProvider;                                 // 0x0038 (size: 0x10)
    TSet<FName> LoadedUGCPlugins;                                                     // 0x0048 (size: 0x50)
    TSet<FUGCPackage> UGCPackages;                                                    // 0x0098 (size: 0x50)
    FUGCSubsystemOnUGCPackagesChanged OnUGCPackagesChanged;                           // 0x0138 (size: 0x10)
    void OnUGCPackagesChangedMulticastDelegate();
    TScriptInterface<class IModEnabledStateProvider> ModEnabledStateProvider;         // 0x0148 (size: 0x10)
    FUGCSubsystemOnModEnabledStateChanged OnModEnabledStateChanged;                   // 0x0158 (size: 0x10)
    void OnModEnabledStateChangeMulticastDelegate(FGenericModID RawID, bool bNewEnabledState);
    FUGCSubsystemOnUGCProviderInitializedHandler OnUGCProviderInitializedHandler;     // 0x0168 (size: 0x10)
    void OnUGCProviderInitializedDelegate(bool bSuccess);
    FUGCSubsystemOnUGCProviderDeinitializedHandler OnUGCProviderDeinitializedHandler; // 0x01E0 (size: 0x10)
    void OnUGCProviderDeinitializedDelegate(bool bSuccess);

    void UnmountUGCPackageByModID(FGenericModID ModId, bool bRemoveUGCPackage);
    void UnmountUGCPackage(FUGCPackage& Package, bool bRemoveUGCPackage);
    void UnloadUGCByModID(FGenericModID ModId);
    void UnloadAllUGCPackages();
    void SetUGCProvider(TScriptInterface<class IUGCProvider> InUGCProvider);
    void SetUGCEnabledStateProvider(TScriptInterface<class IModEnabledStateProvider> NewProvider);
    void RemoveUGCChangedHandler(const FRemoveUGCChangedHandlerHandler& Handler);
    void RemoveModEnabledStateChangeHandler(const FRemoveModEnabledStateChangeHandlerHandler& Handler);
    void RefreshUGC();
    void OnUGCProviderInitialized(bool bSuccess);
    void OnUGCProviderDeinitialized(bool bSuccess);
    void LoadUGCByModID(FGenericModID ModId);
    void K2_EnumerateAllUGCPackages(const FK2_EnumerateAllUGCPackagesEnumerator& Enumerator);
    void IsUGCFeatureEnabled(EUGCSubsystemFeature Feature);
    void IsUGCCompatible(FString UPluginFilePath);
    void IsProviderEnabled();
    void InitializeUGCProvider(const FInitializeUGCProviderHandler& Handler);
    void GetUGCPackageByModID(FGenericModID ModId, FUGCPackage& UGCPackage);
    void GetPackageNamesFromUGCPackage(const FUGCPackage& UGCPackage);
    void DeinitializeUGCProvider(const FDeinitializeUGCProviderHandler& Handler);
    void AddUGCFromPath(FString Path);
    void AddUGCChangedHandler(const FAddUGCChangedHandlerHandler& Handler);
    void AddModEnabledStateChangeHandler(const FAddModEnabledStateChangeHandlerHandler& Handler);
}; // Size: 0x1F0

class UUGC_Metadata : public UPrimaryDataAsset
{
    TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan;                            // 0x0030 (size: 0x10)
    FString UnrealVersion;                                                            // 0x0040 (size: 0x10)
    bool bIoStoreEnabled;                                                             // 0x0050 (size: 0x1)

}; // Size: 0x58

#endif
