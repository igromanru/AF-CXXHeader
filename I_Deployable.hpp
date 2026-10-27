#ifndef UE4SS_SDK_I_Deployable_HPP
#define UE4SS_SDK_I_Deployable_HPP

class II_Deployable_C : public IInterface
{

    void GetDeployableLifespan(double& LifeSpan);
    void GetDeployedStackCount(TArray<AActor*>& inArray, int32& Count, TArray<AActor*>& OutArray);
    void GetDeployHologramMesh(class UStaticMesh*& Mesh);
}; // Size: 0x28

#endif
