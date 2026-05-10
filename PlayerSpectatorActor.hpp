#ifndef UE4SS_SDK_PlayerSpectatorActor_HPP
#define UE4SS_SDK_PlayerSpectatorActor_HPP

class APlayerSpectatorActor_C : public AAbioticCharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09D0 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x09D8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x09E0 (size: 0x8)
    class APlayerController* OwningController;                                        // 0x09E8 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* FocusPlayer;                                    // 0x09F0 (size: 0x8)
    class AAbiotic_PlayerCharacter_C* OriginalDeadPlayer;                             // 0x09F8 (size: 0x8)
    double Base Turn Rate;                                                            // 0x0A00 (size: 0x8)
    double Base Look Up Rate;                                                         // 0x0A08 (size: 0x8)
    double Ctrls Mouse XSensitivity;                                                  // 0x0A10 (size: 0x8)
    double Ctrls Mouse YSensitivity;                                                  // 0x0A18 (size: 0x8)
    bool Ctrls Invert YAxis;                                                          // 0x0A20 (size: 0x1)

    void UpdatePlayerValues();
    void OnRep_OriginalDeadPlayer();
    void FindNextTarget(bool Reverse, class AAbiotic_PlayerCharacter_C*& NewTarget);
    void InpActEvt_Fire_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_AltFire_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_Inventory_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveTick(float DeltaSeconds);
    void InpAxisEvt_Turn_K2Node_InputAxisEvent_157(float AxisValue);
    void InpAxisEvt_LookUp_K2Node_InputAxisEvent_172(float AxisValue);
    void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_34(float AxisValue);
    void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_62(float AxisValue);
    void Request_ChangeTarget(bool Reverse);
    void EndSpectator();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_PlayerSpectatorActor(int32 EntryPoint);
}; // Size: 0xA21

#endif
