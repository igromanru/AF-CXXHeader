#ifndef UE4SS_SDK_UIFunctionLibrary_HPP
#define UE4SS_SDK_UIFunctionLibrary_HPP

class UUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{

    void UISetupBuffsDisplay(TArray<FName>& BuffsToDisplay, bool BuffRemoves, class UObject* __WorldContext, bool& BuffsFound, TArray<FText>& FoundBuffsToDisplay, TArray<FLinearColor>& CustomTextDisplayColors);
    void UISetupSetBonusDisplay(class AAbiotic_PlayerCharacter_C*& Owner, FSetBonusRowHandle SetBonusToLookFor, class UObject* __WorldContext, bool& SetBonusesFound, TArray<FText>& FoundSetBonusesTexts, TArray<FLinearColor>& SetBonusesTextColor);
}; // Size: 0x28

#endif
