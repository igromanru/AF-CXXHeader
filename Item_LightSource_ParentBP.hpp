#ifndef UE4SS_SDK_Item_LightSource_ParentBP_HPP
#define UE4SS_SDK_Item_LightSource_ParentBP_HPP

class AItem_LightSource_ParentBP_C : public AAbiotic_Item_Held_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B58 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B60 (size: 0x8)
    bool PowerOn;                                                                     // 0x0B68 (size: 0x1)
    double CurrentBatteryPercentage;                                                  // 0x0B70 (size: 0x8)

    void GetPrimaryItemActionArray();
    void OnRep_CurrentBatteryPercentage();
    void Should Override Sprint Action(bool& Override);
    void OnRep_PowerOn();
    void ToggleLightFX();
    void ReceiveDestroyed();
    void Update Current Item Data();
    void SetupItem_FirstPerson();
    void ExecuteUbergraph_Item_LightSource_ParentBP(int32 EntryPoint);
}; // Size: 0xB78

#endif
