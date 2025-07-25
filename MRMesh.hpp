#ifndef UE4SS_SDK_MRMesh_HPP
#define UE4SS_SDK_MRMesh_HPP

#include "MRMesh_enums.hpp"

struct FMRMeshConfiguration
{
}; // Size: 0x1

class UMRMeshBodyHolder : public UObject
{
    class UBodySetup* BodySetup;                                                      // 0x0030 (size: 0x8)
    FBodyInstance BodyInstance;                                                       // 0x0038 (size: 0x198)

}; // Size: 0x238

class UMRMeshComponent : public UPrimitiveComponent
{
    class UMaterialInterface* Material;                                               // 0x0528 (size: 0x8)
    class UMaterialInterface* WireframeMaterial;                                      // 0x0530 (size: 0x8)
    bool bCreateMeshProxySections;                                                    // 0x0538 (size: 0x1)
    bool bUpdateNavMeshOnMeshUpdate;                                                  // 0x0539 (size: 0x1)
    bool bNeverCreateCollisionMesh;                                                   // 0x053B (size: 0x1)
    TArray<class UMRMeshBodyHolder*> BodyHolders;                                     // 0x0580 (size: 0x10)

    void SetWireframeMaterial(class UMaterialInterface* InMaterial);
    void SetWireframeColor(const FLinearColor& InColor);
    void SetUseWireframe(bool bUseWireframe);
    void SetEnableMeshOcclusion(bool bEnable);
    void RequestNavMeshUpdate();
    bool IsConnected();
    FLinearColor GetWireframeColor();
    bool GetUseWireframe();
    bool GetEnableMeshOcclusion();
    void ForceNavMeshUpdate();
    void Clear();
}; // Size: 0x5A0

class UMeshReconstructorBase : public UObject
{

    void StopReconstruction();
    void StartReconstruction();
    void PauseReconstruction();
    bool IsReconstructionStarted();
    bool IsReconstructionPaused();
    void DisconnectMRMesh();
    void ConnectMRMesh(class UMRMeshComponent* Mesh);
}; // Size: 0x28

class UMockDataMeshTrackerComponent : public USceneComponent
{
    FMockDataMeshTrackerComponentOnMeshTrackerUpdated OnMeshTrackerUpdated;           // 0x0238 (size: 0x10)
    void OnMockDataMeshTrackerUpdated(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    bool ScanWorld;                                                                   // 0x0248 (size: 0x1)
    bool RequestNormals;                                                              // 0x0249 (size: 0x1)
    bool RequestVertexConfidence;                                                     // 0x024A (size: 0x1)
    EMeshTrackerVertexColorMode VertexColorMode;                                      // 0x024B (size: 0x1)
    TArray<FColor> BlockVertexColors;                                                 // 0x0250 (size: 0x10)
    FLinearColor VertexColorFromConfidenceZero;                                       // 0x0260 (size: 0x10)
    FLinearColor VertexColorFromConfidenceOne;                                        // 0x0270 (size: 0x10)
    float UpdateInterval;                                                             // 0x0280 (size: 0x4)
    class UMRMeshComponent* MRMesh;                                                   // 0x0288 (size: 0x8)

    void OnMockDataMeshTrackerUpdated__DelegateSignature(int32 Index, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<float>& Confidence);
    void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
    void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
}; // Size: 0x2B0

#endif
