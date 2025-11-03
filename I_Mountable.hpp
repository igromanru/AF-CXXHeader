#ifndef UE4SS_SDK_I_Mountable_HPP
#define UE4SS_SDK_I_Mountable_HPP

class II_Mountable_C : public IInterface
{

    void Owner_EndMount();
    void Owner_StartMount();
    void Server_EndMount(class AAbiotic_Character_ParentBP_C* Character);
    void Server_StartMount(class AAbiotic_Character_ParentBP_C* Character);
    void Server_TickRotation(class AAbiotic_Character_ParentBP_C* Character, double DeltaTime, FRotator ControlRotation);
    void Local_InteractInput();
    void Local_AltFireInput();
    void Local_FireInput();
}; // Size: 0x28

#endif
