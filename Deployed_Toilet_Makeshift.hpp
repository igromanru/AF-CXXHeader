#ifndef UE4SS_SDK_Deployed_Toilet_Makeshift_HPP
#define UE4SS_SDK_Deployed_Toilet_Makeshift_HPP

class ADeployed_Toilet_Makeshift_C : public AToilet_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0948 (size: 0x8)
    class UChildActorComponent* WasteBucket;                                          // 0x0950 (size: 0x8)
    double ContinenceLoss;                                                            // 0x0958 (size: 0x8)

    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    void ReceiveBeginPlay();
    void SetupPaintAndTexture();
    void NewSeatOccupyStatus(bool Occupied, int32 Index, class AAbiotic_Character_ParentBP_C* Character);
    void UpdateDurabilityText();
    void Process Damage(float Damage, class UObject* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class UObject* DamageCauser, FHitResult HitInfo);
    void ExecuteUbergraph_Deployed_Toilet_Makeshift(int32 EntryPoint);
}; // Size: 0x960

#endif
