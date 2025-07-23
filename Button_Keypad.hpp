#ifndef UE4SS_SDK_Button_Keypad_HPP
#define UE4SS_SDK_Button_Keypad_HPP

class AButton_Keypad_C : public AButton_Generic_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    class UPointLightComponent* GlowLight;                                            // 0x0448 (size: 0x8)
    TEnumAsByte<E_KeypadSecurityLevels::Type> KeypadSecurityLevel;                    // 0x0450 (size: 0x1)
    TMap<TEnumAsByte<E_KeypadSecurityLevels::Type>, FName> KeypadHackerItemNames;     // 0x0458 (size: 0x50)
    class UMaterialInterface* Material_KeypadOpened;                                  // 0x04A8 (size: 0x8)

    FText GetItemNameText();
    void ActivationFX();
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void CheckKeypadHackerSecurityLevel(const FAbiotic_InventoryItemSlotStruct& ItemSlot, bool& SecurityClearancePermitted);
    void UserConstructionScript();
    void Broadcast_ErrorBeep();
    void ActivateKeypad(class AAbiotic_PlayerCharacter_C* PlayerCharacter);
    void InteractWith_A(class AAbiotic_Character_ParentBP_C* InteractingCharacter, class UActorComponent* ComponentUsed);
    void ExecuteUbergraph_Button_Keypad(int32 EntryPoint);
}; // Size: 0x4B0

#endif
