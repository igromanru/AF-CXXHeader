#ifndef UE4SS_SDK_BenchUpgrade_ItemTransporter_HPP
#define UE4SS_SDK_BenchUpgrade_ItemTransporter_HPP

class ABenchUpgrade_ItemTransporter_C : public ABenchUpgrade_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UNiagaraComponent* Niagara_ItemTransporter_Elecricity4;                     // 0x02D0 (size: 0x8)
    class UNiagaraComponent* Niagara_ItemTransporter_Electricity3;                    // 0x02D8 (size: 0x8)
    class UNiagaraComponent* Niagara_ItemTransporter_Electricity2;                    // 0x02E0 (size: 0x8)
    class UNiagaraComponent* Niagara_ItemTransporter_Electricity1;                    // 0x02E8 (size: 0x8)
    class UNiagaraComponent* Niagara_ItemTransporter_Energy;                          // 0x02F0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0300 (size: 0x8)
    class UMaterialInterface* Material_Powered;                                       // 0x0308 (size: 0x8)
    class UMaterialInterface* Material_Unpowered;                                     // 0x0310 (size: 0x8)

    void DebugInfo_Tick(bool& Success, FString& DebugString, bool& UseBoundsAsOffset, FVector& Offset, FLinearColor& Color);
    void ToggleItemTransporterFX(float Duration);
    void UpdateContainerOverlaps();
    void RemoveContainer(const class UAbiotic_InventoryComponent_C*& Inventory);
    void SanitizeContainerArray();
    void AddContainer(const class UAbiotic_InventoryComponent_C*& Inventory);
    void BndEvt__BenchUpgrade_Dioxohealer_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__BenchUpgrade_Dioxohealer_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Local_ToggleBenchUpgrade(double Duration);
    void TogglePowerFX();
    void ExecuteUbergraph_BenchUpgrade_ItemTransporter(int32 EntryPoint);
}; // Size: 0x318

#endif
