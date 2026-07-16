#ifndef UE4SS_SDK_Stove_Deployable_Oven_HPP
#define UE4SS_SDK_Stove_Deployable_Oven_HPP

class AStove_Deployable_Oven_C : public AStove_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0990 (size: 0x8)
    class URectLightComponent* OvenLight;                                             // 0x0998 (size: 0x8)
    class UNiagaraComponent* ChimneySmoke;                                            // 0x09A0 (size: 0x8)

    bool AnyStoveOn();
    void UpdateStoveMaterial(bool On);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components, bool& DontHighlightPowerCord);
    void UpdateCooking_FX(bool SkipItemFX);
    void ExecuteUbergraph_Stove_Deployable_Oven(int32 EntryPoint);
}; // Size: 0x9A8

#endif
