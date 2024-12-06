#ifndef UE4SS_SDK_I_ConsoleCommand_HPP
#define UE4SS_SDK_I_ConsoleCommand_HPP

class II_ConsoleCommand_C : public IInterface
{

    void ExecuteCommand(const TArray<FString>& Arguments, class UAbiotic_GameInstance_C* GameInstance, bool& Result);
}; // Size: 0x28

#endif
