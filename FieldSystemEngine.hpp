#ifndef UE4SS_SDK_FieldSystemEngine_HPP
#define UE4SS_SDK_FieldSystemEngine_HPP

struct FFieldObjectCommands
{
    TArray<FName> TargetNames;                                                        // 0x0000 (size: 0x10)
    TArray<class UFieldNodeBase*> RootNodes;                                          // 0x0010 (size: 0x10)
    TArray<class UFieldSystemMetaData*> MetaDatas;                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

class AFieldSystemActor : public AActor
{
    class UFieldSystemComponent* FieldSystemComponent;                                // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UBoxFalloff : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)
    float MinRange;                                                                   // 0x00AC (size: 0x4)
    float MaxRange;                                                                   // 0x00B0 (size: 0x4)
    float Default;                                                                    // 0x00B4 (size: 0x4)
    FTransform Transform;                                                             // 0x00C0 (size: 0x60)
    TEnumAsByte<EFieldFalloffType> Falloff;                                           // 0x0120 (size: 0x1)

    class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, TEnumAsByte<EFieldFalloffType> Falloff);
}; // Size: 0x130

class UCullingField : public UFieldNodeBase
{
    class UFieldNodeBase* Culling;                                                    // 0x00A8 (size: 0x8)
    class UFieldNodeBase* Field;                                                      // 0x00B0 (size: 0x8)
    TEnumAsByte<EFieldCullingOperationType> Operation;                                // 0x00B8 (size: 0x1)

    class UCullingField* SetCullingField(const class UFieldNodeBase* Culling, const class UFieldNodeBase* Field, TEnumAsByte<EFieldCullingOperationType> Operation);
}; // Size: 0xC0

class UFieldNodeBase : public UActorComponent
{
}; // Size: 0xA8

class UFieldNodeFloat : public UFieldNodeBase
{
}; // Size: 0xA8

class UFieldNodeInt : public UFieldNodeBase
{
}; // Size: 0xA8

class UFieldNodeVector : public UFieldNodeBase
{
}; // Size: 0xA8

class UFieldSystem : public UObject
{
}; // Size: 0x38

class UFieldSystemComponent : public UPrimitiveComponent
{
    class UFieldSystem* FieldSystem;                                                  // 0x0520 (size: 0x8)
    bool bIsWorldField;                                                               // 0x0528 (size: 0x1)
    bool bIsChaosField;                                                               // 0x0529 (size: 0x1)
    TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers;                       // 0x0530 (size: 0x10)
    FFieldObjectCommands ConstructionCommands;                                        // 0x0540 (size: 0x30)
    FFieldObjectCommands BufferCommands;                                              // 0x0570 (size: 0x30)

    void ResetFieldSystem();
    void RemovePersistentFields();
    void ApplyUniformVectorFalloffForce(bool Enabled, FVector position, FVector Direction, float Radius, float Magnitude);
    void ApplyStrainField(bool Enabled, FVector position, float Radius, float Magnitude, int32 Iterations);
    void ApplyStayDynamicField(bool Enabled, FVector position, float Radius);
    void ApplyRadialVectorFalloffForce(bool Enabled, FVector position, float Radius, float Magnitude);
    void ApplyRadialForce(bool Enabled, FVector position, float Magnitude);
    void ApplyPhysicsField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyLinearForce(bool Enabled, FVector Direction, float Magnitude);
    void AddPersistentField(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void AddFieldCommand(bool Enabled, TEnumAsByte<EFieldPhysicsType> Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
}; // Size: 0x5F0

class UFieldSystemMetaData : public UActorComponent
{
}; // Size: 0xA8

class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
    TEnumAsByte<EFieldFilterType> FilterType;                                         // 0x00A8 (size: 0x1)
    TEnumAsByte<EFieldObjectType> ObjectType;                                         // 0x00A9 (size: 0x1)
    TEnumAsByte<EFieldPositionType> PositionType;                                     // 0x00AA (size: 0x1)

    class UFieldSystemMetaDataFilter* SetMetaDataFilterType(TEnumAsByte<EFieldFilterType> FilterType, TEnumAsByte<EFieldObjectType> ObjectType, TEnumAsByte<EFieldPositionType> PositionType);
}; // Size: 0xB0

class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
    int32 Iterations;                                                                 // 0x00A8 (size: 0x4)

    class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 Iterations);
}; // Size: 0xB0

class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
    TEnumAsByte<EFieldResolutionType> ResolutionType;                                 // 0x00A8 (size: 0x1)

    class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(TEnumAsByte<EFieldResolutionType> ResolutionType);
}; // Size: 0xB0

class UNoiseField : public UFieldNodeFloat
{
    float MinRange;                                                                   // 0x00A8 (size: 0x4)
    float MaxRange;                                                                   // 0x00AC (size: 0x4)
    FTransform Transform;                                                             // 0x00B0 (size: 0x60)

    class UNoiseField* SetNoiseField(float MinRange, float MaxRange, FTransform Transform);
}; // Size: 0x110

