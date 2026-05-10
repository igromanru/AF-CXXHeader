#ifndef UE4SS_SDK_NarrativeNPC_Human_TravelingTrader_HPP
#define UE4SS_SDK_NarrativeNPC_Human_TravelingTrader_HPP

class ANarrativeNPC_Human_TravelingTrader_C : public ANarrativeNPC_Human_ParentBP_C
{
    class UTraderComponent_C* TraderComponent;                                        // 0x1910 (size: 0x8)
    bool CombatState;                                                                 // 0x1918 (size: 0x1)

    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void CanInteractWith_A(class UActorComponent* HitComponent, bool& Success, class UTexture2D*& OptionalCrosshairIcon, TArray<FText>& OptionalTextLines);
    void SetCombatState(bool NewCombatState);
}; // Size: 0x1919

#endif
