#ifndef UE4SS_SDK_AbioticActor_HPP
#define UE4SS_SDK_AbioticActor_HPP

class AAbioticActor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UOutlineComponent_C* OutlineComponent;                                      // 0x02A0 (size: 0x8)
    class USceneComponent* ButtonPrompt;                                              // 0x02A8 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B0 (size: 0x8)
    TArray<class AActor*> ParentSupports;                                             // 0x02B8 (size: 0x10)
    bool HasBeenSavedToWorldSave;                                                     // 0x02C8 (size: 0x1)
    bool UseOutline;                                                                  // 0x02C9 (size: 0x1)

    void GetOutlineComponent(bool& ComponentEnabled, class UOutlineComponent_C*& Components);
    void IsItemInPinnedRecipes(bool& IsPinnedIngredient);
    void GetNewButtonPromptLocation(class UActorComponent* Component, FVector& NewLocation);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AbioticActor(int32 EntryPoint);
}; // Size: 0x2CA

#endif
