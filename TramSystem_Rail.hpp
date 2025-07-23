#ifndef UE4SS_SDK_TramSystem_Rail_HPP
#define UE4SS_SDK_TramSystem_Rail_HPP

class ATramSystem_Rail_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* HierarchicalInstancedStaticMesh; // 0x02A0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02A8 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    class ATramSystem_Station_C* Station1;                                            // 0x02C0 (size: 0x8)
    class ATramSystem_Station_C* Station2;                                            // 0x02C8 (size: 0x8)
    class ATramSystem_Station_C* Trigger;                                             // 0x02D0 (size: 0x8)
    TMap<ATramSystem_StopPoint_C*, double> StopPoints;                                // 0x02D8 (size: 0x50)
    TMap<class ATramSystem_StopPoint_C*, class ATramSystem_Rail_C*> NextRails;        // 0x0328 (size: 0x50)
    bool AutoGenerateSplineMesh;                                                      // 0x0378 (size: 0x1)
    bool GenerateConstructionScript;                                                  // 0x0379 (size: 0x1)
    double SplineMeshSectionLength;                                                   // 0x0380 (size: 0x8)
    double SplineOffsetAtMaxAngle;                                                    // 0x0388 (size: 0x8)
    class UStaticMesh* SplineMesh;                                                    // 0x0390 (size: 0x8)
    bool AutoGeneratePillars;                                                         // 0x0398 (size: 0x1)
    double PillarMaxHeight;                                                           // 0x03A0 (size: 0x8)
    int32 PillarEveryNth;                                                             // 0x03A8 (size: 0x4)
    TArray<FVector> ManualPillarLocations;                                            // 0x03B0 (size: 0x10)
    class UStaticMesh* PillarStaticMesh;                                              // 0x03C0 (size: 0x8)
    FVector PillarOffset;                                                             // 0x03C8 (size: 0x18)
    TArray<class UPrimitiveComponent*> PillarBlockingVolumes;                         // 0x03E0 (size: 0x10)
    TArray<class UPrimitiveComponent*> SplineMeshBlockingVolumes;                     // 0x03F0 (size: 0x10)
    float MaxDrawDistance;                                                            // 0x0400 (size: 0x4)
    double PillarWidth;                                                               // 0x0408 (size: 0x8)

    void GetSplineInternal(class USplineComponent*& Spline);
    bool LocationIsClear(const FVector& Point, TArray<class UPrimitiveComponent*>& BlockingVolumes);
    int32 AddPillarTransform(const TArray<FTransform>& TargetArray, const FTransform InTransform, double Distance);
    FTransform OffsetSplineTransformForPitch(FTransform LocalTransform);
    FTransform GetCorrectedTransformAtDistanceAlongSpline(float Distance, TEnumAsByte<ESplineCoordinateSpace::Type> CoordinateSpace);
    void CalculateSplineMeshes(bool ConstructionScript);
    void GetDirectionFromStation(class ATramSystem_StopPoint_C* Station, bool& Positive);
    void GetNextStopPoint(class ATramSystem_StopPoint_C* CurrentPoint, bool PositiveDirection, class ATramSystem_Rail_C*& NextRail, class ATramSystem_StopPoint_C*& NextStopPoint, class ATramSystem_Station_C*& NextStation, double& CurrentStopDistance, double& NextStopDistance, bool& Positive);
    void InitStopPoints();
    void FixStationRotation();
    void ResetSpline();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_TramSystem_Rail(int32 EntryPoint);
}; // Size: 0x410

#endif
