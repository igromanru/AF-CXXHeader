#ifndef UE4SS_SDK_Furniture_Bench_Unbreakable_HPP
#define UE4SS_SDK_Furniture_Bench_Unbreakable_HPP

class AFurniture_Bench_Unbreakable_C : public ADeployed_Furniture_Bench_Wooden_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0948 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x0950 (size: 0x8)

    void ReceivePointDamage(float Damage, const class UDamageType* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const FHitResult& HitInfo);
    void ReceiveRadialDamage(float DamageReceived, const class UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
    void ReceiveAnyDamage(float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
    void ExecuteUbergraph_Furniture_Bench_Unbreakable(int32 EntryPoint);
}; // Size: 0x958

#endif
