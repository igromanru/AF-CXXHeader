#ifndef UE4SS_SDK_Item_Gear_KeypadHacker_HPP
#define UE4SS_SDK_Item_Gear_KeypadHacker_HPP

class AItem_Gear_KeypadHacker_C : public AItem_Gear_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B40 (size: 0x8)

    void CanUse(bool& CanUse, class AActor*& TargetActor, bool& OverrideLogic);
    void UseItem_LocalFX(class AAbiotic_Character_ParentBP_C* UsingCharacter, class AActor* TargetActor);
    void Request_ActivateKeypad(class AButton_Keypad_C* Keypad);
    void UseItem(class AAbiotic_Character_ParentBP_C* UsingCharacter, FTransform Transform, class AActor* TargetActor);
    void ExecuteUbergraph_Item_Gear_KeypadHacker(int32 EntryPoint);
}; // Size: 0xB48

#endif
