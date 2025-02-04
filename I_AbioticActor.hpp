#ifndef UE4SS_SDK_I_AbioticActor_HPP
#define UE4SS_SDK_I_AbioticActor_HPP

class II_AbioticActor_C : public IInterface
{

    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void IsItemInPinnedRecipes(bool& IsPinnedIngredient);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
}; // Size: 0x28

#endif
