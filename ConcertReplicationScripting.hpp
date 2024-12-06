#ifndef UE4SS_SDK_ConcertReplicationScripting_HPP
#define UE4SS_SDK_ConcertReplicationScripting_HPP

struct FConcertPropertyChainWrapper
{
    FConcertPropertyChain PropertyChain;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConcertPropertyChainWrapperContainer
{
    TArray<FConcertPropertyChainWrapper> PropertyChains;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

class UConcertReplicationBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    FString ToString(const FConcertPropertyChainWrapper& PropertyChain);
    bool PropertyChainPredicate__DelegateSignature(const FConcertPropertyChainWrapper& PathToProperty);
    bool MakePropertyChainByLiteralPath(const UClass*& Class, const TArray<FName>& PathToProperty, FConcertPropertyChainWrapper& Result);
    bool IsDirectChildOf(const FConcertPropertyChainWrapper& ToTest, const FConcertPropertyChainWrapper& Parent);
    bool IsChildOf(const FConcertPropertyChainWrapper& ToTest, const FConcertPropertyChainWrapper& Parent);
    TArray<FName> GetPropertyStringPath(const FConcertPropertyChainWrapper& Path);
    FName GetPropertyFromRoot(const FConcertPropertyChainWrapper& Path, int32 Index);
    FName GetPropertyFromLeaf(const FConcertPropertyChainWrapper& Path, int32 Index);
    TArray<FConcertPropertyChainWrapper> GetPropertiesIn(const UClass*& Class, FGetPropertiesInFilter Filter);
    TArray<FConcertPropertyChainWrapper> GetChildProperties(const FConcertPropertyChainWrapper& Parent, const UClass*& Class, bool bOnlyDirect);
    TArray<FConcertPropertyChainWrapper> GetAllProperties(const UClass*& Class);
}; // Size: 0x28

#endif
