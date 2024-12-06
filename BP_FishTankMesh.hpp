#ifndef UE4SS_SDK_BP_FishTankMesh_HPP
#define UE4SS_SDK_BP_FishTankMesh_HPP

class UBP_FishTankMesh_C : public USkeletalMeshComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0F70 (size: 0x8)
    FName CurrentRow;                                                                 // 0x0F78 (size: 0x8)
    FName CurrentVariant;                                                             // 0x0F80 (size: 0x8)

    void ClearCurrentMeshMaterials();
    void ClearFishRow();
    void SetFishRow(FName InFishRow, FName InVariant);
    void InitFishMesh();
    void ExecuteUbergraph_BP_FishTankMesh(int32 EntryPoint);
}; // Size: 0xF88

#endif
