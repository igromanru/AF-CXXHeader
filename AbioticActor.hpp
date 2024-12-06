#ifndef UE4SS_SDK_AbioticActor_HPP
#define UE4SS_SDK_AbioticActor_HPP

class AAbioticActor_C : public AActor
{
    class USceneComponent* ButtonPrompt;                                              // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    TArray<class AActor*> ParentSupports;                                             // 0x02A8 (size: 0x10)
    bool HasBeenSavedToWorldSave;                                                     // 0x02B8 (size: 0x1)

    void GetPinnedHighlightColor(int32& Color, bool& IsPinnedIngredient);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void CheckForBlankTextures();
    void UserConstructionScript();
}; // Size: 0x2B9

#endif
