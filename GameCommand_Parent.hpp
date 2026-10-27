#ifndef UE4SS_SDK_GameCommand_Parent_HPP
#define UE4SS_SDK_GameCommand_Parent_HPP

class UGameCommand_Parent_C : public UGameCommandObject
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TArray<FString> ParamNameList;                                                    // 0x0040 (size: 0x10)

    void HasAnySelection(bool& Valid, FName& CurrentOption);
    void ConvertToggleValue(FString Param, bool CurrentValue, bool Inverse, bool& OutValue);
    void GetLocalCharacter(bool& Found, class AAbiotic_PlayerCharacter_C*& Character);
    void GetCharacterFromController(class AAbioticPlayerController* Controller, bool& Found, class AAbiotic_PlayerCharacter_C*& Character);
    void GetFirstParamOptions(bool& bDynamicOptions);
    void OnCommandExecuted(class AAbioticPlayerController* Player, FString FirstParam, FString SecondParam);
    void ExecuteUbergraph_GameCommand_Parent(int32 EntryPoint);
}; // Size: 0x50

#endif
