#ifndef UE4SS_SDK_Deployed_Plugboard_HPP
#define UE4SS_SDK_Deployed_Plugboard_HPP

class ADeployed_Plugboard_C : public ADeployed_PowerStrip_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0870 (size: 0x8)
    class UChildActorComponent* PowerSocket2;                                         // 0x0878 (size: 0x8)
    class UChildActorComponent* PowerSocket1;                                         // 0x0880 (size: 0x8)
    class UChildActorComponent* PowerSocket3;                                         // 0x0888 (size: 0x8)
    class UChildActorComponent* PowerSocket6;                                         // 0x0890 (size: 0x8)
    class UChildActorComponent* PowerSocket5;                                         // 0x0898 (size: 0x8)
    class UChildActorComponent* PowerSocket4;                                         // 0x08A0 (size: 0x8)

    void RequiresPowerSocket(bool& MustBePluggedIn);
    void IsPowerSocket(bool& CanBePluggedInto);
    void TogglePowerFX();
    void ExecuteUbergraph_Deployed_Plugboard(int32 EntryPoint);
}; // Size: 0x8A8

#endif
