#ifndef UE4SS_SDK_3D_ItemDisplay_BP_HPP
#define UE4SS_SDK_3D_ItemDisplay_BP_HPP

class A3D_ItemDisplay_BP_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x02A0 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x02A8 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x02B0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02C0 (size: 0x8)
    class USceneCaptureComponent2D* Item_RenderTarget;                                // 0x02C8 (size: 0x8)
    class USceneComponent* Rotator;                                                   // 0x02D0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02D8 (size: 0x8)
    FName CosmeticRow;                                                                // 0x02E0 (size: 0x8)
    bool Debug;                                                                       // 0x02E8 (size: 0x1)
    bool Rotating;                                                                    // 0x02E9 (size: 0x1)

    void Calculate Offset();
    void OnLoaded_2B0AD98A42F8FD2990E6F9AFDEE93D3F(class UObject* Loaded);
    void ReceiveBeginPlay();
    void Set3DPreviewMesh(TSoftObjectPtr<UObject> StaticMesh, FName CosmeticRow, FDataTableRowHandle TextureVariantRow);
    void ReceiveTick(float DeltaSeconds);
    void ToggleRendering(bool On);
    void ExecuteUbergraph_3D_ItemDisplay_BP(int32 EntryPoint);
}; // Size: 0x2EA

#endif
