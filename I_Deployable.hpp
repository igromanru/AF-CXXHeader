#ifndef UE4SS_SDK_I_Deployable_HPP
#define UE4SS_SDK_I_Deployable_HPP

class II_Deployable_C : public IInterface
{

    bool GetDeployedStackCount(TArray<class AActor*>& inArray, int32& Count, TArray<class AActor*>& OutArray);
    void GetDeployHologramMesh(class UStaticMesh*& Mesh);
}; // Size: 0x28

#endif
