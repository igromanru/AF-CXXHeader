#ifndef UE4SS_SDK_CleanableDecal_Blood_BP_HPP
#define UE4SS_SDK_CleanableDecal_Blood_BP_HPP

class ACleanableDecal_Blood_BP_C : public ACleanableDecal_BP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBoxComponent* Collision;                                                   // 0x02B0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x02B8 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ExecuteUbergraph_CleanableDecal_Blood_BP(int32 EntryPoint);
}; // Size: 0x2C0

#endif
