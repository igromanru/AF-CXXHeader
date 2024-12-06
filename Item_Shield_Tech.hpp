#ifndef UE4SS_SDK_Item_Shield_Tech_HPP
#define UE4SS_SDK_Item_Shield_Tech_HPP

class AItem_Shield_Tech_C : public AItem_Shield_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0B60 (size: 0x8)
    class URechargeableComponent_C* RechargeableComponent;                            // 0x0B68 (size: 0x8)
    double StunChance;                                                                // 0x0B70 (size: 0x8)
    float ElectricalDamage;                                                           // 0x0B78 (size: 0x4)

    void Local_ApplyCounterAttack(class AActor* Target);
    void Request_StunTarget(class AActor* Actor);
    void Server_DamageBlockedByWeapon(FHitResult Hit Result, class AActor* Instigator);
    void ExecuteUbergraph_Item_Shield_Tech(int32 EntryPoint);
}; // Size: 0xB7C

#endif
