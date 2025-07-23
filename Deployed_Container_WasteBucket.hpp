#ifndef UE4SS_SDK_Deployed_Container_WasteBucket_HPP
#define UE4SS_SDK_Deployed_Container_WasteBucket_HPP

class ADeployed_Container_WasteBucket_C : public ADeployed_Container_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0920 (size: 0x8)
    class UBoxComponent* InteractionBox;                                              // 0x0928 (size: 0x8)
    FDataTableRowHandle WasteItemDataRow;                                             // 0x0930 (size: 0x10)

    void SaveDeployable(bool RemoveFromSave);
    void CanLongInteractWith_B(class UActorComponent* HitComponent, bool& Success);
    void GetHighlightComponents(TArray<class UActorComponent*>& Components);
    FText GetItemNameText();
    void AddWasteIntoBucket(int32 StackAmount);
    void LongInteractWith_B(class AAbiotic_Character_ParentBP_C* InteractingCharacter);
    void Process Damage(float Damage, class UObject* DamageType, FVector HitLocation, FVector HitNormal, class UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, class AController* InstigatedBy, class UObject* DamageCauser, FHitResult HitInfo);
    void ExecuteUbergraph_Deployed_Container_WasteBucket(int32 EntryPoint);
}; // Size: 0x940

#endif
