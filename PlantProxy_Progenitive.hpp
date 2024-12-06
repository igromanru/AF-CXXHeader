#ifndef UE4SS_SDK_PlantProxy_Progenitive_HPP
#define UE4SS_SDK_PlantProxy_Progenitive_HPP

class APlantProxy_Progenitive_C : public APlantProxy_ParentBP_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F8 (size: 0x8)
    class UStaticMeshComponent* Fruit2;                                               // 0x0400 (size: 0x8)
    class UStaticMeshComponent* Fruit1;                                               // 0x0408 (size: 0x8)
    class UStaticMeshComponent* Fruit3;                                               // 0x0410 (size: 0x8)

    void OnLoaded_5C8DE41D4C9F29A2CC5E05B35C3CBBEE(class UObject* Loaded);
    void SetNewHarvestable();
    void ExecuteUbergraph_PlantProxy_Progenitive(int32 EntryPoint);
}; // Size: 0x418

#endif