class UOperatorField : public UFieldNodeBase
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)
    class UFieldNodeBase* RightField;                                                 // 0x00B0 (size: 0x8)
    class UFieldNodeBase* LeftField;                                                  // 0x00B8 (size: 0x8)
    TEnumAsByte<EFieldOperationType> Operation;                                       // 0x00C0 (size: 0x1)

    class UOperatorField* SetOperatorField(float Magnitude, const class UFieldNodeBase* LeftField, const class UFieldNodeBase* RightField, TEnumAsByte<EFieldOperationType> Operation);
}; // Size: 0xC8

class UPlaneFalloff : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)
    float MinRange;                                                                   // 0x00AC (size: 0x4)
    float MaxRange;                                                                   // 0x00B0 (size: 0x4)
    float Default;                                                                    // 0x00B4 (size: 0x4)
    float Distance;                                                                   // 0x00B8 (size: 0x4)
    FVector position;                                                                 // 0x00C0 (size: 0x18)
    FVector Normal;                                                                   // 0x00D8 (size: 0x18)
    TEnumAsByte<EFieldFalloffType> Falloff;                                           // 0x00F0 (size: 0x1)

    class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector position, FVector Normal, TEnumAsByte<EFieldFalloffType> Falloff);
}; // Size: 0xF8

class URadialFalloff : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)
    float MinRange;                                                                   // 0x00AC (size: 0x4)
    float MaxRange;                                                                   // 0x00B0 (size: 0x4)
    float Default;                                                                    // 0x00B4 (size: 0x4)
    float Radius;                                                                     // 0x00B8 (size: 0x4)
    FVector position;                                                                 // 0x00C0 (size: 0x18)
    TEnumAsByte<EFieldFalloffType> Falloff;                                           // 0x00D8 (size: 0x1)

    class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector position, TEnumAsByte<EFieldFalloffType> Falloff);
}; // Size: 0xE0

class URadialIntMask : public UFieldNodeInt
{
    float Radius;                                                                     // 0x00A8 (size: 0x4)
    FVector position;                                                                 // 0x00B0 (size: 0x18)
    int32 InteriorValue;                                                              // 0x00C8 (size: 0x4)
    int32 ExteriorValue;                                                              // 0x00CC (size: 0x4)
    TEnumAsByte<ESetMaskConditionType> SetMaskCondition;                              // 0x00D0 (size: 0x1)

    class URadialIntMask* SetRadialIntMask(float Radius, FVector position, int32 InteriorValue, int32 ExteriorValue, TEnumAsByte<ESetMaskConditionType> SetMaskConditionIn);
}; // Size: 0xD8

class URadialVector : public UFieldNodeVector
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)
    FVector position;                                                                 // 0x00B0 (size: 0x18)

    class URadialVector* SetRadialVector(float Magnitude, FVector position);
}; // Size: 0xC8

class URandomVector : public UFieldNodeVector
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)

    class URandomVector* SetRandomVector(float Magnitude);
}; // Size: 0xB0

class UReturnResultsTerminal : public UFieldNodeBase
{

    class UReturnResultsTerminal* SetReturnResultsTerminal();
}; // Size: 0xA8

class UToFloatField : public UFieldNodeFloat
{
    class UFieldNodeInt* IntField;                                                    // 0x00A8 (size: 0x8)

    class UToFloatField* SetToFloatField(const class UFieldNodeInt* IntegerField);
}; // Size: 0xB0

class UToIntegerField : public UFieldNodeInt
{
    class UFieldNodeFloat* FloatField;                                                // 0x00A8 (size: 0x8)

    class UToIntegerField* SetToIntegerField(const class UFieldNodeFloat* FloatField);
}; // Size: 0xB0

class UUniformInteger : public UFieldNodeInt
{
    int32 Magnitude;                                                                  // 0x00A8 (size: 0x4)

    class UUniformInteger* SetUniformInteger(int32 Magnitude);
}; // Size: 0xB0

class UUniformScalar : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)

    class UUniformScalar* SetUniformScalar(float Magnitude);
}; // Size: 0xB0

class UUniformVector : public UFieldNodeVector
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)
    FVector Direction;                                                                // 0x00B0 (size: 0x18)

    class UUniformVector* SetUniformVector(float Magnitude, FVector Direction);
}; // Size: 0xC8

class UWaveScalar : public UFieldNodeFloat
{
    float Magnitude;                                                                  // 0x00A8 (size: 0x4)
    FVector position;                                                                 // 0x00B0 (size: 0x18)
    float Wavelength;                                                                 // 0x00C8 (size: 0x4)
    float Period;                                                                     // 0x00CC (size: 0x4)
    TEnumAsByte<EWaveFunctionType> Function;                                          // 0x00D0 (size: 0x1)
    TEnumAsByte<EFieldFalloffType> Falloff;                                           // 0x00D1 (size: 0x1)

    class UWaveScalar* SetWaveScalar(float Magnitude, FVector position, float Wavelength, float Period, float Time, TEnumAsByte<EWaveFunctionType> Function, TEnumAsByte<EFieldFalloffType> Falloff);
}; // Size: 0xD8

#endif
