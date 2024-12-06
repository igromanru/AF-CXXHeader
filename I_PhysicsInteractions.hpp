#ifndef UE4SS_SDK_I_PhysicsInteractions_HPP
#define UE4SS_SDK_I_PhysicsInteractions_HPP

class II_PhysicsInteractions_C : public IInterface
{

    bool CanBeGrabbed(FGameplayTag TagToCheck);
    void DoHitReaction();
    void CanBeCarbuncled(bool& Success);
}; // Size: 0x28

#endif
