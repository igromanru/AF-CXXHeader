#ifndef UE4SS_SDK_I_Debug_HPP
#define UE4SS_SDK_I_Debug_HPP

class II_Debug_C : public IInterface
{

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
}; // Size: 0x28

#endif
