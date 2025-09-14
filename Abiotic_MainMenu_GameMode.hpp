#ifndef UE4SS_SDK_Abiotic_MainMenu_GameMode_HPP
#define UE4SS_SDK_Abiotic_MainMenu_GameMode_HPP

class AAbiotic_MainMenu_GameMode_C : public AGameMode
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0380 (size: 0x8)

    void OnFailure_A89173F641C1D75C7F24A4BE68319341();
    void OnSuccess_A89173F641C1D75C7F24A4BE68319341();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_Abiotic_MainMenu_GameMode(int32 EntryPoint);
}; // Size: 0x388

#endif
