#ifndef UE4SS_SDK_Stove_Deployable_Oven_HPP
#define UE4SS_SDK_Stove_Deployable_Oven_HPP

class AStove_Deployable_Oven_C : public AStove_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0970 (size: 0x8)
    class URectLightComponent* OvenLight;                                             // 0x0978 (size: 0x8)
    class UNiagaraComponent* ChimneySmoke;                                            // 0x0980 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void UpdateCooking_FX(bool SkipItemFX);
    void ExecuteUbergraph_Stove_Deployable_Oven(int32 EntryPoint);
}; // Size: 0x988

#endif
