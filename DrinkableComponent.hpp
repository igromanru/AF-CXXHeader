#ifndef UE4SS_SDK_DrinkableComponent_HPP
#define UE4SS_SDK_DrinkableComponent_HPP

class UDrinkableComponent_C : public UActorComponent
{
    int32 SingleSwig;                                                                 // 0x00A8 (size: 0x4)
    double WaterSwigThirstFill;                                                       // 0x00B0 (size: 0x8)
    int32 LastReductionAmount;                                                        // 0x00B8 (size: 0x4)

    void Take Swig from Parent Liquid Container(int32 CurrentLiquidLevel, TEnumAsByte<E_LiquidType::Type> CurrentLiquidType, double& ThirstGain, bool& TaintedWater);
}; // Size: 0xBC

#endif
