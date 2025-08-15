#ifndef UE4SS_SDK_PlatformFunctionLibrary_HPP
#define UE4SS_SDK_PlatformFunctionLibrary_HPP

class UPlatformFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void FilterLANSupport(bool InLAN, class UObject* __WorldContext, bool& OutLAN);
    void IsUGCAllowed(class UObject* __WorldContext, bool& Allowed);
}; // Size: 0x28

#endif
