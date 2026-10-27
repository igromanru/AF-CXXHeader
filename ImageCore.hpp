#ifndef UE4SS_SDK_ImageCore_HPP
#define UE4SS_SDK_ImageCore_HPP

struct FSharedImageConstRefBlueprint
{
}; // Size: 0x8

class USharedImageConstRefBlueprintFns : public UObject
{

    void IsValid(const FSharedImageConstRefBlueprint& Image);
    void GetWidth(const FSharedImageConstRefBlueprint& Image);
    void GetSize(const FSharedImageConstRefBlueprint& Image);
    void GetPixelValue(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid);
    void GetPixelLinearColor(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid, FLinearColor FailureColor);
    void GetHeight(const FSharedImageConstRefBlueprint& Image);
}; // Size: 0x28

#endif
